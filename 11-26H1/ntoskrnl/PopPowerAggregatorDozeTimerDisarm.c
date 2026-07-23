/*
 * XREFs of PopPowerAggregatorDozeTimerDisarm @ 0x140B2DD3C
 * Callers:
 *     PopPowerAggregatorDozeTimerArm @ 0x1407D9768 (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x140B2DC54 (PopPowerAggregatorEvaluateDozeTimers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     PopPowerAggregatorDiagTraceDozeTimerDisarmed @ 0x140B2DDD8 (PopPowerAggregatorDiagTraceDozeTimerDisarmed.c)
 */

__int64 __fastcall PopPowerAggregatorDozeTimerDisarm(__int64 a1, unsigned int a2)
{
  __int64 v3; // r8
  __int32 v4; // eax
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  struct _KEVENT *v8; // rcx

  v3 = 200LL * (int)a2;
  v4 = _InterlockedExchange((volatile __int32 *)(v3 + a1 + 480), (*(_DWORD *)(v3 + a1 + 480) & 0xFFFFFFFC) + 4) & 3;
  if ( v4 == 1 )
  {
    v6 = v3 + a1;
    v7 = KeCancelTimer2(v3 + a1 + 344);
    v8 = (struct _KEVENT *)(v6 + 488);
    if ( !v7 )
    {
      KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
      return PopPowerAggregatorDiagTraceDozeTimerDisarmed(a2);
    }
LABEL_7:
    KeSetEvent(v8, 0, 0);
    return PopPowerAggregatorDiagTraceDozeTimerDisarmed(a2);
  }
  if ( v4 == 2 )
  {
    v8 = (struct _KEVENT *)(v3 + a1 + 488);
    goto LABEL_7;
  }
  return PopPowerAggregatorDiagTraceDozeTimerDisarmed(a2);
}
