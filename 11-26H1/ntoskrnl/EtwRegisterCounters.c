/*
 * XREFs of EtwRegisterCounters @ 0x1408B19E8
 * Callers:
 *     ExpPcwHostCallback @ 0x140847B90 (ExpPcwHostCallback.c)
 * Callees:
 *     ExpRegisterCounterSet @ 0x140847E6C (ExpRegisterCounterSet.c)
 */

NTSTATUS EtwRegisterCounters()
{
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+20h] [rbp-40h] BYREF

  *(_QWORD *)&Info.Version = 512LL;
  Info.Name = (const _UNICODE_STRING *)L"24";
  *(_QWORD *)&Info.CounterCount = 6LL;
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpInitRegistrationInformationEventTracingCounterSet'::`2'::Descriptors;
  *(_QWORD *)&Info.Flags = 1LL;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))EtwpEventTracingCounterSetCallback;
  Info.CallbackContext = (void *)1;
  ExpRegisterCounterSet(&PcwpEventTracingCounterSet, &Info);
  *(_QWORD *)&Info.Version = 512LL;
  Info.Name = (const _UNICODE_STRING *)L"BD";
  *(_QWORD *)&Info.CounterCount = 5LL;
  Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)`PcwpInitRegistrationInformationEventTracingSessionCounterSet'::`2'::Descriptors;
  *(_QWORD *)&Info.Flags = 1LL;
  Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))EtwpEventTracingCounterSetCallback;
  Info.CallbackContext = (void *)2;
  return ExpRegisterCounterSet(&PcwpEventTracingSessionCounterSet, &Info);
}
