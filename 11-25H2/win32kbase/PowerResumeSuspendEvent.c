/*
 * XREFs of PowerResumeSuspendEvent @ 0x1401B0E50
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall PowerResumeSuspendEvent(__int64 a1, __int64 a2, char a3)
{
  char v4; // di
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rdx
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  _BYTE v13[4]; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+34h] [rbp-34h]
  __int64 InputBuffer; // [rsp+38h] [rbp-30h] BYREF
  int v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+44h] [rbp-24h]
  int CurrentWin32kSessionId; // [rsp+48h] [rbp-20h]

  v4 = a2;
  v5 = a1;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 68612) && v4 )
    return *(_BYTE *)(W32GetUserSessionState(v7, v6) + 528) != 0 ? 0x103 : 0;
  InputBuffer = 90LL;
  v16 = 0;
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  if ( v5 )
    v17 = 0;
  else
    v17 = (a3 != 0) + 1;
  LOBYTE(v9) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v13, v9);
  v10 = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  v12 = v10;
  if ( v10 )
  {
    if ( v10 != 259 )
    {
      v14 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2210);
    }
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v13, v11);
  return v12;
}
