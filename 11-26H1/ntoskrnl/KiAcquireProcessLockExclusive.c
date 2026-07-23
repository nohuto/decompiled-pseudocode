/*
 * XREFs of KiAcquireProcessLockExclusive @ 0x140203770
 * Callers:
 *     KeSetExpectedConcurrencyCountProcess @ 0x140200A58 (KeSetExpectedConcurrencyCountProcess.c)
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeSetQuantumProcess @ 0x1402028D4 (KeSetQuantumProcess.c)
 *     KeSetExecuteOptions @ 0x140202B0C (KeSetExecuteOptions.c)
 *     KeSetProcessPpmPolicy @ 0x140203314 (KeSetProcessPpmPolicy.c)
 *     KeSetDisableQuantumProcess @ 0x140203380 (KeSetDisableQuantumProcess.c)
 *     KeTerminateThread @ 0x140203468 (KeTerminateThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140528290 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x14052FE54 (KeSetCpuSetsProcess.c)
 *     KeAdjustTimerDelayProcess @ 0x1405E806C (KeAdjustTimerDelayProcess.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiAcquireProcessLockExclusive(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  bool v5; // zf
  unsigned int v6; // edi
  int i; // edx

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  v5 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
  *v2 = CurrentIrql;
  if ( v5 || PopHibernateInProgress )
  {
    v6 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 64), 0x1Fu) )
    {
      LOBYTE(a2) = -1;
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 64, a2);
    }
    for ( i = *(_DWORD *)(a1 + 64); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(a1 + 64) )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 64), 0x40000000u);
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64, a2);
  }
}
