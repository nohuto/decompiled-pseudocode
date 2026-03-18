/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0
 * Callers:
 *     DCompositionIsShellProcess @ 0x140028F9C (DCompositionIsShellProcess.c)
 *     NtDCompositionGetStatistics @ 0x1400A8750 (NtDCompositionGetStatistics.c)
 *     NtDCompositionGetTargetStatistics @ 0x1400A9080 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1400A9220 (NtDCompositionWaitForCompositorClock.c)
 *     DCompositionBoostCompositionClockForInput @ 0x1400A98F0 (DCompositionBoostCompositionClockForInput.c)
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1400A9980 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1400B1254 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     NtDCompositionSyncWait @ 0x1400B1B60 (NtDCompositionSyncWait.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x14010F2C8 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x14010F354 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     NtDCompositionEnableMMCSS @ 0x14012B680 (NtDCompositionEnableMMCSS.c)
 *     DCompositionForceRender @ 0x140135368 (DCompositionForceRender.c)
 *     NtDCompositionGetFrameId @ 0x14014B660 (NtDCompositionGetFrameId.c)
 *     NtDCompositionBoostCompositorClock @ 0x14016B370 (NtDCompositionBoostCompositorClock.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x14017C3F0 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     DCompositionDwmInitialize @ 0x140194C60 (DCompositionDwmInitialize.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x140228790 (DCompositionEnableHwProtectionTeardown.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x140228A40 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x140228E30 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDesktopCaptureBits @ 0x140229920 (NtDesktopCaptureBits.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CConnection *__fastcall DirectComposition::CConnection::GetDefaultConnection(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  struct _ERESOURCE *v5; // rbx
  __int64 DCompSessionState; // rdi
  struct _ERESOURCE *v8; // rsi

  v1 = 0LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
  {
    if ( *CurrentProcessWin32Process )
    {
      v4 = CurrentProcessWin32Process[32];
      if ( v4 )
      {
        v5 = *(struct _ERESOURCE **)(v4 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v5, 1u);
        v1 = *(_QWORD *)(v4 + 24);
        if ( v1 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
          ExReleaseResourceLite(*(PERESOURCE *)(v4 + 32));
          KeLeaveCriticalRegion();
          return (struct DirectComposition::CConnection *)v1;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v4 + 32));
        KeLeaveCriticalRegion();
      }
    }
  }
  DCompSessionState = W32GetDCompSessionState(v3);
  v8 = *(struct _ERESOURCE **)(DCompSessionState + 32);
  if ( v8 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v8, 1u);
    v1 = *(_QWORD *)(DCompSessionState + 16);
    if ( v1 )
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
    ExReleaseResourceLite(*(PERESOURCE *)(DCompSessionState + 32));
    KeLeaveCriticalRegion();
  }
  return (struct DirectComposition::CConnection *)v1;
}
