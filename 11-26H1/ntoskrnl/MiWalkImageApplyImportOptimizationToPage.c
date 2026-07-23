/*
 * XREFs of MiWalkImageApplyImportOptimizationToPage @ 0x140B1B5E0
 * Callers:
 *     <none>
 * Callees:
 *     MiUpdateImagePfnImportRelocations @ 0x14047A5B0 (MiUpdateImagePfnImportRelocations.c)
 *     VslApplySecureImageFixups @ 0x1404B2430 (VslApplySecureImageFixups.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiWalkImageApplyImportOptimizationToPage(__int64 a1)
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
      KeBugCheckEx(0x1Au, 0x51512uLL, (int)result, v2, BugCheckParameter4);
  }
  else
  {
    result = MiUpdateImagePfnImportRelocations(BugCheckParameter4, *(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 16), v2);
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
