/*
 * XREFs of PopFxDestroyDripsBlockingDeviceList @ 0x140B3FE28
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404D4110 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDripsWatchdogTakeAction @ 0x14061388C (PopDripsWatchdogTakeAction.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140B3FB6C (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     PopFxDereferenceDevice @ 0x1403B61F4 (PopFxDereferenceDevice.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  _m_prefetchw(&stru_140F12420);
  v5 = *(_QWORD *)&stru_140F12420.Header.Lock - 16LL;
  if ( (*(_QWORD *)&stru_140F12420.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (stru_140F12420.Header.Type & 2) != 0
    || (v6 = *(_QWORD *)&stru_140F12420.Header.Lock,
        v6 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&stru_140F12420,
                v5,
                *(signed __int64 *)&stru_140F12420.Header.Lock)) )
  {
    ExfReleasePushLock(&stru_140F12420);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F12420);
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
}
