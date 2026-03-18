/*
 * XREFs of PipSetDevNodeState @ 0x1404D2858
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404D23F4 (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x1407B3F0C (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x1407B4344 (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x1407B4DF4 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     PnpProcessAssignResources @ 0x14090B6F8 (PnpProcessAssignResources.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x14090D1F0 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateCompleted @ 0x14090D2B4 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x14090DEA8 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x140910A7C (PnpStartDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140914AF4 (PnpRequestDeviceRemovalWorker.c)
 *     PipDeviceRemovalCheckDeviceNodeState @ 0x140914C04 (PipDeviceRemovalCheckDeviceNodeState.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140916458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A8A8E0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopFindLegacyDeviceNode @ 0x140A8B778 (IopFindLegacyDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140AA5DC4 (PiProcessNewDeviceNodeAsync.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140AE3ECC (PnpQueryRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x140B0AC1C (PipProcessStartPhase2.c)
 *     PnpRestartDeviceNode @ 0x140B218FC (PnpRestartDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x140B4655C (PnpDriverLoadingFailed.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpRemoveDeviceActionRequests @ 0x1404822A4 (PnpRemoveDeviceActionRequests.c)
 *     PipAreDriversLoadedWorker @ 0x140491558 (PipAreDriversLoadedWorker.c)
 *     PipIsDevNodeDNStarted @ 0x14051BDE4 (PipIsDevNodeDNStarted.c)
 *     PpDevCfgTraceDeviceStart @ 0x14090D160 (PpDevCfgTraceDeviceStart.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14090D4E8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
