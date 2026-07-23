/*
 * XREFs of RtlpWnfETWEventUnsubscribe @ 0x18011433C
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x1800902B4 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventUnsubscribe(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v10; // rcx
  _BYTE Fields[6]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v13; // [rsp+36h] [rbp-82h]
  __int64 v14; // [rsp+50h] [rbp-68h]
  __int64 v15; // [rsp+58h] [rbp-60h]
  __int64 v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+68h] [rbp-50h]
  int v18; // [rsp+70h] [rbp-48h]
  int v19; // [rsp+74h] [rbp-44h]

  memset_thunk_772440563353939046(Fields, 0, 0x48uLL);
  v13 = 3361;
  v14 = a1;
  v19 = a6;
  v15 = a2;
  v16 = a3;
  v18 = a4;
  v17 = a5;
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v10 = 2147353486LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v10, 0x20402u, 0x28u, Fields);
}
