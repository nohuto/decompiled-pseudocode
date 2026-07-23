/*
 * XREFs of KiFlushQueuedDpcsWorker @ 0x1404EB770
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapStacksAndRetireDpcList @ 0x140731010 (KiSwapStacksAndRetireDpcList.c)
 */

void __fastcall KiFlushQueuedDpcsWorker(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r9
  unsigned __int32 v6; // eax
  __int64 v7; // r8
  unsigned __int32 v8; // ett

  v1 = a1;
  if ( *(_DWORD *)(a1 + 14424) | *(_DWORD *)(a1 + 14472) )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    _disable();
    KiSwapStacksAndRetireDpcList(v1, *(_QWORD *)(v1 + 14496));
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v6 = *SchedulerAssist;
      do
      {
        v7 = v6;
        LODWORD(v7) = v6 & 0xFFDFFFFF;
        v8 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v6 & 0xFFDFFFFF, v6);
      }
      while ( v8 != v6 );
      if ( (v6 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v3, v7, SchedulerAssist);
    }
    _enable();
    LOBYTE(v3) = CurrentIrql;
    KiCheckForThreadDispatch(v1, v3);
  }
}
