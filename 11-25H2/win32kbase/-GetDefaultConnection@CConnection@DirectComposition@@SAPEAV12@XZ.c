/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604
 * Callers:
 *     DCompositionIsShellProcess @ 0x14004E640 (DCompositionIsShellProcess.c)
 *     DCompositionBoostCompositionClockForInput @ 0x14004F0D8 (DCompositionBoostCompositionClockForInput.c)
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x14004F748 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 *     NtDCompositionBoostCompositorClock @ 0x140055050 (NtDCompositionBoostCompositorClock.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14005523C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     NtDCompositionSyncWait @ 0x140056700 (NtDCompositionSyncWait.c)
 *     NtDCompositionEnableMMCSS @ 0x140058170 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400BF130 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1400C0490 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1400C8930 (NtDCompositionWaitForCompositorClock.c)
 *     NtDCompositionGetStatistics @ 0x1400D0800 (NtDCompositionGetStatistics.c)
 *     DCompositionForceRender @ 0x1400E82F8 (DCompositionForceRender.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1400E8B64 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1400E8BF0 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     NtDCompositionGetTargetStatistics @ 0x1400EFD80 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionGetFrameId @ 0x140114DB0 (NtDCompositionGetFrameId.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x14014ADE0 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     DCompositionDwmInitialize @ 0x140157530 (DCompositionDwmInitialize.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x140226544 (DCompositionEnableHwProtectionTeardown.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x140226800 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x140226C00 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDesktopCaptureBits @ 0x140227620 (NtDesktopCaptureBits.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CConnection *DirectComposition::CConnection::GetDefaultConnection(void)
{
  __int64 v0; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  __int64 DCompSessionState; // rdi
  struct _ERESOURCE *v5; // rsi

  v0 = 0LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
  if ( !CurrentProcessWin32Process )
    goto LABEL_7;
  if ( !*CurrentProcessWin32Process )
    goto LABEL_7;
  v2 = CurrentProcessWin32Process[32];
  if ( !v2 )
    goto LABEL_7;
  v3 = *(struct _ERESOURCE **)(v2 + 32);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v3, 1u);
  v0 = *(_QWORD *)(v2 + 24);
  if ( v0 )
    _InterlockedIncrement((volatile signed __int32 *)(v0 + 8));
  ExReleaseResourceLite(*(PERESOURCE *)(v2 + 32));
  KeLeaveCriticalRegion();
  if ( !v0 )
  {
LABEL_7:
    DCompSessionState = W32GetDCompSessionState();
    v5 = *(struct _ERESOURCE **)(DCompSessionState + 32);
    if ( v5 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v5, 1u);
      v0 = *(_QWORD *)(DCompSessionState + 16);
      if ( v0 )
        _InterlockedIncrement((volatile signed __int32 *)(v0 + 8));
      ExReleaseResourceLite(*(PERESOURCE *)(DCompSessionState + 32));
      KeLeaveCriticalRegion();
    }
  }
  return (struct DirectComposition::CConnection *)v0;
}
