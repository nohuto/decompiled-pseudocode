/*
 * XREFs of KePrepareClockTimerForIdle @ 0x1405EFCA8
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405EFFA4 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSetNextClockTickDueTime @ 0x14037B480 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimer @ 0x14040D440 (KiSetClockTimer.c)
 *     KiShouldRearmClockTimer @ 0x14040D55C (KiShouldRearmClockTimer.c)
 *     KiFindNextTimerDueTime @ 0x14050F30C (KiFindNextTimerDueTime.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline @ 0x1405EFA60 (Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405F0CD0 (KiCancelClockTimerKTimerDeadlines.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG __fastcall KePrepareClockTimerForIdle(__int64 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 *v2; // r13
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 NextTickDueTime; // rdi
  unsigned __int64 QuadPart; // r15
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 NextTimerDueTime; // rax
  __int64 v10; // rcx
  $CB8B8ED9D5402772B8ACB62560F1133F *v11; // rdx
  unsigned __int64 v12; // r14
  struct _KPRCB *v13; // r14
  int v14; // r13d
  unsigned __int8 ClockOwner; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int8 ClockActive; // [rsp+49h] [rbp-88h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-81h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-79h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-71h] BYREF
  __int64 v21; // [rsp+68h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+78h] [rbp-59h] BYREF
  __int64 **v23; // [rsp+98h] [rbp-39h]
  __int64 v24; // [rsp+A0h] [rbp-31h]
  unsigned __int8 *p_ClockOwner; // [rsp+A8h] [rbp-29h]
  __int64 v26; // [rsp+B0h] [rbp-21h]
  unsigned __int8 *p_ClockActive; // [rsp+B8h] [rbp-19h]
  __int64 v28; // [rsp+C0h] [rbp-11h]
  unsigned __int64 *v29; // [rsp+C8h] [rbp-9h]
  __int64 v30; // [rsp+D0h] [rbp-1h]
  __int64 *v31; // [rsp+D8h] [rbp+7h]
  __int64 v32; // [rsp+E0h] [rbp+Fh]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+E8h] [rbp+17h]
  __int64 v34; // [rsp+F0h] [rbp+1Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = a1;
  v19 = a1;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  NextTickDueTime = -1LL;
  QuadPart = InterruptTimePrecise.QuadPart;
  v6 = -1LL;
  if ( (_BYTE)KiDynamicTickDisableReason )
  {
    NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
    goto LABEL_39;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( !CurrentPrcb->ClockOwner )
  {
    v18 = -1LL;
    if ( (unsigned int)Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline() )
    {
      if ( KiSerializeTimerExpiration )
        goto LABEL_21;
      NextTimerDueTime = KiFindNextTimerDueTime((__int64)CurrentPrcb, QuadPart, 0, &v18);
      v6 = v18;
      if ( NextTimerDueTime < v18 )
        v6 = NextTimerDueTime;
      if ( v6 == -1LL )
      {
        KiCancelClockTimerKTimerDeadlines(CurrentPrcb);
        goto LABEL_21;
      }
      goto LABEL_18;
    }
    if ( !KiSerializeTimerExpiration )
    {
      v8 = KiFindNextTimerDueTime((__int64)CurrentPrcb, QuadPart, 0, &v18);
      v6 = v18;
      if ( v8 < v18 )
        v6 = v8;
      if ( v6 != -1LL )
      {
LABEL_18:
        if ( v6 > CurrentPrcb->ClockTimerState.ClockTimerEntries[1].DueTime )
          KiSetClockTimer((__int64)CurrentPrcb, (LARGE_INTEGER)QuadPart, v6, KeMinimumIncrement, 1, 0, 0);
      }
    }
  }
LABEL_21:
  v10 = 0LL;
  v11 = &CurrentPrcb->ClockTimerState.ClockTimerEntries[0].12;
  while ( v10 < 7 )
  {
    if ( (v11->TypeFlags & 3) == 1 )
    {
      if ( KiShouldRearmClockTimer((__int64)CurrentPrcb, (LARGE_INTEGER)QuadPart, 0) )
      {
        CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
        KiSetNextClockTickDueTime((LARGE_INTEGER)QuadPart, 0);
      }
      NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
      v12 = NextTickDueTime - QuadPart;
      goto LABEL_35;
    }
    ++v10;
    v11 += 16;
  }
  v13 = KeGetCurrentPrcb();
  v14 = KiClockTimerOwner;
  if ( (v13->PendingTickFlags & 1) != 0 )
  {
    guard_dispatch_icall_no_overrides(v10, v11);
    v13->ClockTimerState.ClockActive = 0;
    v13->PendingTickFlags &= ~1u;
  }
  if ( v13->Number == v14 )
    ++dword_140F25F84;
  if ( v13->ClockOwner )
    v13->ClockOwner = 0;
  v2 = v19;
  v12 = -1LL;
LABEL_35:
  CurrentPrcb->ClockTimerState.ClockArmedForIdle = 1;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  InterruptTimePrecise.LowPart = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (unsigned int)dword_140E06F90 > 5 )
  {
    v19 = (__int64 *)QuadPart;
    v24 = 8LL;
    v23 = &v19;
    ClockOwner = CurrentPrcb->ClockOwner;
    v30 = 8LL;
    p_ClockOwner = &ClockOwner;
    ClockActive = CurrentPrcb->ClockTimerState.ClockActive;
    p_ClockActive = &ClockActive;
    v29 = &v18;
    v31 = &v21;
    p_PerformanceCounter = &PerformanceCounter;
    v32 = 8LL;
    v34 = 8LL;
    v26 = 1LL;
    v28 = 1LL;
    v18 = v12;
    v21 = NextTickDueTime;
    PerformanceCounter.QuadPart = v6;
    InterruptTimePrecise.LowPart = tlgWriteTransfer_EtwWriteTransfer(
                                     (__int64)&dword_140E06F90,
                                     (unsigned __int8 *)word_140049272,
                                     0LL,
                                     0LL,
                                     8u,
                                     &v22);
  }
LABEL_39:
  if ( v2 )
    *v2 = NextTickDueTime;
  return InterruptTimePrecise.LowPart;
}
