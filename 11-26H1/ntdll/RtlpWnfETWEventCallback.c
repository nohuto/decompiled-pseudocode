/*
 * XREFs of RtlpWnfETWEventCallback @ 0x180105C84
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004FFD4 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpWnfETWEventCallback(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v11; // rcx
  _BYTE v13[6]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v14; // [rsp+36h] [rbp-82h]
  __int64 v15; // [rsp+50h] [rbp-68h]
  __int64 v16; // [rsp+58h] [rbp-60h]
  __int64 v17; // [rsp+60h] [rbp-58h]
  __int64 v18; // [rsp+68h] [rbp-50h]
  int v19; // [rsp+70h] [rbp-48h]
  int v20; // [rsp+74h] [rbp-44h]
  int v21; // [rsp+78h] [rbp-40h]

  memset_thunk_772440563353939046(v13, 0, 0x50uLL);
  v14 = 3362;
  v15 = a1;
  v20 = a6;
  v21 = a7;
  v16 = a3;
  v17 = a4;
  v18 = a5;
  v19 = a2;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v11 = 2147353486LL;
  return NtTraceEvent(*(unsigned __int8 *)v11, 132098LL, 44LL, v13);
}
