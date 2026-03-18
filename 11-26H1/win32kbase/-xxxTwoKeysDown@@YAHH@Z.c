/*
 * XREFs of ?xxxTwoKeysDown@@YAHH@Z @ 0x1402134A0
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x140124580 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x140124A80 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140227B14 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall xxxTwoKeysDown(int a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  int v27; // r8d

  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 20604) & 0x100) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    *(_DWORD *)(UserSessionState + 20604) &= ~1u;
    v12 = *(_DWORD *)(W32GetUserSessionState(v9, v8, v10) + 20604);
    if ( (v12 & 0x10) != 0 )
      ApiSetEditionPostRitSound(1LL, v11, 0LL);
    *(_BYTE *)(W32GetUserSessionState(v12, v11, v13) + 14044) = 0;
    *(_BYTE *)(W32GetUserSessionState(v15, v14, v16) + 14045) = 0;
  }
  v17 = W32GetUserSessionState(v5, v4, v6);
  xxxUpdateModifierState(*(unsigned __int8 *)(v17 + 21877), a1, v18);
  *(_BYTE *)(W32GetUserSessionState(v20, v19, v21) + 21881) = 0;
  *(_BYTE *)(W32GetUserSessionState(v23, v22, v24) + 21882) = 0;
  ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  return *(_DWORD *)(W32GetUserSessionState(v26, v25, v27) + 20604) & 1;
}
