/*
 * XREFs of ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x14010A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A9A4 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010AA14 (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall FilterKeys(struct tagKE *a1, __int64 a2, int a3)
{
  char v4; // si
  int v5; // ebp
  int v6; // r12d
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int128 v35; // xmm0
  _OWORD *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned int v47; // eax
  __int128 v48; // [rsp+30h] [rbp-28h]

  v4 = *((_BYTE *)a1 + 2);
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  v6 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v11 = UserSessionState;
  if ( v4 == -95 )
  {
    if ( v5 )
    {
      v44 = *(_QWORD *)(UserSessionState + 20488);
      if ( v44 )
      {
        ApiSetEditionKillAccessibilityTimer(v10, v44);
        *(_QWORD *)(v11 + 20488) = 0LL;
      }
      *(_DWORD *)(W32GetUserSessionState(v10, v44) + 20512) = 0;
    }
    else if ( *(_BYTE *)(UserSessionState + 21845) == 2 )
    {
      v10 = *(unsigned int *)(W32GetUserSessionState(v10, v9) + 20468);
      if ( (v10 & 4) != 0 && !*(_QWORD *)(v11 + 20488) && *(_DWORD *)(W32GetUserSessionState(v10, v9) + 20512) != 8 )
      {
        *(_DWORD *)(W32GetUserSessionState(v10, v9) + 20512) = 1;
        *(_QWORD *)(v11 + 20488) = ApiSetEditionSetAccessibilityTimer(0LL, 4000LL, FKActivationTimer);
      }
    }
  }
  else if ( *(_QWORD *)(UserSessionState + 20488) )
  {
    *(_DWORD *)(W32GetUserSessionState(v10, v9) + 20512) = 0;
    ApiSetEditionKillAccessibilityTimer(v26, *(_QWORD *)(v11 + 20488));
    *(_QWORD *)(v11 + 20488) = 0LL;
  }
  v13 = *(unsigned int *)(W32GetUserSessionState(v10, v9) + 20468);
  if ( (v13 & 1) == 0 )
    return 1LL;
  v15 = *(_BYTE *)(v11 + 21848);
  if ( v5 )
  {
    if ( v4 != v15 )
      return 1LL;
    ApiSetEditionKillAccessibilityTimer(v13, *(_QWORD *)(v11 + 20496));
    *(_QWORD *)(v11 + 20496) = 0LL;
    *(_BYTE *)(v11 + 21848) = 0;
    v17 = *(_QWORD *)(v11 + 20504);
    if ( v17 )
    {
      ApiSetEditionKillAccessibilityTimer(v16, v17);
      *(_QWORD *)(v11 + 20504) = 0LL;
      if ( (*(_DWORD *)(W32GetUserSessionState(v19, v18) + 66800) & 0x800) == 0 )
        return 0LL;
      v22 = W32GetUserSessionState(v21, v20);
      *(_DWORD *)(v22 + 66800) &= ~0x800u;
    }
    v23 = *(unsigned int *)(v11 + 20484);
    if ( !(_DWORD)v23 )
      return 1LL;
    *(_BYTE *)(v11 + 21844) = v4;
    *(_QWORD *)(v11 + 20496) = ApiSetEditionSetAccessibilityTimer(0LL, v23, FKBounceKeyTimer);
    if ( (*(_DWORD *)(W32GetUserSessionState(v25, v24) + 66800) & 0x400) == 0 )
      return 1LL;
  }
  else if ( v4 != v15 )
  {
    *(_BYTE *)(v11 + 21848) = v4;
    v27 = *(_BYTE *)(v11 + 21844);
    if ( v27 )
    {
      if ( v4 == v27 )
      {
        v45 = W32GetUserSessionState(v13, v12);
        *(_DWORD *)(v45 + 66800) |= 0x400u;
        return 0LL;
      }
      v12 = *(_QWORD *)(v11 + 20496);
      if ( v12 )
      {
        ApiSetEditionKillAccessibilityTimer(v13, v12);
        *(_QWORD *)(v11 + 20496) = 0LL;
      }
      *(_BYTE *)(v11 + 21844) = 0;
    }
    v28 = W32GetUserSessionState(v13, v12);
    *(_DWORD *)(v28 + 66800) &= ~0x400u;
    v31 = *(unsigned int *)(W32GetUserSessionState(v30, v29) + 20468);
    if ( (v31 & 0x40) != 0 )
      ApiSetEditionPostRitSound(4LL, v31, 0LL);
    v33 = *(_QWORD *)(v11 + 20504);
    if ( v33 )
    {
      ApiSetEditionKillAccessibilityTimer(v32, v33);
      *(_QWORD *)(v11 + 20504) = 0LL;
    }
    v34 = *(_QWORD *)(v11 + 20496);
    if ( v34 )
    {
      ApiSetEditionKillAccessibilityTimer(v32, v34);
      *(_QWORD *)(v11 + 20496) = 0LL;
    }
    v48 = *((_OWORD *)a1 + 1);
    v35 = *(_OWORD *)a1;
    v36 = *(_OWORD **)(W32GetUserSessionState(v32, v34) + 20552);
    *v36 = v35;
    v36[1] = v48;
    *(_DWORD *)(W32GetUserSessionState(v36, v37) + 20560) = v6;
    *(_DWORD *)(W32GetUserSessionState(v39, v38) + 20564) = a3;
    v40 = *(unsigned int *)(v11 + 20472);
    if ( !(_DWORD)v40 )
    {
      v46 = *(unsigned int *)(v11 + 20480);
      if ( (_DWORD)v46 )
      {
        v47 = *(_DWORD *)(v11 + 20476);
        if ( v47 )
          v46 = v47;
        *(_QWORD *)(v11 + 20496) = ApiSetEditionSetAccessibilityTimer(0LL, v46, xxxFKRepeatRateTimer);
      }
      return 1LL;
    }
    *(_QWORD *)(v11 + 20504) = ApiSetEditionSetAccessibilityTimer(0LL, v40, xxxFKAcceptanceDelayTimer);
    v43 = W32GetUserSessionState(v42, v41);
    *(_DWORD *)(v43 + 66800) &= ~0x800u;
  }
  return 0LL;
}
