/*
 * XREFs of ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401C6AA0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400DFA30 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x140124580 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1401ACDDC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212890 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x140124A80 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140227B14 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

void __fastcall xxxTurnOffStickyKeys(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ecx
  __int64 (__fastcall **v4)(struct tagKE *, unsigned int, int); // rax
  int v5; // ebx
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax

  v3 = 0;
  v4 = off_140255F50;
  while ( v3 < 5 )
  {
    v5 = ++v3;
    if ( *v4 == xxxStickyKeys )
    {
      UserSessionState = W32GetUserSessionState(v3, (unsigned int)xxxStickyKeys, a3);
      xxxUpdateModifierState(*(unsigned __int8 *)(UserSessionState + 21877), v5, v7);
      *(_BYTE *)(W32GetUserSessionState(v9, v8, v10) + 21881) = 0;
      *(_BYTE *)(W32GetUserSessionState(v12, v11, v13) + 21882) = 0;
      v17 = W32GetUserSessionState(v15, v14, v16);
      *(_DWORD *)(v17 + 20604) &= ~1u;
      ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
      return;
    }
    ++v4;
  }
}
