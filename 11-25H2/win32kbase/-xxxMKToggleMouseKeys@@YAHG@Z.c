/*
 * XREFs of ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1401F9930
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x14010A2E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 *     ??B?$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ @ 0x1401F8C1C (--B-$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1401F9020 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1401F94C0 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140225B48 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

_BOOL8 __fastcall xxxMKToggleMouseKeys(__int64 a1, __int64 a2)
{
  BOOL v2; // ebp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int16 v33; // bx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx

  v2 = 1;
  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66800) & 0x2000) == 0 )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    v8 = *(_BYTE *)(W32GetUserSessionState(v7, v6) + 21849);
    v11 = *(_BYTE *)(UserSessionState + 21845) | *(_BYTE *)(W32GetUserSessionState(v10, v9) + 21850) | v8;
    v14 = W32GetUserSessionState(v13, v12);
    if ( v11 == 17 )
    {
      v17 = *(unsigned int *)(v14 + 20580);
      if ( (v17 & 4) != 0 )
      {
        v2 = SGACCESSIBILITYgbMKMouseMode<unsigned char>::operator bool(v17, v15);
        TurnOffMouseKeys(v19, v18);
      }
    }
    else
    {
      v20 = v14;
      v21 = (unsigned __int64)*(unsigned __int8 *)(W32GetUserSessionState(v16, v15) + 13984) >> 2;
      v24 = W32GetUserSessionState(v23, v22);
      v25 = *(unsigned __int8 *)(v20 + v21 + 14336) & (1 << (2 * (*(_WORD *)(v24 + 13984) & 3) + 1));
      v28 = (*(_DWORD *)(W32GetUserSessionState(2 * (*(_WORD *)(v24 + 13984) & 3u) + 1, v26) + 20580) >> 7) & 1;
      if ( (_DWORD)v28 == (v25 != 0) )
      {
        *(_BYTE *)(W32GetUserSessionState(v28, v27) + 20887) = 1;
        ApiSetEditionPostRitSound(3LL, v29, 0LL);
      }
      else
      {
        *(_BYTE *)(W32GetUserSessionState(v28, v27) + 20887) = 0;
        ApiSetEditionPostRitSound(2LL, v30, 0LL);
        v33 = *(_WORD *)(W32GetUserSessionState(v32, v31) + 20606);
        *(_WORD *)(W32GetUserSessionState(v35, v34) + 20606) = 3;
        xxxMKButtonSetState(1LL, v36);
        *(_WORD *)(W32GetUserSessionState(v38, v37) + 20606) = v33;
      }
      ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
    }
  }
  return v2;
}
