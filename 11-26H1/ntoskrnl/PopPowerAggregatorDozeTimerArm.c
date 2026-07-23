/*
 * XREFs of PopPowerAggregatorDozeTimerArm @ 0x1407D9768
 * Callers:
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x140B2DC54 (PopPowerAggregatorEvaluateDozeTimers.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140ABC878 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x140B2DD3C (PopPowerAggregatorDozeTimerDisarm.c)
 */

__int64 __fastcall PopPowerAggregatorDozeTimerArm(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdi
  unsigned int v8; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+28h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]

  v6 = 200LL * (int)a2;
  PopPowerAggregatorDozeTimerDisarm(a1, a2);
  _InterlockedExchange((volatile __int32 *)(v6 + a1 + 480), ((*(_DWORD *)(v6 + a1 + 480) & 0xFFFFFFFC) + 4) | 1);
  v9 = a3;
  UserData.Ptr = (ULONGLONG)&v8;
  v11 = &v9;
  v8 = a2;
  *(_QWORD *)&UserData.Size = 4LL;
  v12 = 8LL;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_DOZE_TIMER_ARMED, 2u, &UserData);
  return KeSetTimer2(v6 + a1 + 344, a3, 0LL, 0LL);
}
