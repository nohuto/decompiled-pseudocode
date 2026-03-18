/*
 * XREFs of ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750
 * Callers:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x140055258 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     NtDCompositionGetConnectionBatch @ 0x1400A4A90 (NtDCompositionGetConnectionBatch.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400A50D0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1400A625C (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1400A62C8 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     NtDCompositionSynchronize @ 0x1400A65B0 (NtDCompositionSynchronize.c)
 *     ?Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z @ 0x1400A67C4 (-Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1400A8D40 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1400A8E98 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x1400A97E0 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1400A9A0C (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1400B1254 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1400B1A60 (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1400B4790 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1400FE2AC (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1401022D8 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x14012B768 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJXZ @ 0x1401353AC (-ForceRender@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x140163454 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?NotifyAdaptersChanged@CSynchronizationManager@DirectComposition@@QEAA_NPEBUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1401636E8 (-NotifyAdaptersChanged@CSynchronizationManager@DirectComposition@@QEAA_NPEBUCSM_TOKEN_ADAPTER_IN.c)
 *     ?ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ @ 0x14016923C (-ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ @ 0x14018DF0C (-ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1401A495C (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1401B2890 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?CleanupRemoteTextures@CConnection@DirectComposition@@AEAAXXZ @ 0x1401BDEB4 (-CleanupRemoteTextures@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1401C6B38 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x140228790 (DCompositionEnableHwProtectionTeardown.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x140228A40 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x140228E30 (NtDCompositionCreateSynchronizationObject.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140229D3C (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140229ED8 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x140229FC0 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x14022A1A8 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCriticalSection::AcquireExclusive(PERESOURCE Resource)
{
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(Resource, 1u);
}
