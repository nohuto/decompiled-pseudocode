/*
 * XREFs of MiSafeLockPage @ 0x1402F3700
 * Callers:
 *     MiNoTradePageClaimCandidate @ 0x140292AE0 (MiNoTradePageClaimCandidate.c)
 *     MiInPageSingleKernelStack @ 0x1402A0214 (MiInPageSingleKernelStack.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402F09B0 (MiLegitimatePageForDriversToMap.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402F0BC0 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MmSetPfnListInfo @ 0x1402F21D0 (MmSetPfnListInfo.c)
 *     MiFillNoReservationCluster @ 0x1402F29A4 (MiFillNoReservationCluster.c)
 *     MiMapArbitraryPage @ 0x1402F2C80 (MiMapArbitraryPage.c)
 *     MiReleaseArbitraryPage @ 0x1402F2F20 (MiReleaseArbitraryPage.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x1402F2FD0 (MiUpdatePfnForPrefetchByPte.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiTradePageMarkedTransition @ 0x1402FD5C0 (MiTradePageMarkedTransition.c)
 *     MiLockPageAndSetDirty @ 0x14031A7E4 (MiLockPageAndSetDirty.c)
 *     MiCheckProtoPtePageState @ 0x14031BB00 (MiCheckProtoPtePageState.c)
 *     MiCopySinglePage @ 0x14033B248 (MiCopySinglePage.c)
 *     MiBuildReservationCluster @ 0x14033D2B4 (MiBuildReservationCluster.c)
 *     MiLockTransitionLeafPageEx @ 0x14033E050 (MiLockTransitionLeafPageEx.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiSetPageZeroInProgress @ 0x1403C4C00 (MiSetPageZeroInProgress.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x1403C8C60 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MmDeleteKernelStack @ 0x1404162AC (MmDeleteKernelStack.c)
 *     MiAddToReservationCluster @ 0x140472460 (MiAddToReservationCluster.c)
 *     MiGatherMappedPages @ 0x140496CD8 (MiGatherMappedPages.c)
 *     MiMakePageBad @ 0x1404BAA50 (MiMakePageBad.c)
 *     MiFreeModifiedReservations @ 0x1404DC3E4 (MiFreeModifiedReservations.c)
 *     MiMapSystemCachePage @ 0x1404FFD9C (MiMapSystemCachePage.c)
 *     MiCapturePfnVm @ 0x1405136D0 (MiCapturePfnVm.c)
 *     MiMoveModifiedPagesToCompressList @ 0x14051957C (MiMoveModifiedPagesToCompressList.c)
 *     MiLockPageToZero @ 0x14051EF34 (MiLockPageToZero.c)
 *     MiMapBackgroundPageToZero @ 0x14051F110 (MiMapBackgroundPageToZero.c)
 *     MiReferencePagePartition @ 0x1406F0A6C (MiReferencePagePartition.c)
 *     MiGetBadPageResources @ 0x1406F1108 (MiGetBadPageResources.c)
 *     MiQuarantineBadPage @ 0x1406F15B8 (MiQuarantineBadPage.c)
 *     MiRemoveBadPages @ 0x1406F17A0 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406F1FDC (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x1406F2184 (MiUpdateBadPfnIdentity.c)
 *     MmGetPageBadStatus @ 0x1406F2340 (MmGetPageBadStatus.c)
 *     MiLocateSharedPageViews @ 0x1406F8320 (MiLocateSharedPageViews.c)
 *     MiIsExtentDangling @ 0x1406FA730 (MiIsExtentDangling.c)
 *     MiSafeLockAnyPfn @ 0x1407036A8 (MiSafeLockAnyPfn.c)
 *     MiScanPagefileSpace @ 0x14086C170 (MiScanPagefileSpace.c)
 *     MmIsMdlPageLocked @ 0x140C436B4 (MmIsMdlPageLocked.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiSafeLockPage(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // edi

  if ( a1 > qword_140E2D7A0 && (a1 < qword_140E347B0 || a1 >= qword_140E347B0 + 2048) )
    return 17;
  v3 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (*(_QWORD *)(v3 + 40) & 0x40000000000000LL) != 0 || a1 >= qword_140E347B0 && a1 < qword_140E347B0 + 2048 )
  {
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    return CurrentIrql;
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 17;
  }
}
