/*
 * XREFs of MiWalkImageApplyRelocationToPage @ 0x14099F950
 * Callers:
 *     <none>
 * Callees:
 *     VslApplySecureImageFixups @ 0x1404B2430 (VslApplySecureImageFixups.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiRelocateImagePfn @ 0x14099FA2C (MiRelocateImagePfn.c)
 */

__int64 __fastcall MiWalkImageApplyRelocationToPage(__int64 a1)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  BugCheckParameter4 = **(_QWORD **)a1;
  if ( (MiFlags & 0x8000) != 0
    && (*(_DWORD *)(BugCheckParameter4 + 92) & 0xC0000) != 0
    && ((*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 60) & 7) == 3 )
  {
    result = VslApplySecureImageFixups(
               *(_QWORD *)((*(_QWORD *)(BugCheckParameter4 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 64),
               *(_DWORD *)(a1 + 16),
               v2);
    if ( (int)result < 0 )
      KeBugCheckEx(0x1Au, 0x51511uLL, (int)result, v2, BugCheckParameter4);
  }
  else
  {
    result = MiRelocateImagePfn(BugCheckParameter4, *(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 16), v2, 0LL);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 1 )
        return 0LL;
    }
    else
    {
      *(_DWORD *)(a1 + 48) |= 2u;
    }
  }
  return result;
}
