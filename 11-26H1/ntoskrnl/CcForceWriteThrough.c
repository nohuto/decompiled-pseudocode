/*
 * XREFs of CcForceWriteThrough @ 0x140222070
 * Callers:
 *     CcCopyWriteWontFlush @ 0x14026B440 (CcCopyWriteWontFlush.c)
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     CcPrepareMdlWrite @ 0x1404CDA40 (CcPrepareMdlWrite.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x140221E10 (KiRcuCheckQuiescent.c)
 *     KiRcuReadLock @ 0x1402223BC (KiRcuReadLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     CcCanIWriteStreamEx @ 0x140383E50 (CcCanIWriteStreamEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcForceWriteThrough(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 v4; // r12
  __int64 v5; // rbp
  __int64 v8; // r13
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v14; // esi
  unsigned __int64 DispatchPin; // rdi
  char v16; // r8
  __int64 v17; // r9
  unsigned int NestingLevel; // eax
  unsigned int v19; // eax
  char v20; // r8
  struct _KTHREAD *CurrentThread; // rdx
  int v23; // ecx
  unsigned __int64 v24; // rax
  int v25; // eax
  struct _KPRCB *v26; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v28; // eax
  __int64 v29; // rdx
  unsigned __int32 v30; // ett
  __int64 v31; // rax
  struct _LIST_ENTRY *v32; // rcx
  struct _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY *v34; // rcx
  struct _LIST_ENTRY *j; // rax
  signed __int32 v36[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  int v38; // [rsp+A8h] [rbp+10h]

  v38 = a2;
  v4 = 0;
  LODWORD(v5) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    v8 = *(_QWORD *)(a3 + 536);
    v5 = *(_QWORD *)(a3 + 600);
  }
  else
  {
    v8 = *((_QWORD *)PspSystemPartition + 1);
    if ( CcEnablePerVolumeLazyWriter )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql < 2u )
      {
        v10 = KeGetCurrentIrql();
        if ( (_BYTE)v10 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 2;
          KiRaiseIrqlProcessIrqlFlags(v10, a2);
        }
      }
      KiRcuReadLock(CurrentIrql);
      if ( CcEnablePerVolumeLazyWriter )
      {
        v11 = *(_QWORD *)(a1 + 40);
        if ( v11 && (v12 = *(_QWORD *)(v11 + 8)) != 0 )
        {
          v5 = *(_QWORD *)(v12 + 600);
        }
        else
        {
          v31 = *(_QWORD *)(a1 + 16);
          if ( !v31 )
            v31 = a1;
          v32 = *(struct _LIST_ENTRY **)(v31 + 8);
          for ( i = EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
                i != (struct _LIST_ENTRY *)&EmpParseLock.InGlobalUpdateVpThreadPriorityList;
                i = i->Flink )
          {
            if ( i[-1].Blink == v32 )
            {
              v34 = i + 12;
              for ( j = i[12].Flink; j != v34; j = j->Flink )
              {
                LODWORD(v5) = (_DWORD)j - 592;
                if ( j[-35].Flink == (struct _LIST_ENTRY *)v8 )
                  goto LABEL_12;
              }
              LODWORD(v5) = 0;
              break;
            }
          }
        }
      }
LABEL_12:
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = 0;
      DispatchPin = CurrentPrcb->RcuData.DispatchPin;
      v16 = KeDisableInterrupts();
      NestingLevel = CurrentPrcb->RcuData.NestingLevel;
      if ( !NestingLevel )
        __fastfail(0xEu);
      v19 = NestingLevel - 1;
      CurrentPrcb->RcuData.NestingLevel = v19;
      if ( !v19 )
      {
        if ( CurrentPrcb->RcuData.IdleState < 0 )
        {
          _InterlockedAnd8(&CurrentPrcb->RcuData.IdleState, 0x7Fu);
          if ( CurrentPrcb->RcuData.GracePeriodNeeded )
          {
            CurrentPrcb->RcuData.GracePeriodNeeded = 0;
            _InterlockedOr(v36, 0);
            CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F24F28;
          }
        }
        v14 = 1;
      }
      if ( v16 )
      {
        v26 = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)v26->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v28 = *SchedulerAssist;
          do
          {
            v29 = v28;
            LODWORD(v29) = v28 & 0xFFDFFFFF;
            v30 = v28;
            v28 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v28 & 0xFFDFFFFF, v28);
          }
          while ( v30 != v28 );
          if ( (v28 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v26, v29, SchedulerAssist, v17);
        }
        _enable();
      }
      if ( v14 )
      {
        if ( CurrentPrcb->RcuData.ExpediteReporting )
          KiRcuCheckQuiescent((__int64)KeGetCurrentPrcb());
        if ( (unsigned __int8)DispatchPin < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)DispatchPin);
          __writecr8(DispatchPin);
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 80) & 0x1000000) != 0 && !(unsigned __int8)CcCanIWriteStreamEx(v8, v5, a1, v38, 0, 0, 0LL) )
  {
    v20 = a4;
LABEL_35:
    v4 = 1;
    if ( v20 && (*(_DWORD *)(a3 + 152) & 0x400) == 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 768), &LockHandle);
      *(_DWORD *)(a3 + 152) |= 0x400u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    return v4;
  }
  v20 = a4;
  if ( a4 )
  {
    CurrentThread = KeGetCurrentThread();
    v23 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
    v24 = CurrentThread->Process[1].Padding[3];
    if ( v24 )
    {
      v25 = *(_DWORD *)(v24 + 1084);
      if ( v23 >= v25 )
        v23 = v25;
    }
    if ( (v23 >= 2 || CurrentThread != KeGetCurrentThread() || !LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink))
      && v23 <= 0
      && (*(_DWORD *)(a1 + 80) & 0x8000) == 0 )
    {
      goto LABEL_35;
    }
  }
  return v4;
}
