/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x1409F80B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PopCalculateIdleInformation @ 0x140423CE4 (PopCalculateIdleInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409AA1AC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1409F8238 (PopDripsWatchdogScheduleNextTimer.c)
 */

void PopDripsWatchdogStartWatchdog()
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  v6 = 0LL;
  v5 = 0LL;
  PiDmObjectManagerAcquireExclusiveLock(&PopDripsWatchdogContext);
  if ( (dword_140F0BDA8 & 2) != 0 )
  {
    _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
    v0 = PopDirectedDripsUmTestDeviceCount;
    do
    {
      v1 = v0;
      v0 = _InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, v0, v0);
    }
    while ( v1 != v0 );
    if ( !v0 )
    {
      v2 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)&v4);
      v3 = PopWdiCurrentScenarioInstanceId;
      if ( (dword_140F0BE64 & 1) != 0 )
      {
        dword_140F0BE74 = 0;
        xmmword_140F0BE98 = v4;
        dword_140F0BE78 = PopDripsWatchdogDebounceTickInterval;
        qword_140F0BE80 = v2;
        qword_140F0BE68 = 0LL;
        xmmword_140F0BEA8 = v5;
        qword_140F0BE88 = v2;
        qword_140F0BEB8 = v6;
        PopDripsWatchdogScheduleNextTimer(&unk_140F0BDB0);
      }
      if ( (dword_140F0BF74 & 1) != 0 )
      {
        qword_140F0BF78 = 0LL;
        memset_0(&unk_140F0BF80, 0, 0x50uLL);
        dword_140F0BF9C = DWORD1(xmmword_140F10660);
        xmmword_140F0BFA8 = v4;
        qword_140F0BFA0 = qword_140E270E0;
        xmmword_140F0BFB8 = v5;
        qword_140F0BFC8 = v6;
        PopDripsWatchdogScheduleNextTimer(&unk_140F0BEC0);
      }
      dword_140F0BDA8 |= 4u;
      qword_140F0BFD8 = v3;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegion();
}
