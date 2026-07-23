/*
 * XREFs of EtwWriteUMSecurityEvent @ 0x1800E6120
 * Callers:
 *     EvtIntReportEventWorker @ 0x1800E5CD0 (EvtIntReportEventWorker.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

ULONG __cdecl EtwWriteUMSecurityEvent(
        PCEVENT_DESCRIPTOR EventDescriptor,
        USHORT EventProperty,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v8; // ebx
  EVENT_DESCRIPTOR v9; // xmm0
  _GUID ActivityId; // xmm0
  NTSTATUS v11; // eax
  _BYTE Fields[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int16 v14; // [rsp+24h] [rbp-A4h]
  USHORT v15; // [rsp+26h] [rbp-A2h]
  EVENT_DESCRIPTOR v16; // [rsp+48h] [rbp-80h]
  _GUID v17; // [rsp+60h] [rbp-68h]
  char v18; // [rsp+70h] [rbp-58h]
  __int16 v19; // [rsp+72h] [rbp-56h]
  ULONG v20; // [rsp+74h] [rbp-54h]
  PEVENT_DATA_DESCRIPTOR v21; // [rsp+78h] [rbp-50h]
  int v22; // [rsp+90h] [rbp-38h]

  memset_thunk_772440563353939046(Fields, 0, 0x78uLL);
  v8 = 0;
  if ( !EventDescriptor )
    return 87;
  v9 = *EventDescriptor;
  v14 = 0;
  v15 = EventProperty;
  v16 = v9;
  v20 = UserDataCount;
  v21 = UserData;
  ActivityId = NtCurrentTeb()->ActivityId;
  v18 = 0;
  v19 = 0;
  v17 = ActivityId;
  v22 = 0;
  v11 = NtTraceEvent(0LL, 0x500u, 0x78u, Fields);
  if ( v11 )
    return RtlNtStatusToDosError(v11);
  return v8;
}
