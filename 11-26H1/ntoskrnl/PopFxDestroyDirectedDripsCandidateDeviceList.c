/*
 * XREFs of PopFxDestroyDirectedDripsCandidateDeviceList @ 0x140504790
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140AC54E8 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     PopFxDereferenceDevice @ 0x1403B61F4 (PopFxDereferenceDevice.c)
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
  _m_prefetchw(&stru_140F12420);
  v4 = *(_QWORD *)&stru_140F12420.Header.Lock - 16LL;
  if ( (*(_QWORD *)&stru_140F12420.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v4 = 0LL;
  if ( (stru_140F12420.Header.Type & 2) != 0
    || (v5 = *(_QWORD *)&stru_140F12420.Header.Lock,
        v5 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&stru_140F12420,
                v4,
                *(signed __int64 *)&stru_140F12420.Header.Lock)) )
  {
    ExfReleasePushLock(&stru_140F12420);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F12420);
  KeLeaveCriticalRegion();
}
