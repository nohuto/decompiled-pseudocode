/*
 * XREFs of ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x14010A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A9A4 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 *     ??8?$SGACCESSIBILITYgMKPreviousVk@E@@QEBA_NAEBE@Z @ 0x1401F8BEC (--8-$SGACCESSIBILITYgMKPreviousVk@E@@QEBA_NAEBE@Z.c)
 *     ??B?$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ @ 0x1401F8C1C (--B-$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ.c)
 *     ?MKButtonSelect@@YAHG@Z @ 0x1401F8F30 (-MKButtonSelect@@YAHG@Z.c)
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x1401F9450 (-xxxMKButtonClick@@YAHG@Z.c)
 *     ?xxxMKButtonDoubleClick@@YAHG@Z @ 0x1401F94A0 (-xxxMKButtonDoubleClick@@YAHG@Z.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1401F94C0 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1401F9570 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1401F9930 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140225BA8 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MouseKeys(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // si
  __int16 v4; // r13
  int v5; // r13d
  unsigned __int8 *UserSessionState; // rax
  __int64 v7; // rcx
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int16 v17; // bp
  unsigned int v18; // ebx
  int v19; // r14d
  __int64 i; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  char v41; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((unsigned __int8 *)a1 + 2);
  v4 = *((_WORD *)a1 + 1);
  v41 = *((_BYTE *)a1 + 2);
  v5 = v4 & 0x8000;
  UserSessionState = (unsigned __int8 *)W32GetUserSessionState(a1, a2);
  v7 = UserSessionState[21849];
  v8 = UserSessionState[21845] | v7 | UserSessionState[21850];
  v11 = *(unsigned int *)(W32GetUserSessionState(v7, v9) + 20580);
  if ( (v11 & 1) == 0 )
  {
    v13 = *(unsigned int *)(W32GetUserSessionState(v11, v10) + 20580);
    if ( (v13 & 4) != 0 && v2 == *(_WORD *)(W32GetUserSessionState(v13, v12) + 13984) && !v5 && v8 == 17 )
    {
      *(_BYTE *)(W32GetUserSessionState(v15, v14) + 20886) = v2;
      if ( (*(_DWORD *)(W32GetUserSessionState(v33, v32) + 20580) & 0x10) != 0 )
        ApiSetEditionPostRitSound(0LL, v34, 0LL);
      ApiSetEditionPostAccessibilityShortcutNotification(3LL);
      return 0LL;
    }
    return 1LL;
  }
  v17 = v2 | *((_WORD *)a1 + 1) & 0x100;
  v18 = 0;
  v19 = 0;
  for ( i = 0LL; i < 32; i += 2LL )
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 14200);
    if ( v17 == *(_WORD *)(i + v11) )
      break;
    ++v19;
  }
  if ( v19 == 16
    || !(unsigned __int8)SGACCESSIBILITYgbMKMouseMode<unsigned char>::operator bool()
    && v2 != *(_WORD *)(W32GetUserSessionState(v22, v21) + 13984) )
  {
    return 1LL;
  }
  if ( (_BYTE)v2 == 46 )
  {
    LOBYTE(v22) = (v8 & 0x30) != 0;
    if ( ((unsigned __int8)v22 & ((v8 & 0xC) != 0)) != 0 )
      return 1LL;
  }
  v23 = W32GetUserSessionState(v22, v21);
  v25 = SGACCESSIBILITYgMKPreviousVk<unsigned char>::operator==(v24, &v41);
  if ( v5 )
  {
    if ( v25 )
    {
      v28 = *(_QWORD *)(v23 + 20608);
      if ( v28 )
      {
        ApiSetEditionKillAccessibilityTimer(v27, v28);
        *(_QWORD *)(v23 + 20608) = 0LL;
      }
      v29 = W32GetUserSessionState(v27, v28);
      *(_DWORD *)(v29 + 66800) &= ~0x2000u;
      *(_BYTE *)(W32GetUserSessionState(v31, v30) + 20886) = 0;
    }
    LOBYTE(v18) = v2 == *(_WORD *)(W32GetUserSessionState(v27, v26) + 13984);
    return v18;
  }
  else
  {
    if ( v25 )
    {
      v35 = W32GetUserSessionState(v27, v26);
      *(_DWORD *)(v35 + 66800) |= 0x2000u;
    }
    else
    {
      v38 = W32GetUserSessionState(v27, v26);
      *(_DWORD *)(v38 + 66800) &= ~0x2000u;
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v37, v36) + 66800) & 0x2000) == 0 )
    {
      v39 = *(_QWORD *)(v23 + 20608);
      if ( v39 )
      {
        ApiSetEditionKillAccessibilityTimer(v40, v39);
        *(_QWORD *)(v23 + 20608) = 0LL;
      }
    }
    *(_BYTE *)(W32GetUserSessionState(v40, v39) + 20886) = v2;
    return funcs_14010A588[v19](word_140273010[v19]);
  }
}
