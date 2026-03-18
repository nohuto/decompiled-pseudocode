/*
 * XREFs of ?InitializePowerWatchdogTimeoutDefaults@@YAXXZ @ 0x14017FAD0
 * Callers:
 *     ?InitializePowerWatchdogTimeouts@@YAHXZ @ 0x14017F8F4 (-InitializePowerWatchdogTimeouts@@YAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializePowerWatchdogTimeoutDefaults(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  char *v6; // rdx
  _DWORD *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v9[15]; // [rsp+28h] [rbp-21h] BYREF

  v8 = 16LL;
  v9[0] = L"PowerWatchdogRequestQueueTimeoutMsec";
  v9[3] = L"PowerWatchdogPoCalloutTimeoutMsec";
  v9[6] = L"PowerWatchdogPowerOnGdiTimeoutMsec";
  v9[9] = L"PowerWatchdogDwmSyncFlushTimeoutMsec";
  v9[12] = L"PowerWatchdogDrvSetMonitorTimeoutMsec";
  v9[1] = 30000LL;
  v9[2] = 32LL;
  v9[4] = 10000LL;
  v9[5] = 48LL;
  v9[7] = 30000LL;
  v9[8] = 64LL;
  v9[10] = 30000LL;
  v9[11] = 80LL;
  v9[13] = 10000LL;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v4 = 5LL;
  v5 = UserSessionState + 368;
  v6 = (char *)&v9[-1] - v5;
  v7 = (_DWORD *)(v5 + 16);
  do
  {
    *(v7 - 4) = *(_DWORD *)((char *)v7 + (_QWORD)v6 - 16);
    *((_QWORD *)v7 - 1) = *(_QWORD *)((char *)v7 + (_QWORD)v9 - v5 - 16);
    *v7 = *(_DWORD *)((char *)v7 + (_QWORD)v6);
    v7 += 6;
    --v4;
  }
  while ( v4 );
}
