/*
 * XREFs of ExInitializeExternalBootSupport @ 0x140CEC5E4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 ExInitializeExternalBootSupport()
{
  __int64 result; // rax

  LOWORD(ExSaPageGroupDescriptorArrayLock.SchedulerAssistLastYieldBoostTime) = 1;
  LODWORD(ExSaPageGroupDescriptorArrayLock.KcsanThread) = 0;
  ExSaPageGroupDescriptorArrayLock.Padding[4] = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock.Padding[3];
  ExSaPageGroupDescriptorArrayLock.Padding[3] = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock.Padding[3];
  ExSaPageGroupDescriptorArrayLock.Padding[1] = (unsigned __int64)ExSaPageGroupDescriptorArrayLock.Padding;
  ExSaPageGroupDescriptorArrayLock.Padding[0] = (unsigned __int64)ExSaPageGroupDescriptorArrayLock.Padding;
  qword_140EFF290 = (__int64)&qword_140EFF288;
  qword_140EFF288 = (__int64)&qword_140EFF288;
  result = 0LL;
  ExSaPageGroupDescriptorArrayLock.Padding[2] = 0LL;
  *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistYieldCounter = 0LL;
  BYTE2(ExSaPageGroupDescriptorArrayLock.SchedulerAssistLastYieldBoostTime) = 6;
  HIDWORD(ExSaPageGroupDescriptorArrayLock.SchedulerAssistLastYieldBoostTime) = 0;
  LOWORD(word_140EFF280.Header.Lock) = 1;
  byte_140EFF282 = 6;
  dword_140EFF284 = 1;
  return result;
}
