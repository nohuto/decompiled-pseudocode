/*
 * XREFs of PpmEventAutonomousModeChange @ 0x14060DF10
 * Callers:
 *     PpmUpdateTargetProcessorPolicy @ 0x1404E92BC (PpmUpdateTargetProcessorPolicy.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     PpmEventGetEventDescriptorAndProcessorId @ 0x14044F8A0 (PpmEventGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall PpmEventAutonomousModeChange(__int64 a1, int a2)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  int v5; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  __int64 v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+88h] [rbp+10h] BYREF

  v9 = a2;
  v5 = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)PpmEventGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)PPM_ETW_AUTONOMOUS_MODE_CHANGE,
                                                              (__int64)PPM_ETW_AUTONOMOUS_MODE_CHANGE_HV,
                                                              (__int64)&v5,
                                                              &UserData);
  v3 = EventDescriptorAndProcessorId;
  if ( PpmEtwRegistered )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v7 = &v9;
      v8 = 4LL;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWriteEx(
                                                (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
                                                v3,
                                                0LL,
                                                0,
                                                0LL,
                                                0LL,
                                                2u,
                                                &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
