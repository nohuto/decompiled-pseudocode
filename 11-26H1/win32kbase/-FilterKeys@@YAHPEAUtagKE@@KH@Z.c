/*
 * XREFs of ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x140149FD0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1401BB43C (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1401C0190 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall FilterKeys(struct tagKE *a1, int a2, int a3)
{
  char v4; // si
  int v5; // ebp
  __int64 UserSessionState; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r8d
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // r8d
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int128 v42; // xmm0
  _OWORD *v43; // rcx
  int v44; // edx
  int v45; // r8d
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  __int64 v49; // rdx
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned int v57; // eax
  __int128 v58; // [rsp+30h] [rbp-28h]

  v4 = *((_BYTE *)a1 + 2);
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v12 = UserSessionState;
  if ( v4 == -95 )
  {
    if ( v5 )
    {
      v54 = *(_QWORD *)(UserSessionState + 20520);
      if ( v54 )
      {
        ApiSetEditionKillAccessibilityTimer(v10, v54);
        *(_QWORD *)(v12 + 20520) = 0LL;
      }
      *(_DWORD *)(W32GetUserSessionState(v10, v54, v11) + 20544) = 0;
    }
    else if ( *(_BYTE *)(UserSessionState + 21877) == 2 )
    {
      LODWORD(v10) = *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 20500);
      if ( (v10 & 4) != 0 && !*(_QWORD *)(v12 + 20520) && *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 20544) != 8 )
      {
        *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 20544) = 1;
        *(_QWORD *)(v12 + 20520) = ApiSetEditionSetAccessibilityTimer(0LL, 4000LL, FKActivationTimer);
      }
    }
  }
  else if ( *(_QWORD *)(UserSessionState + 20520) )
  {
    *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 20544) = 0;
    ApiSetEditionKillAccessibilityTimer(v31, *(_QWORD *)(v12 + 20520));
    *(_QWORD *)(v12 + 20520) = 0LL;
  }
  v14 = *(unsigned int *)(W32GetUserSessionState(v10, v9, v11) + 20500);
  if ( (v14 & 1) == 0 )
    return 1LL;
  v17 = *(_BYTE *)(v12 + 21880);
  if ( v5 )
  {
    if ( v4 != v17 )
      return 1LL;
    ApiSetEditionKillAccessibilityTimer(v14, *(_QWORD *)(v12 + 20528));
    *(_QWORD *)(v12 + 20528) = 0LL;
    *(_BYTE *)(v12 + 21880) = 0;
    v19 = *(_QWORD *)(v12 + 20536);
    if ( v19 )
    {
      ApiSetEditionKillAccessibilityTimer(v18, v19);
      *(_QWORD *)(v12 + 20536) = 0LL;
      if ( (*(_DWORD *)(W32GetUserSessionState(v21, v20, v22) + 66792) & 0x800) == 0 )
        return 0LL;
      v26 = W32GetUserSessionState(v24, v23, v25);
      *(_DWORD *)(v26 + 66792) &= ~0x800u;
    }
    v27 = *(unsigned int *)(v12 + 20516);
    if ( !(_DWORD)v27 )
      return 1LL;
    *(_BYTE *)(v12 + 21876) = v4;
    *(_QWORD *)(v12 + 20528) = ApiSetEditionSetAccessibilityTimer(0LL, v27, FKBounceKeyTimer);
    if ( (*(_DWORD *)(W32GetUserSessionState(v29, v28, v30) + 66792) & 0x400) == 0 )
      return 1LL;
  }
  else if ( v4 != v17 )
  {
    *(_BYTE *)(v12 + 21880) = v4;
    v32 = *(_BYTE *)(v12 + 21876);
    if ( v32 )
    {
      if ( v4 == v32 )
      {
        v55 = W32GetUserSessionState(v14, v13, v15);
        *(_DWORD *)(v55 + 66792) |= 0x400u;
        return 0LL;
      }
      v13 = *(_QWORD *)(v12 + 20528);
      if ( v13 )
      {
        ApiSetEditionKillAccessibilityTimer(v14, v13);
        *(_QWORD *)(v12 + 20528) = 0LL;
      }
      *(_BYTE *)(v12 + 21876) = 0;
    }
    v33 = W32GetUserSessionState(v14, v13, v15);
    *(_DWORD *)(v33 + 66792) &= ~0x400u;
    v37 = *(unsigned int *)(W32GetUserSessionState(v35, v34, v36) + 20500);
    if ( (v37 & 0x40) != 0 )
      ApiSetEditionPostRitSound(4LL, v37, 0LL);
    v40 = *(_QWORD *)(v12 + 20536);
    if ( v40 )
    {
      ApiSetEditionKillAccessibilityTimer(v38, v40);
      *(_QWORD *)(v12 + 20536) = 0LL;
    }
    v41 = *(_QWORD *)(v12 + 20528);
    if ( v41 )
    {
      ApiSetEditionKillAccessibilityTimer(v38, v41);
      *(_QWORD *)(v12 + 20528) = 0LL;
    }
    v58 = *((_OWORD *)a1 + 1);
    v42 = *(_OWORD *)a1;
    v43 = *(_OWORD **)(W32GetUserSessionState(v38, v41, v39) + 20584);
    *v43 = v42;
    v43[1] = v58;
    *(_DWORD *)(W32GetUserSessionState((_DWORD)v43, v44, v45) + 20592) = a2;
    *(_DWORD *)(W32GetUserSessionState(v47, v46, v48) + 20596) = a3;
    v49 = *(unsigned int *)(v12 + 20504);
    if ( !(_DWORD)v49 )
    {
      v56 = *(unsigned int *)(v12 + 20512);
      if ( (_DWORD)v56 )
      {
        v57 = *(_DWORD *)(v12 + 20508);
        if ( v57 )
          v56 = v57;
        *(_QWORD *)(v12 + 20528) = ApiSetEditionSetAccessibilityTimer(0LL, v56, xxxFKRepeatRateTimer);
      }
      return 1LL;
    }
    *(_QWORD *)(v12 + 20536) = ApiSetEditionSetAccessibilityTimer(0LL, v49, xxxFKAcceptanceDelayTimer);
    v53 = W32GetUserSessionState(v51, v50, v52);
    *(_DWORD *)(v53 + 66792) &= ~0x800u;
  }
  return 0LL;
}
