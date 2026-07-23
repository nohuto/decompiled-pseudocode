/*
 * XREFs of EtwEventActivityIdControl @ 0x180040A60
 * Callers:
 *     EtwEventWriteStartScenario @ 0x1800B7FE0 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 */

ULONG __cdecl EtwEventActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  ULONG v2; // ebx
  NTSTATUS v3; // eax
  LONG v4; // eax
  ULONG result; // eax
  ULONG v6; // ecx
  ULONG v7; // ecx
  ULONG v8; // ecx
  _GUID v9; // xmm1
  ULONG ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  ReturnLength = 0;
  if ( ActivityId )
  {
    if ( ControlCode == 2 )
    {
      NtCurrentTeb()->ActivityId = *ActivityId;
      return v2;
    }
    v6 = ControlCode - 1;
    if ( !v6 )
    {
      result = 0;
      *ActivityId = NtCurrentTeb()->ActivityId;
      return result;
    }
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        v9 = NtCurrentTeb()->ActivityId;
        NtCurrentTeb()->ActivityId = *ActivityId;
        result = 0;
        *ActivityId = v9;
        return result;
      }
      if ( v8 != 1 )
      {
        v3 = -1073741811;
        goto LABEL_7;
      }
      *ActivityId = NtCurrentTeb()->ActivityId;
      ActivityId = &NtCurrentTeb()->ActivityId;
    }
    v3 = NtTraceControl(EtwActivityIdCreate, 0LL, 0, ActivityId, 0x10u, &ReturnLength);
    if ( !v3 )
      return v2;
LABEL_7:
    v4 = RtlNtStatusToDosError(v3);
    v2 = v4;
    if ( v4 )
      RtlSetLastWin32Error(v4);
    return v2;
  }
  return 87;
}
