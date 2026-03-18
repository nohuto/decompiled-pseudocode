/*
 * XREFs of ExInitializeExternalBootSupport @ 0x140CE6244
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 ExInitializeExternalBootSupport()
{
  __int64 result; // rax

  LOWORD(ExSaPageGroupDescriptorArrayLock.SchedulerSharedSwappablePage) = 1;
  dword_140EFEF38 = 0;
  ExSaPageGroupDescriptorArrayLock.Padding[3] = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock.Padding[2];
  ExSaPageGroupDescriptorArrayLock.Padding[2] = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock.Padding[2];
  ExSaPageGroupDescriptorArrayLock.Spare32 = &ExSaPageGroupDescriptorArrayLock.1136;
  ExSaPageGroupDescriptorArrayLock.AutoBoostThreadState = &ExSaPageGroupDescriptorArrayLock.1136;
  ExSaPageGroupDescriptorArrayLock.Padding[0] = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistLastYieldBoostTime;
  ExSaPageGroupDescriptorArrayLock.SchedulerAssistLastYieldBoostTime = (__int64)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistLastYieldBoostTime;
  result = 0LL;
  qword_140EFEF40 = 0LL;
  ExSaPageGroupDescriptorArrayLock.Padding[4] = 0LL;
  BYTE2(ExSaPageGroupDescriptorArrayLock.SchedulerSharedSwappablePage) = 6;
  HIDWORD(ExSaPageGroupDescriptorArrayLock.SchedulerSharedSwappablePage) = 0;
  LOWORD(ExSaPageGroupDescriptorArrayLock.SchedulerAssistYieldCounter) = 1;
  BYTE2(ExSaPageGroupDescriptorArrayLock.SchedulerAssistYieldCounter) = 6;
  ExSaPageGroupDescriptorArrayLock.SchedulerAssistYieldBoostCount = 1;
  return result;
}
