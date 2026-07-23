/*
 * XREFs of PopFxDestroyDripsBlockingDeviceList @ 0x140B41E58
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404CD980 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDripsWatchdogTakeAction @ 0x14061674C (PopDripsWatchdogTakeAction.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140B41B9C (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDripsBlockingDeviceList(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  void *v4; // rcx
  signed __int64 v5; // rdx
  __int64 v6; // rtt

  while ( 1 )
  {
    v2 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)v2[1] != a1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    *(_QWORD *)(v3 + 8) = a1;
    v4 = (void *)v2[3];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x4D584650u);
      v2[3] = 0LL;
      *((_DWORD *)v2 + 8) = 0;
    }
    PopFxDereferenceDevice((__int64)(v2 - 114), 3);
  }
  _m_prefetchw(&PopFxBlockingDeviceListLock);
  v5 = *(_QWORD *)&PopFxBlockingDeviceListLock.Header.Lock - 16LL;
  if ( (*(_QWORD *)&PopFxBlockingDeviceListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (PopFxBlockingDeviceListLock.Header.Type & 2) != 0
    || (v6 = *(_QWORD *)&PopFxBlockingDeviceListLock.Header.Lock,
        v6 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&PopFxBlockingDeviceListLock,
                v5,
                *(signed __int64 *)&PopFxBlockingDeviceListLock.Header.Lock)) )
  {
    ExfReleasePushLock(&PopFxBlockingDeviceListLock);
  }
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock);
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
}
