/*
 * XREFs of KiExecuteDpc @ 0x1405FD860
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1405F9488 (KiSetSystemAffinityThreadToProcessor.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall __noreturn KiExecuteDpc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  int v8; // [rsp+20h] [rbp-198h] BYREF
  _BYTE v9[404]; // [rsp+24h] [rbp-194h] BYREF

  memset_0(v9, 0, 0x18CuLL);
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 31);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 8u);
  KiSetSystemAffinityThreadToProcessor(*(_DWORD *)(a1 + 36), 0LL);
  *(_BYTE *)(a1 + 14520) = 1;
  while ( 1 )
  {
    v8 = 0;
    KeWaitForGate(a1 + 33600, 5LL);
    v3 = KeGetCurrentThread();
    --v3->SpecialApcDisable;
    do
    {
      *(_WORD *)(a1 + 14526) = 1;
      if ( KeSmapEnabled )
        __asm { clac }
      _disable();
      KiExecuteAllDpcs((struct _KPRCB *)a1, (unsigned __int64)CurrentThread, &v8, 1LL);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v6 = *SchedulerAssist;
        do
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange(SchedulerAssist, v6 & 0xFFDFFFFF, v6);
        }
        while ( v7 != v6 );
        if ( (v6 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      if ( KeSmapEnabled )
        __asm { stac }
    }
    while ( _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 14526), 0, 1) != 1 );
    *(_QWORD *)(a1 + 14480) = 0LL;
    KeLeaveGuardedRegion();
  }
}
