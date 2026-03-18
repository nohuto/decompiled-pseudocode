/*
 * XREFs of PopPowerAggregatorDozeTimerWorker @ 0x1407D66B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404F15DC (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14050EC70 (PopIdleArmAoAcDozeS4Timer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140A3F1C4 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140ABB3B8 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x140B2BBD4 (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopSmartSuspendMakePredictions @ 0x140B6B6EC (PopSmartSuspendMakePredictions.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

LONG __fastcall PopPowerAggregatorDozeTimerWorker(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // esi
  unsigned __int32 v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-30h] BYREF

  v1 = 200LL * (int)a1;
  v2 = a1;
  v3 = *(_DWORD *)&PopPowerAggregatorLock.WaitBlockFill11[v1 + 176];
  v4 = v3;
  if ( (v3 & 3) == 1 )
  {
    v5 = v3 & 0xFFFFFFFC | 2;
    if ( (_InterlockedCompareExchange(
            (volatile signed __int32 *)&PopPowerAggregatorLock.WaitBlockFill11[v1 + 176],
            v5,
            v3) & 3) == 1 )
    {
      LOBYTE(v4) = v3 & 3;
      PopAcquirePolicyLock(a1, v4);
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v6, v7, v8);
      if ( *(_DWORD *)&PopPowerAggregatorLock.WaitBlockFill11[v1 + 176] != v5 )
      {
LABEL_16:
        PopReleaseRwLock(&PopPowerAggregatorLock);
        return PopReleasePolicyLock(v12, v11, v13, v14, v16);
      }
      LODWORD(v16) = v2;
      UserData.Ptr = (ULONGLONG)&v16;
      *(_QWORD *)&UserData.Size = 4LL;
      PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_TRIGGERED, 1u, &UserData);
      if ( v2 )
      {
        if ( v2 == 1 && LODWORD(PopPowerAggregatorLock.QuantumTarget) == 1 && BYTE3(PopPowerAggregatorLock.StackBase) )
        {
          v9 = 55LL;
LABEL_11:
          v10 = 3LL;
          if ( LOBYTE(PopPowerAggregatorLock.StackBase) )
            v10 = 2LL;
          PopPowerAggregatorHandleIntentUnsafe(v10, 0LL, 0LL, v9);
        }
      }
      else if ( LODWORD(PopPowerAggregatorLock.QuantumTarget) == 1 )
      {
        v9 = 54LL;
        goto LABEL_11;
      }
      _InterlockedExchange((volatile __int32 *)&PopPowerAggregatorLock.WaitBlockFill11[v1 + 176], v5 & 0xFFFFFFFC);
      KeSetEvent((PRKEVENT)((char *)&PopPowerAggregatorLock.LastXStateSaveDebugInfo + v1), 0, 0);
      if ( v2 == 1 )
      {
        PopSmartSuspendMakePredictions(2LL);
        PopPowerAggregatorEvaluateDozeTimers();
        PopIdleCancelAoAcDozeS4Timer(3u);
        PopIdleArmAoAcDozeS4Timer();
      }
      goto LABEL_16;
    }
  }
  return KeSetEvent((PRKEVENT)((char *)&PopPowerAggregatorLock.LastXStateSaveDebugInfo + v1), 0, 0);
}
