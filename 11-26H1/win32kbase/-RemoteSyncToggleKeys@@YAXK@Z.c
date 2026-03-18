/*
 * XREFs of ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1401A4024
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x140123CFC (ProcessKeyboardInputWorker.c)
 * Callees:
 *     GetActiveHKL @ 0x14008B420 (GetActiveHKL.c)
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall RemoteSyncToggleKeys(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // ebx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  unsigned int v18; // ecx
  int v19; // r8d
  int v20; // ecx
  int v21; // r8d
  int v22; // ebx
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  unsigned int v27; // ecx
  int v28; // r8d
  int v29; // ecx
  int v30; // r8d
  int v31; // ebx
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // edx
  unsigned int v36; // ecx
  int v37; // r8d
  int v38; // ecx
  int v39; // r8d
  __int16 ActiveHKL; // ax
  int v41; // edx
  int v42; // r8d
  int v43; // ecx
  int v44; // ebx
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  unsigned int v48; // ecx
  int v49; // r8d
  _QWORD v50[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v51; // [rsp+40h] [rbp-20h]

  v50[0] = 0LL;
  v51 = 0LL;
  *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 12916) = a1 | 0x8000;
  v50[1] = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 18928) )
  {
    v9 = *(_DWORD *)(W32GetUserSessionState(v7, v6, v8) + 12916) & 0x4000;
    v13 = *(_DWORD *)(W32GetUserSessionState(v11, v10, v12) + 12916);
    LOBYTE(v18) = ~*(_BYTE *)(W32GetUserSessionState(v15, v14, v16) + 14397);
    v20 = (v18 >> 1) & 1;
    if ( ((v13 & 4) == 0) != v20 )
    {
      LOBYTE(v50[0]) = 58;
      WORD1(v50[0]) = 20;
      LOBYTE(v19) = v9 != 0;
      xxxProcessKeyEvent((unsigned __int16 *)v50, 0LL, v19, 0, 0LL, 0LL);
      WORD1(v50[0]) = -32748;
      LOBYTE(v21) = v9 != 0;
      LOBYTE(v50[0]) = 58;
      xxxProcessKeyEvent((unsigned __int16 *)v50, 0LL, v21, 0, 0LL, 0LL);
    }
    v22 = *(_DWORD *)(W32GetUserSessionState(v20, v17, v19) + 12916);
    LOBYTE(v27) = ~*(_BYTE *)(W32GetUserSessionState(v24, v23, v25) + 14428);
    v29 = (v27 >> 1) & 1;
    if ( ((v22 & 2) == 0) != v29 )
    {
      LOBYTE(v50[0]) = 69;
      WORD1(v50[0]) = 144;
      LOBYTE(v28) = v9 != 0;
      xxxProcessKeyEvent((unsigned __int16 *)v50, 0LL, v28, 0, 0LL, 0LL);
      WORD1(v50[0]) = -32624;
      LOBYTE(v30) = v9 != 0;
      LOBYTE(v50[0]) = 69;
      xxxProcessKeyEvent((unsigned __int16 *)v50, 0LL, v30, 0, 0LL, 0LL);
    }
    v31 = *(_DWORD *)(W32GetUserSessionState(v29, v26, v28) + 12916) & 1;
    LOBYTE(v36) = ~*(_BYTE *)(W32GetUserSessionState(v33, v32, v34) + 14428);
    v38 = (v36 >> 3) & 1;
    if ( (v31 ^ 1) != v38 )
    {
      LOBYTE(v50[0]) = 70;
      WORD1(v50[0]) = 145;
      LOBYTE(v37) = v9 != 0;
      xxxProcessKeyEvent((unsigned __int16 *)v50, 0LL, v37, 0, 0LL, 0LL);
      WORD1(v50[0]) = -32623;
      LOBYTE(v39) = v9 != 0;
      LOBYTE(v50[0]) = 70;
      xxxProcessKeyEvent((unsigned __int16 *)v50, 0LL, v39, 0, 0LL, 0LL);
    }
    ActiveHKL = GetActiveHKL(v38, v35, v37);
    v43 = 1023;
    if ( (ActiveHKL & 0x3FF) == 0x11 )
    {
      v44 = *(_DWORD *)(W32GetUserSessionState(1023, v41, v42) + 12916);
      LOBYTE(v48) = ~*(_BYTE *)(W32GetUserSessionState(v46, v45, v47) + 14397);
      v43 = (v48 >> 3) & 1;
      if ( ((v44 & 8) == 0) != v43 )
      {
        LOBYTE(v50[0]) = 112;
        WORD1(v50[0]) = 21;
        LOBYTE(v42) = v9 != 0;
        xxxProcessKeyEvent((unsigned __int16 *)v50, 0LL, v42, 0, 0LL, 0LL);
        WORD1(v50[0]) = -32747;
        LOBYTE(v49) = v9 != 0;
        LOBYTE(v50[0]) = 112;
        xxxProcessKeyEvent((unsigned __int16 *)v50, 0LL, v49, 0, 0LL, 0LL);
      }
    }
    *(_DWORD *)(W32GetUserSessionState(v43, v41, v42) + 12916) = 0;
  }
}
