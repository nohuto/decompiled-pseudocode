/*
 * XREFs of MiLockSpecialPurposeMemoryCachedPage @ 0x1402AA2EC
 * Callers:
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiCopyProtoPtes @ 0x1402AA020 (MiCopyProtoPtes.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiLockTransitionLeafPageEx @ 0x14033E050 (MiLockTransitionLeafPageEx.c)
 *     MiTryDeleteTransitionPte @ 0x14033E48C (MiTryDeleteTransitionPte.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiSoftFaultMappedView @ 0x1403BB610 (MiSoftFaultMappedView.c)
 *     MiPurgeSubsection @ 0x140422170 (MiPurgeSubsection.c)
 *     MiTryLockLeafPage @ 0x14047F28C (MiTryLockLeafPage.c)
 * Callees:
 *     MiReuseStandbyPage @ 0x1402AA32C (MiReuseStandbyPage.c)
 *     MiReturnFreeZeroPage @ 0x1402AA690 (MiReturnFreeZeroPage.c)
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
