/*
 * XREFs of PnpRequestDeviceRemoval @ 0x14096F3A8
 * Callers:
 *     IopQueueDeviceResetEvent @ 0x1407A5514 (IopQueueDeviceResetEvent.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1407AFFD0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x1407B4204 (PipDmaGuardBlockAddDevice.c)
 *     PnpReallocateResources @ 0x1407B6408 (PnpReallocateResources.c)
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 *     PipProcessRestartPhase2 @ 0x1407B7E54 (PipProcessRestartPhase2.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     PipEnumerateCompleted @ 0x1409AF3E4 (PipEnumerateCompleted.c)
 *     PiProcessQueryDeviceState @ 0x1409B0470 (PiProcessQueryDeviceState.c)
 *     PiUpdateGuestAssignedState @ 0x1409B0A78 (PiUpdateGuestAssignedState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1409B6D78 (PnpDeleteLockedDeviceNodes.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1409DC0E8 (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipProcessStartPhase2 @ 0x140B0C368 (PipProcessStartPhase2.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14096F560 (PnpRequestDeviceRemovalWorker.c)
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409B0E00 (PnpAcquireDependencyRelationsLock.c)
 *     PnpAllocateCriticalMemory @ 0x1409B4B74 (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  __int64 v7; // rdi
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdi
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 CriticalMemory; // rbx
  __int64 v18; // rbp
  unsigned int v19; // esi
  __int64 v20; // [rsp+20h] [rbp-38h]

  v7 = a1;
  if ( !a1 )
    return 3221225486LL;
  LOBYTE(a1) = 1;
  PnpAcquireDependencyRelationsLock(a1);
  LOBYTE(v8) = a2;
  PnpRequestDeviceRemovalWorker(v7, v7, v8, 2, 0);
  PnpReleaseDependencyRelationsLock(v10, v9, v11, v12, v20);
  v13 = *(_QWORD **)(v7 + 32);
  if ( PnpShutdownEvent.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
  {
    return 3221225865LL;
  }
  if ( v13 )
    v15 = *(_QWORD *)(v13[39] + 40LL);
  else
    v15 = 0LL;
  v16 = *(unsigned __int16 *)(v15 + 40);
  CriticalMemory = PnpAllocateCriticalMemory(3LL, 256LL, v16 + 202, 1265659472LL);
  if ( !CriticalMemory )
    return 3221225626LL;
  ObfReferenceObjectWithTag(v13, 0x56706E50u);
  if ( v13 )
    v18 = *(_QWORD *)(v13[39] + 40LL);
  else
    v18 = 0LL;
  v19 = *(unsigned __int16 *)(v18 + 40) >> 1;
  memset_0((void *)CriticalMemory, 0, v16 + 202);
  *(_QWORD *)(CriticalMemory + 24) = 0LL;
  *(_DWORD *)(CriticalMemory + 16) = a3;
  *(_DWORD *)(CriticalMemory + 64) = 1;
  *(_DWORD *)(CriticalMemory + 20) = a4;
  *(_QWORD *)(CriticalMemory + 48) = 0LL;
  *(_QWORD *)(CriticalMemory + 56) = 0LL;
  *(_DWORD *)(CriticalMemory + 156) = 2 * v19 + 82;
  *(_QWORD *)(CriticalMemory + 160) = v13;
  *(_DWORD *)(CriticalMemory + 136) = 1;
  *(_QWORD *)(CriticalMemory + 144) = 0LL;
  *(_DWORD *)(CriticalMemory + 152) |= 0xEu;
  *(GUID *)(CriticalMemory + 120) = GUID_DEVICE_QUERY_AND_REMOVE;
  if ( v19 )
    memmove((void *)(CriticalMemory + 168), *(const void **)(v18 + 48), 2LL * v19);
  *(_WORD *)(CriticalMemory + 2LL * v19 + 168) = 0;
  *(_QWORD *)(CriticalMemory + 32) = 0LL;
  *(_QWORD *)(CriticalMemory + 40) = 0LL;
  return PnpInsertEventInQueue(CriticalMemory);
}
