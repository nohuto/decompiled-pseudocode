/*
 * XREFs of EtwTracePsIoAttribution @ 0x140ABF0C0
 * Callers:
 *     PspSetJobIoAttribution @ 0x140ABEEC8 (PspSetJobIoAttribution.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTracePsIoAttribution(int a1, char a2, __int64 a3, int a4)
{
  const EVENT_DESCRIPTOR *v4; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-30h]
  __int64 v8; // [rsp+48h] [rbp-28h]
  int *v9; // [rsp+50h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp-18h]
  int v11; // [rsp+80h] [rbp+10h] BYREF
  __int64 v12; // [rsp+90h] [rbp+20h] BYREF
  int v13; // [rsp+98h] [rbp+28h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a1;
  v4 = (const EVENT_DESCRIPTOR *)PsDiskIoAttributionStart;
  if ( !a2 )
    v4 = &PsDiskIoAttributionStop;
  result = EtwEventEnabled((REGHANDLE)stru_140F03830.Affinity, v4);
  if ( result )
  {
    UserData.Ptr = (ULONGLONG)&v11;
    *(_QWORD *)&UserData.Size = 4LL;
    v7 = &v12;
    v8 = 8LL;
    v9 = &v13;
    v10 = 4LL;
    return EtwWrite((REGHANDLE)stru_140F03830.Affinity, v4, 0LL, 3u, &UserData);
  }
  return result;
}
