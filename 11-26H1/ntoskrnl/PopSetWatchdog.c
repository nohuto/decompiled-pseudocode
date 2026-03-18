/*
 * XREFs of PopSetWatchdog @ 0x1403AAE58
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1403AB220 (PopUpdateWatchdogNoWorkersEvent.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     PopCacheDisplayOnPhaseDuration @ 0x140501EB8 (PopCacheDisplayOnPhaseDuration.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char *__fastcall PopSetWatchdog(char *P, unsigned int *a2, char a3)
{
  __int64 InterruptTimePrecise; // r12
  unsigned __int64 v7; // r14
  KIRQL v8; // bp
  __int64 v9; // rax
  __int64 v10; // rax
  bool v11; // zf
  char v12; // r12
  unsigned int v13; // r15d
  _QWORD *v14; // rcx
  PVOID *v15; // rax
  char *result; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v22);
  v7 = 0LL;
  if ( P )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopModernStandbyStateNotify.SchedulerApc.SystemArgument2);
  }
  else
  {
    result = (char *)ExAllocatePool2(0x40uLL);
    P = result;
    if ( !result )
      return result;
    *((_DWORD *)result + 4) = 1146572624;
    *((_WORD *)result + 12) = 0;
    result[26] = 6;
    *((_DWORD *)result + 7) = 1;
    v17 = result + 32;
    v17[1] = v17;
    *v17 = v17;
    *((_QWORD *)P + 6) = 0LL;
    P[48] = 8;
    *((_QWORD *)P + 8) = P + 56;
    *((_QWORD *)P + 7) = P + 56;
    *((_QWORD *)P + 9) = 0LL;
    *((_DWORD *)P + 27) = 0;
    *((_WORD *)P + 52) = 0;
    P[107] = 0;
    *((_QWORD *)P + 17) = PopWatchdogDpc;
    *((_DWORD *)P + 28) = 275;
    *((_QWORD *)P + 18) = P;
    *((_QWORD *)P + 21) = 0LL;
    *((_QWORD *)P + 16) = 0LL;
    *((_QWORD *)P + 24) = PopWatchdogWorker;
    *((_QWORD *)P + 25) = P;
    *((_QWORD *)P + 22) = 0LL;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopModernStandbyStateNotify.SchedulerApc.SystemArgument2);
    v18 = *(_QWORD *)&PopModernStandbyStateNotify.SuspendEvent.Header.Lock;
    if ( *(struct _KTHREAD **)(*(_QWORD *)&PopModernStandbyStateNotify.SuspendEvent.Header.Lock + 8LL) != (struct _KTHREAD *)&PopModernStandbyStateNotify.SuspendEvent )
      goto LABEL_22;
    *(_QWORD *)P = *(_QWORD *)&PopModernStandbyStateNotify.SuspendEvent.Header.Lock;
    *((_QWORD *)P + 1) = &PopModernStandbyStateNotify.SuspendEvent;
    *(_QWORD *)(v18 + 8) = P;
    *(_QWORD *)&PopModernStandbyStateNotify.SuspendEvent.Header.Lock = P;
  }
  if ( *((_DWORD *)P + 4) != 1146572624 )
    __fastfail(5u);
  v9 = *a2;
  if ( (_DWORD)v9 && !a3 )
  {
    v19 = 10000 * v9;
    *(_OWORD *)(P + 216) = *(_OWORD *)a2;
    *(_OWORD *)(P + 232) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(P + 248) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(P + 264) = *((_OWORD *)a2 + 3);
    *((_QWORD *)P + 35) = *((_QWORD *)a2 + 8);
    v20 = RtlGetInterruptTimePrecise(v21);
    *((_QWORD *)P + 37) = v20;
    *((_QWORD *)P + 38) = v19 + v20;
    *((_QWORD *)P + 36) = KeGetCurrentThread();
    *((_WORD *)P + 104) = 1;
    if ( !(unsigned __int8)KiSetTimerEx((int)P + 48, -(int)v19, 0, 0, (__int64)(P + 112)) )
    {
      P[20] = 1;
      PopUpdateWatchdogNoWorkersEvent(P);
    }
    *((_QWORD *)P + 39) = InterruptTimePrecise;
    *((_QWORD *)P + 40) = RtlGetInterruptTimePrecise(v21);
    v13 = 0;
    v12 = 0;
    goto LABEL_15;
  }
  *((_QWORD *)P + 41) = InterruptTimePrecise;
  v10 = RtlGetInterruptTimePrecise(v21);
  v11 = *((_DWORD *)P + 56) == 412;
  *((_QWORD *)P + 42) = v10;
  if ( v11 && *((_QWORD *)P + 29) > 0x20uLL )
  {
    v13 = *((_DWORD *)P + 58);
    v12 = 1;
    v7 = (v10 - *((_QWORD *)P + 37)) / 0xAuLL;
  }
  else
  {
    v12 = 0;
    v13 = 0;
  }
  P[208] = 0;
  if ( KeCancelTimer((PKTIMER)(P + 48)) )
  {
    P[20] = 0;
    PopUpdateWatchdogNoWorkersEvent(P);
  }
  *((_QWORD *)P + 43) = RtlGetInterruptTimePrecise(&v22);
  if ( !*((_DWORD *)P + 7) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&PopModernStandbyStateNotify.SchedulerApc.SystemArgument2, v8);
    KeWaitForSingleObject(P + 24, Executive, 0, 0, 0LL);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopModernStandbyStateNotify.SchedulerApc.SystemArgument2);
  }
  RtlGetInterruptTimePrecise(&v22);
  memset_0(P + 288, 0, 0x70uLL);
  if ( !a3 )
    goto LABEL_15;
  v14 = *(_QWORD **)P;
  if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v15 = (PVOID *)*((_QWORD *)P + 1), *v15 != P) )
LABEL_22:
    __fastfail(3u);
  *v15 = v14;
  v14[1] = v15;
  *((_DWORD *)P + 4) = 1330532174;
  ExFreePoolWithTag(P, 0x44574F50u);
  P = 0LL;
LABEL_15:
  KxReleaseSpinLock((PKSPIN_LOCK)&PopModernStandbyStateNotify.SchedulerApc.SystemArgument2);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  __writecr8(v8);
  if ( v12 )
    PopCacheDisplayOnPhaseDuration(v13, v7);
  return P;
}
