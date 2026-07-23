/*
 * XREFs of RtlpWnfETWEventCallback @ 0x1801054D4
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18003A554 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventCallback(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v11; // rcx
  _BYTE Fields[6]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v14; // [rsp+36h] [rbp-82h]
  __int64 v15; // [rsp+50h] [rbp-68h]
  __int64 v16; // [rsp+58h] [rbp-60h]
  __int64 v17; // [rsp+60h] [rbp-58h]
  __int64 v18; // [rsp+68h] [rbp-50h]
  int v19; // [rsp+70h] [rbp-48h]
  int v20; // [rsp+74h] [rbp-44h]
  int v21; // [rsp+78h] [rbp-40h]

  memset_thunk_772440563353939046(Fields, 0, 0x50uLL);
  v14 = 3362;
  v15 = a1;
  v20 = a6;
  v21 = a7;
  v16 = a3;
  v17 = a4;
  v18 = a5;
  v19 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v11 = 2147353486LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v11, 0x20402u, 0x2Cu, Fields);
}
