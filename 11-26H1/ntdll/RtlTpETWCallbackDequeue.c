/*
 * XREFs of RtlTpETWCallbackDequeue @ 0x180067254
 * Callers:
 *     RtlpTpWorkCallback @ 0x180066C90 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180066FE0 (RtlpTpWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlTpETWCallbackDequeue(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  _BYTE v10[6]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v11; // [rsp+26h] [rbp-72h]
  __int64 v12; // [rsp+40h] [rbp-58h]
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  __int64 v15; // [rsp+58h] [rbp-40h]
  __int64 v16; // [rsp+60h] [rbp-38h]

  memset_thunk_772440563353939046(v10, 0, 0x48uLL);
  v12 = 0LL;
  v11 = 7201;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v16 = a5;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  return NtTraceEvent(*(unsigned __int8 *)v8, 1027LL, 40LL, v10);
}
