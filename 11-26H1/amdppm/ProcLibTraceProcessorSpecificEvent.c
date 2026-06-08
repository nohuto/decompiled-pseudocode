/*
 * XREFs of ProcLibTraceProcessorSpecificEvent @ 0x140002914
 * Callers:
 *     ProcLibTracePccCapChange @ 0x14000559C (ProcLibTracePccCapChange.c)
 *     PccInitiateExecuteCallback @ 0x14000E000 (PccInitiateExecuteCallback.c)
 *     AcpiCStateNotifyWorker @ 0x1400278C0 (AcpiCStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x14002B960 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 *     AcpiPStateNotifyWorker @ 0x1400404C0 (AcpiPStateNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x140042A28 (CpcHighestNotifyWorker.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1400029E0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorSpecificEvent(int a1, int a2, int a3, int a4, __int64 a5)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v7; // rdi
  ULONG v8; // r9d
  int v10; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]

  v10 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              a2,
                                                              a3,
                                                              (unsigned int)&v10,
                                                              (__int64)&UserData);
  v7 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v8 = 1;
      if ( a5 && a4 )
      {
        v12 = a5;
        v8 = 2;
        v13 = a4;
        v14 = 0;
      }
      LOBYTE(EventDescriptorAndProcessorId) = EtwWrite(
                                                (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                                v7,
                                                0LL,
                                                v8,
                                                &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
