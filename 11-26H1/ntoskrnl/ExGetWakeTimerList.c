/*
 * XREFs of ExGetWakeTimerList @ 0x1404388A0
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoStoreDiagnosticContext @ 0x1404372B0 (PoStoreDiagnosticContext.c)
 *     KeQueryTimerDueTime @ 0x140439548 (KeQueryTimerDueTime.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetWakeTimerList(_QWORD *a1, _DWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  _DWORD *v5; // r14
  _QWORD *v6; // r12
  unsigned __int64 v7; // rsi
  void *v8; // r15
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rdi
  struct _KTHREAD *i; // rdi
  __int64 v13; // rcx
  int v14; // edi
  __int64 Pool2; // rax
  struct _KTHREAD *SchedulerAssist; // r12
  unsigned __int64 v17; // rbp
  __int64 v18; // r14
  unsigned __int64 v19; // r13
  KIRQL v20; // al
  __int64 v21; // rcx
  int v22; // edx
  __int64 TimerDueTime; // rax
  _QWORD *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _KTHREAD *v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  unsigned __int64 NewIrql; // [rsp+A0h] [rbp+18h] BYREF
  int v34; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  v6 = a1;
  v28 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  v7 = 0LL;
  v8 = 0LL;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      &ExSaPageGroupDescriptorArrayLock.KernelWaitTime,
      v9,
      (__int64)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  for ( i = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.SchedulerAssist;
        i != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssist;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    v13 = i[-1].Padding[4];
    if ( v13 )
    {
      NewIrql = 0LL;
      PoStoreDiagnosticContext(v13, 0LL, &NewIrql);
      v7 = (NewIrql + 31 + v7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v7 > 0xFFFFFFFF )
      {
        v14 = -1073741789;
        goto LABEL_32;
      }
    }
  }
  if ( !v7 )
    v7 = 64LL;
  Pool2 = ExAllocatePool2(0x101uLL);
  v8 = (void *)Pool2;
  if ( Pool2 )
  {
    SchedulerAssist = (struct _KTHREAD *)ExSaPageGroupDescriptorArrayLock.SchedulerAssist;
    v14 = 0;
    v17 = 0LL;
    v18 = Pool2;
    v19 = v7;
    while ( SchedulerAssist != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssist )
    {
      if ( v19 < 0x40 )
        goto LABEL_28;
      v20 = KeAcquireSpinLockRaiseToDpc(&SchedulerAssist[-1].InGlobalUpdateVpThreadPriorityList);
      v21 = SchedulerAssist[-1].Padding[4];
      v22 = SchedulerAssist[-1].Padding[2];
      LOBYTE(NewIrql) = v20;
      v30 = v21;
      v34 = v22;
      if ( v21 )
        TimerDueTime = KeQueryTimerDueTime(&SchedulerAssist[-1].ThreadTimerDelay);
      else
        TimerDueTime = 0LL;
      v29 = TimerDueTime;
      KeReleaseSpinLock(&SchedulerAssist[-1].InGlobalUpdateVpThreadPriorityList, NewIrql);
      if ( v29 )
      {
        *(_QWORD *)(v18 + 8) = v29 - MEMORY[0xFFFFF78000000008];
        *(_DWORD *)(v18 + 16) = v34;
        NewIrql = v19 - 24;
        v14 = PoStoreDiagnosticContext(v30, (unsigned __int64 *)(v18 + 24), &NewIrql);
        if ( v14 < 0 )
          goto LABEL_31;
        v17 = (NewIrql + 31) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v19 < v17 )
        {
LABEL_28:
          v14 = -1073741789;
          goto LABEL_31;
        }
        v19 -= v17;
        *(_QWORD *)v18 = v17;
        v18 += v17;
      }
      SchedulerAssist = *(struct _KTHREAD **)&SchedulerAssist->Header.Lock;
    }
    v24 = (_QWORD *)(v18 - v17);
    *v24 = 0LL;
    if ( !v17 )
      v24[1] = 0LL;
LABEL_31:
    CurrentThread = v28;
    v5 = a2;
    v6 = a1;
  }
  else
  {
    v14 = -1073741670;
  }
LABEL_32:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime);
  KeAbPostRelease((unsigned __int64)&ExSaPageGroupDescriptorArrayLock.KernelWaitTime);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v25, v26);
  if ( v14 >= 0 )
  {
    *v6 = v8;
    *v5 = v7;
  }
  else if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x734C6B57u);
  }
  return (unsigned int)v14;
}
