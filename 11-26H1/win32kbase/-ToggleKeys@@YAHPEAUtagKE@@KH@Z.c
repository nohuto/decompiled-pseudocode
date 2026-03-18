/*
 * XREFs of ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x140149C90
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1401BB43C (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1401C0190 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall ToggleKeys(struct tagKE *a1, int a2, int a3)
{
  unsigned __int64 v4; // r14
  int v5; // esi
  int v8; // edx
  __int64 v9; // rcx
  __int64 UserSessionState; // rdi
  int v11; // r8d
  __int64 v12; // rdx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // ebx
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  char v28; // bl
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d

  v4 = *((unsigned __int8 *)a1 + 2);
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  switch ( (_DWORD)v4 )
  {
    case 0x14:
      goto LABEL_9;
    case 0x90:
      goto LABEL_15;
    case 0x91:
LABEL_9:
      v15 = *(_DWORD *)(W32GetUserSessionState(v9, v8, v11) + 20948);
      if ( (v15 & 1) != 0 && !v5 )
      {
        v17 = v4 & 3;
        LOBYTE(v18) = *(_BYTE *)(W32GetUserSessionState(v15, v14, v16) + (v4 >> 2) + 14328);
        if ( ((unsigned __int8)v18 & (unsigned __int8)(1 << (2 * v17))) == 0 )
        {
          v20 = W32GetUserSessionState(2 * v17, v18, v19);
          v21 = 3LL;
          if ( (*(_BYTE *)(v20 + (v4 >> 2) + 14328) & (unsigned __int8)(1 << (2 * v17 + 1))) != 0 )
            v21 = 2LL;
          ApiSetEditionPostRitSound(v21, v4 >> 2, 0LL);
        }
      }
      return 1LL;
  }
  if ( (_WORD)v4 != *(_WORD *)(W32GetUserSessionState(v9, v8, v11) + 13976) )
  {
    if ( (_WORD)v4 != *(_WORD *)(W32GetUserSessionState(v9, v8, v11) + 13978) )
    {
      v12 = *(_QWORD *)(UserSessionState + 20952);
      if ( v12 )
        ApiSetEditionKillAccessibilityTimer(v9, v12);
      return 1LL;
    }
    goto LABEL_9;
  }
LABEL_15:
  LOBYTE(v9) = *(_BYTE *)(UserSessionState + 21882) | *(_BYTE *)(UserSessionState + 21881) | *(_BYTE *)(UserSessionState + 21877);
  if ( (_BYTE)v9 != 17 || (v9 = *(unsigned int *)(W32GetUserSessionState(v9, v8, v11) + 20612), (v9 & 4) == 0) )
  {
    if ( v5 )
    {
      ApiSetEditionKillAccessibilityTimer(v9, *(_QWORD *)(UserSessionState + 20952));
      *(_QWORD *)(UserSessionState + 20952) = 0LL;
      *(_DWORD *)(W32GetUserSessionState(v23, v22, v24) + 20960) = 0;
      *(_BYTE *)(W32GetUserSessionState(v26, v25, v27) + 20968) = 0;
    }
    else if ( !*(_QWORD *)(UserSessionState + 20952) )
    {
      LODWORD(v9) = *(_DWORD *)(W32GetUserSessionState(v9, v8, v11) + 20948);
      if ( (v9 & 4) != 0 )
      {
        *(_DWORD *)(W32GetUserSessionState(v9, v8, v11) + 20960) = a2;
        v28 = *(_BYTE *)a1;
        *(_BYTE *)(W32GetUserSessionState(v30, v29, v31) + 20968) = v28;
        *(_DWORD *)(W32GetUserSessionState(v33, v32, v34) + 20964) = a3;
        *(_QWORD *)(UserSessionState + 20952) = ApiSetEditionSetAccessibilityTimer(0LL, 5000LL, xxxToggleKeysTimer);
      }
    }
    LODWORD(v9) = *(_DWORD *)(W32GetUserSessionState(v9, v8, v11) + 20612);
    if ( (v9 & 1) == 0 )
      goto LABEL_9;
  }
  return 1LL;
}
