/*
 * XREFs of ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401A2520
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A57B0 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A822C (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FB2C0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9090 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1400FB7B0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140225B48 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

void __fastcall xxxTurnOffStickyKeys(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 (__fastcall **v3)(struct tagKE *, __int64, int); // rax
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  v2 = 0;
  v3 = (__int64 (__fastcall **)(struct tagKE *, __int64, int))off_14024BD38;
  while ( v2 < 5 )
  {
    ++v2;
    if ( *v3 == xxxStickyKeys )
    {
      UserSessionState = W32GetUserSessionState(xxxStickyKeys, a2);
      xxxUpdateModifierState(*(unsigned __int8 *)(UserSessionState + 21845), v2);
      *(_BYTE *)(W32GetUserSessionState(v6, v5) + 21849) = 0;
      *(_BYTE *)(W32GetUserSessionState(v8, v7) + 21850) = 0;
      v11 = W32GetUserSessionState(v10, v9);
      *(_DWORD *)(v11 + 20572) &= ~1u;
      ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
      return;
    }
    ++v3;
  }
}
