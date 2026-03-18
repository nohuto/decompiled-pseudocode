/*
 * XREFs of ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050
 * Callers:
 *     DCompositionIsShellProcess @ 0x140028F9C (DCompositionIsShellProcess.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1400A6210 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     NtDCompositionGetStatistics @ 0x1400A8750 (NtDCompositionGetStatistics.c)
 *     NtDCompositionGetTargetStatistics @ 0x1400A9080 (NtDCompositionGetTargetStatistics.c)
 *     DCompositionBoostCompositionClockForInput @ 0x1400A98F0 (DCompositionBoostCompositionClockForInput.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1400B1254 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     NtDCompositionSyncWait @ 0x1400B1B60 (NtDCompositionSyncWait.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1400B4790 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x14010F2C8 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x14010F354 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x14012931C (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     NtDCompositionEnableMMCSS @ 0x14012B680 (NtDCompositionEnableMMCSS.c)
 *     DCompositionForceRender @ 0x140135368 (DCompositionForceRender.c)
 *     NtDCompositionGetFrameId @ 0x14014B660 (NtDCompositionGetFrameId.c)
 *     NtDCompositionBoostCompositorClock @ 0x14016B370 (NtDCompositionBoostCompositorClock.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x14017C3F0 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     DCompositionDwmInitialize @ 0x140194C60 (DCompositionDwmInitialize.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     NtDCompositionBeginFrame @ 0x1401B2540 (NtDCompositionBeginFrame.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1401C6B38 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x140228790 (DCompositionEnableHwProtectionTeardown.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x140228A40 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x140228E30 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDesktopCaptureBits @ 0x140229920 (NtDesktopCaptureBits.c)
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140229ED8 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x14022A1A8 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1400A3000 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Release(DirectComposition::CConnection *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    DirectComposition::CConnection::`scalar deleting destructor'(this);
  return v1;
}
