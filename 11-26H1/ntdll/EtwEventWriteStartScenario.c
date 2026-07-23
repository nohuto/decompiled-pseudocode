/*
 * XREFs of EtwEventWriteStartScenario @ 0x1800B7FE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventActivityIdControl @ 0x180040A60 (EtwEventActivityIdControl.c)
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     ProviderHandleLookup @ 0x18008D650 (ProviderHandleLookup.c)
 *     EtwEventEnabled @ 0x1800B81E0 (EtwEventEnabled.c)
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

ULONG __cdecl EtwEventWriteStartScenario(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v8; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  EVENT_DESCRIPTOR v12; // xmm0
  _GUID ActivityId; // xmm1
  unsigned __int64 v14; // xmm1_8
  ULONG ReturnLength; // [rsp+50h] [rbp-19h] BYREF
  GUID InputBuffer[3]; // [rsp+58h] [rbp-11h] BYREF

  *(_DWORD *)&InputBuffer[0].Data2 = 0;
  ReturnLength = 0;
  if ( !EventDescriptor )
    return 87;
  if ( !EtwEventEnabled(RegHandle, EventDescriptor) )
    return 6;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v11 = ProviderHandleLookup(v10, RegHandle);
  if ( !v11 || WORD2(RegHandle) != *(_WORD *)(v11 + 84) )
    return 6;
  v12 = *EventDescriptor;
  InputBuffer[0].Data1 = *(_DWORD *)(v11 + 88);
  *(EVENT_DESCRIPTOR *)InputBuffer[0].Data4 = v12;
  ActivityId = NtCurrentTeb()->ActivityId;
  *(_GUID *)InputBuffer[1].Data4 = ActivityId;
  if ( _mm_cvtsi128_si32((__m128i)ActivityId)
    || ActivityId.Data2
    || ActivityId.Data3
    || (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)ActivityId, 8))
    || (v14 = _mm_srli_si128((__m128i)ActivityId, 8).m128i_u64[0], BYTE1(v14))
    || BYTE2(v14)
    || BYTE3(v14)
    || BYTE4(v14)
    || BYTE5(v14)
    || BYTE6(v14)
    || HIBYTE(v14)
    || (v8 = EtwEventActivityIdControl(3u, (LPGUID)InputBuffer[1].Data4)) == 0
    && (v8 = EtwEventActivityIdControl(2u, (LPGUID)InputBuffer[1].Data4)) == 0 )
  {
    *(_DWORD *)InputBuffer[2].Data4 = 10;
    v8 = EtwpEventWriteFull(
           RegHandle,
           (__int128 *)EventDescriptor,
           0LL,
           0,
           0,
           0LL,
           0LL,
           UserDataCount,
           (__int64)UserData);
    NtTraceControl(EtwWdiScenarioCode, InputBuffer, 0x30u, 0LL, 0, &ReturnLength);
  }
  return v8;
}
