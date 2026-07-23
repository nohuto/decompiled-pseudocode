/*
 * XREFs of PpmResetInterruptRate @ 0x1404DF740
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmResetInterruptRate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v6; // eax
  __int64 v7; // rdx
  unsigned __int32 v8; // ett

  _disable();
  *(_QWORD *)(a1 + 11680) = *(unsigned int *)(a1 + 34368);
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
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v7, SchedulerAssist, a4);
  }
  _enable();
  return 0LL;
}
