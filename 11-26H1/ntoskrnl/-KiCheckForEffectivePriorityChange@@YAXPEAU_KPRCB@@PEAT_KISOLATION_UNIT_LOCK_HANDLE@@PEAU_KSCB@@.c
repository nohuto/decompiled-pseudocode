/*
 * XREFs of ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14043E7DC
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1403364D0 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     KeSetSchedulingGroupRankBias @ 0x14043D434 (KeSetSchedulingGroupRankBias.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E128 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E3E4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140380E90 (KiQueryEffectivePriorityThread.c)
 */

void __fastcall KiCheckForEffectivePriorityChange(
        struct _KPRCB *a1,
        union _KISOLATION_UNIT_LOCK_HANDLE *a2,
        struct _KSCB *a3)
{
  _KTHREAD *NextThread; // rbx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  struct _KSCB *v6; // rax
  _KPRIORITY_STATE *PriorityState; // r14
  unsigned __int8 AllFields; // si
  char v9; // al
  unsigned __int8 v10; // al
  volatile signed __int32 *SchedulerAssist; // r8
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // ecx

  NextThread = a1->NextThread;
  if ( !NextThread )
    NextThread = a1->CurrentThread;
  SchedulingGroup = NextThread->SchedulingGroup;
  if ( !SchedulingGroup )
  {
    v6 = 0LL;
    goto LABEL_6;
  }
  v6 = (struct _KSCB *)((char *)SchedulingGroup + a1->ScbOffset);
  if ( !v6 )
  {
LABEL_6:
    if ( v6 != a3 )
      return;
    goto LABEL_7;
  }
  while ( v6 != a3 )
  {
    v6 = v6->Parent;
    if ( !v6 )
      goto LABEL_6;
  }
LABEL_7:
  PriorityState = a1->PriorityState;
  AllFields = PriorityState->AllFields;
  if ( (NextThread->Header.Size & 4) != 0 )
    v9 = AllFields ^ KiQueryEffectivePriorityThread((__int64)NextThread, a1);
  else
    v9 = NextThread->Priority ^ AllFields;
  v10 = AllFields ^ v9 & 0x7F;
  PriorityState->AllFields = v10;
  SchedulerAssist = (volatile signed __int32 *)a1->SchedulerAssist;
  if ( SchedulerAssist )
  {
    v12 = NextThread == a1->IdleThread ? KiVpThreadSystemWorkPriority : v10 & 0x7F;
    v13 = (unsigned __int8)BYTE1(*SchedulerAssist);
    if ( v12 != v13 )
    {
      if ( v12 <= v13 )
        v14 = (v12 << 8) - (v13 << 8);
      else
        v14 = (v12 - v13) << 8;
      _InterlockedAdd(SchedulerAssist, v14);
    }
  }
}
