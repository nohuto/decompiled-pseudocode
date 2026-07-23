/*
 * XREFs of EtwEventWriteEndScenario @ 0x1800B7EA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     ProviderHandleLookup @ 0x18008D650 (ProviderHandleLookup.c)
 *     EtwEventEnabled @ 0x1800B81E0 (EtwEventEnabled.c)
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

ULONG __cdecl EtwEventWriteEndScenario(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  EVENT_DESCRIPTOR v11; // xmm0
  _GUID ActivityId; // xmm1
  ULONG ReturnLength; // [rsp+50h] [rbp-68h] BYREF
  _OWORD InputBuffer[3]; // [rsp+58h] [rbp-60h] BYREF

  DWORD1(InputBuffer[0]) = 0;
  ReturnLength = 0;
  if ( !EventDescriptor )
    return 87;
  if ( !EtwEventEnabled(RegHandle, EventDescriptor) )
    return 6;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v10 = ProviderHandleLookup(v9, RegHandle);
  if ( !v10 || WORD2(RegHandle) != *(_WORD *)(v10 + 84) )
    return 6;
  v11 = *EventDescriptor;
  LODWORD(InputBuffer[0]) = *(_DWORD *)(v10 + 88);
  *(EVENT_DESCRIPTOR *)((char *)InputBuffer + 8) = v11;
  ActivityId = NtCurrentTeb()->ActivityId;
  DWORD2(InputBuffer[2]) = 11;
  *(_GUID *)((char *)&InputBuffer[1] + 8) = ActivityId;
  NtTraceControl(EtwWdiScenarioCode, InputBuffer, 0x30u, 0LL, 0, &ReturnLength);
  return EtwpEventWriteFull(
           RegHandle,
           (__int128 *)EventDescriptor,
           0LL,
           0,
           0,
           0LL,
           0LL,
           UserDataCount,
           (__int64)UserData);
}
