/*
 * XREFs of KiIdleLoop @ 0x140728DB0
 * Callers:
 *     KiSystemStartup @ 0x140BE9640 (KiSystemStartup.c)
 * Callees:
 *     KiEndIdleCycleAccumulation @ 0x140224900 (KiEndIdleCycleAccumulation.c)
 *     KiIdleSchedule @ 0x1402C7E00 (KiIdleSchedule.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x1402C7F20 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiRetireDpcList @ 0x140335700 (KiRetireDpcList.c)
 *     PoIdle @ 0x1403E9FF0 (PoIdle.c)
 *     KiAcquirePrcbLock @ 0x14042F370 (KiAcquirePrcbLock.c)
 *     KiReleasePrcbLock @ 0x140466F20 (KiReleasePrcbLock.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 *     SwapContext @ 0x14072FFB0 (SwapContext.c)
 */

void __fastcall __noreturn KiIdleLoop(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 IdleThread; // rdi
  __int64 NextThread; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (KiTrapFeatures & 8) != 0 )
    __asm { clac }
  retaddr = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  while ( 1 )
  {
    while ( 1 )
    {
      if ( HvlEnableIdleYield )
        _mm_pause();
      _enable();
      _disable();
      if ( (CurrentPrcb->DpcRequestSummary & 0xBF) != 0 )
        KiRetireDpcList(CurrentPrcb);
      if ( CurrentPrcb->QuantumEnd )
      {
        CurrentPrcb->QuantumEnd = 0;
        _enable();
        KiQuantumEnd(a1);
        _disable();
      }
      _InterlockedOr8((volatile signed __int8 *)&CurrentPrcb->IdleHalt, 1u);
      if ( !CurrentPrcb->NextThread )
        break;
      CurrentPrcb->IdleHalt = 0;
      _enable();
      IdleThread = (__int64)CurrentPrcb->IdleThread;
      KiAcquirePrcbLock((__int64)CurrentPrcb);
      NextThread = (__int64)CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      if ( NextThread != IdleThread )
      {
        _disable();
        KiEndIdleCycleAccumulation((__int64)CurrentPrcb, IdleThread);
        _enable();
        KiUpdatePriorityMatrixForRunningTransition((__int64)CurrentPrcb, NextThread);
        KiReleasePrcbLock((__int64)CurrentPrcb);
        goto LABEL_25;
      }
      KiReleasePrcbLock((__int64)CurrentPrcb);
    }
    if ( CurrentPrcb->IdleSchedule )
    {
      CurrentPrcb->IdleHalt = 0;
      _enable();
      if ( KiIdleSchedule((__int64)CurrentPrcb) )
      {
LABEL_25:
        CurrentPrcb->InterruptRequest |= (CurrentPrcb->DpcRequestSummary & 0xAF) != 0;
        if ( (KiTrapFeatures & 8) != 0 )
          __asm { stac }
        SwapContext(1LL);
        if ( (KiTrapFeatures & 8) != 0 )
          __asm { clac }
      }
    }
    else
    {
      if ( (CurrentPrcb->DpcRequestSummary & 0xBF) == 0 )
      {
        if ( (KiTrapFeatures & 8) != 0 )
          __asm { stac }
        if ( KiIrqlFlags )
          KzSetIrqlUnsafe(0);
        else
          __writecr8(0LL);
        PoIdle((ULONG_PTR)CurrentPrcb);
        _enable();
        a1 = 2LL;
        if ( KiIrqlFlags )
          KzSetIrqlUnsafe(2u);
        else
          __writecr8(2uLL);
        if ( (KiTrapFeatures & 8) != 0 )
          __asm { clac }
      }
      CurrentPrcb->IdleHalt = 0;
    }
  }
}
