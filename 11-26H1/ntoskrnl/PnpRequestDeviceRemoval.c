/*
 * XREFs of PnpRequestDeviceRemoval @ 0x14091493C
 * Callers:
 *     IopQueueDeviceResetEvent @ 0x1407A29D4 (IopQueueDeviceResetEvent.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1407ACF70 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x1407B11A4 (PipDmaGuardBlockAddDevice.c)
 *     PnpReallocateResources @ 0x1407B33A8 (PnpReallocateResources.c)
 *     PnpRebalance @ 0x1407B3F98 (PnpRebalance.c)
 *     PipProcessRestartPhase2 @ 0x1407B4DF4 (PipProcessRestartPhase2.c)
 *     PipEnumerateCompleted @ 0x14090D2B4 (PipEnumerateCompleted.c)
 *     PiProcessQueryDeviceState @ 0x14090E340 (PiProcessQueryDeviceState.c)
 *     PiUpdateGuestAssignedState @ 0x14090E948 (PiUpdateGuestAssignedState.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A89F58 (PnpDeleteLockedDeviceNodes.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140AA8BB8 (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipProcessStartPhase2 @ 0x140B0AC1C (PipProcessStartPhase2.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PnpInsertEventInQueue @ 0x14090965C (PnpInsertEventInQueue.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14090ECA0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14090ECD0 (PnpAcquireDependencyRelationsLock.c)
 *     PnpAllocateCriticalMemory @ 0x140912A94 (PnpAllocateCriticalMemory.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140914AF4 (PnpRequestDeviceRemovalWorker.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  int v8; // r8d
  _QWORD *v9; // rdi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 CriticalMemory; // rbx
  __int64 v14; // rbp
  unsigned int v15; // esi

  if ( !a1 )
    return 3221225486LL;
  PnpAcquireDependencyRelationsLock(1);
  LOBYTE(v8) = a2;
  PnpRequestDeviceRemovalWorker(a1, a1, v8, 2, 0);
  PnpReleaseDependencyRelationsLock();
  v9 = *(_QWORD **)(a1 + 32);
  if ( PnpShutdownEvent.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
  {
    return 3221225865LL;
  }
  if ( v9 )
    v11 = *(_QWORD *)(v9[39] + 40LL);
  else
    v11 = 0LL;
  v12 = *(unsigned __int16 *)(v11 + 40);
  CriticalMemory = PnpAllocateCriticalMemory(3, 0x100uLL);
  if ( !CriticalMemory )
    return 3221225626LL;
  ObfReferenceObjectWithTag(v9, 0x56706E50u);
  if ( v9 )
    v14 = *(_QWORD *)(v9[39] + 40LL);
  else
    v14 = 0LL;
  v15 = *(unsigned __int16 *)(v14 + 40) >> 1;
  memset_0((void *)CriticalMemory, 0, v12 + 202);
  *(_QWORD *)(CriticalMemory + 24) = 0LL;
  *(_DWORD *)(CriticalMemory + 16) = a3;
  *(_DWORD *)(CriticalMemory + 64) = 1;
  *(_DWORD *)(CriticalMemory + 20) = a4;
  *(_QWORD *)(CriticalMemory + 48) = 0LL;
  *(_QWORD *)(CriticalMemory + 56) = 0LL;
  *(_DWORD *)(CriticalMemory + 156) = 2 * v15 + 82;
  *(_QWORD *)(CriticalMemory + 160) = v9;
  *(_DWORD *)(CriticalMemory + 136) = 1;
  *(_QWORD *)(CriticalMemory + 144) = 0LL;
  *(_DWORD *)(CriticalMemory + 152) |= 0xEu;
  *(GUID *)(CriticalMemory + 120) = GUID_DEVICE_QUERY_AND_REMOVE;
  if ( v15 )
    memmove((void *)(CriticalMemory + 168), *(const void **)(v14 + 48), 2LL * v15);
  *(_WORD *)(CriticalMemory + 2LL * v15 + 168) = 0;
  *(_QWORD *)(CriticalMemory + 32) = 0LL;
  *(_QWORD *)(CriticalMemory + 40) = 0LL;
  return PnpInsertEventInQueue(CriticalMemory);
}
