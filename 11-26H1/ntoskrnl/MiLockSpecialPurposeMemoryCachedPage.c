/*
 * XREFs of MiLockSpecialPurposeMemoryCachedPage @ 0x1402A96FC
 * Callers:
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiCopyProtoPtes @ 0x1402A9430 (MiCopyProtoPtes.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiTryDeleteTransitionPte @ 0x14034050C (MiTryDeleteTransitionPte.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiSoftFaultMappedView @ 0x1403C5480 (MiSoftFaultMappedView.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiTryLockLeafPage @ 0x140478BFC (MiTryLockLeafPage.c)
 * Callees:
 *     MiReuseStandbyPage @ 0x1402A973C (MiReuseStandbyPage.c)
 *     MiReturnFreeZeroPage @ 0x1402A9A90 (MiReturnFreeZeroPage.c)
 */

__int64 __fastcall MiLockSpecialPurposeMemoryCachedPage(__int64 a1, char a2)
{
  __int64 v3; // r8

  if ( (a2 & 2) != 0 )
    return a1;
  MiReuseStandbyPage(a1);
  MiReturnFreeZeroPage(a1, 0LL, v3);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
