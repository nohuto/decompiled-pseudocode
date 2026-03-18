/*
 * XREFs of ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402132F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1401251F0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140227B74 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall xxxToggleKeysTimer(struct tagWND *a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rbx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rax
  _OWORD v30[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(v30, 0, sizeof(v30));
  v4 = *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 20948);
  if ( (v4 & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    *(_DWORD *)(UserSessionState + 20948) &= ~1u;
    v10 = *(unsigned int *)(W32GetUserSessionState(v8, v7, v9) + 20948);
    if ( (v10 & 0x10) != 0 )
      ApiSetEditionPostRitSound(1LL, v10, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 20948) & 0x10) != 0 )
      ApiSetEditionPostRitSound(0LL, v13, 0LL);
    ApiSetEditionPostAccessibilityShortcutNotification(4LL);
  }
  LOBYTE(v30[0]) = *(_BYTE *)(W32GetUserSessionState(v11, v10, v12) + 20968);
  LOBYTE(v14) = v30[0];
  WORD1(v30[0]) = *(_WORD *)(W32GetUserSessionState(v14, v15, v16) + 13976) | 0x8000;
  v19 = W32GetUserSessionState(WORD1(v30[0]), v17, v18);
  v23 = W32GetUserSessionState(v21, v20, v22);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v30, *(_DWORD *)(v19 + 20960), *(_DWORD *)(v23 + 20964)) )
    xxxProcessKeyEvent((unsigned __int16 *)v30, (struct _CLIPOBJ *)*(unsigned int *)(v19 + 20960), 0, 0, 0LL, 0LL);
  WORD1(v30[0]) = *(_WORD *)(W32GetUserSessionState(v25, v24, v26) + 13976);
  v29 = W32GetUserSessionState(WORD1(v30[0]), v27, v28);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v30, *(_DWORD *)(v19 + 20960), *(_DWORD *)(v29 + 20964)) )
    xxxProcessKeyEvent((unsigned __int16 *)v30, (struct _CLIPOBJ *)*(unsigned int *)(v19 + 20960), 0, 0, 0LL, 0LL);
}
