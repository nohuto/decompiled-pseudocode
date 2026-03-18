/*
 * XREFs of ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FB2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1400FB7B0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB990 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401A2520 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1401F9CB0 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140225B48 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140225BA8 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 */

__int64 __fastcall xxxStickyKeys(struct tagKE *a1, __int64 a2, int a3)
{
  char v3; // r14
  unsigned int v4; // r12d
  int v5; // ebp
  _BYTE *UserSessionState; // rax
  __int64 v9; // rdx
  _BYTE *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ebp
  int v33; // esi
  char v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int8 v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx

  v3 = 0;
  v4 = a2;
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  UserSessionState = (_BYTE *)W32GetUserSessionState(a1, a2);
  v10 = UserSessionState;
  v11 = (unsigned __int8)UserSessionState[21846];
  if ( (_BYTE)v11 )
  {
    if ( !v5 && ((unsigned __int8)v11 & UserSessionState[21847]) != 0 )
    {
      UserSessionState[21847] = UserSessionState[21845];
      return 1LL;
    }
    LOBYTE(v9) = UserSessionState[21845];
    UserSessionState[21847] = v9;
    if ( *((_BYTE *)a1 + 2) != 0xA0
      || (v11 = (unsigned int)~(_DWORD)v11, ((unsigned __int8)v11 & (unsigned __int8)v9) != 0) )
    {
      *(_BYTE *)(W32GetUserSessionState(v11, v9) + 14052) = 0;
    }
    else
    {
      v24 = W32GetUserSessionState(v11, v9);
      ++*(_BYTE *)(v24 + 14052);
    }
    if ( *((_BYTE *)a1 + 2) != 0xA1
      || (v18 = ~(unsigned __int8)v10[21846], ((unsigned __int8)~v10[21846] & v10[21845]) != 0) )
    {
      *(_BYTE *)(W32GetUserSessionState(v18, v17) + 14053) = 0;
    }
    else
    {
      v25 = W32GetUserSessionState(v18, v17);
      ++*(_BYTE *)(v25 + 14053);
    }
    if ( *(_BYTE *)(W32GetUserSessionState(v20, v19) + 14052) == 10
      || *(_BYTE *)(W32GetUserSessionState(v22, v21) + 14053) == 10 )
    {
      v42 = *(unsigned int *)(W32GetUserSessionState(v22, v21) + 20572);
      if ( (v42 & 4) != 0 )
      {
        v44 = *(unsigned int *)(W32GetUserSessionState(v42, v41) + 20572);
        if ( (v44 & 1) != 0 )
        {
          xxxTurnOffStickyKeys();
          v42 = *(unsigned int *)(W32GetUserSessionState(v46, v45) + 20572);
          if ( (v42 & 0x10) != 0 )
            ApiSetEditionPostRitSound(1LL, v41, 0LL);
        }
        else
        {
          if ( (*(_DWORD *)(W32GetUserSessionState(v44, v43) + 20572) & 0x10) != 0 )
            ApiSetEditionPostRitSound(0LL, v47, 0LL);
          ApiSetEditionPostAccessibilityShortcutNotification(1LL);
        }
      }
      *(_BYTE *)(W32GetUserSessionState(v42, v41) + 14052) = 0;
      *(_BYTE *)(W32GetUserSessionState(v49, v48) + 14053) = 0;
      return 1LL;
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v22, v21) + 20572) & 1) == 0 )
      return 1LL;
    if ( v5 )
    {
      if ( ((unsigned __int8)(v10[21850] | v10[21849]) & v10[21846]) == 0 )
        return 1LL;
    }
    else
    {
      v26 = (unsigned __int8)v10[21846];
      if ( v10[21845] == (_BYTE)v26 )
      {
        v31 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 91;
        if ( *((_WORD *)a1 + 1) == 91
          || (v31 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 92, *((_WORD *)a1 + 1) == 92) )
        {
          v3 = -64;
        }
        else
        {
          v31 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 160;
          if ( *((_WORD *)a1 + 1) == 160
            || (v31 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 161, *((_WORD *)a1 + 1) == 161) )
          {
            v3 = 3;
          }
          else
          {
            v31 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 162;
            if ( *((_WORD *)a1 + 1) == 162
              || (v31 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 163, *((_WORD *)a1 + 1) == 163) )
            {
              v3 = 12;
            }
            else
            {
              v31 = (unsigned int)*((unsigned __int16 *)a1 + 1) - 164;
              if ( (unsigned int)v31 <= 1 )
                v3 = 48;
            }
          }
        }
        LOBYTE(v32) = v10[21850];
        LOBYTE(v33) = v10[21849];
        if ( ((unsigned __int8)v32 & (unsigned __int8)v3) != 0 )
        {
          v34 = ~v3;
          v33 = (unsigned __int8)(v34 & v33);
          v32 = (unsigned __int8)(v34 & v32);
          xxxUpdateModifierState(v32 | v33 | v26, a3);
        }
        else
        {
          if ( ((unsigned __int8)v32 & (unsigned __int8)v26) == 0 )
            LOBYTE(v33) = v26 ^ v33;
          v37 = W32GetUserSessionState(v31, v26);
          LOBYTE(v35) = v10[21850];
          v38 = v10[21846];
          LOBYTE(v36) = *(char *)(v37 + 20572) < 0;
          if ( ((((unsigned __int8)(v10[21849] | v35) & v38) != 0) & (unsigned __int8)v36) != 0 )
          {
            LOBYTE(v35) = v38 ^ v35;
            LOBYTE(v32) = v35;
          }
        }
        if ( v10[21849] != (_BYTE)v33 || (v39 = 0, v10[21850] != (_BYTE)v32) )
          v39 = 1;
        v10[21849] = v33;
        v10[21850] = v32;
        if ( v39 )
          ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
        if ( (*(_DWORD *)(W32GetUserSessionState(v36, v35) + 20572) & 0x40) != 0 )
        {
          if ( (v10[21850] & v10[21846]) == 0 )
            ApiSetEditionPostRitSound(2LL, v40, 0LL);
          if ( ((unsigned __int8)(v10[21850] | v10[21849]) & v10[21846]) != 0 )
            ApiSetEditionPostRitSound(3LL, v40, 0LL);
        }
        if ( (v10[21849] & v10[21846]) != 0 )
          return 1LL;
      }
      else
      {
        if ( !(unsigned int)xxxTwoKeysDown(a3) )
          return 1LL;
        if ( v10[21850] || (v28 = 0LL, v10[21849] != v10[21845]) )
          v28 = 1LL;
        v10[21849] = v10[21845];
        v10[21850] = 0;
        if ( (_DWORD)v28 )
          ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
        if ( (*(_DWORD *)(W32GetUserSessionState(v28, v27) + 20572) & 0x40) != 0 )
        {
          ApiSetEditionPostRitSound(2LL, v29, 0LL);
          ApiSetEditionPostRitSound(3LL, v30, 0LL);
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(W32GetUserSessionState(v11, v9) + 14052) = 0;
    *(_BYTE *)(W32GetUserSessionState(v13, v12) + 14053) = 0;
    if ( (*(_DWORD *)(W32GetUserSessionState(v15, v14) + 20572) & 1) == 0 )
      return 1LL;
    if ( v10[21845] && !v5 )
    {
      xxxTwoKeysDown(a3);
      return 1LL;
    }
    if ( (unsigned int)AccessProceduresStream(a1, v4, a3) )
      xxxProcessKeyEvent((_DWORD)a1, v4, 0, 0, 0LL, 0LL);
    xxxUpdateModifierState((unsigned __int8)v10[21850], a3);
    v23 = v10[21849] == 0;
    v10[21849] = 0;
    if ( !v23 )
      ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  }
  return 0LL;
}
