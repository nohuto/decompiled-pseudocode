/*
 * XREFs of ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1401229A4
 * Callers:
 *     xxxKELocaleProcs @ 0x140122908 (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 */

void __fastcall xxxAltGr(struct tagKE *a1, __int64 a2, int a3)
{
  int v4; // ecx
  int v5; // edx
  __int16 v6; // ax
  char v7; // di
  char v8; // si
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  v4 = *((unsigned __int16 *)a1 + 1);
  if ( (_BYTE)v4 == 0xA5 )
  {
    v5 = 65533;
    v6 = *((_WORD *)a1 + 8);
    if ( v6 == -3 || (v5 = 65534, v6 == -2) )
    {
      v7 = 1;
      v8 = 1;
    }
    else
    {
      v7 = 0;
      v8 = 0;
    }
    if ( (v4 & 0x8000u) != 0 )
    {
      *(_DWORD *)(W32GetUserSessionState(v4, v5, a3) + 14248) = 0;
      if ( (*(_BYTE *)(W32GetUserSessionState(v13, v12, v14) + 14432) & 0x10) == 0 )
        xxxKeyEventEx(32930, 541, *((_DWORD *)a1 + 1), 0, *((_QWORD *)a1 + 1), (__int64)a1 + 16, v7, 0, 0LL, 0LL);
    }
    else if ( (*(_BYTE *)(W32GetUserSessionState(v4, v5, a3) + 14396) & 4) == 0 )
    {
      *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 14248) = 1;
      xxxKeyEventEx(162, 541, *((_DWORD *)a1 + 1), 0, *((_QWORD *)a1 + 1), (__int64)a1 + 16, v8, 0, 0LL, 0LL);
    }
  }
}
