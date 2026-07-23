/*
 * XREFs of PpmEventTracePerfCheckStart @ 0x140258428
 * Callers:
 *     PpmCheckStart @ 0x14025832C (PpmCheckStart.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTracePerfCheckStart(__int64 a1, int a2)
{
  const GUID *ActivityId; // r10
  __int64 v3; // rcx
  unsigned __int8 v4; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-28h]
  __int64 v7; // [rsp+60h] [rbp-20h]
  int *v8; // [rsp+68h] [rbp-18h]
  __int64 v9; // [rsp+70h] [rbp-10h]
  __int64 v10; // [rsp+90h] [rbp+10h] BYREF
  int v11; // [rsp+98h] [rbp+18h] BYREF

  v11 = a2;
  v10 = a1;
  ActivityId = 0LL;
  if ( PpmEtwRegistered && PpmEtwHandle )
  {
    if ( (v3 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v3 + 96))
      && ((v4 = *(_BYTE *)(v3 + 100), v4 >= 5u) || !v4)
      && (*(_BYTE *)(v3 + 112) & 2) != 0
      && (*(_QWORD *)(v3 + 120) & 2LL) == *(_QWORD *)(v3 + 120)
      || *(_WORD *)(PpmEtwHandle + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 96LL, 5u, 2LL) )
    {
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      *(_QWORD *)&UserData.Size = 8LL;
      v6 = &v10;
      v7 = 8LL;
      v8 = &v11;
      v9 = 4LL;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PERF_CHECK_START, 0LL, 0, ActivityId, ActivityId, 3u, &UserData);
    }
  }
}
