/*
 * XREFs of PopThermalProcessUsermodeEvent @ 0x140B46A5C
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1404F9E30 (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x14050BBE0 (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x140B46B7C (PopDiagTraceUsermodeTripPointExceeded.c)
 *     PopDiagTraceTripPointExceeded @ 0x140B46BF4 (PopDiagTraceTripPointExceeded.c)
 *     PopSqmThermalUsermodeEvent @ 0x140B46CD4 (PopSqmThermalUsermodeEvent.c)
 *     PopDiagTraceUsermodeThermalEvent @ 0x140B46DCC (PopDiagTraceUsermodeThermalEvent.c)
 */

__int64 __fastcall PopThermalProcessUsermodeEvent(__int64 a1)
{
  unsigned __int16 v2; // bx
  unsigned int v3; // edi
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  _WORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+34h] [rbp-14h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  v10 = 0;
  PopDiagTraceUsermodeThermalEvent();
  PopThermalEventTransitionDisableDeepSleep(*(_DWORD *)a1);
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      PopDiagTraceUsermodeTripPointExceeded(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(unsigned int *)(a1 + 8), 0LL);
      PopSqmThermalUsermodeEvent(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 0);
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext, v5, v6, v7);
      byte_140F0FCF2 = 1;
      PopReleaseRwLock((struct _KTHREAD *)&PopThermalStateTransitionContext);
    }
  }
  else
  {
    v2 = *(_WORD *)(a1 + 12);
    v3 = *(_DWORD *)(a1 + 8);
    PopDiagTraceTripPointExceeded(v2, a1 + 14, v3, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC);
    PopDiagTraceTripPointExceeded(v2, a1 + 14, v3, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM);
    PopSqmThermalUsermodeEvent(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 1);
    v4 = 2 * *(_WORD *)(a1 + 12);
    v11 = a1 + 14;
    v9[0] = v4;
    v9[1] = v4;
    PopThermalWriteShutdownToRegistry((__int64)v9, (void *)(a1 + 4));
  }
  return 0LL;
}
