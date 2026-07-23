/*
 * XREFs of KiUpdateVPBackingThreadPriority @ 0x1403CA120
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     ?KiStartRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KTHREAD@@@Z @ 0x1403C9F80 (-KiStartRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAT_KISOLATION.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1403CA394 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1403CA4C0 (EtwTraceXSchedulerPriorityUpdate.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall KiUpdateVPBackingThreadPriority(struct _KTHREAD *a1, __int64 a2, __int64 a3, char a4)
{
  bool v5; // zf
  int v9; // eax
  int SchedulerAssistPriorityFloor; // edx
  int v11; // r14d
  char *v12; // r10
  char v13; // cl
  char v14; // al
  int Priority; // ebp
  int v16; // eax
  __int64 v17; // rdx
  int v18; // esi
  int BamQosLevelFromAssistPage; // ecx
  _DWORD *SchedulerAssist; // rdx
  int v21; // ecx
  unsigned __int8 *v22; // rax
  __int64 *v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // r15
  __int64 v26; // rcx
  char v27; // cl
  ULONG_PTR v28; // r8
  char *v29; // rdx
  char v30; // al
  __int64 v31; // [rsp+60h] [rbp+8h] BYREF
  __int64 v32; // [rsp+70h] [rbp+18h] BYREF

  v32 = a3;
  v5 = (*((_DWORD *)&a1->0 + 1) & 0x400000) == 0;
  v32 = 0LL;
  if ( v5 )
    return 0;
  _InterlockedOr((volatile signed __int32 *)a1->SchedulerAssist, 0x100000u);
  v9 = KiReadGuestSchedulerAssistPriority(a1, &v32);
  SchedulerAssistPriorityFloor = a1->SchedulerAssistPriorityFloor;
  v11 = v9;
  if ( v9 != SchedulerAssistPriorityFloor )
  {
    v12 = (char *)a1 + (char)v9;
    v13 = v12[824];
    if ( v13 == -1 )
      KeBugCheckEx(0x157u, (ULONG_PTR)a1, (char)v9, 1uLL, 0LL);
    v12[824] = v13 + 1;
    a1->PriorityFloorSummary |= 1 << v9;
    if ( SchedulerAssistPriorityFloor != 32 )
    {
      v27 = SchedulerAssistPriorityFloor;
      v28 = (char)SchedulerAssistPriorityFloor;
      v29 = (char *)a1 + (char)SchedulerAssistPriorityFloor;
      v30 = v29[824];
      if ( !v30 )
        KeBugCheckEx(0x157u, (ULONG_PTR)a1, v28, 2uLL, 0LL);
      v14 = v30 - 1;
      v29[824] = v14;
      if ( !v14 )
        a1->PriorityFloorSummary ^= 1 << v27;
    }
    a1->SchedulerAssistPriorityFloor = v11;
  }
  Priority = a1->Priority;
  if ( !a4 )
  {
    a1->DecayBoost = 0;
    a1->PriorityDecrement &= 0xF00Fu;
  }
  v16 = KiComputeThreadPriority(a1, 0, 0);
  v18 = v16;
  if ( v16 != Priority )
    KiUpdateThreadPriority(a2, v17, (__int64)a1, v16, a2 != 0);
  BamQosLevelFromAssistPage = a1->BamQosLevelFromAssistPage;
  if ( a1->BamQosLevelFromAssistPage )
  {
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( SchedulerAssist[7]
        || SchedulerAssist[8]
        || (SchedulerAssist[5] & 0x4000) != 0
        || (*SchedulerAssist & 0x200000) != 0 )
      {
        BamQosLevelFromAssistPage = 0;
      }
    }
  }
  if ( BamQosLevelFromAssistPage != (unsigned __int8)a1->BamQosLevel )
  {
    a1->BamQosLevel = BamQosLevelFromAssistPage;
    if ( a2 )
    {
      v21 = *((_DWORD *)&a1->0 + 1) >> 1;
      v31 = a2;
      if ( (v21 & 1) != 0 )
      {
        v22 = *(unsigned __int8 **)(a2 + 36504);
        v23 = (__int64 *)(v22 + 8);
        v24 = *v22;
        if ( !v24 )
          goto LABEL_22;
      }
      else
      {
        v23 = &v31;
        v24 = 1;
      }
      v25 = v24;
      do
      {
        v26 = *v23;
        *(_BYTE *)(*(_QWORD *)(*v23 + 56) + 64LL) ^= (a1->BamQosLevel ^ *(_BYTE *)(*(_QWORD *)(*v23 + 56) + 64LL)) & 7;
        KiUpdateThreadQosGroupingSummaries(v26);
        ++v23;
        --v25;
      }
      while ( v25 );
    }
  }
LABEL_22:
  if ( (*((_DWORD *)&a1->0 + 1) & 0x400000) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a1->SchedulerAssist, 0xFFEFFFFF);
  if ( Priority != v18 && (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
    EtwTraceXSchedulerPriorityUpdate((_DWORD)a1, Priority, v11, v18, (__int64)&v32);
  return 1;
}
