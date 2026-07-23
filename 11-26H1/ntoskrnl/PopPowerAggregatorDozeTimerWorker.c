/*
 * XREFs of PopPowerAggregatorDozeTimerWorker @ 0x1407D9840
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404EABBC (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405086E0 (PopIdleArmAoAcDozeS4Timer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409FABE4 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140ABC878 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x140B2DC54 (PopPowerAggregatorEvaluateDozeTimers.c)
 *     PopSmartSuspendMakePredictions @ 0x140B6E7E8 (PopSmartSuspendMakePredictions.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
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

  v1 = 25LL * (int)a1;
  v2 = a1;
  v3 = PopPowerAggregatorContext[v1 + 60];
  v4 = v3;
  if ( (v3 & 3) == 1 )
  {
    v5 = v3 & 0xFFFFFFFC | 2;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)&PopPowerAggregatorContext[v1 + 60], v5, v3) & 3) == 1 )
    {
      LOBYTE(v4) = v3 & 3;
      PopAcquirePolicyLock(a1, v4);
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v6, v7, v8);
      if ( LODWORD(PopPowerAggregatorContext[v1 + 60]) != v5 )
      {
LABEL_16:
        PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
        return PopReleasePolicyLock(v12, v11, v13, v14, v16);
      }
      LODWORD(v16) = v2;
      UserData.Ptr = (ULONGLONG)&v16;
      *(_QWORD *)&UserData.Size = 4LL;
      PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_TRIGGERED, 1u, &UserData);
      if ( v2 )
      {
        if ( v2 == 1 && (_DWORD)xmmword_140F0D8D0 == 1 && BYTE11(xmmword_140F0D8E0) )
        {
          v9 = 55LL;
LABEL_11:
          v10 = 3LL;
          if ( BYTE8(xmmword_140F0D8E0) )
            v10 = 2LL;
          PopPowerAggregatorHandleIntentUnsafe(v10, 0LL, 0LL, v9);
        }
      }
      else if ( (_DWORD)xmmword_140F0D8D0 == 1 )
      {
        v9 = 54LL;
        goto LABEL_11;
      }
      _InterlockedExchange((volatile __int32 *)&PopPowerAggregatorContext[v1 + 60], v5 & 0xFFFFFFFC);
      KeSetEvent((PRKEVENT)&PopPowerAggregatorContext[v1 + 61], 0, 0);
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
  return KeSetEvent((PRKEVENT)&PopPowerAggregatorContext[v1 + 61], 0, 0);
}
