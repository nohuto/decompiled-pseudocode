/*
 * XREFs of ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9350
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB990 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010AA14 (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxFKRepeatRateTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rax

  v5 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 20468);
  if ( (v5 & 0x40) != 0 )
    ApiSetEditionPostRitSound(4LL, v4, 0LL);
  UserSessionState = W32GetUserSessionState(v5, v4);
  v7 = ApiSetEditionSetAccessibilityTimer(
         a3,
         *(unsigned int *)(UserSessionState + 20480),
         (__int64)xxxFKRepeatRateTimer,
         1u);
  *(_QWORD *)(W32GetUserSessionState(v9, v8) + 20496) = v7;
  v12 = W32GetUserSessionState(v11, v10);
  v13 = *(_DWORD *)(UserSessionState + 20560);
  LODWORD(v7) = *(_DWORD *)(v12 + 20564);
  v16 = W32GetUserSessionState(v15, v14);
  if ( (unsigned int)AccessProceduresStream(*(struct tagKE **)(v16 + 20552), v13, v7) )
  {
    v19 = *(_DWORD *)(UserSessionState + 20560);
    v20 = W32GetUserSessionState(v18, v17);
    xxxProcessKeyEvent(*(unsigned __int16 **)(v20 + 20552), (struct _CLIPOBJ *)v19, 0, 0, 0LL, 0LL);
  }
}
