/*
 * XREFs of MiHandleInPageError @ 0x1404AF888
 * Callers:
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiCopyFileOnlyPage @ 0x1404AF42C (MiCopyFileOnlyPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 */

unsigned __int64 __fastcall MiHandleInPageError(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  MiRestoreTransitionPte(a1, 1, a3);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  result = *(unsigned int *)(a1 + 16);
  if ( (result & 0x400) == 0 )
  {
    *(_QWORD *)(a1 + 16) &= ~8uLL;
    result = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFBuLL;
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}
