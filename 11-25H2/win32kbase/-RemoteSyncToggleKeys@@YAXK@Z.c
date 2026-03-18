/*
 * XREFs of ?RemoteSyncToggleKeys@@YAXK@Z @ 0x14015FD7C
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1400FAA64 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     GetActiveHKL @ 0x1400670C0 (GetActiveHKL.c)
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall RemoteSyncToggleKeys(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rcx
  __int16 ActiveHKL; // ax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // ecx
  _QWORD v34[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v35; // [rsp+40h] [rbp-20h]

  v34[0] = 0LL;
  v35 = 0LL;
  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 12924) = a1 | 0x8000;
  v34[1] = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18888) )
  {
    v6 = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 12924) & 0x4000;
    v9 = *(_DWORD *)(W32GetUserSessionState(v8, v7) + 12924);
    LOBYTE(v13) = ~*(_BYTE *)(W32GetUserSessionState(v11, v10) + 14405);
    v14 = (v13 >> 1) & 1;
    if ( ((v9 & 4) == 0) != (_DWORD)v14 )
    {
      LOBYTE(v34[0]) = 58;
      WORD1(v34[0]) = 20;
      xxxProcessKeyEvent((unsigned __int16 *)v34, 0LL, v6 != 0, 0, 0LL, 0LL);
      WORD1(v34[0]) = -32748;
      LOBYTE(v34[0]) = 58;
      xxxProcessKeyEvent((unsigned __int16 *)v34, 0LL, v6 != 0, 0, 0LL, 0LL);
    }
    v15 = *(_DWORD *)(W32GetUserSessionState(v14, v12) + 12924);
    LOBYTE(v19) = ~*(_BYTE *)(W32GetUserSessionState(v17, v16) + 14436);
    v20 = (v19 >> 1) & 1;
    if ( ((v15 & 2) == 0) != (_DWORD)v20 )
    {
      LOBYTE(v34[0]) = 69;
      WORD1(v34[0]) = 144;
      xxxProcessKeyEvent((unsigned __int16 *)v34, 0LL, v6 != 0, 0, 0LL, 0LL);
      WORD1(v34[0]) = -32624;
      LOBYTE(v34[0]) = 69;
      xxxProcessKeyEvent((unsigned __int16 *)v34, 0LL, v6 != 0, 0, 0LL, 0LL);
    }
    v21 = *(_DWORD *)(W32GetUserSessionState(v20, v18) + 12924) & 1;
    LOBYTE(v25) = ~*(_BYTE *)(W32GetUserSessionState(v23, v22) + 14436);
    v26 = (v25 >> 3) & 1;
    if ( (v21 ^ 1) != (_DWORD)v26 )
    {
      LOBYTE(v34[0]) = 70;
      WORD1(v34[0]) = 145;
      xxxProcessKeyEvent((unsigned __int16 *)v34, 0LL, v6 != 0, 0, 0LL, 0LL);
      WORD1(v34[0]) = -32623;
      LOBYTE(v34[0]) = 70;
      xxxProcessKeyEvent((unsigned __int16 *)v34, 0LL, v6 != 0, 0, 0LL, 0LL);
    }
    ActiveHKL = GetActiveHKL(v26, v24);
    v29 = 1023LL;
    if ( (ActiveHKL & 0x3FF) == 0x11 )
    {
      v30 = *(_DWORD *)(W32GetUserSessionState(1023LL, v28) + 12924);
      LOBYTE(v33) = ~*(_BYTE *)(W32GetUserSessionState(v32, v31) + 14405);
      v29 = (v33 >> 3) & 1;
      if ( ((v30 & 8) == 0) != (_DWORD)v29 )
      {
        LOBYTE(v34[0]) = 112;
        WORD1(v34[0]) = 21;
        xxxProcessKeyEvent((unsigned __int16 *)v34, 0LL, v6 != 0, 0, 0LL, 0LL);
        WORD1(v34[0]) = -32747;
        LOBYTE(v34[0]) = 112;
        xxxProcessKeyEvent((unsigned __int16 *)v34, 0LL, v6 != 0, 0, 0LL, 0LL);
      }
    }
    *(_DWORD *)(W32GetUserSessionState(v29, v28) + 12924) = 0;
  }
}
