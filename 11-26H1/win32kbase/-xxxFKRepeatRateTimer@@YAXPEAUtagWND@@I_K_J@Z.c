/*
 * XREFs of ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212B50
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1401251F0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1401BB43C (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxFKRepeatRateTimer(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, _QWORD); // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rax
  unsigned int v16; // edi
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  unsigned int v24; // ebx
  __int64 v25; // rax

  v5 = *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 20500);
  if ( (v5 & 0x40) != 0 )
    ApiSetEditionPostRitSound(4LL, v4, 0LL);
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  v8 = ApiSetEditionSetAccessibilityTimer(a3, *(_DWORD *)(UserSessionState + 20512), (__int64)xxxFKRepeatRateTimer, 1u);
  *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 20528) = v8;
  v15 = W32GetUserSessionState(v13, v12, v14);
  v16 = *(_DWORD *)(UserSessionState + 20592);
  LODWORD(v8) = *(_DWORD *)(v15 + 20596);
  v20 = W32GetUserSessionState(v18, v17, v19);
  if ( (unsigned int)AccessProceduresStream(*(struct tagKE **)(v20 + 20584), v16, (unsigned int)v8) )
  {
    v24 = *(_DWORD *)(UserSessionState + 20592);
    v25 = W32GetUserSessionState(v22, v21, v23);
    xxxProcessKeyEvent(*(unsigned __int16 **)(v25 + 20584), (struct _CLIPOBJ *)v24, 0, 0, 0LL, 0LL);
  }
}
