/*
 * XREFs of MiRestockOverCommit @ 0x1404F9494
 * Callers:
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiDeleteUltraThreadContext @ 0x14028F5E0 (MiDeleteUltraThreadContext.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402CCBF4 (MiReleaseWriteInProgressCharges.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockPageTableCharges @ 0x140318F40 (MiUnlockPageTableCharges.c)
 *     MiRemoveLockedPageCharge @ 0x14031D180 (MiRemoveLockedPageCharge.c)
 *     MiAddPageToInsertList @ 0x14031EF60 (MiAddPageToInsertList.c)
 *     MiReturnExcessPoolCommit @ 0x140365894 (MiReturnExcessPoolCommit.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14038FB60 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmAcquireReleaseCharges @ 0x140394610 (SmAcquireReleaseCharges.c)
 *     MmReleaseResourceCharge @ 0x14045A9A0 (MmReleaseResourceCharge.c)
 *     MiDeleteUltraMapContext @ 0x1404655E0 (MiDeleteUltraMapContext.c)
 *     MiIncreaseCommitLimits @ 0x140705868 (MiIncreaseCommitLimits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRestockOverCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 17288);
  if ( v2 )
  {
    v3 = a2;
    if ( a2 > v2 )
      v3 = *(_QWORD *)(a1 + 17288);
    *(_QWORD *)(a1 + 17288) = v2 - v3;
    a2 -= v3;
  }
  return a2;
}
