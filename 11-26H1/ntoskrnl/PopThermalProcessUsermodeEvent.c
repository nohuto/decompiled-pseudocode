/*
 * XREFs of PopThermalProcessUsermodeEvent @ 0x140B44A20
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopThermalWriteShutdownToRegistry @ 0x140500640 (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x140512170 (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x140B44B40 (PopDiagTraceUsermodeTripPointExceeded.c)
 *     PopDiagTraceTripPointExceeded @ 0x140B44BB8 (PopDiagTraceTripPointExceeded.c)
 *     PopSqmThermalUsermodeEvent @ 0x140B44C98 (PopSqmThermalUsermodeEvent.c)
 *     PopDiagTraceUsermodeThermalEvent @ 0x140B44D90 (PopDiagTraceUsermodeThermalEvent.c)
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
      PopAcquireRwLockExclusive(&stru_140F0F620.Spare35[1], v5, v6, v7);
      BYTE2(stru_140F0F620.SystemAffinityTokenListHead.Next) = 1;
      PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.Spare35[1]);
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
