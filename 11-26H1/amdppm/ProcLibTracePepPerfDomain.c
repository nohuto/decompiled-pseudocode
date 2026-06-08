/*
 * XREFs of ProcLibTracePepPerfDomain @ 0x140024EB0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x140024B00 (ProcLibTraceControlCallback.c)
 *     PepQueryPerfDomainInfo @ 0x14003C524 (PepQueryPerfDomainInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTracePepPerfDomain(unsigned __int8 *a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  BOOLEAN result; // al
  int v5; // [rsp+30h] [rbp-39h] BYREF
  int v6; // [rsp+34h] [rbp-35h] BYREF
  int v7; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int8 *v9; // [rsp+50h] [rbp-19h]
  __int64 v10; // [rsp+58h] [rbp-11h]
  int *v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  int *v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  unsigned __int8 *v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  unsigned __int8 *v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]
  int *v19; // [rsp+A0h] [rbp+37h]
  __int64 v20; // [rsp+A8h] [rbp+3Fh]

  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PEP_PERF_DOMAIN_INFO;
  if ( a2 )
    v3 = &PPM_ETW_PEP_PERF_DOMAIN_INFO_RUNDOWN;
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3);
  if ( result )
  {
    v5 = a1[57];
    v6 = a1[58];
    v7 = a1[59];
    UserData.Ptr = (unsigned __int64)(a1 + 36);
    v9 = a1 + 56;
    v11 = &v5;
    v13 = &v6;
    v15 = a1 + 60;
    v17 = a1 + 64;
    v19 = &v7;
    *(_QWORD *)&UserData.Size = 4LL;
    v10 = 1LL;
    v12 = 4LL;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3, 0LL, (ULONG)7, &UserData);
  }
  return result;
}
