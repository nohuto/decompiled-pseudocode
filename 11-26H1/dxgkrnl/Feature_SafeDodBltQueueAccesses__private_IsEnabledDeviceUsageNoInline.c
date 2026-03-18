/*
 * XREFs of Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC
 * Callers:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1400664A4 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006680C (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140066AE8 (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x14009B4C0 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ @ 0x14028230C (-AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ.c)
 *     ?AcquireVidPnSourceOwnership@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1402823F8 (-AcquireVidPnSourceOwnership@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1402824D4 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 *     ?CleanupWorker@BLTQUEUE@@AEAAXXZ @ 0x14028267C (-CleanupWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisableHwVSync@BLTQUEUE@@QEAAXXZ @ 0x140282FA4 (-DisableHwVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402830B8 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ @ 0x1402833D4 (-GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ @ 0x14028346C (-HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?NotifyGlobalVmBusStatusChange@BLTQUEUE@@QEAAXE@Z @ 0x140283608 (-NotifyGlobalVmBusStatusChange@BLTQUEUE@@QEAAXE@Z.c)
 *     ?NotifyHostMonitorPowerState@BLTQUEUE@@QEAAXE@Z @ 0x1402836EC (-NotifyHostMonitorPowerState@BLTQUEUE@@QEAAXE@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x140283948 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x140283A74 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1402842E4 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x1402A1460 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403C5B84 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1403ED958 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1403FA1C4 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x140446010 (-EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404460AC (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x140446154 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140446230 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?RestartQueueWorker@BLTQUEUE@@AEAAXXZ @ 0x140446740 (-RestartQueueWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledFallback @ 0x14009B828 (Feature_SafeDodBltQueueAccesses__private_IsEnabledFallback.c)
 */

__int64 Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SafeDodBltQueueAccesses__private_featureState & 0x10) != 0 )
    return Feature_SafeDodBltQueueAccesses__private_featureState & 1;
  else
    return Feature_SafeDodBltQueueAccesses__private_IsEnabledFallback(
             (unsigned int)Feature_SafeDodBltQueueAccesses__private_featureState,
             3LL);
}
