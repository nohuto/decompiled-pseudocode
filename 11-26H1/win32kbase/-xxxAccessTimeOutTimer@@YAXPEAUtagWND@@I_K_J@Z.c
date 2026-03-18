/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212890
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400DF670 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401C6AA0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x1401D97F0 (PostWinlogonMessage.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140227B14 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rdx

  v4 = *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 20500);
  if ( (v4 & 1) != 0
    || (v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20604), (v4 & 1) != 0)
    || (v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20612), (v4 & 1) != 0)
    || (v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20948), (v4 & 1) != 0)
    || (v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20980), (v4 & 1) != 0)
    || (v4 = *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 21076), (v4 & 1) != 0)
    || (*(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 66792) & 0x8000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    *(_DWORD *)(UserSessionState + 20500) &= ~1u;
    xxxTurnOffStickyKeys(v8, v7, v9);
    v13 = W32GetUserSessionState(v11, v10, v12);
    *(_DWORD *)(v13 + 20612) &= ~1u;
    v17 = W32GetUserSessionState(v15, v14, v16);
    *(_DWORD *)(v17 + 20948) &= ~1u;
    v21 = W32GetUserSessionState(v19, v18, v20);
    *(_DWORD *)(v21 + 20980) &= ~1u;
    v25 = W32GetUserSessionState(v23, v22, v24);
    *(_DWORD *)(v25 + 66792) &= ~0x8000u;
    v29 = W32GetUserSessionState(v27, v26, v28);
    *(_DWORD *)(v29 + 21076) &= ~1u;
    PostWinlogonMessage(1026, 9, v30);
    v34 = *(unsigned int *)(W32GetUserSessionState(v32, v31, v33) + 20924);
    if ( (v34 & 2) != 0 )
      ApiSetEditionPostRitSound(1LL, v34, 0LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(2LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  }
  SetAccessEnabledFlag(v4, v3, v5);
}
