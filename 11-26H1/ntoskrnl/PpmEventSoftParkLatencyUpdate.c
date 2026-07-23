/*
 * XREFs of PpmEventSoftParkLatencyUpdate @ 0x1404E6850
 * Callers:
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventSoftParkLatencyUpdate(char a1, char a2, int a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // rbx
  BOOL v7; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+90h] [rbp+18h] BYREF

  v11 = a3;
  v3 = &PPM_ETW_SOFT_PARK_LATENCY_UPDATE;
  v4 = (const EVENT_DESCRIPTOR *)PPM_ETW_HIGH_PERF_SOFT_PARK_LATENCY_RUNDOWN;
  if ( !a1 )
    v4 = &PPM_ETW_SOFT_PARK_LATENCY_UPDATE;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, v4);
    if ( (_BYTE)v3 )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      v10 = 4LL;
      v7 = a2 != 0;
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = &v11;
      LOBYTE(v3) = EtwWriteEx(PpmEtwHandle, v4, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v3;
}
