/*
 * XREFs of ExGetNextWakeTime @ 0x140C0CCD0
 * Callers:
 *     PopIsWakeTimerImminent @ 0x140B6C904 (PopIsWakeTimerImminent.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoStoreDiagnosticContext @ 0x1404372B0 (PoStoreDiagnosticContext.c)
 *     KeQueryTimerDueTime @ 0x140439548 (KeQueryTimerDueTime.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

bool __fastcall ExGetNextWakeTime(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 **a5)
{
  __int64 v6; // rbp
  unsigned __int64 *v7; // r15
  __int64 v8; // rbx
  struct _KTHREAD *SchedulerAssist; // r12
  __int64 p_ThreadTimerDelay; // r14
  unsigned __int64 v12; // rdi
  KIRQL v13; // al
  __int64 v14; // r13
  _BYTE *v15; // rcx
  __int64 v16; // rdx
  __int64 TimerDueTime; // rax
  unsigned __int64 *Pool2; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+28h] [rbp-60h]
  KIRQL NewIrql; // [rsp+98h] [rbp+10h]

  v20 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = MEMORY[0xFFFFF78000000014];
  SchedulerAssist = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.SchedulerAssist;
  v21 = MEMORY[0xFFFFF78000000008];
  if ( ExSaPageGroupDescriptorArrayLock.SchedulerAssist == &ExSaPageGroupDescriptorArrayLock.SchedulerAssist )
    goto LABEL_19;
  do
  {
    p_ThreadTimerDelay = (__int64)&SchedulerAssist[-1].ThreadTimerDelay;
    v12 = 0LL;
    SchedulerAssist = *(struct _KTHREAD **)&SchedulerAssist->Header.Lock;
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(p_ThreadTimerDelay + 64));
    v14 = *(_QWORD *)(p_ThreadTimerDelay + 256);
    v15 = (_BYTE *)(p_ThreadTimerDelay + 304);
    NewIrql = v13;
    LOBYTE(v16) = v13;
    if ( a3 && (*v15 & 4) == 0 )
      goto LABEL_12;
    if ( (*v15 & 2) != 0 )
    {
      TimerDueTime = *(_QWORD *)(p_ThreadTimerDelay + 312);
      if ( *(_BYTE *)(p_ThreadTimerDelay + 248) == 1 )
      {
        v12 = 0LL;
        if ( TimerDueTime )
          v12 = v21 + TimerDueTime - v8;
        goto LABEL_10;
      }
    }
    else
    {
      TimerDueTime = KeQueryTimerDueTime(p_ThreadTimerDelay, v16, 0LL);
      LOBYTE(v16) = NewIrql;
    }
    v12 = TimerDueTime;
LABEL_10:
    if ( v12 < a1 )
      v12 = 0LL;
LABEL_12:
    KeReleaseSpinLock((PKSPIN_LOCK)(p_ThreadTimerDelay + 64), v16);
    if ( v12 - 1 < a2 - 1 )
    {
      a2 = v12;
      v6 = v14;
    }
  }
  while ( SchedulerAssist != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssist );
  v7 = 0LL;
  if ( v6 )
  {
    PoStoreDiagnosticContext(v6, 0LL, &v20);
    Pool2 = (unsigned __int64 *)ExAllocatePool2(0x100uLL);
    v7 = Pool2;
    if ( Pool2 )
    {
      if ( (int)PoStoreDiagnosticContext(v6, Pool2, &v20) < 0 )
      {
        ExFreePoolWithTag(v7, 0x53577254u);
        v7 = 0LL;
      }
    }
  }
LABEL_19:
  *a4 = a2;
  *a5 = v7;
  return v6 != 0;
}
