/*
 * XREFs of PopExecutePowerAction @ 0x1409F3918
 * Callers:
 *     PopThermalStateTransitionWorker @ 0x1407D4D40 (PopThermalStateTransitionWorker.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x1407D9D94 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x1407DA1E0 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x1407DE050 (PopIdleAoAcDozeToS4.c)
 *     PdcPoSetPowerAction @ 0x1407DF750 (PdcPoSetPowerAction.c)
 *     PoTtmInitiatePowerStateTransition @ 0x1407DF818 (PoTtmInitiatePowerStateTransition.c)
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     NtInitiatePowerAction @ 0x1409F2FC0 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1409F4510 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     NtSetSystemPowerState @ 0x140C032E0 (NtSetSystemPowerState.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     PoStoreDiagnosticContext @ 0x140426240 (PoStoreDiagnosticContext.c)
 *     PopSetNotificationWork @ 0x1404274C0 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x14042756C (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x1404ED954 (PopSetPowerActionState.c)
 *     PopDiagTraceShutdownAction @ 0x14060BE2C (PopDiagTraceShutdownAction.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopResetActionDefaults @ 0x14077F2AC (PopResetActionDefaults.c)
 *     PopVerifyPowerActionPolicy @ 0x1409C0410 (PopVerifyPowerActionPolicy.c)
 *     PopDiagTraceExecutePowerAction @ 0x1409F3E60 (PopDiagTraceExecutePowerAction.c)
 *     PopCompleteAction @ 0x1409F4288 (PopCompleteAction.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     PopVerifySystemPowerState @ 0x140B268C4 (PopVerifySystemPowerState.c)
 *     PopCompareActions @ 0x140B312A4 (PopCompareActions.c)
 *     PopPromoteActionFlag @ 0x140B4F4BC (PopPromoteActionFlag.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopExecutePowerAction(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4, unsigned int a5)
{
  unsigned int v5; // edi
  int v6; // r14d
  int v7; // eax
  _DWORD *v8; // r15
  unsigned int v10; // esi
  unsigned int v12; // r12d
  int v13; // eax
  int v14; // eax
  bool v15; // cf
  int v16; // r15d
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  int v20; // r9d
  int v21; // r9d
  int v22; // r9d
  int v23; // r9d
  int v24; // eax
  unsigned int v25; // r9d
  char v26; // r15
  char v27; // r15
  __int64 v28; // rcx
  void *Pool2; // rax
  int v30; // ecx
  int v31; // eax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v33; // rax
  char v35; // [rsp+60h] [rbp-51h] BYREF
  char v36; // [rsp+61h] [rbp-50h]
  char v37; // [rsp+62h] [rbp-4Fh]
  int v38; // [rsp+68h] [rbp-49h] BYREF
  __int64 v39; // [rsp+70h] [rbp-41h] BYREF
  int v40; // [rsp+78h] [rbp-39h]
  unsigned __int64 v41; // [rsp+80h] [rbp-31h] BYREF
  _DWORD *v42; // [rsp+88h] [rbp-29h]
  _DWORD *v43; // [rsp+90h] [rbp-21h] BYREF
  int v44; // [rsp+98h] [rbp-19h]
  int v45; // [rsp+9Ch] [rbp-15h]
  _QWORD v46[2]; // [rsp+A0h] [rbp-11h] BYREF

  v5 = 0;
  v6 = a4;
  v7 = a3[2];
  v8 = a3;
  v39 = *(_QWORD *)a3;
  v10 = v39;
  v42 = a3;
  v38 = a4;
  v41 = 0LL;
  v37 = 1;
  v40 = v7;
  if ( (xmmword_140FC0C10 & 0x8000) != 0 )
  {
    v45 = a4;
    v43 = a1;
    v46[0] = &v43;
    v44 = v39;
    v46[1] = 16LL;
    EtwTraceKernelEvent((int)v46, 1, 0x80008000, 4642, 5249026);
  }
  if ( (a1[1] & 0x80u) == 0 )
  {
    PopCompleteAction(a1, 0LL);
    v12 = HIDWORD(v39);
    return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *v8, v8[1], v8[2], v6, a5, v10, v12, v40, v37);
  }
  PopVerifySystemPowerState(&v38, a5);
  v37 = PopVerifyPowerActionPolicy((int *)&v39);
  if ( v37 )
  {
    PopCompleteAction(a1, 3221225659LL);
    v12 = HIDWORD(v39);
    v10 = v39;
    v6 = v38;
    return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *v8, v8[1], v8[2], v6, a5, v10, v12, v40, v37);
  }
  v10 = v39;
  v12 = HIDWORD(v39);
  if ( (unsigned int)(v39 - 2) <= 1 )
    v12 = HIDWORD(v39) | 0x80000000;
  v13 = a1[1];
  v36 = 0;
  if ( (v13 & 2) != 0 )
    goto LABEL_65;
  a1[1] = v13 | 2;
  if ( v10 == 6 && BYTE1(PsAltSystemCallRegistrationLock.Timer.DueTime.LowPart) )
  {
    v14 = *a1;
    if ( *a1 == 2 )
    {
      v10 = 0;
      v15 = (v12 & 0x10) != 0;
LABEL_18:
      v5 = v15 ? 16 : 32;
      goto LABEL_19;
    }
    if ( !v14 )
    {
      v10 = 0;
      v5 = LOBYTE(PpmIdlePolicyLock.KeReferenceCount) != 0 ? 32 : 16;
      PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
      goto LABEL_19;
    }
    if ( v14 == 15 )
    {
      v15 = (v12 & 0x2000000) != 0;
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( v10 - 4 <= 2 )
    PopDiagTraceShutdownAction(v10, v5, *a1);
  if ( !byte_140F10421 )
    PopResetActionDefaults();
  if ( v10 )
  {
    v35 = 0;
    v6 = v38;
    v16 = v12 | 0x10000000;
    if ( v10 != 7 )
      v16 = v12;
    if ( v10 == 3 )
      v6 = 5;
    if ( v10 == 4 )
      v6 = 6;
    if ( (int)PopCompareActions(v10, (unsigned int)qword_140F10424) >= 0 )
    {
      PopPromoteActionFlag((unsigned int)&v35, 1, v16, 0, 1);
      PopPromoteActionFlag((unsigned int)&v35, v18 + 1, v16, v18, 2);
      PopPromoteActionFlag((unsigned int)&v35, v19 + 4, v16, v19, 0x10000000);
      if ( v10 == 2 && v6 < *(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 68) )
        v6 = *(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 68);
      if ( v6 > SHIDWORD(qword_140F10424) )
      {
        v35 |= 4u;
        HIDWORD(qword_140F10424) = v6;
      }
    }
    LOBYTE(v17) = 1;
    PopPromoteActionFlag((unsigned int)&v35, 1, v16, v17, 4);
    PopPromoteActionFlag((unsigned int)&v35, 5, v16, v20, 0x80000000);
    PopPromoteActionFlag((unsigned int)&v35, 0, v16, v21, 0x40000000);
    PopPromoteActionFlag((unsigned int)&v35, 0, v16, v22, 8);
    PopPromoteActionFlag((unsigned int)&v35, 0, v16, v23, 32);
    if ( (int)PopCompareActions(v10, (unsigned int)qword_140F10424) <= 0 )
    {
      v27 = v35;
    }
    else
    {
      v24 = PopCompareActions(v10, 3LL);
      v26 = v35;
      if ( v24 >= 0 )
        v26 = v35 | 2;
      if ( !(unsigned int)PopCompareActions(v25, 8LL) )
        v26 |= 2u;
      LODWORD(qword_140F10424) = v10;
      v27 = v26 | 5;
      dword_140F10434 = *a1;
      dword_140F10438 = 0;
      if ( !*a1 )
        dword_140F10438 = a1[6];
      if ( (a1[1] & 0x100) == 0 )
      {
        if ( qword_140F10440 )
        {
          ExFreePoolWithTag(qword_140F10440, 0x67696450u);
          qword_140F10440 = 0LL;
        }
        v28 = *((_QWORD *)a1 + 2);
        if ( v28 )
        {
          PoStoreDiagnosticContext(v28, 0LL, &v41);
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          qword_140F10440 = Pool2;
          if ( Pool2 )
          {
            if ( (int)PoStoreDiagnosticContext(*((_QWORD *)a1 + 2), (unsigned __int64 *)Pool2, &v41) < 0 )
            {
              ExFreePoolWithTag(qword_140F10440, 0x67696450u);
              qword_140F10440 = 0LL;
            }
          }
        }
      }
    }
    if ( (_DWORD)qword_140F10424 == 3 )
      LODWORD(qword_140F10424) = 2;
    if ( v27 )
    {
      if ( (unsigned __int8)TtmIsEnabled() )
        PopTtmIsSxTransitionInProgress = 1;
      v36 = 1;
      if ( (unsigned __int8)byte_140F10421 < 2u )
      {
        PopSetPowerActionState(1);
        v30 = 2;
        dword_140F10430 = 0;
      }
      else
      {
        LOBYTE(PopAction) = v27 | PopAction;
        v30 = 1;
      }
      PopGetPolicyWorker(v30);
    }
    v8 = v42;
    goto LABEL_60;
  }
LABEL_65:
  v6 = v38;
LABEL_60:
  v31 = a1[1];
  if ( (v31 & 1) == 0 )
  {
    a1[1] = v31 | 1;
    if ( v5 == 32 )
    {
      if ( !_InterlockedExchange(&PopShutdownEventCode, 32) )
        a2 |= 0x10u;
    }
    else if ( v5 == 16 && !_InterlockedCompareExchange(&PopShutdownEventCode, 16, 0) )
    {
      a2 |= 0x10u;
    }
    PopSetNotificationWork(a2);
  }
  if ( (a1[1] & 0x20) != 0 )
  {
    if ( v36 )
    {
      Flink = PpmIdlePolicyLock.QueueListEntry.Flink;
      v33 = (struct _LIST_ENTRY *)(*((_QWORD *)a1 + 1) + 32LL);
      if ( PpmIdlePolicyLock.QueueListEntry.Flink->Flink != (struct _LIST_ENTRY *)&PpmIdlePolicyLock.512 )
        __fastfail(3u);
      v33->Flink = (struct _LIST_ENTRY *)&PpmIdlePolicyLock.512;
      v33->Blink = Flink;
      Flink->Flink = v33;
      PpmIdlePolicyLock.QueueListEntry.Flink = v33;
    }
    else
    {
      PopCompleteAction(a1, 0LL);
    }
  }
  return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *v8, v8[1], v8[2], v6, a5, v10, v12, v40, v37);
}
