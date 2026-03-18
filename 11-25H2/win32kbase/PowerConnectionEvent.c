/*
 * XREFs of PowerConnectionEvent @ 0x140150D1C
 * Callers:
 *     SetConnectedState @ 0x140150BE0 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x140150C60 (SetConnectCompletedState.c)
 * Callees:
 *     ?GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z @ 0x140099010 (-GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x14009B1F0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x14010B580 (-ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z.c)
 *     ?SendConsoleDisplayWnf@@YAXH@Z @ 0x140156DD0 (-SendConsoleDisplayWnf@@YAXH@Z.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14016959C (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall PowerConnectionEvent(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // r14d
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int128 OutputBuffer; // [rsp+38h] [rbp-48h] BYREF
  _OWORD InputBuffer[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h]

  v2 = a1;
  OutputBuffer = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = UserSessionState;
  v7 = *(_DWORD *)(UserSessionState + 2880);
  v8 = v2 != 0;
  if ( *(_DWORD *)(UserSessionState + 2748) != v8 )
  {
    *(_DWORD *)(UserSessionState + 2748) = v8;
    v9 = W32GetUserSessionState(v5, v4);
    CInputGlobals::UpdateLastInputTime(
      *(struct W32_PUSH_LOCK **)(v9 + 3056),
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      0xFu);
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LOBYTE(InputBuffer[0]) = v2 != 0;
    v20 = 0LL;
    BYTE1(InputBuffer[0]) = *(_WORD *)(W32GetUserSessionState(v11, v10) + 68752) == 0;
    GetAdaptiveSessionContext((struct _PO_ADAPTIVE_SESSION_CONTEXT *)((char *)InputBuffer + 8), v12);
    if ( ZwPowerInformation(
           PowerInformationLevelMaximum|SystemReserveHiberFile,
           InputBuffer,
           0x28u,
           &OutputBuffer,
           0x10u) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2111LL);
    if ( !*(_WORD *)(W32GetUserSessionState(v14, v13) + 68752)
      || *(_WORD *)(W32GetUserSessionState(v16, v15) + 68752) == 0xFFFF
      && !*(_WORD *)(W32GetUserSessionState(0xFFFFLL, v17) + 69048) )
    {
      SendConsoleDisplayWnf(v2 != 0 ? v7 : 0);
    }
    if ( !v2 )
    {
      if ( (_DWORD)OutputBuffer )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2130LL);
      if ( DWORD2(OutputBuffer) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2131LL);
      if ( BYTE12(OutputBuffer) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2132LL);
    }
    ApplyAdaptiveSessionState((struct _PO_ADAPTIVE_SESSION_STATE *)&OutputBuffer, v17);
    if ( v2 )
    {
      if ( *(_BYTE *)(v6 + 528) )
        SetInputModeWithCrit(0LL);
    }
  }
}
