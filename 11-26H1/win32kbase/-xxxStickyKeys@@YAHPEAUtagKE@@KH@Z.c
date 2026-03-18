/*
 * XREFs of ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x140124580
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x140124A80 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1401251F0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401C6AA0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1402134A0 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140227B14 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140227B74 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall xxxStickyKeys(struct tagKE *a1, unsigned int a2, int a3)
{
  char v3; // r14
  int v5; // ebp
  _BYTE *UserSessionState; // rax
  int v9; // edx
  int v10; // r8d
  _BYTE *v11; // rbx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r8d
  int v30; // edx
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edx
  int v35; // r8d
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned int v39; // ecx
  int v40; // esi
  int v41; // ebp
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rdx
  int v49; // ecx
  int v50; // r8d
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  __int64 v57; // rdx
  int v58; // edx
  int v59; // ecx
  int v60; // r8d

  v3 = 0;
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  UserSessionState = (_BYTE *)W32GetUserSessionState((_DWORD)a1, a2, a3);
  v11 = UserSessionState;
  v12 = (unsigned __int8)UserSessionState[21878];
  if ( (_BYTE)v12 )
  {
    if ( !v5 && ((unsigned __int8)v12 & UserSessionState[21879]) != 0 )
    {
      UserSessionState[21879] = UserSessionState[21877];
      return 1LL;
    }
    LOBYTE(v9) = UserSessionState[21877];
    UserSessionState[21879] = v9;
    if ( *((_BYTE *)a1 + 2) != 0xA0 || (v12 = ~v12, ((unsigned __int8)v12 & (unsigned __int8)v9) != 0) )
    {
      *(_BYTE *)(W32GetUserSessionState(v12, v9, v10) + 14044) = 0;
    }
    else
    {
      v32 = W32GetUserSessionState(v12, v9, v10);
      ++*(_BYTE *)(v32 + 14044);
    }
    if ( *((_BYTE *)a1 + 2) != 0xA1
      || (v21 = ~(unsigned __int8)v11[21878], ((unsigned __int8)~v11[21878] & v11[21877]) != 0) )
    {
      *(_BYTE *)(W32GetUserSessionState(v21, v20, v22) + 14045) = 0;
    }
    else
    {
      v33 = W32GetUserSessionState(v21, v20, v22);
      ++*(_BYTE *)(v33 + 14045);
    }
    if ( *(_BYTE *)(W32GetUserSessionState(v24, v23, v25) + 14044) == 10
      || *(_BYTE *)(W32GetUserSessionState(v27, v26, v28) + 14045) == 10 )
    {
      v49 = *(_DWORD *)(W32GetUserSessionState(v27, v26, v28) + 20604);
      if ( (v49 & 4) != 0 )
      {
        v52 = *(_DWORD *)(W32GetUserSessionState(v49, v48, v50) + 20604);
        if ( (v52 & 1) != 0 )
        {
          xxxTurnOffStickyKeys();
          v49 = *(_DWORD *)(W32GetUserSessionState(v55, v54, v56) + 20604);
          if ( (v49 & 0x10) != 0 )
            ApiSetEditionPostRitSound(1LL, v48, 0LL);
        }
        else
        {
          if ( (*(_DWORD *)(W32GetUserSessionState(v52, v51, v53) + 20604) & 0x10) != 0 )
            ApiSetEditionPostRitSound(0LL, v57, 0LL);
          ApiSetEditionPostAccessibilityShortcutNotification(1LL);
        }
      }
      *(_BYTE *)(W32GetUserSessionState(v49, v48, v50) + 14044) = 0;
      *(_BYTE *)(W32GetUserSessionState(v59, v58, v60) + 14045) = 0;
      return 1LL;
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v27, v26, v28) + 20604) & 1) == 0 )
      return 1LL;
    v30 = (unsigned __int8)v11[21878];
    if ( v5 )
    {
      if ( ((unsigned __int8)(v11[21881] | v11[21882]) & (unsigned __int8)v30) == 0 )
        return 1LL;
    }
    else if ( v11[21877] == (_BYTE)v30 )
    {
      v39 = *((unsigned __int16 *)a1 + 1) - 91;
      if ( *((_WORD *)a1 + 1) == 91 || (v39 = *((unsigned __int16 *)a1 + 1) - 92, *((_WORD *)a1 + 1) == 92) )
      {
        v3 = -64;
      }
      else
      {
        v39 = *((unsigned __int16 *)a1 + 1) - 160;
        if ( *((_WORD *)a1 + 1) == 160 || (v39 = *((unsigned __int16 *)a1 + 1) - 161, *((_WORD *)a1 + 1) == 161) )
        {
          v3 = 3;
        }
        else
        {
          v39 = *((unsigned __int16 *)a1 + 1) - 162;
          if ( *((_WORD *)a1 + 1) == 162 || (v39 = *((unsigned __int16 *)a1 + 1) - 163, *((_WORD *)a1 + 1) == 163) )
          {
            v3 = 12;
          }
          else
          {
            v39 = *((unsigned __int16 *)a1 + 1) - 164;
            if ( v39 <= 1 )
              v3 = 48;
          }
        }
      }
      LOBYTE(v40) = v11[21882];
      LOBYTE(v41) = v11[21881];
      if ( ((unsigned __int8)v40 & (unsigned __int8)v3) != 0 )
      {
        v41 = (unsigned __int8)(v41 & ~v3);
        v40 = (unsigned __int8)(v40 & ~v3);
        xxxUpdateModifierState(v30 | v40 | v41, a3);
      }
      else
      {
        if ( ((unsigned __int8)v30 & (unsigned __int8)v40) == 0 )
          LOBYTE(v41) = v30 ^ v41;
        v45 = W32GetUserSessionState(v39, v30, v29);
        LOBYTE(v42) = v11[21882];
        LOBYTE(v44) = v11[21878];
        LOBYTE(v43) = *(char *)(v45 + 20604) < 0;
        if ( ((((unsigned __int8)(v11[21881] | v42) & (unsigned __int8)v44) != 0) & (unsigned __int8)v43) != 0 )
        {
          LOBYTE(v42) = v44 ^ v42;
          LOBYTE(v40) = v42;
        }
      }
      if ( v11[21881] != (_BYTE)v41 || (v46 = 0, v11[21882] != (_BYTE)v40) )
        v46 = 1;
      v11[21881] = v41;
      v11[21882] = v40;
      if ( v46 )
        ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
      if ( (*(_DWORD *)(W32GetUserSessionState(v43, v42, v44) + 20604) & 0x40) != 0 )
      {
        if ( (v11[21878] & v11[21882]) == 0 )
          ApiSetEditionPostRitSound(2LL, v47, 0LL);
        if ( ((unsigned __int8)(v11[21881] | v11[21882]) & v11[21878]) != 0 )
          ApiSetEditionPostRitSound(3LL, v47, 0LL);
      }
      if ( (v11[21878] & v11[21881]) != 0 )
        return 1LL;
    }
    else
    {
      if ( !(unsigned int)xxxTwoKeysDown(a3) )
        return 1LL;
      if ( v11[21882] || (v36 = 0, v11[21881] != v11[21877]) )
        v36 = 1;
      v11[21881] = v11[21877];
      v11[21882] = 0;
      if ( v36 )
        ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
      if ( (*(_DWORD *)(W32GetUserSessionState(v36, v34, v35) + 20604) & 0x40) != 0 )
      {
        ApiSetEditionPostRitSound(2LL, v37, 0LL);
        ApiSetEditionPostRitSound(3LL, v38, 0LL);
      }
    }
  }
  else
  {
    *(_BYTE *)(W32GetUserSessionState(v12, v9, v10) + 14044) = 0;
    *(_BYTE *)(W32GetUserSessionState(v14, v13, v15) + 14045) = 0;
    if ( (*(_DWORD *)(W32GetUserSessionState(v17, v16, v18) + 20604) & 1) == 0 )
      return 1LL;
    if ( v11[21877] && !v5 )
    {
      xxxTwoKeysDown(a3);
      return 1LL;
    }
    if ( (unsigned int)AccessProceduresStream(a1, a2, a3) )
      xxxProcessKeyEvent((_DWORD)a1, a2, 0, 0, 0LL, 0LL);
    xxxUpdateModifierState((unsigned __int8)v11[21882], a3);
    v31 = v11[21881];
    v11[21881] = 0;
    if ( v31 )
      ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  }
  return 0LL;
}
