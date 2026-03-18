/*
 * XREFs of ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9220
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB990 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010AA14 (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxFKAcceptanceDelayTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx

  v5 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 20468);
  if ( (v5 & 0x40) != 0 )
    ApiSetEditionPostRitSound(4LL, v4, 0LL);
  UserSessionState = W32GetUserSessionState(v5, v4);
  v9 = W32GetUserSessionState(v8, v7);
  v10 = *(_DWORD *)(UserSessionState + 20560);
  v11 = *(_DWORD *)(v9 + 20564);
  v14 = W32GetUserSessionState(v13, v12);
  if ( (unsigned int)AccessProceduresStream(*(struct tagKE **)(v14 + 20552), v10, v11) )
  {
    v17 = *(_DWORD *)(UserSessionState + 20560);
    v18 = W32GetUserSessionState(v16, v15);
    xxxProcessKeyEvent(*(unsigned __int16 **)(v18 + 20552), (struct _CLIPOBJ *)v17, 0, 0, 0LL, 0LL);
  }
  v19 = *(_DWORD *)(UserSessionState + 20480);
  if ( v19 )
  {
    v21 = *(unsigned int *)(UserSessionState + 20476);
    if ( !(_DWORD)v21 )
      v21 = v19;
    *(_QWORD *)(UserSessionState + 20496) = ApiSetEditionSetAccessibilityTimer(
                                              a3,
                                              v21,
                                              (__int64)xxxFKRepeatRateTimer,
                                              1u);
    *(_QWORD *)(W32GetUserSessionState(v23, v22) + 20504) = 0LL;
  }
  else
  {
    v20 = W32GetUserSessionState(v16, v15);
    *(_DWORD *)(v20 + 66800) |= 0x800u;
  }
}
