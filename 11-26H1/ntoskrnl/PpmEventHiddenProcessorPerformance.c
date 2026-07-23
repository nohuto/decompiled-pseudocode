/*
 * XREFs of PpmEventHiddenProcessorPerformance @ 0x1407E0D64
 * Callers:
 *     PpmEventTraceProcessorPerformance @ 0x140B101E8 (PpmEventTraceProcessorPerformance.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventHiddenProcessorPerformance(__int64 a1, int a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  __int16 v7; // [rsp+38h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v9; // [rsp+58h] [rbp+7h]
  __int64 v10; // [rsp+60h] [rbp+Fh]
  int *v11; // [rsp+68h] [rbp+17h]
  __int64 v12; // [rsp+70h] [rbp+1Fh]
  int *v13; // [rsp+78h] [rbp+27h]
  __int64 v14; // [rsp+80h] [rbp+2Fh]
  int *v15; // [rsp+88h] [rbp+37h]
  __int64 v16; // [rsp+90h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v18; // [rsp+C0h] [rbp+6Fh] BYREF
  int v19; // [rsp+C8h] [rbp+77h] BYREF
  int v20; // [rsp+D0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v20 = a4;
  v19 = a3;
  v18 = a2;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HIDDEN_PROCESSOR_CURRENT_PERF_RUNDOWN);
    if ( (_BYTE)v4 )
    {
      v7 = *(unsigned __int8 *)(a1 + 208);
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = a1 + 209;
      v11 = &v18;
      v13 = &v19;
      v15 = &v20;
      v10 = 1LL;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      LOBYTE(v4) = EtwWrite(PpmEtwHandle, &PPM_ETW_HIDDEN_PROCESSOR_CURRENT_PERF_RUNDOWN, 0LL, 5u, &UserData);
    }
  }
  return (char)v4;
}
