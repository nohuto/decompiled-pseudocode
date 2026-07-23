/*
 * XREFs of PspIumInitialize @ 0x140CDF4BC
 * Callers:
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     VslGetNestedPageProtectionFlags @ 0x140415184 (VslGetNestedPageProtectionFlags.c)
 *     PsIumResumeAfterHibernate @ 0x140529D88 (PsIumResumeAfterHibernate.c)
 *     MmAllocateMappingAddress @ 0x140AF4800 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 */

char PspIumInitialize()
{
  PVOID MappingAddress; // rax

  if ( !VslVsmEnabled )
  {
LABEL_7:
    LOBYTE(MappingAddress) = 1;
    return (char)MappingAddress;
  }
  NormalizationListLock.SchedulerSharedSystemSlot = 0LL;
  *(_QWORD *)&NormalizationListLock.AbWaitEntryCount = PspIumWorker;
  NormalizationListLock.MutantListHead.Flink = 0LL;
  MappingAddress = MmAllocateMappingAddress(0x1000uLL, 0x466D7356u);
  PspIumFreeMapping = MappingAddress;
  if ( MappingAddress )
  {
    PspIumLogBuffer = MmAllocateIndependentPagesEx(0x2000uLL, -1, -1LL, 1uLL);
    PsIumResumeAfterHibernate();
    if ( (VslGetNestedPageProtectionFlags(0LL) & 0x40) != 0 )
      stru_140FC11F0.KernelStack = (void *)((unsigned __int64)stru_140FC11F0.KernelStack & 0xFFFFFF0FFFFFFFFFuLL | 0x5000000000LL);
    if ( PspIumLogBuffer )
    {
      BYTE4(NormalizationListLock.SuspendEvent.Header.WaitListHead.Blink) = 0;
      KeRegisterBugCheckReasonCallback(
        (PKBUGCHECK_REASON_CALLBACK_RECORD)&NormalizationListLock.SchedulerApcFill5[64],
        (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PspVsmLogBugCheckCallback,
        KbCallbackSecondaryDumpData,
        (PUCHAR)"SecureKernelFailureLog");
    }
    goto LABEL_7;
  }
  return (char)MappingAddress;
}
