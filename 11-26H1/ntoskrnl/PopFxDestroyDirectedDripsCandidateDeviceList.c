/*
 * XREFs of PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1404FE0D4
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140AC7158 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 */

void __fastcall PopFxDestroyDirectedDripsCandidateDeviceList(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  signed __int64 v4; // rdx
  __int64 v5; // rtt

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    v2[1] = v2;
    *v2 = v2;
    PopFxDereferenceDevice((__int64)(v2 - 114), 3);
  }
  _m_prefetchw(&PopFxBlockingDeviceListLock);
  v4 = *(_QWORD *)&PopFxBlockingDeviceListLock.Header.Lock - 16LL;
  if ( (*(_QWORD *)&PopFxBlockingDeviceListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v4 = 0LL;
  if ( (PopFxBlockingDeviceListLock.Header.Type & 2) != 0
    || (v5 = *(_QWORD *)&PopFxBlockingDeviceListLock.Header.Lock,
        v5 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&PopFxBlockingDeviceListLock,
                v4,
                *(signed __int64 *)&PopFxBlockingDeviceListLock.Header.Lock)) )
  {
    ExfReleasePushLock(&PopFxBlockingDeviceListLock);
  }
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock);
  KeLeaveCriticalRegion();
}
