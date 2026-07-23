/*
 * XREFs of EtwEventWriteNoRegistration @ 0x1800CBC90
 * Callers:
 *     LdrpSearchPath @ 0x180097CEC (LdrpSearchPath.c)
 *     SignalStartWerSvc @ 0x1800CB794 (SignalStartWerSvc.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CBA00 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x1800CBB04 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D8C3C (LdrpCheckComponentOnDemandEtwEvent.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

ULONG __cdecl EtwEventWriteNoRegistration(
        LPCGUID ProviderId,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v8; // ebx
  EVENT_DESCRIPTOR v9; // xmm0
  _GUID ActivityId; // xmm0
  NTSTATUS v11; // eax
  _BYTE Fields[4]; // [rsp+20h] [rbp-A8h] BYREF
  int v14; // [rsp+24h] [rbp-A4h]
  EVENT_DESCRIPTOR v15; // [rsp+48h] [rbp-80h]
  _GUID v16; // [rsp+60h] [rbp-68h]
  char v17; // [rsp+70h] [rbp-58h]
  __int16 v18; // [rsp+72h] [rbp-56h]
  ULONG v19; // [rsp+74h] [rbp-54h]
  PEVENT_DATA_DESCRIPTOR v20; // [rsp+78h] [rbp-50h]
  int v21; // [rsp+90h] [rbp-38h]

  memset_thunk_772440563353939046(Fields, 0, 0x78uLL);
  v8 = 0;
  if ( !EventDescriptor || !ProviderId )
    return 87;
  v9 = *EventDescriptor;
  v14 = 0;
  v19 = UserDataCount;
  v15 = v9;
  v20 = UserData;
  ActivityId = NtCurrentTeb()->ActivityId;
  v17 = 0;
  v18 = 0;
  v16 = ActivityId;
  v21 = 0;
  v11 = NtTraceEvent((HANDLE)ProviderId, 0x700u, 0x78u, Fields);
  if ( v11 )
    return RtlNtStatusToDosError(v11);
  return v8;
}
