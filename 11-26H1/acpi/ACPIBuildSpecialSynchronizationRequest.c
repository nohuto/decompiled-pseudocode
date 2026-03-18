/*
 * XREFs of ACPIBuildSpecialSynchronizationRequest @ 0x1400283E0
 * Callers:
 *     ACPITableLoad @ 0x140049220 (ACPITableLoad.c)
 *     ACPIFlushQueuesUnload @ 0x140059ED8 (ACPIFlushQueuesUnload.c)
 *     ACPITableLoadNotifyPnp @ 0x140069670 (ACPITableLoadNotifyPnp.c)
 *     ACPITableUnload @ 0x140069970 (ACPITableUnload.c)
 *     ACPIBuildFlushQueue @ 0x1400C7EBC (ACPIBuildFlushQueue.c)
 *     ACPIInitStartACPI @ 0x1400DB3BC (ACPIInitStartACPI.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x14002809C (ACPIBuildScheduleDpc.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ACPIBuildSpecialSynchronizationRequest(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _QWORD *v9; // rbx
  KIRQL v10; // si
  KIRQL v11; // al
  __int64 v12; // rdx
  KIRQL v13; // di

  v9 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  if ( !v9 )
    return 3221225626LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( *(_DWORD *)(a1 + 732) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
    memset(v9, 0, 0x88uLL);
    *((_DWORD *)v9 + 4) = 1599293264;
    v9[16] = &AcpiBuildSpecialSynchronizationList;
    *((_DWORD *)v9 + 6) = 3;
    v9[8] = a2;
    v9[9] = a3;
    v9[5] = a1;
    *((_DWORD *)v9 + 20) = a4;
    *((_DWORD *)v9 + 5) = 4120;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v12 = AcpiBuildQueueList;
    v13 = v11;
    if ( *(__int64 **)(AcpiBuildQueueList + 8) != &AcpiBuildQueueList )
      __fastfail(3u);
    *v9 = AcpiBuildQueueList;
    v9[1] = &AcpiBuildQueueList;
    *(_QWORD *)(v12 + 8) = v9;
    AcpiBuildQueueList = (__int64)v9;
    if ( a5 )
      ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v13);
    return 259LL;
  }
  else
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v9);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
    return 3221226166LL;
  }
}
