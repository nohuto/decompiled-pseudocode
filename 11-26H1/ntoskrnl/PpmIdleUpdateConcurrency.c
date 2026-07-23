/*
 * XREFs of PpmIdleUpdateConcurrency @ 0x1404A2D90
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 *     PpmIdleRemoveConcurrency @ 0x1404A2C80 (PpmIdleRemoveConcurrency.c)
 *     PpmIdleInstallConcurrency @ 0x1404A2D10 (PpmIdleInstallConcurrency.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PpmIdleUpdateConcurrency(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, char a3, char a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rsi
  bool v10; // r13
  KSPIN_LOCK v11; // rcx
  __int64 v12; // rbp
  int v13; // ecx
  __int64 v14; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int64 *v17; // rax
  unsigned __int32 v18; // eax
  __int64 v19; // rdx
  unsigned __int32 v20; // ett

  v4 = 0;
  v6 = 0LL;
  v10 = KeDisableInterrupts();
  KxAcquireSpinLock(SpinLock);
  v11 = SpinLock[2];
  v12 = *((unsigned int *)SpinLock + 3);
  if ( a2 > v11 )
  {
    SpinLock[2] = a2;
    v6 = a2 - v11;
    if ( a4 )
    {
      SpinLock[3] += v6;
      SpinLock[v12 + 41] += v6;
    }
  }
  v13 = v12 + 1;
  if ( a3 )
    v13 = v12 - 1;
  *((_DWORD *)SpinLock + 3) = v13;
  KxReleaseSpinLock(SpinLock);
  if ( v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v19 = v18;
        LODWORD(v19) = v18 & 0xFFDFFFFF;
        v20 = v18;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v20 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v19, SchedulerAssist, v14);
    }
    _enable();
  }
  if ( !a3 && !(_DWORD)v12 && v6 && a4 )
  {
    v17 = (unsigned __int64 *)&PpmPackageIdleIntervalLimits;
    do
    {
      if ( v6 < *v17 )
        break;
      ++v4;
      v17 += 3;
    }
    while ( v4 < 0x24 );
    _InterlockedAdd64((volatile signed __int64 *)&SpinLock[v4 + 4], v6);
  }
}
