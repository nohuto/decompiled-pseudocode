/*
 * XREFs of HalpReboot @ 0x14057F954
 * Callers:
 *     HalReturnToFirmware @ 0x14057F640 (HalReturnToFirmware.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     HalRequestIpiSpecifyVector @ 0x1403EC570 (HalRequestIpiSpecifyVector.c)
 *     HalpAcquireCmosSpinLock @ 0x140530540 (HalpAcquireCmosSpinLock.c)
 *     HalpPowerWriteResetCommand @ 0x14057F824 (HalpPowerWriteResetCommand.c)
 *     HalpNmiReboot @ 0x140593E10 (HalpNmiReboot.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __noreturn HalpReboot()
{
  __int64 v0; // rdx
  ULONG_PTR i; // rbx

  HalpDisableInterrupts();
  if ( !HalpHvCpuManager || HalpEnlightenment )
  {
    for ( i = HalpRegisteredTimers; (ULONG_PTR *)i != &HalpRegisteredTimers; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 184) & 2) != 0 && *(_QWORD *)(i + 136) )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(i + 72), v0);
    }
  }
  HalpAcquireCmosSpinLock(1);
  if ( HalpResetParkDisposition && HalpInterruptController && HalpInterruptProcessorsStarted != 1 && !dword_140E108C8 )
  {
    HalpNmiReboot();
    HalpPmuArbiter.ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)HalpInterruptResetThisProcessor;
    HalRequestIpiSpecifyVector(2, 0LL, 0xD7u);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
    __writecr8(0LL);
    _enable();
    while ( 1 )
      ;
  }
  HalpPowerWriteResetCommand(0LL, 0LL);
}
