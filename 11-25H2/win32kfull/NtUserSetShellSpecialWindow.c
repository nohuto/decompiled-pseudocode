/*
 * XREFs of NtUserSetShellSpecialWindow @ 0x1402A0150
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ?_GetWindowCloakState@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x140060190 (-_GetWindowCloakState@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14027A230 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z @ 0x14029336C (-NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z.c)
 *     ?SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C23F0 (-SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WIN.c)
 */

__int64 __fastcall NtUserSetShellSpecialWindow(HWND a1, unsigned int a2)
{
  __int64 v4; // rdi
  const struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    v16[0] = 0;
    v6 = (const struct tagTHREADINFO *)EnterCrit(0LL, 0LL);
    v17 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v16, v7);
    v8 = 0LL;
    if ( a2 )
    {
      if ( a2 != 1
        || a1
        && ((v9 = ValidateHwndStrict(a1), (v8 = v9) == 0)
         || *(_QWORD *)(*(_QWORD *)(v9 + 16) + 464LL) != *((_QWORD *)v6 + 58)
         || !IsTopLevelWindow(v9)
         || (_GetWindowCloakState(v8) & 1) == 0
         || (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 27LL) & 8) != 0) )
      {
LABEL_21:
        v13 = 87;
        goto LABEL_16;
      }
    }
    else
    {
      LOBYTE(v10) = IAMThreadAccessGranted(v6);
      if ( !v10 )
      {
        v13 = 5;
LABEL_16:
        UserSetLastError(v13);
LABEL_24:
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
        UserSessionSwitchLeaveCrit(v15);
        return v4;
      }
      if ( a1 )
      {
        v14 = ValidateHwndStrict(a1);
        v8 = v14;
        if ( !v14
          || (((*(_WORD *)(*(_QWORD *)(v14 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0
          || !IsTopLevelWindow(v14) )
        {
          goto LABEL_21;
        }
      }
      else
      {
        *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18896) = 0LL;
      }
    }
    ShellWindowManagement::SetShellSpecialWindow(*((_QWORD *)v6 + 62), v8, a2);
    v4 = 1LL;
    goto LABEL_24;
  }
  if ( a2 )
  {
    UserSetLastError(5023);
    return 0LL;
  }
  else
  {
    LOBYTE(v4) = a1 != 0LL;
    return NtUserSetFallbackForeground(a1, v4);
  }
}
