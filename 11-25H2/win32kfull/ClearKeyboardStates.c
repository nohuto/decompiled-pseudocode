/*
 * XREFs of ClearKeyboardStates @ 0x140247ACC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z @ 0x1402883CC (-UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z.c)
 * Callees:
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x140229F58 (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 *     Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledDeviceUsageNoInline @ 0x140288700 (Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ClearKeyboardStates(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  for ( i = 0LL; i < 64; ++i )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    *(_BYTE *)(UserSessionState + i + 14336) &= 0xAAu;
  }
  if ( (unsigned int)Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = W32GetUserSessionState(v5, v4);
    ++*(_DWORD *)(*(_QWORD *)(v6 + 19872) + 6988LL);
  }
  ClearKeyboardToggleStates();
  ClearCachedHotkeyModifiers(v8, v7);
}
