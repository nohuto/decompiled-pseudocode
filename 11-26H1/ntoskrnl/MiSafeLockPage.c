/*
 * XREFs of MiSafeLockPage @ 0x1402D5780
 * Callers:
 *     MiNoTradePageClaimCandidate @ 0x140292040 (MiNoTradePageClaimCandidate.c)
 *     MiInPageSingleKernelStack @ 0x14029F764 (MiInPageSingleKernelStack.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402D2A30 (MiLegitimatePageForDriversToMap.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402D2C40 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MmSetPfnListInfo @ 0x1402D4250 (MmSetPfnListInfo.c)
 *     MiFillNoReservationCluster @ 0x1402D4A24 (MiFillNoReservationCluster.c)
 *     MiMapArbitraryPage @ 0x1402D4D00 (MiMapArbitraryPage.c)
 *     MiReleaseArbitraryPage @ 0x1402D4FA0 (MiReleaseArbitraryPage.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x1402D5050 (MiUpdatePfnForPrefetchByPte.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiTradePageMarkedTransition @ 0x1402DF640 (MiTradePageMarkedTransition.c)
 *     MiLockPageAndSetDirty @ 0x14031C814 (MiLockPageAndSetDirty.c)
 *     MiCheckProtoPtePageState @ 0x14031DB30 (MiCheckProtoPtePageState.c)
 *     MiCopySinglePage @ 0x14033D2C8 (MiCopySinglePage.c)
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiSetPageZeroInProgress @ 0x1403CEB0C (MiSetPageZeroInProgress.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x1403D2B10 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     MiAddToReservationCluster @ 0x14046BBE0 (MiAddToReservationCluster.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 *     MiMakePageBad @ 0x1404B42D8 (MiMakePageBad.c)
 *     MiFreeModifiedReservations @ 0x1404D5AC4 (MiFreeModifiedReservations.c)
 *     MiMapSystemCachePage @ 0x1404F958C (MiMapSystemCachePage.c)
 *     MiCapturePfnVm @ 0x14050D140 (MiCapturePfnVm.c)
 *     MiMoveModifiedPagesToCompressList @ 0x140512FEC (MiMoveModifiedPagesToCompressList.c)
 *     MiLockPageToZero @ 0x1405215D8 (MiLockPageToZero.c)
 *     MiMapBackgroundPageToZero @ 0x1405217B4 (MiMapBackgroundPageToZero.c)
 *     MiReferencePagePartition @ 0x1406F56DC (MiReferencePagePartition.c)
 *     MiGetBadPageResources @ 0x1406F5D78 (MiGetBadPageResources.c)
 *     MiQuarantineBadPage @ 0x1406F6228 (MiQuarantineBadPage.c)
 *     MiRemoveBadPages @ 0x1406F6410 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406F6C4C (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x1406F6DF4 (MiUpdateBadPfnIdentity.c)
 *     MmGetPageBadStatus @ 0x1406F6FB0 (MmGetPageBadStatus.c)
 *     MiLocateSharedPageViews @ 0x1406FCFF0 (MiLocateSharedPageViews.c)
 *     MiIsExtentDangling @ 0x1406FF400 (MiIsExtentDangling.c)
 *     MiSafeLockAnyPfn @ 0x140708378 (MiSafeLockAnyPfn.c)
 *     MiScanPagefileSpace @ 0x140872550 (MiScanPagefileSpace.c)
 *     MmIsMdlPageLocked @ 0x140C496C4 (MmIsMdlPageLocked.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiSafeLockPage(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // edi

  if ( a1 > qword_140E2D920 && (a1 < qword_140E34930 || a1 >= qword_140E34930 + 2048) )
    return 17;
  v4 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (*(_QWORD *)(v4 + 40) & 0x40000000000000LL) != 0 || a1 >= qword_140E34930 && a1 < qword_140E34930 + 2048 )
  {
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v4 + 24) < 0 );
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
