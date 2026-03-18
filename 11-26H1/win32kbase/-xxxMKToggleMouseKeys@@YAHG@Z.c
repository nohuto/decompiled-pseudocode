/*
 * XREFs of ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x140213140
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401496E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ??B?$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ @ 0x140149998 (--B-$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x140212820 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x140212CC0 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140227B14 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 */

_BOOL8 __fastcall xxxMKToggleMouseKeys(int a1, int a2, int a3)
{
  BOOL v3; // esi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rdi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  char v11; // bl
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  char v15; // bl
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rbx
  unsigned __int64 v28; // rcx
  int v29; // edx
  int v30; // r8d
  __int64 v31; // rax
  int v32; // edi
  int v33; // edx
  int v34; // r8d
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rdx
  __int64 v39; // rdx
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  __int16 v43; // bx
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // edx
  int v48; // r8d
  int v49; // edx
  int v50; // ecx
  int v51; // r8d

  v3 = 1;
  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 66792) & 0x2000) == 0 )
  {
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    v11 = *(_BYTE *)(W32GetUserSessionState(v9, v8, v10) + 21881);
    v15 = *(_BYTE *)(UserSessionState + 21877) | *(_BYTE *)(W32GetUserSessionState(v13, v12, v14) + 21882) | v11;
    v19 = W32GetUserSessionState(v17, v16, v18);
    if ( v15 == 17 )
    {
      v23 = *(_DWORD *)(v19 + 20612);
      if ( (v23 & 4) != 0 )
      {
        v3 = SGACCESSIBILITYgbMKMouseMode<unsigned char>::operator bool(v23, v20, v22);
        TurnOffMouseKeys(v25, v24, v26);
      }
    }
    else
    {
      v27 = v19;
      v28 = (unsigned __int64)*(unsigned __int8 *)(W32GetUserSessionState(v21, v20, v22) + 13976) >> 2;
      LODWORD(v27) = *(unsigned __int8 *)(v28 + v27 + 14328);
      v31 = W32GetUserSessionState(v28, v29, v30);
      v32 = 1 << (2 * (*(_BYTE *)(v31 + 13976) & 3) + 1);
      v36 = (*(_DWORD *)(W32GetUserSessionState(2 * (*(_BYTE *)(v31 + 13976) & 3u) + 1, v33, v34) + 20612) >> 7) & 1;
      if ( v36 == ((v32 & (unsigned int)v27) != 0) )
      {
        *(_BYTE *)(W32GetUserSessionState(v36, v35, v37) + 20919) = 1;
        ApiSetEditionPostRitSound(3LL, v38, 0LL);
      }
      else
      {
        *(_BYTE *)(W32GetUserSessionState(v36, v35, v37) + 20919) = 0;
        ApiSetEditionPostRitSound(2LL, v39, 0LL);
        v43 = *(_WORD *)(W32GetUserSessionState(v41, v40, v42) + 20638);
        *(_WORD *)(W32GetUserSessionState(v45, v44, v46) + 20638) = 3;
        xxxMKButtonSetState(1, v47, v48);
        *(_WORD *)(W32GetUserSessionState(v50, v49, v51) + 20638) = v43;
      }
      ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
    }
  }
  return v3;
}
