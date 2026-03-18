/*
 * XREFs of CiSchedulerSetMultimediaMode @ 0x140002700
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x14000FA60 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x140002DE0 (CiSchedulerRefreshTaskIndexQosProperties.c)
 *     CiLogSetBufferingMode @ 0x1400040A0 (CiLogSetBufferingMode.c)
 */

__int64 __fastcall CiSchedulerSetMultimediaMode(__int64 a1, int a2)
{
  unsigned int v3; // eax
  int v4; // edi

  if ( a2 )
  {
    if ( a2 != 1 )
      return 3221225485LL;
    v3 = 1;
    v4 = 2;
  }
  else
  {
    v3 = 3;
    v4 = 0;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) & 1) != 0 )
  {
    if ( byte_14000A0F0 )
      CiLogSetBufferingMode(a1, v3);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    *(_DWORD *)(a1 + 184) = v4 | *(_DWORD *)(a1 + 184) & 0xFFFFFFFD | 1;
    CiSchedulerRefreshTaskIndexQosProperties(a1);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  }
  return 0LL;
}
