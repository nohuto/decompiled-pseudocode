/*
 * XREFs of PpmEventTraceProcessorLatencyLimitChange @ 0x140257938
 * Callers:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028EF68 (PpmIdleUpdateProcessorLatencyLimit.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceProcessorLatencyLimitChange(__int64 a1, int a2)
{
  const GUID *ActivityId; // r10
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r11
  unsigned __int8 v6; // al
  __int16 v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int *v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+98h] [rbp+18h] BYREF

  v13 = a2;
  ActivityId = 0LL;
  v3 = a1;
  if ( PpmEtwRegistered && PpmEtwHandle )
  {
    if ( (v4 = *(_QWORD *)(PpmEtwHandle + 32), v5 = 2LL, *(_DWORD *)(v4 + 96))
      && ((v6 = *(_BYTE *)(v4 + 100), v6 >= 5u) || !v6)
      && (*(_BYTE *)(v4 + 112) & 2) != 0
      && (*(_QWORD *)(v4 + 120) & 2LL) == *(_QWORD *)(v4 + 120)
      || *(_WORD *)(PpmEtwHandle + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 96LL, 5u, 2LL) )
    {
      v7 = *(unsigned __int8 *)(v3 + 208);
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = v3 + 209;
      *(_QWORD *)&UserData.Size = v5;
      v11 = &v13;
      v10 = 1LL;
      v12 = 4LL;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PROCESSOR_LATENCY_CHANGE, 0LL, 0, ActivityId, ActivityId, 3u, &UserData);
    }
  }
}
