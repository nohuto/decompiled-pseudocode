/*
 * XREFs of ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x14010F890
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140225BA8 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 */

__int64 __fastcall HighContrastHotKey(struct tagKE *a1, __int64 a2)
{
  _BYTE *UserSessionState; // rax
  char v4; // si
  int v5; // edi
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx

  UserSessionState = (_BYTE *)W32GetUserSessionState(a1, a2);
  v4 = *((_BYTE *)a1 + 2);
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  v6 = UserSessionState[21845] | UserSessionState[21849] | UserSessionState[21850];
  v10 = *(unsigned int *)(W32GetUserSessionState(v8, v7) + 21044);
  if ( (v10 & 1) != 0 )
  {
    v16 = *(unsigned int *)(W32GetUserSessionState(v10, v9) + 21044);
    if ( (v16 & 4) != 0 && v4 == 44 && !v5 && v6 == 17 )
    {
      v17 = W32GetUserSessionState(v16, v15);
      *(_DWORD *)(v17 + 21044) &= ~1u;
      if ( (*(_DWORD *)(W32GetUserSessionState(v19, v18) + 21044) & 0x10) != 0 )
        ApiSetEditionPostRitSound(1LL, v20, 0LL);
      PostWinlogonMessage(1026LL, 9LL);
    }
    return 1LL;
  }
  v12 = *(unsigned int *)(W32GetUserSessionState(v10, v9) + 21044);
  if ( (v12 & 4) == 0 || v4 != 44 || v5 || v6 != 17 )
    return 1LL;
  if ( (*(_DWORD *)(W32GetUserSessionState(v12, v11) + 21044) & 0x10) != 0 )
    ApiSetEditionPostRitSound(0LL, v14, 0LL);
  ApiSetEditionPostAccessibilityShortcutNotification(5LL);
  return 0LL;
}
