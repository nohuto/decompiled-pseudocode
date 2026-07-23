/*
 * XREFs of PipSetDevNodeState @ 0x1404CC0D0
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404CBC6C (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x1407B6F6C (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x1407B73A4 (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x1407B7E54 (PipProcessRestartPhase2.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14096F560 (PnpRequestDeviceRemovalWorker.c)
 *     PipDeviceRemovalCheckDeviceNodeState @ 0x14096F670 (PipDeviceRemovalCheckDeviceNodeState.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140970EC4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PnpProcessAssignResources @ 0x1409AD81C (PnpProcessAssignResources.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1409AF320 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateCompleted @ 0x1409AF3E4 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x1409AFFD8 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1409B2B5C (PnpStartDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409B7700 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopFindLegacyDeviceNode @ 0x1409B8598 (IopFindLegacyDeviceNode.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1409D92F8 (PiProcessNewDeviceNodeAsync.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA1A08 (IopInitializeDeviceInstanceKey.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140AE19D4 (PnpQueryRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x140B0C368 (PipProcessStartPhase2.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpRemoveDeviceActionRequests @ 0x14047BC14 (PnpRemoveDeviceActionRequests.c)
 *     PipAreDriversLoadedWorker @ 0x14048B0A8 (PipAreDriversLoadedWorker.c)
 *     PipIsDevNodeDNStarted @ 0x140516374 (PipIsDevNodeDNStarted.c)
 *     PpDevCfgTraceDeviceStart @ 0x1409AF290 (PpDevCfgTraceDeviceStart.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  int v4; // r14d
  int v5; // edi
  char v6; // bp
  KIRQL v7; // r11
  int IsDevNodeDNStarted; // eax
  int v9; // r10d
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( *(_DWORD *)(a1 + 300) != a2 )
  {
    v4 = PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304));
    IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
    *(_DWORD *)(a1 + 300) = a2;
    v5 = IsDevNodeDNStarted;
    *(_DWORD *)(a1 + 304) = v9;
    v6 = 1;
    v10 = *(unsigned int *)(a1 + 388);
    *(_QWORD *)(a1 + 888) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(a1 + 896) = v11;
    *(_DWORD *)(a1 + 4 * v10 + 308) = v9;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  KeReleaseSpinLock(&PnpSpinLock, v7);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 48)
      && ((unsigned int)PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304)) != v4
       || (unsigned int)PipIsDevNodeDNStarted(a1) != v5) )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v13, *(_QWORD *)(a1 + 48), 11LL);
      if ( (unsigned int)PipIsDevNodeDNStarted(a1) != v5 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v14, *(_QWORD *)(a1 + 48), 26LL);
    }
    if ( (*(_DWORD *)(a1 + 704) & 1) != 0 )
    {
      LOBYTE(v12) = 1;
      PpDevCfgTraceDeviceStart(a1, v12);
    }
  }
  if ( a2 == 790 )
    PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
}
