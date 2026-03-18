/*
 * XREFs of SshpSessionManagerInitialize @ 0x140CD7604
 * Callers:
 *     SshInitialize @ 0x140CD7428 (SshInitialize.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SshpSessionManagerTraceSystemStart @ 0x1407E4364 (SshpSessionManagerTraceSystemStart.c)
 *     CmSiRWLockInitialize @ 0x140B60560 (CmSiRWLockInitialize.c)
 */

__int64 SshpSessionManagerInitialize()
{
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&PsAltSystemCallRegistrationLock.Spare35[1]);
  memset_0(&PsAltSystemCallRegistrationLock.Spare36, 0, 0x468uLL);
  BYTE2(PsAltSystemCallRegistrationLock.SchedulerAssistLastYieldBoostTime) = 6;
  *(_QWORD *)&PsAltSystemCallRegistrationLock.ResourceIndex = SshpSessionManagerFlushControlEventBufferWorker;
  PsAltSystemCallRegistrationLock.SchedulerSharedSwappablePage = 0LL;
  PsAltSystemCallRegistrationLock.SystemAffinityTokenListHead.Next = 0LL;
  LODWORD(PsAltSystemCallRegistrationLock.AutoBoostThreadState) = 0;
  LOWORD(PsAltSystemCallRegistrationLock.SchedulerAssistLastYieldBoostTime) = 0;
  PsAltSystemCallRegistrationLock.Padding[1] = (unsigned __int64)PsAltSystemCallRegistrationLock.Padding;
  PsAltSystemCallRegistrationLock.Padding[0] = (unsigned __int64)PsAltSystemCallRegistrationLock.Padding;
  HIDWORD(PsAltSystemCallRegistrationLock.SchedulerAssistLastYieldBoostTime) = 1;
  return SshpSessionManagerTraceSystemStart();
}
