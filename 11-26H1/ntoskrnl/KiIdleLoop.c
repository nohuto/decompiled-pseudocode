/*
 * XREFs of KiIdleLoop @ 0x14072D980
 * Callers:
 *     KiSystemStartup @ 0x140BEF640 (KiSystemStartup.c)
 * Callees:
 *     KiEndIdleCycleAccumulation @ 0x140226290 (KiEndIdleCycleAccumulation.c)
 *     PoIdle @ 0x1402F6ED0 (PoIdle.c)
 *     KiIdleSchedule @ 0x140312AA0 (KiIdleSchedule.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140312BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiRetireDpcList @ 0x140337730 (KiRetireDpcList.c)
 *     KiAcquirePrcbLock @ 0x14041C280 (KiAcquirePrcbLock.c)
 *     KiReleasePrcbLock @ 0x140460670 (KiReleasePrcbLock.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     SwapContext @ 0x140734B80 (SwapContext.c)
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
