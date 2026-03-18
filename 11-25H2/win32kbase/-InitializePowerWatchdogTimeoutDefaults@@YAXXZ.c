/*
 * XREFs of ?InitializePowerWatchdogTimeoutDefaults@@YAXXZ @ 0x140142EEC
 * Callers:
 *     ?InitializePowerWatchdogTimeouts@@YAHXZ @ 0x140142D24 (-InitializePowerWatchdogTimeouts@@YAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall InitializePowerWatchdogTimeoutDefaults(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  char *v5; // rdx
  _DWORD *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v8[15]; // [rsp+28h] [rbp-31h] BYREF

  v7 = 16LL;
  v8[0] = L"PowerWatchdogRequestQueueTimeoutMsec";
  v8[3] = L"PowerWatchdogPoCalloutTimeoutMsec";
  v8[6] = L"PowerWatchdogPowerOnGdiTimeoutMsec";
  v8[9] = L"PowerWatchdogDwmSyncFlushTimeoutMsec";
  v8[12] = L"PowerWatchdogDrvSetMonitorTimeoutMsec";
  v8[1] = 30000LL;
  v8[2] = 32LL;
  v8[4] = 10000LL;
  v8[5] = 48LL;
  v8[7] = 30000LL;
  v8[8] = 64LL;
  v8[10] = 30000LL;
  v8[11] = 80LL;
  v8[13] = 10000LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = 5LL;
  v4 = UserSessionState + 368;
  v5 = (char *)&v8[-1] - v4;
  v6 = (_DWORD *)(v4 + 16);
  do
  {
    *(v6 - 4) = *(_DWORD *)((char *)v6 + (_QWORD)v5 - 16);
    *((_QWORD *)v6 - 1) = *(_QWORD *)((char *)v6 + (_QWORD)v8 - v4 - 16);
    *v6 = *(_DWORD *)((char *)v6 + (_QWORD)v5);
    v6 += 6;
    --v3;
  }
  while ( v3 );
}
