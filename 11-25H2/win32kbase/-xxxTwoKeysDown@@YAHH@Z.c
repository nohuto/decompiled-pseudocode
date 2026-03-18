/*
 * XREFs of ?xxxTwoKeysDown@@YAHH@Z @ 0x1401F9CB0
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FB2C0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1400FB7B0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140225B48 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

__int64 __fastcall xxxTwoKeysDown(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx

  v2 = a1;
  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 20572) & 0x100) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    *(_DWORD *)(UserSessionState + 20572) &= ~1u;
    v9 = *(unsigned int *)(W32GetUserSessionState(v7, v6) + 20572);
    if ( (v9 & 0x10) != 0 )
      ApiSetEditionPostRitSound(1LL, v8, 0LL);
    *(_BYTE *)(W32GetUserSessionState(v9, v8) + 14052) = 0;
    *(_BYTE *)(W32GetUserSessionState(v11, v10) + 14053) = 0;
  }
  v12 = W32GetUserSessionState(v4, v3);
  xxxUpdateModifierState(*(unsigned __int8 *)(v12 + 21845), v2);
  *(_BYTE *)(W32GetUserSessionState(v14, v13) + 21849) = 0;
  *(_BYTE *)(W32GetUserSessionState(v16, v15) + 21850) = 0;
  ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  return *(_DWORD *)(W32GetUserSessionState(v18, v17) + 20572) & 1;
}
