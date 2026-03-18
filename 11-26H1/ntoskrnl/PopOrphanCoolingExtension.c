/*
 * XREFs of PopOrphanCoolingExtension @ 0x1407CBDB4
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x1407CBA20 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14043661C (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140436950 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopGetDope @ 0x140438170 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140607C84 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceThermalRequest @ 0x140AC18EC (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B2F378 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B41620 (PopThermalUpdateActiveTimeTracking.c)
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

  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10828.SavedApcState.Process, a2, a3, a4);
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
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F10828.SavedApcStateFill[32]);
}
