/*
 * XREFs of PopOrphanCoolingExtension @ 0x1407CEE54
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x1407CEAC0 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404255AC (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1404258E0 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopGetDope @ 0x140427090 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14060A834 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceThermalRequest @ 0x140AC398C (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B31158 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B43630 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 __fastcall PopOrphanCoolingExtension(unsigned __int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rdx
  __int64 i; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  unsigned __int64 v13; // rcx
  unsigned __int64 **v14; // rax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock, a2, a3, a4);
  PopAcquireRwLockExclusive(a1 + 4, v5, v6, v7);
  if ( a1[6] )
  {
    for ( i = a1[2]; (unsigned __int64 *)i != a1 + 2; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 18) )
      {
        *(_BYTE *)(i + 18) = 0;
        if ( a1[17] )
        {
          LOBYTE(v8) = *(_BYTE *)(i + 16);
          PopThermalUpdatePassiveTimeTracking(i + 40, v8);
          PopTraceThermalRequestPassiveHistogram(i);
          PopThermalUpdateTelemetryClientCount(0, v10, v11, v12);
        }
        if ( a1[16] )
        {
          LOBYTE(v8) = *(_BYTE *)(i + 17) == 0;
          PopThermalUpdateActiveTimeTracking(i + 40, v8);
          PopTraceThermalRequestActiveActivity(i);
        }
        PopDiagTraceThermalRequest(i, POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
      }
    }
    *(_QWORD *)(PopGetDope(a1[6]) + 64) = 0LL;
    v13 = *a1;
    if ( *(unsigned __int64 **)(*a1 + 8) != a1 || (v14 = (unsigned __int64 **)a1[1], *v14 != a1) )
      __fastfail(3u);
    *v14 = (unsigned __int64 *)v13;
    *(_QWORD *)(v13 + 8) = v14;
    *a1 = 0LL;
    a1[6] = 0LL;
  }
  PopReleaseRwLock((struct _KTHREAD *)(a1 + 4));
  return PopReleaseRwLock((struct _KTHREAD *)&PopCoolingExtensionLock);
}
