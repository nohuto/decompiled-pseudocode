/*
 * XREFs of MiApplyRawFixups @ 0x1409A087C
 * Callers:
 *     MiPerformFixups @ 0x14099FD30 (MiPerformFixups.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiDoSingleFixup @ 0x1409A0920 (MiDoSingleFixup.c)
 */

__int64 __fastcall MiApplyRawFixups(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r8
  ULONG_PTR v6; // r9
  _WORD *v8; // r11
  unsigned int v9; // edi
  unsigned int v10; // r10d
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // r11

  v4 = (_DWORD *)(a3 & 0xFFFFFFFFFFFFFFFEuLL);
  v6 = a2;
  v8 = v4 + 2;
  v9 = *v4 & 0xFFF;
  v10 = (unsigned int)(v4[1] - 8) >> 1;
  while ( 1 )
  {
    result = v10;
    if ( !v10 )
      break;
    if ( !(unsigned int)MiDoSingleFixup(v6 + (*v8 & 0xFFF) + v9, *v8 >> 12, a4) )
      KeBugCheckEx(0x1Au, 0x30uLL, BugCheckParameter2, v6, BugCheckParameter4);
    v8 = (_WORD *)(BugCheckParameter4 + 2);
  }
  return result;
}
