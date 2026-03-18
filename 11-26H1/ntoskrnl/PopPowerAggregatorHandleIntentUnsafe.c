/*
 * XREFs of PopPowerAggregatorHandleIntentUnsafe @ 0x140A3F1C4
 * Callers:
 *     PopPowerAggregatorDozeTimerWorker @ 0x1407D66B0 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x1407D69C0 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x1407D6C24 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x1407D70B0 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopPowerAggregatorHandleIntent @ 0x140A3F104 (PopPowerAggregatorHandleIntent.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140B46B2C (PopPowerAggregatorNotifySuspendResume.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorRecordIntent @ 0x140A3F340 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorIsAtTargetState @ 0x140A3FBA8 (PopPowerAggregatorIsAtTargetState.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140ABB41C (PopPowerAggregatorScheduleWorker.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntentUnsafe(_QWORD *a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdi
  int v7; // ebx
  __int128 v9; // [rsp+48h] [rbp-19h] BYREF
  __int64 v10; // [rsp+58h] [rbp-9h]
  __int128 v11; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v12[24]; // [rsp+70h] [rbp+Fh]
  _OWORD v13[2]; // [rsp+88h] [rbp+27h] BYREF
  unsigned __int64 ThreadLock; // [rsp+A8h] [rbp+47h]

  v5 = (int)a1;
  v13[0] = *(_OWORD *)&PopPowerAggregatorLock.QuantumTarget;
  *(_QWORD *)v12 = ++PopPowerAggregatorLock.Header.WaitListHead.Blink;
  ThreadLock = PopPowerAggregatorLock.ThreadLock;
  LODWORD(v11) = 5;
  *((_QWORD *)&v11 + 1) = a4;
  DWORD1(v11) = (_DWORD)a1;
  v10 = 0LL;
  *(_OWORD *)&v12[8] = 0LL;
  v9 = 0LL;
  v13[1] = *(_OWORD *)&PopPowerAggregatorLock.StackLimit;
  if ( a2 )
    LODWORD(v9) = *a2;
  if ( (unsigned int)((_DWORD)a1 - 1) <= 9
    && a3 <= 2
    && (a1 = PopPowerAggregatorIntentHandlers, PopPowerAggregatorIntentHandlers[v5]) )
  {
    v7 = guard_dispatch_icall_no_overrides((__int64)&PopPowerAggregatorLock.Header.WaitListHead.Blink, (__int64)&v11);
    if ( v7 >= 0 )
    {
      *(_OWORD *)&PopPowerAggregatorLock.QuantumTarget = v11;
      PopPowerAggregatorLock.ThreadLock = *(_QWORD *)&v12[16];
      *(_OWORD *)&PopPowerAggregatorLock.StackLimit = *(_OWORD *)v12;
      if ( (unsigned __int8)PopPowerAggregatorIsAtTargetState(a1) )
      {
        v7 = 0;
      }
      else
      {
        v7 = 259;
        PopPowerAggregatorScheduleWorker(&PopPowerAggregatorLock.Header.WaitListHead.Blink);
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  PopPowerAggregatorRecordIntent((_DWORD)a1, v5, a3, a4, (__int64)v13, (__int64)&v11, v7, (__int64)&v9);
  return (unsigned int)v7;
}
