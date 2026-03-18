/*
 * XREFs of ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x14010ECA8
 * Callers:
 *     xxxKELocaleProcs @ 0x14010EC0C (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 */

void __fastcall xxxAltGr(struct tagKE *a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // si
  char v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = *((unsigned __int16 *)a1 + 1);
  if ( (_BYTE)v3 == 0xA5 )
  {
    if ( (unsigned __int16)(*((_WORD *)a1 + 8) + 3) <= 1u )
    {
      v4 = 1;
      v5 = 1;
    }
    else
    {
      v4 = 0;
      v5 = 0;
    }
    if ( (v3 & 0x8000u) != 0LL )
    {
      *(_DWORD *)(W32GetUserSessionState(v3, a2) + 14256) = 0;
      if ( (*(_BYTE *)(W32GetUserSessionState(v9, v8) + 14440) & 0x10) == 0 )
        xxxKeyEventEx(32930, 541, *((_DWORD *)a1 + 1), 0, *((_QWORD *)a1 + 1), (__int64)a1 + 16, v4, 0, 0LL, 0LL);
    }
    else if ( (*(_BYTE *)(W32GetUserSessionState(v3, a2) + 14404) & 4) == 0 )
    {
      *(_DWORD *)(W32GetUserSessionState(v7, v6) + 14256) = 1;
      xxxKeyEventEx(162, 541, *((_DWORD *)a1 + 1), 0, *((_QWORD *)a1 + 1), (__int64)a1 + 16, v5, 0, 0LL, 0LL);
    }
  }
}
