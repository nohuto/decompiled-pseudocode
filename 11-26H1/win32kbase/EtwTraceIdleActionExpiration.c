/*
 * XREFs of EtwTraceIdleActionExpiration @ 0x14018DFB0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1400EAA30 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     McTemplateK0qqqqh_EtwWriteTransfer @ 0x1401A16E0 (McTemplateK0qqqqh_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceIdleActionExpiration(char a1, char a2, int a3)
{
  int v5; // edx
  char v6; // cl
  __int16 v7; // di
  int v8; // r8d
  __int64 UserSessionState; // rax
  char LastInputTime; // bl
  __int64 v11; // rcx
  int CurrentWin32kSessionId; // eax
  int v13; // edx
  int v14; // r8d

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x2000000000008000LL) != 0
    && (qword_1402A9DC8 & 0x2000000000008000LL) == qword_1402A9DC8 )
  {
    v7 = *(_WORD *)(W32GetUserSessionState(a1, 0x8000, a3) + 68744);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v6, v5, v8);
      LastInputTime = CInputGlobals::GetLastInputTime(*(CInputGlobals **)(UserSessionState + 3056));
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v11);
      McTemplateK0qqqqh_EtwWriteTransfer(v7 == 0, v13, v14, CurrentWin32kSessionId, a1, a2, LastInputTime, v7 == 0);
    }
  }
}
