/*
 * XREFs of ?KiStartRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KTHREAD@@@Z @ 0x1403C9F80
 * Callers:
 *     KiAdjustRescheduleContextForProcessorAddition @ 0x1405FDFAC (KiAdjustRescheduleContextForProcessorAddition.c)
 * Callees:
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 */

void __fastcall KiStartRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KPRCB *a2,
        union _KISOLATION_UNIT_LOCK_HANDLE *a3,
        struct _KTHREAD *a4)
{
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  unsigned __int8 IdleState; // al
  _KTHREAD *NextThread; // rsi
  unsigned __int8 AllCompareThreadStateFlags; // cl
  unsigned __int8 v10; // cl
  char v11; // bp
  unsigned __int8 v12; // dl
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rdx
  unsigned __int64 NonParkedSet; // rax
  int v15; // ecx
  char v16; // al

  a1->Prcb = a2;
  a1->SharedReadyQueue = 0LL;
  SharedReadyQueue = a2->SharedReadyQueue;
  if ( SharedReadyQueue )
  {
    IdleState = a2->IdleState;
    if ( (IdleState & 0x10) == 0
      || ((SchedulerSubNode = a2->SchedulerSubNode, KiForceParkingConfiguration) && (IdleState & 0x20) != 0
        ? (NonParkedSet = ~SchedulerSubNode->ForceParkRequestSet)
        : (NonParkedSet = SchedulerSubNode->NonParkedSet),
          (NonParkedSet & SharedReadyQueue->Affinity) == 0) )
    {
      a1->SharedReadyQueue = a2->SharedReadyQueue;
    }
  }
  NextThread = a2->NextThread;
  a1->CompareThread = NextThread;
  if ( !NextThread )
  {
    NextThread = a2->CurrentThread;
    a1->CompareThread = NextThread;
  }
  if ( a2->NextThread == NextThread )
  {
    a1->AllCompareThreadStateFlags |= 4u;
  }
  else
  {
    AllCompareThreadStateFlags = a1->AllCompareThreadStateFlags;
    if ( a2 == KeGetCurrentPrcb() )
      v10 = AllCompareThreadStateFlags | 4;
    else
      v10 = AllCompareThreadStateFlags & 0xFB;
    a1->AllCompareThreadStateFlags = v10;
  }
  v11 = 0;
  if ( (*((_DWORD *)&NextThread->0 + 1) & 0x400000) != 0 )
  {
    if ( NextThread != a4 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&NextThread->ThreadLock, 0LL) )
        goto LABEL_11;
      v11 = 1;
    }
    if ( (*((_DWORD *)&NextThread->0 + 1) & 0x400000) != 0 )
    {
      v15 = NextThread->WaitBlockFill6[68];
      if ( NextThread->NextProcessor == a2->Number )
      {
        if ( v15 == 3
          || v15 == 2
          || (_BYTE)v15 == 5 && (v16 = NextThread->WaitRegister.Flags & 7, v16 != 1) && (unsigned __int8)(v16 - 3) > 3u )
        {
          KiUpdateVPBackingThreadPriority(NextThread);
        }
      }
    }
    if ( v11 )
      NextThread->ThreadLock = 0LL;
  }
LABEL_11:
  v12 = ((a2->IdleState & 1) == 0) | a1->AllCompareThreadStateFlags & 0xFE;
  a1->AllCompareThreadStateFlags = v12;
  a1->AllCompareThreadStateFlags = v12 ^ (v12 ^ (a2->PriorityState->AllFields >> 6)) & 2;
}
