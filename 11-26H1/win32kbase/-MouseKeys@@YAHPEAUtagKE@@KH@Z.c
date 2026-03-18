/*
 * XREFs of ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401496E0
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ @ 0x140149998 (--B-$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1401C0190 (ApiSetEditionKillAccessibilityTimer.c)
 *     ??8?$SGACCESSIBILITYgMKPreviousVk@E@@QEBA_NAEBE@Z @ 0x14021240C (--8-$SGACCESSIBILITYgMKPreviousVk@E@@QEBA_NAEBE@Z.c)
 *     ?MKButtonSelect@@YAHG@Z @ 0x140212730 (-MKButtonSelect@@YAHG@Z.c)
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x140212C50 (-xxxMKButtonClick@@YAHG@Z.c)
 *     ?xxxMKButtonDoubleClick@@YAHG@Z @ 0x140212CA0 (-xxxMKButtonDoubleClick@@YAHG@Z.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x140212CC0 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x140212D80 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x140213140 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140227B74 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MouseKeys(struct tagKE *a1, int a2, int a3)
{
  __int16 v3; // si
  __int16 v5; // r13
  int v6; // r13d
  unsigned __int8 *UserSessionState; // rax
  int v8; // ecx
  int v9; // r15d
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int16 v22; // bp
  unsigned int v23; // ebx
  int v24; // r14d
  __int64 i; // rdi
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rdi
  __int64 v30; // rcx
  char v31; // al
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rdx
  int v50; // ecx
  int v51; // r8d
  char v52; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((unsigned __int8 *)a1 + 2);
  v5 = *((_WORD *)a1 + 1);
  v52 = *((_BYTE *)a1 + 2);
  v6 = v5 & 0x8000;
  UserSessionState = (unsigned __int8 *)W32GetUserSessionState((_DWORD)a1, a2, a3);
  v8 = UserSessionState[21881];
  v9 = UserSessionState[21877] | v8 | UserSessionState[21882];
  LODWORD(v13) = *(_DWORD *)(W32GetUserSessionState(v8, v10, v11) + 20612);
  if ( (v13 & 1) == 0 )
  {
    v16 = *(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 20612);
    if ( (v16 & 4) != 0 && v3 == *(_WORD *)(W32GetUserSessionState(v16, v15, v17) + 13976) && !v6 && v9 == 17 )
    {
      *(_BYTE *)(W32GetUserSessionState(v19, v18, v20) + 20918) = v3;
      if ( (*(_DWORD *)(W32GetUserSessionState(v41, v40, v42) + 20612) & 0x10) != 0 )
        ApiSetEditionPostRitSound(0LL, v43, 0LL);
      ApiSetEditionPostAccessibilityShortcutNotification(3LL);
      return 0LL;
    }
    return 1LL;
  }
  v22 = v3 | *((_WORD *)a1 + 1) & 0x100;
  v23 = 0;
  v24 = 0;
  for ( i = 0LL; i < 32; i += 2LL )
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 14192);
    if ( v22 == *(_WORD *)(i + v13) )
      break;
    ++v24;
  }
  if ( v24 == 16
    || !(unsigned __int8)SGACCESSIBILITYgbMKMouseMode<unsigned char>::operator bool()
    && v3 != *(_WORD *)(W32GetUserSessionState(v27, v26, v28) + 13976) )
  {
    return 1LL;
  }
  if ( (_BYTE)v3 == 46 )
  {
    LOBYTE(v27) = (v9 & 0x30) != 0;
    if ( ((unsigned __int8)v27 & ((v9 & 0xC) != 0)) != 0 )
      return 1LL;
  }
  v29 = W32GetUserSessionState(v27, v26, v28);
  v31 = SGACCESSIBILITYgMKPreviousVk<unsigned char>::operator==(v30, &v52);
  if ( v6 )
  {
    if ( v31 )
    {
      v35 = *(_QWORD *)(v29 + 20640);
      if ( v35 )
      {
        ApiSetEditionKillAccessibilityTimer();
        *(_QWORD *)(v29 + 20640) = 0LL;
      }
      v36 = W32GetUserSessionState(v33, v35, v34);
      *(_DWORD *)(v36 + 66792) &= ~0x2000u;
      *(_BYTE *)(W32GetUserSessionState(v38, v37, v39) + 20918) = 0;
    }
    LOBYTE(v23) = v3 == *(_WORD *)(W32GetUserSessionState(v33, v32, v34) + 13976);
    return v23;
  }
  else
  {
    if ( v31 )
    {
      v44 = W32GetUserSessionState(v33, v32, v34);
      *(_DWORD *)(v44 + 66792) |= 0x2000u;
    }
    else
    {
      v48 = W32GetUserSessionState(v33, v32, v34);
      *(_DWORD *)(v48 + 66792) &= ~0x2000u;
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v46, v45, v47) + 66792) & 0x2000) == 0 )
    {
      v49 = *(_QWORD *)(v29 + 20640);
      if ( v49 )
      {
        ApiSetEditionKillAccessibilityTimer();
        *(_QWORD *)(v29 + 20640) = 0LL;
      }
    }
    *(_BYTE *)(W32GetUserSessionState(v50, v49, v51) + 20918) = v3;
    return funcs_140149988[v24](word_14027BB88[v24]);
  }
}
