/*
 * XREFs of MiCheckLargePageSystemImage @ 0x140D013B0
 * Callers:
 *     MiCheckLargePageOk @ 0x140D011E4 (MiCheckLargePageOk.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MxFindDescriptorByPfn @ 0x140CFCD38 (MxFindDescriptorByPfn.c)
 */

ULONG_PTR __fastcall MiCheckLargePageSystemImage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR result; // rax
  ULONG_PTR *v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 DescriptorByPfn; // rax
  ULONG_PTR v7; // r11

  result = 0xFFFFF6FB40000000uLL;
  v4 = (ULONG_PTR *)(((*(_QWORD *)(a2 + 48) >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL);
  v5 = (((*(_QWORD *)(a2 + 48) + (unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 64) - 1)) >> 18) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  while ( (unsigned __int64)v4 <= v5 )
  {
    if ( (*v4 & 0x80u) == 0LL )
      KeBugCheckEx(0x1Au, 0x3030300uLL, BugCheckParameter2, (ULONG_PTR)v4, *v4);
    DescriptorByPfn = MxFindDescriptorByPfn(BugCheckParameter2, (*v4 >> 12) & 0xFFFFFFFFFFLL);
    if ( *(_QWORD *)(DescriptorByPfn + 32) + *(_QWORD *)(DescriptorByPfn + 40) < v7 + 512 )
      KeBugCheckEx(0x1Au, 0x3030301uLL, BugCheckParameter2, v7, 0LL);
    result = *(int *)(DescriptorByPfn + 24);
    if ( (_DWORD)result != 9 )
      KeBugCheckEx(0x1Au, 0x3030309uLL, BugCheckParameter2, v7, result);
    ++v4;
  }
  return result;
}
