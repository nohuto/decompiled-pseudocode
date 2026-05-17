/*
 * XREFs of EtwEventActivityIdControl @ 0x1800564E0
 * Callers:
 *     EtwEventWriteStartScenario @ 0x1800BAAB0 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180056610 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 */

__int64 __fastcall EtwEventActivityIdControl(int a1, _GUID *p_ActivityId)
{
  ULONG v2; // ebx
  NTSTATUS v3; // eax
  ULONG v4; // eax
  __int64 result; // rax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  _GUID ActivityId; // xmm1
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v10 = 0;
  if ( p_ActivityId )
  {
    if ( a1 == 2 )
    {
      NtCurrentTeb()->ActivityId = *p_ActivityId;
      return v2;
    }
    v6 = a1 - 1;
    if ( !v6 )
    {
      result = 0LL;
      *p_ActivityId = NtCurrentTeb()->ActivityId;
      return result;
    }
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        ActivityId = NtCurrentTeb()->ActivityId;
        NtCurrentTeb()->ActivityId = *p_ActivityId;
        result = 0LL;
        *p_ActivityId = ActivityId;
        return result;
      }
      if ( v8 != 1 )
      {
        v3 = -1073741811;
        goto LABEL_7;
      }
      *p_ActivityId = NtCurrentTeb()->ActivityId;
      p_ActivityId = &NtCurrentTeb()->ActivityId;
    }
    v3 = NtTraceControl(12LL, 0LL, 0LL, p_ActivityId, 16, &v10);
    if ( !v3 )
      return v2;
LABEL_7:
    v4 = RtlNtStatusToDosError(v3);
    v2 = v4;
    if ( v4 )
      RtlSetLastWin32Error(v4);
    return v2;
  }
  return 87LL;
}
