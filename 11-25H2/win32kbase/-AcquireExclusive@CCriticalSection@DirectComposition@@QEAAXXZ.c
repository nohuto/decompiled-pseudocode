/*
 * XREFs of ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400227BC (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z @ 0x14004EA58 (-Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x14004F120 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x14004F7D0 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?BeginDuplicateResource@CConnection@DirectComposition@@QEAAJVResourceHandle@@I@Z @ 0x14004FCE4 (-BeginDuplicateResource@CConnection@DirectComposition@@QEAAJVResourceHandle@@I@Z.c)
 *     ?CheckConnectionState@CChannel@DirectComposition@@IEAAXXZ @ 0x14004FD80 (-CheckConnectionState@CChannel@DirectComposition@@IEAAXXZ.c)
 *     DCompositionNotifyPendingPresent @ 0x14004FF70 (DCompositionNotifyPendingPresent.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@QEAAX_K@Z @ 0x14005009C (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@QEAAX_K@Z.c)
 *     DCompositionNotifyCompletedPresent @ 0x140050160 (DCompositionNotifyCompletedPresent.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140050234 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x140054C08 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x140054CB0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x140055158 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14005523C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x140055C80 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1400568A0 (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x140057E84 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x140058A20 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x140058AF0 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400BB4A8 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400BB7AC (-GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1400E47F0 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJXZ @ 0x1400E833C (-ForceRender@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?NotifyAdaptersChanged@CSynchronizationManager@DirectComposition@@QEAA_NPEBUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x140128D14 (-NotifyAdaptersChanged@CSynchronizationManager@DirectComposition@@QEAA_NPEBUCSM_TOKEN_ADAPTER_IN.c)
 *     ?ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ @ 0x14013489C (-ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ @ 0x14014F4F0 (-ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x14015FC94 (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x140197B80 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1401A2498 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x140226544 (DCompositionEnableHwProtectionTeardown.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x140226800 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x140226C00 (NtDCompositionCreateSynchronizationObject.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x1402279DC (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140227B78 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x140227C5C (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140227E34 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCriticalSection::AcquireExclusive(PERESOURCE Resource)
{
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(Resource, 1u);
}
