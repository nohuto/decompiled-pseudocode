/*
 * XREFs of PowerResumeSuspendEvent @ 0x1400E9090
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall PowerResumeSuspendEvent(int a1, int a2, int a3)
{
  char v3; // bl
  char v4; // di
  char v5; // si
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  unsigned int v10; // ebx
  _BYTE v11[4]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+34h] [rbp-34h]
  __int64 InputBuffer; // [rsp+38h] [rbp-30h] BYREF
  int v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+44h] [rbp-24h]
  int CurrentWin32kSessionId; // [rsp+48h] [rbp-20h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 68604) && v4 )
    return *(_BYTE *)(W32GetUserSessionState(v7, v6, v8) + 528) != 0 ? 0x103 : 0;
  InputBuffer = 90LL;
  v14 = 0;
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v7);
  if ( v5 )
    v15 = 0;
  else
    v15 = (v3 != 0) + 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v11, 1);
  v10 = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  if ( v10 )
  {
    if ( v10 != 259 )
    {
      v12 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2285LL);
    }
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v11);
  return v10;
}
