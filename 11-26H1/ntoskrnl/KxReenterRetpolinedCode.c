/*
 * XREFs of KxReenterRetpolinedCode @ 0x1403F0D54
 * Callers:
 *     ExpWorkerThread @ 0x1403EF030 (ExpWorkerThread.c)
 *     KeReenterRetpolinedCode @ 0x1403F0D30 (KeReenterRetpolinedCode.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

char KxReenterRetpolinedCode()
{
  unsigned __int32 v0; // eax
  __int64 v1; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v3; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v5; // rdx
  unsigned __int32 v6; // ett

  LOBYTE(v0) = KeDisableInterrupts();
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->BpbRetpolineState.AllFlags &= ~1u;
  if ( (_BYTE)v0 )
  {
    v3 = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)v3->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v0 = *SchedulerAssist;
      do
      {
        v5 = v0;
        LODWORD(v5) = v0 & 0xFFDFFFFF;
        v6 = v0;
        v0 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v0 & 0xFFDFFFFF, v0);
      }
      while ( v6 != v0 );
      if ( (v0 & 0x200000) != 0 )
        LOBYTE(v0) = KiRemoveSystemWorkPriorityKick(v3, v5, SchedulerAssist, v1);
    }
    _enable();
  }
  return v0;
}
