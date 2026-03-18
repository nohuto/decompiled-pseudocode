/*
 * XREFs of PspIumInitialize @ 0x140CD913C
 * Callers:
 *     PspInitPhase0 @ 0x140D06FAC (PspInitPhase0.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024D7A0 (KeRegisterBugCheckReasonCallback.c)
 *     VslGetNestedPageProtectionFlags @ 0x14041D934 (VslGetNestedPageProtectionFlags.c)
 *     PsIumResumeAfterHibernate @ 0x140527718 (PsIumResumeAfterHibernate.c)
 *     MmAllocateMappingAddress @ 0x140AF1F30 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
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
  *(_QWORD *)&NormalizationListLock.SuspendEvent.Header.Lock = 0LL;
  *(_QWORD *)&NormalizationListLock.SchedulerApcFill5[80] = PspIumWorker;
  NormalizationListLock.SchedulerApc.SystemArgument1 = 0LL;
  MappingAddress = MmAllocateMappingAddress(0x1000uLL, 0x466D7356u);
  PspIumFreeMapping = MappingAddress;
  if ( MappingAddress )
  {
    PspIumLogBuffer = MmAllocateIndependentPagesEx(0x2000uLL, -1, -1LL, 1uLL);
    PsIumResumeAfterHibernate();
    if ( (VslGetNestedPageProtectionFlags(0LL) & 0x40) != 0 )
      stru_140FC01F0.KernelStack = (void *)((unsigned __int64)stru_140FC01F0.KernelStack & 0xFFFFFF0FFFFFFFFFuLL | 0x5000000000LL);
    if ( PspIumLogBuffer )
    {
      BYTE4(NormalizationListLock.MutantListHead.Blink) = 0;
      KeRegisterBugCheckReasonCallback(
        (PKBUGCHECK_REASON_CALLBACK_RECORD)&NormalizationListLock.SuspendEvent.Header.WaitListHead,
        (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PspVsmLogBugCheckCallback,
        KbCallbackSecondaryDumpData,
        (PUCHAR)"SecureKernelFailureLog");
    }
    goto LABEL_7;
  }
  return (char)MappingAddress;
}
