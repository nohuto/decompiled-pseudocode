/*
 * XREFs of KeThawExecution @ 0x1404FBB50
 * Callers:
 *     ExpWaitForBootDevices @ 0x1406D17F0 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiSendThawExecution @ 0x1404FBC80 (KiSendThawExecution.c)
 *     KiEndDebugAccumulation @ 0x1404FBE70 (KiEndDebugAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeThawExecution(char a1)
{
  char v2; // di
  __int64 v3; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v12; // rdx
  int v13; // ett

  v2 = 0;
  if ( (KiFreezeFlag & 8) == 0 )
    v2 = KdPortLocked;
  guard_dispatch_icall_no_overrides(0LL, 0LL);
  if ( !PoAllProcIntrDisabled )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v3 = MmWriteableSharedUserData;
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = PerformanceCounter;
    KiInterruptTimeErrorAccumulator = 0LL;
  }
  LOBYTE(v3) = 1;
  KiSendThawExecution(v3);
  v5 = (unsigned __int8)KiOldIrql;
  KiFreezeFlag = 0;
  KxReleaseSpinLock(&KiFreezeExecutionLock);
  if ( v2 )
    KxReleaseSpinLock(&KdDebuggerLock);
  v6 = __readcr4();
  if ( (v6 & 0x20080) != 0 )
  {
    __writecr4(v6 ^ 0x80);
    __writecr4(v6);
  }
  else
  {
    v7 = __readcr3();
    __writecr3(v7);
  }
  result = KiEndDebugAccumulation(KeGetCurrentPrcb());
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  __writecr8(v5);
  if ( a1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v12 = (unsigned int)result;
        LODWORD(v12) = result & 0xFFDFFFFF;
        v13 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v13 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v12, SchedulerAssist, v9);
    }
    _enable();
  }
  return result;
}
