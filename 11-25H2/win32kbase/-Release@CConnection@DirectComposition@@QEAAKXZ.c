/*
 * XREFs of ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4
 * Callers:
 *     DCompositionIsShellProcess @ 0x14004E640 (DCompositionIsShellProcess.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x14004E7D0 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     DCompositionBoostCompositionClockForInput @ 0x14004F0D8 (DCompositionBoostCompositionClockForInput.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x140054CB0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     NtDCompositionBoostCompositorClock @ 0x140055050 (NtDCompositionBoostCompositorClock.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14005523C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     NtDCompositionSyncWait @ 0x140056700 (NtDCompositionSyncWait.c)
 *     NtDCompositionEnableMMCSS @ 0x140058170 (NtDCompositionEnableMMCSS.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1400589B0 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400BF130 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1400C0490 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetConnectionBatch @ 0x1400C71A0 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1400C8930 (NtDCompositionWaitForCompositorClock.c)
 *     NtDCompositionGetStatistics @ 0x1400D0800 (NtDCompositionGetStatistics.c)
 *     DCompositionForceRender @ 0x1400E82F8 (DCompositionForceRender.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1400E8B64 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1400E8BF0 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     NtDCompositionGetTargetStatistics @ 0x1400EFD80 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionGetFrameId @ 0x140114DB0 (NtDCompositionGetFrameId.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x14014ADE0 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     DCompositionDwmInitialize @ 0x140157530 (DCompositionDwmInitialize.c)
 *     NtDCompositionBeginFrame @ 0x1401978D0 (NtDCompositionBeginFrame.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1401A2498 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x140226544 (DCompositionEnableHwProtectionTeardown.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x140226800 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x140226C00 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDesktopCaptureBits @ 0x140227620 (NtDesktopCaptureBits.c)
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140227B78 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140227E34 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1402263CC (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Release(DirectComposition::CConnection *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
    DirectComposition::CConnection::`scalar deleting destructor'(this, a2);
  return v2;
}
