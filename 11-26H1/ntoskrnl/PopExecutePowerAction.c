/*
 * XREFs of PopExecutePowerAction @ 0x140A37D58
 * Callers:
 *     PopThermalStateTransitionWorker @ 0x1407D1CA0 (PopThermalStateTransitionWorker.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x1407D6C24 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x1407D70B0 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x1407DA0B0 (PopIdleAoAcDozeToS4.c)
 *     PdcPoSetPowerAction @ 0x1407DB740 (PdcPoSetPowerAction.c)
 *     PoTtmInitiatePowerStateTransition @ 0x1407DB808 (PoTtmInitiatePowerStateTransition.c)
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 *     NtInitiatePowerAction @ 0x140A37400 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140A38950 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     NtSetSystemPowerState @ 0x140BFD2E0 (NtSetSystemPowerState.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     PoStoreDiagnosticContext @ 0x1404372B0 (PoStoreDiagnosticContext.c)
 *     PopSetNotificationWork @ 0x1404385A0 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x14043864C (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x1404F4374 (PopSetPowerActionState.c)
 *     PopDiagTraceShutdownAction @ 0x14060926C (PopDiagTraceShutdownAction.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopResetActionDefaults @ 0x14077C7B8 (PopResetActionDefaults.c)
 *     PopVerifyPowerActionPolicy @ 0x140944AA0 (PopVerifyPowerActionPolicy.c)
 *     PopDiagTraceExecutePowerAction @ 0x140A382A0 (PopDiagTraceExecutePowerAction.c)
 *     PopCompleteAction @ 0x140A386C8 (PopCompleteAction.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 *     PopVerifySystemPowerState @ 0x140B24424 (PopVerifySystemPowerState.c)
 *     PopCompareActions @ 0x140B2F4C4 (PopCompareActions.c)
 *     PopPromoteActionFlag @ 0x140B4D72C (PopPromoteActionFlag.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  unsigned int v28; // r9d
  char v29; // r15
  char v30; // r15
  void *Pool2; // rax
  int v32; // ecx
  int v33; // eax
  _QWORD *v34; // rdx
  _QWORD *v35; // rax
  char v37; // [rsp+60h] [rbp-51h] BYREF
  char v38; // [rsp+61h] [rbp-50h]
  char v39; // [rsp+62h] [rbp-4Fh]
  int v40; // [rsp+68h] [rbp-49h] BYREF
  __int64 v41; // [rsp+70h] [rbp-41h] BYREF
  int v42; // [rsp+78h] [rbp-39h]
  unsigned __int64 v43; // [rsp+80h] [rbp-31h] BYREF
  _DWORD *v44; // [rsp+88h] [rbp-29h]
  _DWORD *v45; // [rsp+90h] [rbp-21h] BYREF
  int v46; // [rsp+98h] [rbp-19h]
  int v47; // [rsp+9Ch] [rbp-15h]
  _QWORD v48[2]; // [rsp+A0h] [rbp-11h] BYREF

  v5 = 0;
  v6 = a4;
  v7 = a3[2];
  v8 = a3;
  v41 = *(_QWORD *)a3;
  v10 = v41;
  v44 = a3;
  v40 = a4;
  v43 = 0LL;
  v39 = 1;
  v42 = v7;
  if ( (xmmword_140FBFC10 & 0x8000) != 0 )
  {
    v47 = a4;
    v45 = a1;
    v48[0] = &v45;
    v46 = v41;
    v48[1] = 16LL;
    EtwTraceKernelEvent((int)v48, 1, 0x80008000, 4642, 5249026);
  }
  if ( (a1[1] & 0x80u) == 0 )
  {
    PopCompleteAction(a1, 0LL);
    v12 = HIDWORD(v41);
    return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *v8, v8[1], v8[2], v6, a5, v10, v12, v42, v39);
  }
  PopVerifySystemPowerState(&v40, a5);
  v39 = PopVerifyPowerActionPolicy((int *)&v41);
  if ( v39 )
  {
    PopCompleteAction(a1, 3221225659LL);
    v12 = HIDWORD(v41);
    v10 = v41;
    v6 = v40;
    return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *v8, v8[1], v8[2], v6, a5, v10, v12, v42, v39);
  }
  v10 = v41;
  v12 = HIDWORD(v41);
  if ( (unsigned int)(v41 - 2) <= 1 )
    v12 = HIDWORD(v41) | 0x80000000;
  v13 = a1[1];
  v38 = 0;
  if ( (v13 & 2) != 0 )
    goto LABEL_65;
  a1[1] = v13 | 2;
  if ( v10 == 6 && LOBYTE(PsAltSystemCallRegistrationLock.TrapFrame) )
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
      v5 = byte_140F10704 != 0 ? 32 : 16;
      unk_140F12AA0 = KeQueryPerformanceCounter(0LL);
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
  if ( !byte_140F0FB61 )
    PopResetActionDefaults();
  if ( v10 )
  {
    v37 = 0;
    v6 = v40;
    v16 = v12 | 0x10000000;
    if ( v10 != 7 )
      v16 = v12;
    if ( v10 == 3 )
      v6 = 5;
    if ( v10 == 4 )
      v6 = 6;
    if ( (int)PopCompareActions(v10, (unsigned int)qword_140F0FB64) >= 0 )
    {
      PopPromoteActionFlag((unsigned int)&v37, 1, v16, 0, 1);
      PopPromoteActionFlag((unsigned int)&v37, v18 + 1, v16, v18, 2);
      PopPromoteActionFlag((unsigned int)&v37, v19 + 4, v16, v19, 0x10000000);
      if ( v10 == 2 && v6 < *((_DWORD *)qword_140F105C0 + 17) )
        v6 = *((_DWORD *)qword_140F105C0 + 17);
      if ( v6 > SHIDWORD(qword_140F0FB64) )
      {
        v37 |= 4u;
        HIDWORD(qword_140F0FB64) = v6;
      }
    }
    LOBYTE(v17) = 1;
    PopPromoteActionFlag((unsigned int)&v37, 1, v16, v17, 4);
    PopPromoteActionFlag((unsigned int)&v37, 5, v16, v20, 0x80000000);
    PopPromoteActionFlag((unsigned int)&v37, 0, v16, v21, 0x40000000);
    PopPromoteActionFlag((unsigned int)&v37, 0, v16, v22, 8);
    PopPromoteActionFlag((unsigned int)&v37, 0, v16, v23, 32);
    if ( (int)PopCompareActions(v10, (unsigned int)qword_140F0FB64) <= 0 )
    {
      v30 = v37;
    }
    else
    {
      v27 = PopCompareActions(v10, 3LL);
      v29 = v37;
      if ( v27 >= 0 )
        v29 = v37 | 2;
      if ( !(unsigned int)PopCompareActions(v28, 8LL) )
        v29 |= 2u;
      LODWORD(qword_140F0FB64) = v10;
      v30 = v29 | 5;
      dword_140F0FB74 = *a1;
      dword_140F0FB78 = 0;
      if ( !*a1 )
        dword_140F0FB78 = a1[6];
      if ( (a1[1] & 0x100) == 0 )
      {
        if ( qword_140F0FB80 )
        {
          ExFreePoolWithTag(qword_140F0FB80, 0x67696450u);
          qword_140F0FB80 = 0LL;
        }
        v25 = *((_QWORD *)a1 + 2);
        if ( v25 )
        {
          PoStoreDiagnosticContext(v25, 0LL, &v43);
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          qword_140F0FB80 = Pool2;
          if ( Pool2 )
          {
            if ( (int)PoStoreDiagnosticContext(*((_QWORD *)a1 + 2), (unsigned __int64 *)Pool2, &v43) < 0 )
            {
              ExFreePoolWithTag(qword_140F0FB80, 0x67696450u);
              qword_140F0FB80 = 0LL;
            }
          }
        }
      }
    }
    if ( (_DWORD)qword_140F0FB64 == 3 )
      LODWORD(qword_140F0FB64) = 2;
    if ( v30 )
    {
      if ( (unsigned __int8)TtmIsEnabled(v25, v24, v26) )
        LOBYTE(stru_140F110C0.QuantumTarget) = 1;
      v38 = 1;
      if ( (unsigned __int8)byte_140F0FB61 < 2u )
      {
        PopSetPowerActionState(1);
        v32 = 2;
        dword_140F0FB70 = 0;
      }
      else
      {
        LOBYTE(byte_140F0FB60) = v30 | byte_140F0FB60;
        v32 = 1;
      }
      PopGetPolicyWorker(v32);
    }
    v8 = v44;
    goto LABEL_60;
  }
LABEL_65:
  v6 = v40;
LABEL_60:
  v33 = a1[1];
  if ( (v33 & 1) == 0 )
  {
    a1[1] = v33 | 1;
    if ( v5 == 32 )
    {
      if ( !_InterlockedExchange(&dword_140F10F20, 32) )
        a2 |= 0x10u;
    }
    else if ( v5 == 16 && !_InterlockedCompareExchange(&dword_140F10F20, 16, 0) )
    {
      a2 |= 0x10u;
    }
    PopSetNotificationWork(a2);
  }
  if ( (a1[1] & 0x20) != 0 )
  {
    if ( v38 )
    {
      v34 = (_QWORD *)qword_140F105B8;
      v35 = (_QWORD *)(*((_QWORD *)a1 + 1) + 32LL);
      if ( *(__int64 **)qword_140F105B8 != &qword_140F105B0 )
        __fastfail(3u);
      *v35 = &qword_140F105B0;
      v35[1] = v34;
      *v34 = v35;
      qword_140F105B8 = (__int64)v35;
    }
    else
    {
      PopCompleteAction(a1, 0LL);
    }
  }
  return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *v8, v8[1], v8[2], v6, a5, v10, v12, v42, v39);
}
