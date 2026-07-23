/*
 * XREFs of TppETWCallbackDequeue @ 0x180015328
 * Callers:
 *     TppSimplepExecuteCallback @ 0x1800149B0 (TppSimplepExecuteCallback.c)
 *     TppExecuteWaitTimerCallback @ 0x1800FB350 (TppExecuteWaitTimerCallback.c)
 *     TppWorkUnposted @ 0x180110350 (TppWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall TppETWCallbackDequeue(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v12; // [rsp+26h] [rbp-82h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h]
  __int64 v16; // [rsp+58h] [rbp-50h]
  __int64 v17; // [rsp+60h] [rbp-48h]

  memset_thunk_772440563353939046(Fields, 0, 0x48uLL);
  v13 = a1;
  v12 = 7201;
  v14 = a2;
  v15 = a3;
  v16 = a4;
  v17 = a5;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x403u, 0x28u, Fields);
}
