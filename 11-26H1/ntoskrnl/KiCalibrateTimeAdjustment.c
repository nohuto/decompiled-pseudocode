/*
 * XREFs of KiCalibrateTimeAdjustment @ 0x140C0DAB0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KeInsertQueueDpc @ 0x1403087F0 (KeInsertQueueDpc.c)
 *     KeRemoveQueueDpc @ 0x140430440 (KeRemoveQueueDpc.c)
 *     KiUpdateSystemTime @ 0x1404641A4 (KiUpdateSystemTime.c)
 *     RtlWriteAcquireTickLock @ 0x1404643A4 (RtlWriteAcquireTickLock.c)
 *     RtlWriteReleaseTickLock @ 0x14047EAF8 (RtlWriteReleaseTickLock.c)
 *     KeRebaselineInterruptTime @ 0x14050E8D8 (KeRebaselineInterruptTime.c)
 *     KiPollFreezeExecution @ 0x14052EE30 (KiPollFreezeExecution.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     HalCalibratePerformanceCounter @ 0x140578FF0 (HalCalibratePerformanceCounter.c)
 *     KiRebaselineProcessorStartCycles @ 0x1405E7BE4 (KiRebaselineProcessorStartCycles.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall KiCalibrateTimeAdjustment(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r14
  int v3; // eax
  __int64 v4; // r12
  bool v5; // r15
  unsigned __int64 *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  struct _KPRCB *v9; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned __int64 v13; // rbx
  bool v14; // al
  _QWORD *v15; // r8
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  LARGE_INTEGER v18; // r9
  unsigned __int64 v19; // kr00_8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // [rsp+30h] [rbp-30h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-18h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *(_DWORD *)(Argument + 4);
  v4 = MmWriteableSharedUserData;
  PerformanceFrequency.QuadPart = 0LL;
  if ( CurrentPrcb->Number == v3 )
  {
    v14 = KeDisableInterrupts();
    v16 = *(_QWORD *)(Argument + 8);
    v5 = v14;
    v17 = v16 + *v15;
    v26[0] = v16;
    v18 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( *(_BYTE *)Argument )
    {
      LODWORD(v23) = (__PAIR64__(HIDWORD(v26[0]), v16) * PerformanceFrequency.QuadPart) >> 32;
      HIDWORD(v23) = PerformanceFrequency.HighPart * HIDWORD(v26[0])
                   + (((((unsigned int)v16 * (unsigned __int64)PerformanceFrequency.LowPart) >> 32)
                     + PerformanceFrequency.LowPart * (unsigned __int64)HIDWORD(v26[0])
                     + (unsigned int)v16 * (unsigned __int64)(unsigned int)PerformanceFrequency.HighPart) >> 32);
      v19 = v23;
      LODWORD(v23) = v16 * PerformanceFrequency.LowPart;
      *(_DWORD *)(Argument + 20) = v19 / 0x989680;
      HIDWORD(v23) = v19 % 0x989680;
      *(_DWORD *)(Argument + 16) = v23 / 0x989680;
      *(_QWORD *)(Argument + 16) += v18.QuadPart;
    }
    v20 = *(_QWORD *)(Argument + 8);
    KiTickOffset = KeMaximumIncrement - v17 % KeMaximumIncrement;
    *(_QWORD *)(MmWriteableSharedUserData + 944) += v20;
    if ( MEMORY[0xFFFFF780000003B0] < 0 )
      __fastfail(5u);
    RtlWriteAcquireTickLock((signed __int64 *)(v4 + 832));
    *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(v17);
    *(_QWORD *)(MmWriteableSharedUserData + 8) = v17;
    *(_DWORD *)(MmWriteableSharedUserData + 808) = HIDWORD(v21);
    *(_QWORD *)(MmWriteableSharedUserData + 800) = v21;
    *(_QWORD *)(MmWriteableSharedUserData + 848) = v22;
    KiInterruptTimeErrorAccumulator = 0LL;
    RtlWriteReleaseTickLock((__int64 *)(v4 + 832));
    *(_DWORD *)(Argument + 28) = 0;
    v6 = (unsigned __int64 *)0xFFFFF78000000008LL;
  }
  else
  {
    v5 = KeDisableInterrupts();
    do
      KiPollFreezeExecution();
    while ( *(_DWORD *)(Argument + 28) );
  }
  if ( KiSerializeTimerExpiration )
  {
    if ( !CurrentPrcb->ClockOwner )
      goto LABEL_9;
    v7 = KiProcessorBlock[0];
  }
  else
  {
    v7 = (__int64)CurrentPrcb;
  }
  if ( v7 != -16640 )
  {
    v13 = *v6;
    KeRemoveQueueDpc(&CurrentPrcb->TimerExpirationDpc);
    KeInsertQueueDpc(&CurrentPrcb->TimerExpirationDpc, (PVOID)((unsigned int)(v13 >> 18) - 256), 0LL);
  }
LABEL_9:
  CurrentPrcb->LastTick = MEMORY[0xFFFFF78000000320];
  v8 = *(_QWORD *)(Argument + 8);
  if ( *(_BYTE *)Argument )
  {
    HalCalibratePerformanceCounter((volatile signed __int32 *)(Argument + 24), *(_QWORD *)(Argument + 16), (__int64)v6);
    KeRebaselineInterruptTime();
    if ( CurrentPrcb->CycleAccumulationInitialized )
      KiRebaselineProcessorStartCycles((__int64)CurrentPrcb);
    if ( (xmmword_140FC0C10 & 0x8000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v26[1] = 8LL;
      v26[0] = &PerformanceCounter;
      EtwTraceKernelEvent((int)v26, 1, 0x80008000, 4658, 5249026);
    }
  }
  if ( CurrentPrcb->ClockOwner )
    KiUpdateSystemTime(v8, 0LL, 3);
  if ( v5 )
  {
    v9 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v9->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v9);
    }
    _enable();
  }
}
