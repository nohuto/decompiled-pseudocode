/*
 * XREFs of ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9B00
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB990 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140225BA8 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall xxxToggleKeysTimer(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  _OWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(v21, 0, sizeof(v21));
  v3 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 20916);
  if ( (v3 & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    *(_DWORD *)(UserSessionState + 20916) &= ~1u;
    v7 = *(unsigned int *)(W32GetUserSessionState(v6, v5) + 20916);
    if ( (v7 & 0x10) != 0 )
      ApiSetEditionPostRitSound(1LL, v7, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(W32GetUserSessionState(v3, v2) + 20916) & 0x10) != 0 )
      ApiSetEditionPostRitSound(0LL, v9, 0LL);
    ApiSetEditionPostAccessibilityShortcutNotification(4LL);
  }
  LOBYTE(v21[0]) = *(_BYTE *)(W32GetUserSessionState(v8, v7) + 20936);
  LOBYTE(v10) = v21[0];
  WORD1(v21[0]) = *(_WORD *)(W32GetUserSessionState(v10, v11) + 13984) | 0x8000;
  v13 = W32GetUserSessionState(WORD1(v21[0]), v12);
  v16 = W32GetUserSessionState(v15, v14);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v21, *(_DWORD *)(v13 + 20928), *(_DWORD *)(v16 + 20932)) )
    xxxProcessKeyEvent((unsigned __int16 *)v21, (struct _CLIPOBJ *)*(unsigned int *)(v13 + 20928), 0, 0, 0LL, 0LL);
  WORD1(v21[0]) = *(_WORD *)(W32GetUserSessionState(v18, v17) + 13984);
  v20 = W32GetUserSessionState(WORD1(v21[0]), v19);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v21, *(_DWORD *)(v13 + 20928), *(_DWORD *)(v20 + 20932)) )
    xxxProcessKeyEvent((unsigned __int16 *)v21, (struct _CLIPOBJ *)*(unsigned int *)(v13 + 20928), 0, 0, 0LL, 0LL);
}
