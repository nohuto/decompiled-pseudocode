/*
 * XREFs of ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212A20
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1401251F0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1401BB43C (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxFKAcceptanceDelayTimer(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rsi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // ebx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // edx
  int v25; // edx
  int v26; // ecx
  int v27; // r8d

  v5 = *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 20500);
  if ( (v5 & 0x40) != 0 )
    ApiSetEditionPostRitSound(4LL, v4, 0LL);
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  v11 = W32GetUserSessionState(v9, v8, v10);
  v12 = *(_DWORD *)(UserSessionState + 20592);
  v13 = *(_DWORD *)(v11 + 20596);
  v17 = W32GetUserSessionState(v15, v14, v16);
  if ( (unsigned int)AccessProceduresStream(*(struct tagKE **)(v17 + 20584), v12, v13) )
  {
    v21 = *(_DWORD *)(UserSessionState + 20592);
    v22 = W32GetUserSessionState(v19, v18, v20);
    xxxProcessKeyEvent(*(unsigned __int16 **)(v22 + 20584), (struct _CLIPOBJ *)v21, 0, 0, 0LL, 0LL);
  }
  if ( *(_DWORD *)(UserSessionState + 20512) )
  {
    v24 = *(_DWORD *)(UserSessionState + 20508);
    if ( !v24 )
      v24 = *(_DWORD *)(UserSessionState + 20512);
    *(_QWORD *)(UserSessionState + 20528) = ApiSetEditionSetAccessibilityTimer(
                                              a3,
                                              v24,
                                              (__int64)xxxFKRepeatRateTimer,
                                              1u);
    *(_QWORD *)(W32GetUserSessionState(v26, v25, v27) + 20536) = 0LL;
  }
  else
  {
    v23 = W32GetUserSessionState(v19, v18, v20);
    *(_DWORD *)(v23 + 66792) |= 0x800u;
  }
}
