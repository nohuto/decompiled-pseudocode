/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9090
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A6B70 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401A2520 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140225B48 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx

  v3 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 20468);
  if ( (v3 & 1) != 0
    || (v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20572), (v3 & 1) != 0)
    || (v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20580), (v3 & 1) != 0)
    || (v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20916), (v3 & 1) != 0)
    || (v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 20948), (v3 & 1) != 0)
    || (v3 = *(unsigned int *)(W32GetUserSessionState(v3, v2) + 21044), (v3 & 1) != 0)
    || (*(_DWORD *)(W32GetUserSessionState(v3, v2) + 66800) & 0x8000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    *(_DWORD *)(UserSessionState + 20468) &= ~1u;
    xxxTurnOffStickyKeys(v6, v5);
    v9 = W32GetUserSessionState(v8, v7);
    *(_DWORD *)(v9 + 20580) &= ~1u;
    v12 = W32GetUserSessionState(v11, v10);
    *(_DWORD *)(v12 + 20916) &= ~1u;
    v15 = W32GetUserSessionState(v14, v13);
    *(_DWORD *)(v15 + 20948) &= ~1u;
    v18 = W32GetUserSessionState(v17, v16);
    *(_DWORD *)(v18 + 66800) &= ~0x8000u;
    v21 = W32GetUserSessionState(v20, v19);
    *(_DWORD *)(v21 + 21044) &= ~1u;
    PostWinlogonMessage(1026LL, 9LL);
    v24 = *(unsigned int *)(W32GetUserSessionState(v23, v22) + 20892);
    if ( (v24 & 2) != 0 )
      ApiSetEditionPostRitSound(1LL, v24, 0LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(2LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  }
  SetAccessEnabledFlag(v3, v2);
}
