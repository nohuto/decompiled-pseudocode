/*
 * XREFs of PowerConnectionEvent @ 0x14018642C
 * Callers:
 *     SetConnectedState @ 0x14007F120 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x140186370 (SetConnectCompletedState.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1400D00A0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1400E97D0 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z @ 0x1400EA9A8 (-GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z.c)
 *     ?SendConsoleDisplayWnf@@YAXH@Z @ 0x140187D58 (-SendConsoleDisplayWnf@@YAXH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x1401C1710 (-ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z.c)
 *     wcsncmp @ 0x1401C754C (wcsncmp.c)
 *     ?CheckFeature_Servicing_PDCAgentSessions_Enabled@@YAHXZ @ 0x1401D5458 (-CheckFeature_Servicing_PDCAgentSessions_Enabled@@YAHXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall PowerConnectionEvent(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  int v5; // r14d
  int v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  ULONG v14; // r8d
  __int128 *v15; // rdx
  POWER_INFORMATION_LEVEL v16; // ecx
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // edx
  int v30; // r8d
  int v31; // edx
  int v32; // r8d
  __int128 OutputBuffer; // [rsp+38h] [rbp-41h] BYREF
  __int128 v34; // [rsp+48h] [rbp-31h] BYREF
  _OWORD v35[2]; // [rsp+58h] [rbp-21h] BYREF
  _OWORD InputBuffer[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v37; // [rsp+98h] [rbp+1Fh]

  memset(InputBuffer, 0, sizeof(InputBuffer));
  v37 = 0LL;
  v34 = 0LL;
  memset(v35, 0, sizeof(v35));
  OutputBuffer = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v5 = *(_DWORD *)(UserSessionState + 2880);
  v6 = a1 != 0;
  if ( *(_DWORD *)(UserSessionState + 2740) != v6 )
  {
    CheckFeature_Servicing_PDCAgentSessions_Enabled();
    *(_DWORD *)(UserSessionState + 2740) = v6;
    if ( (unsigned int)CheckFeature_Servicing_PDCAgentSessions_Enabled() )
    {
      if ( a1 )
      {
        if ( *(_WORD *)(W32GetUserSessionState(v8, v7, v9) + 68744) )
        {
          v10 = W32GetUserSessionState(v8, v7, v9);
          v8 = 2 - (wcsncmp((const wchar_t *)(v10 + 64112), L"D8D584DCE21F4BD4B923", 0x20uLL) != 0);
          *(_DWORD *)(UserSessionState + 2744) = v8;
        }
        else
        {
          *(_DWORD *)(UserSessionState + 2744) = 0;
        }
      }
      v11 = W32GetUserSessionState(v8, v7, v9);
      CInputGlobals::UpdateLastInputTime(
        *(struct W32_PUSH_LOCK **)(v11 + 3056),
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        0xFu);
      *(_QWORD *)&v34 = 98LL;
      BYTE8(v34) = a1 != 0;
      HIDWORD(v34) = *(_DWORD *)(UserSessionState + 2744);
      GetAdaptiveSessionContext((struct _PO_ADAPTIVE_SESSION_CONTEXT *)v35, v12, v13);
      v14 = 48;
      v15 = &v34;
      v16 = SystemPowerStateLogging|0x40;
    }
    else
    {
      v17 = W32GetUserSessionState(v8, v7, v9);
      CInputGlobals::UpdateLastInputTime(
        *(struct W32_PUSH_LOCK **)(v17 + 3056),
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        0xFu);
      LOBYTE(InputBuffer[0]) = a1 != 0;
      BYTE1(InputBuffer[0]) = *(_WORD *)(W32GetUserSessionState(v19, v18, v20) + 68744) == 0;
      GetAdaptiveSessionContext((struct _PO_ADAPTIVE_SESSION_CONTEXT *)((char *)InputBuffer + 8), v21, v22);
      v14 = 40;
      v15 = InputBuffer;
      v16 = PowerInformationLevelMaximum|SystemReserveHiberFile;
    }
    if ( ZwPowerInformation(v16, v15, v14, &OutputBuffer, 0x10u) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2186LL);
    if ( !*(_WORD *)(W32GetUserSessionState(v24, v23, v25) + 68744)
      || *(_WORD *)(W32GetUserSessionState(v27, v26, v28) + 68744) == 0xFFFF
      && !*(_WORD *)(W32GetUserSessionState(0xFFFF, v29, v30) + 69040) )
    {
      SendConsoleDisplayWnf(a1 != 0 ? v5 : 0);
    }
    if ( !a1 )
    {
      if ( (_DWORD)OutputBuffer )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2205LL);
      if ( DWORD2(OutputBuffer) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2206LL);
      if ( BYTE12(OutputBuffer) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2207LL);
    }
    ApplyAdaptiveSessionState((struct _PO_ADAPTIVE_SESSION_STATE *)&OutputBuffer);
    if ( a1 )
    {
      if ( *(_BYTE *)(UserSessionState + 528) )
        SetInputModeWithCrit(0, v31, v32);
    }
  }
}
