/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x140203774
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeTerminateThread @ 0x140203388 (KeTerminateThread.c)
 *     KeSetProcessSchedulingGroup @ 0x14051FF00 (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     ?KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140203FD4 (-KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140226F90 (KiUpdateTotalCyclesCurrentThread.c)
 *     ?KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140238460 (-KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x14032F930 (KiReadyDeferredReadyList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceThreadSchedulingGroup @ 0x1406C507C (EtwTraceThreadSchedulingGroup.c)
 */

__int64 __fastcall KiSetThreadSchedulingGroup(struct _KTHREAD *a1, struct _KSCHEDULING_GROUP *a2)
{
  struct _KPRCB *CurrentPrcb; // rbp
  signed __int32 *SchedulerAssist; // r8
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdi
  __int64 result; // rax
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  int v10; // [rsp+40h] [rbp+8h] BYREF
  struct _SINGLE_LIST_ENTRY v11; // [rsp+48h] [rbp+10h] BYREF

  v11.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a1 == CurrentPrcb->CurrentThread )
  {
    _disable();
    KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
    SchedulerAssist = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v8 = *SchedulerAssist;
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange(SchedulerAssist, v8 & 0xFFDFFFFF, v8);
      }
      while ( v9 != v8 );
      if ( (v8 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick();
    }
    _enable();
  }
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v10);
    while ( a1->ThreadLock );
  }
  SchedulingGroup = a1->SchedulingGroup;
  if ( a2 )
  {
    if ( (*((_DWORD *)&a1->0 + 1) & 0x200) != 0 )
    {
      KiRemoveThreadFromSchedulingGroup(a1, 1u, &v11);
      _interlockedbittestandset(&a1->ThreadFlags2, 3u);
      SchedulingGroup = 0LL;
    }
    KiAddThreadToSchedulingGroup(a1, a2, 0, &v11);
  }
  else
  {
    KiRemoveThreadFromSchedulingGroup(a1, 0, &v11);
  }
  a1->ThreadLock = 0LL;
  result = KiReadyDeferredReadyList(CurrentPrcb, &v11);
  if ( (WORD2(xmmword_140FBFC10) & 0x4000) != 0 )
    return EtwTraceThreadSchedulingGroup(a1, SchedulingGroup, a2);
  return result;
}
