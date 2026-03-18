/*
 * XREFs of ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x14014CB40
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1401D97F0 (PostWinlogonMessage.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140227B74 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall HighContrastHotKey(struct tagKE *a1, int a2, int a3)
{
  _BYTE *UserSessionState; // rax
  char v5; // si
  int v6; // edi
  char v7; // bl
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rdx

  UserSessionState = (_BYTE *)W32GetUserSessionState((_DWORD)a1, a2, a3);
  v5 = *((_BYTE *)a1 + 2);
  v6 = *((_WORD *)a1 + 1) & 0x8000;
  v7 = UserSessionState[21877] | UserSessionState[21881] | UserSessionState[21882];
  v12 = *(_DWORD *)(W32GetUserSessionState(v9, v8, v10) + 21076);
  if ( (v12 & 1) != 0 )
  {
    v19 = *(_DWORD *)(W32GetUserSessionState(v12, v11, v13) + 21076);
    if ( (v19 & 4) != 0 && v5 == 44 && !v6 && v7 == 17 )
    {
      v21 = W32GetUserSessionState(v19, v18, v20);
      *(_DWORD *)(v21 + 21076) &= ~1u;
      if ( (*(_DWORD *)(W32GetUserSessionState(v23, v22, v24) + 21076) & 0x10) != 0 )
        ApiSetEditionPostRitSound(1LL, v25, 0LL);
      PostWinlogonMessage(1026LL, 9LL);
    }
    return 1LL;
  }
  v15 = *(_DWORD *)(W32GetUserSessionState(v12, v11, v13) + 21076);
  if ( (v15 & 4) == 0 || v5 != 44 || v6 || v7 != 17 )
    return 1LL;
  if ( (*(_DWORD *)(W32GetUserSessionState(v15, v14, v16) + 21076) & 0x10) != 0 )
    ApiSetEditionPostRitSound(0LL, v26, 0LL);
  ApiSetEditionPostAccessibilityShortcutNotification(5LL);
  return 0LL;
}
