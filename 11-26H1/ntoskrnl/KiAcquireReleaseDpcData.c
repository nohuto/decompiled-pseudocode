/*
 * XREFs of KiAcquireReleaseDpcData @ 0x1405FD77C
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x140430460 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiAcquireReleaseDpcData(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  bool v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v7, 0);
  v1 = (KSPIN_LOCK *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 16) )
  {
    v2 = KeDisableInterrupts();
    KxAcquireSpinLock(v1);
    KxReleaseSpinLock(v1);
    if ( v2 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v5 = *SchedulerAssist;
        do
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange(SchedulerAssist, v5 & 0xFFDFFFFF, v5);
        }
        while ( v6 != v5 );
        if ( (v5 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
}
