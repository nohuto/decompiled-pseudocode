/*
 * XREFs of EtwTraceIdleActionExpiration @ 0x14014F590
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x140099090 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     McTemplateK0qqqqh_EtwWriteTransfer @ 0x14019BFAC (McTemplateK0qqqqh_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceIdleActionExpiration(__int64 a1, char a2)
{
  char v3; // bp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int16 v6; // di
  __int64 UserSessionState; // rax
  char LastInputTime; // bl
  int CurrentWin32kSessionId; // eax
  int v10; // edx
  int v11; // r8d

  v3 = a1;
  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x2000000000008000LL) != 0
    && (qword_14029EDA8 & 0x2000000000008000LL) == qword_14029EDA8 )
  {
    v6 = *(_WORD *)(W32GetUserSessionState(a1, 0x2000000000008000LL) + 68752);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v5, v4);
      LastInputTime = CInputGlobals::GetLastInputTime(*(CInputGlobals **)(UserSessionState + 3056));
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      McTemplateK0qqqqh_EtwWriteTransfer(v6 == 0, v10, v11, CurrentWin32kSessionId, v3, a2, LastInputTime, v6 == 0);
    }
  }
}
