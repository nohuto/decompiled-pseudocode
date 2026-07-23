/*
 * XREFs of ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x14022F870
 * Callers:
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1404CCC84 (KiAdjustCoreIsolationReasonThread.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405ED984 (KiFinalizeCoreControlBlockAssignment.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405FB3A0 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 */

void __fastcall KiCompleteRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KPRCB *a2,
        struct _KTHREAD *a3,
        struct _KTHREAD_SCHEDULE_REASON_DATA *a4)
{
  char v4; // al
  _KPRCB *Prcb; // rdi
  unsigned __int8 v8; // al
  int *SchedulerAssist; // rax
  unsigned __int8 TargetType; // al
  unsigned int SingleTargetIndex; // eax
  unsigned int v12; // r10d
  __int64 v13; // rcx
  char *v14; // rdx
  __int64 v15; // rcx
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  unsigned int v18; // eax
  unsigned int v19; // r10d
  __int64 v20; // rcx
  char *v21; // rdx
  __int64 v22; // rcx
  int v23; // edx
  int v24; // eax
  bool v25; // zf
  _DWORD *v26; // rcx
  __int64 Number; // rsi
  struct _KTHREAD *NewThread; // rcx

  v4 = a1->___u6[0];
  Prcb = a1->Prcb;
  if ( (v4 & 0x10) != 0 )
  {
    TargetType = a2->DeferredDispatchInterrupts.TargetType;
    if ( !TargetType )
      goto LABEL_5;
    if ( TargetType == 1 )
    {
      SingleTargetIndex = a2->DeferredDispatchInterrupts.SingleTargetIndex;
      if ( SingleTargetIndex == Prcb->Number )
        goto LABEL_6;
      a2->DeferredDispatchInterrupts.TargetType = 2;
      v12 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + SingleTargetIndex) & 0x3F;
      v13 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + SingleTargetIndex) >> 6;
      if ( a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v13 )
        goto LABEL_16;
      if ( a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v13 )
      {
        a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v13 + 1;
LABEL_16:
        v14 = (char *)a2 + 8 * v13;
        v15 = *((_QWORD *)v14 + 1725);
        _bittestandset64(&v15, v12);
        *((_QWORD *)v14 + 1725) = v15;
      }
    }
    Group = Prcb->Group;
    GroupSetMember = Prcb->GroupSetMember;
    if ( a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)Group )
    {
LABEL_25:
      a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[Group] |= GroupSetMember;
      goto LABEL_6;
    }
LABEL_18:
    if ( a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Size <= (unsigned __int16)Group )
      goto LABEL_6;
    a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = Group + 1;
    goto LABEL_25;
  }
  if ( (v4 & 8) != 0 && Prcb->IdleHalt )
  {
    v8 = a2->DeferredDispatchInterrupts.TargetType;
    if ( !v8 )
    {
LABEL_5:
      a2->DeferredDispatchInterrupts.TargetType = 1;
      a2->DeferredDispatchInterrupts.SingleTargetIndex = Prcb->Number;
      goto LABEL_6;
    }
    if ( v8 == 1 )
    {
      v18 = a2->DeferredDispatchInterrupts.SingleTargetIndex;
      if ( v18 == Prcb->Number )
        goto LABEL_6;
      a2->DeferredDispatchInterrupts.TargetType = 2;
      v19 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v18) & 0x3F;
      v20 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v18) >> 6;
      if ( a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v20 )
        goto LABEL_23;
      if ( a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v20 )
      {
        a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v20 + 1;
LABEL_23:
        v21 = (char *)a2 + 8 * v20;
        v22 = *((_QWORD *)v21 + 1725);
        _bittestandset64(&v22, v19);
        *((_QWORD *)v21 + 1725) = v22;
      }
    }
    Group = Prcb->Group;
    GroupSetMember = Prcb->GroupSetMember;
    if ( a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)Group )
      goto LABEL_25;
    goto LABEL_18;
  }
LABEL_6:
  if ( (a1->___u6[0] & 2) != 0 )
  {
    NewThread = a1->NewThread;
    if ( NewThread != a3 )
      a4 = 0LL;
    EtwTraceScheduleThread(NewThread, Prcb, a4);
  }
  if ( (a1->___u6[0] & 4) != 0 )
  {
    SchedulerAssist = (int *)Prcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( a2->SchedulerAssist )
      {
        if ( a2 != Prcb )
        {
          v23 = *SchedulerAssist;
          v24 = *SchedulerAssist & 0x40000;
          if ( (v23 & 0x100000) != 0 || v24 && (unsigned __int8)v23 < a1->KickPriority )
          {
            v25 = HvlpVirtualProcessorsIdentityMapped == 0;
            v26 = a2->SchedulerAssist;
            v26[3] = 2;
            Number = Prcb->Number;
            if ( v25 )
            {
              a3 = (struct _KTHREAD *)HvlpVirtualProcessorMapping;
              LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
            }
            v26[2] = Number;
            if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
              EtwTraceXSchedulerPriorityKickSend(Prcb->Number, 2LL, a3);
            __writemsr(0x400000C2u, (unsigned int)Number);
          }
        }
      }
    }
  }
  if ( (a1->___u6[0] & 1) != 0 )
    _InterlockedDecrement16(&a1->NewThread->KeReferenceCount);
}
