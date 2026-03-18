/*
 * XREFs of ACPIBuildSynchronizationRequestInternal @ 0x140041C64
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x140028D70 (ACPIBuildDeviceDpc.c)
 *     ACPIGetConvertToDevicePresence @ 0x140037624 (ACPIGetConvertToDevicePresence.c)
 *     ACPIBuildSynchronizationRequest @ 0x140041ABC (ACPIBuildSynchronizationRequest.c)
 *     OSNotifyDeviceCheck @ 0x140041ADC (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x140041DFC (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceEject @ 0x140063D74 (OSNotifyDeviceEject.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x14002809C (ACPIBuildScheduleDpc.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ACPIBuildSynchronizationRequestInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v8; // rbx
  KIRQL v9; // si
  KIRQL v10; // al
  __int64 v11; // rdx
  KIRQL v12; // di

  v8 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  if ( !v8 )
    return 3221225626LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( *(_DWORD *)(a1 + 732) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
    memset(v8, 0, 0x88uLL);
    *((_DWORD *)v8 + 4) = 1599293264;
    v8[16] = &AcpiBuildSynchronizationList;
    *((_DWORD *)v8 + 6) = 3;
    v8[10] = &AcpiBuildDeviceList;
    v8[8] = a2;
    v8[9] = a3;
    v8[5] = a1;
    *((_DWORD *)v8 + 5) = 4106;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v11 = AcpiBuildQueueList;
    v12 = v10;
    if ( *(__int64 **)(AcpiBuildQueueList + 8) != &AcpiBuildQueueList )
      __fastfail(3u);
    *v8 = AcpiBuildQueueList;
    v8[1] = &AcpiBuildQueueList;
    *(_QWORD *)(v11 + 8) = v8;
    AcpiBuildQueueList = (__int64)v8;
    if ( a5 )
      ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v12);
    return 259LL;
  }
  else
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v8);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
    return 3221226166LL;
  }
}
