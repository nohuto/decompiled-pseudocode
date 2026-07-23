/*
 * XREFs of KiUpdateSystemTime @ 0x1404641A4
 * Callers:
 *     KeSetTimeAdjustment @ 0x14037B11C (KeSetTimeAdjustment.c)
 *     KiSetSystemTimeDpc @ 0x1403E8090 (KiSetSystemTimeDpc.c)
 *     KiCalibrateTimeAdjustment @ 0x140C0DAB0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiComputeNewSystemTime @ 0x140464310 (KiComputeNewSystemTime.c)
 *     RtlWriteAcquireTickLock @ 0x1404643A4 (RtlWriteAcquireTickLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiUpdateSystemTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  bool v7; // r14
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v9; // r9
  LARGE_INTEGER v10; // r11
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v14; // rdx
  int v15; // ett

  v3 = MmWriteableSharedUserData;
  v7 = KeDisableInterrupts();
  RtlWriteAcquireTickLock(v3 + 832);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10.QuadPart = ((__int64 (__fastcall *)(_QWORD))KiComputeNewSystemTime)((LARGE_INTEGER)PerformanceCounter.QuadPart);
  if ( a1 )
  {
    KiSystemTimeErrorAccumulator = 0LL;
    v10.QuadPart = a1 + MEMORY[0xFFFFF78000000014];
  }
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = PerformanceCounter;
  *(_DWORD *)(MmWriteableSharedUserData + 28) = v10.HighPart;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 20) = v10;
  if ( a2 )
  {
    *(_QWORD *)(MmWriteableSharedUserData + 856) = *(_QWORD *)a2;
    *(_BYTE *)(MmWriteableSharedUserData + 872) = *(_BYTE *)(a2 + 8);
  }
  result = *(_QWORD *)(v3 + 832) + 1LL;
  *(_QWORD *)(v3 + 832) = result;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) != 0 )
    {
      KeBootTime = v10;
      KeBootTimeBias = 0LL;
    }
    else
    {
      KeBootTime.QuadPart += a1;
      KeBootTimeBias += a1;
    }
  }
  if ( v7 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v14 = (unsigned int)result;
        LODWORD(v14) = result & 0xFFDFFFFF;
        v15 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v15 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v14, SchedulerAssist, v9);
    }
    _enable();
  }
  return result;
}
