/*
 * XREFs of ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x140109C10
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A9A4 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010AA14 (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall ToggleKeys(struct tagKE *a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // r14
  int v5; // ebp
  int v6; // r13d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rdi
  __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // bl
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx

  v4 = *((unsigned __int8 *)a1 + 2);
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  v6 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  switch ( (_DWORD)v4 )
  {
    case 0x14:
      goto LABEL_9;
    case 0x90:
      goto LABEL_15;
    case 0x91:
LABEL_9:
      v14 = *(unsigned int *)(W32GetUserSessionState(v9, v8) + 20916);
      if ( (v14 & 1) != 0 && !v5 )
      {
        v15 = W32GetUserSessionState(v14, v13);
        v16 = v4 & 3;
        v17 = (unsigned int)(1 << (2 * v16));
        if ( ((unsigned __int8)v17 & *(_BYTE *)((v4 >> 2) + v15 + 14336)) == 0 )
        {
          v18 = W32GetUserSessionState((unsigned int)(2 * v16), v17);
          v19 = (unsigned int)(1 << (2 * v16 + 1));
          v20 = 3LL;
          if ( ((unsigned __int8)v19 & *(_BYTE *)(v18 + (v4 >> 2) + 14336)) != 0 )
            v20 = 2LL;
          ApiSetEditionPostRitSound(v20, v19, 0LL);
        }
      }
      return 1LL;
  }
  if ( (_WORD)v4 != *(_WORD *)(W32GetUserSessionState(v9, v8) + 13984) )
  {
    if ( (_WORD)v4 != *(_WORD *)(W32GetUserSessionState(v9, v8) + 13986) )
    {
      v11 = *(_QWORD *)(UserSessionState + 20920);
      if ( v11 )
        ApiSetEditionKillAccessibilityTimer(v9, v11);
      return 1LL;
    }
    goto LABEL_9;
  }
LABEL_15:
  LOBYTE(v9) = *(_BYTE *)(UserSessionState + 21850) | *(_BYTE *)(UserSessionState + 21849) | *(_BYTE *)(UserSessionState + 21845);
  if ( (_BYTE)v9 != 17 || (v9 = *(unsigned int *)(W32GetUserSessionState(v9, v8) + 20580), (v9 & 4) == 0) )
  {
    if ( v5 )
    {
      ApiSetEditionKillAccessibilityTimer(v9, *(_QWORD *)(UserSessionState + 20920));
      *(_QWORD *)(UserSessionState + 20920) = 0LL;
      *(_DWORD *)(W32GetUserSessionState(v22, v21) + 20928) = 0;
      *(_BYTE *)(W32GetUserSessionState(v24, v23) + 20936) = 0;
    }
    else if ( !*(_QWORD *)(UserSessionState + 20920) )
    {
      v9 = *(unsigned int *)(W32GetUserSessionState(v9, v8) + 20916);
      if ( (v9 & 4) != 0 )
      {
        *(_DWORD *)(W32GetUserSessionState(v9, v8) + 20928) = v6;
        v25 = *(_BYTE *)a1;
        *(_BYTE *)(W32GetUserSessionState(v27, v26) + 20936) = v25;
        *(_DWORD *)(W32GetUserSessionState(v29, v28) + 20932) = a3;
        *(_QWORD *)(UserSessionState + 20920) = ApiSetEditionSetAccessibilityTimer(0LL, 5000LL, xxxToggleKeysTimer);
      }
    }
    v9 = *(unsigned int *)(W32GetUserSessionState(v9, v8) + 20580);
    if ( (v9 & 1) == 0 )
      goto LABEL_9;
  }
  return 1LL;
}
