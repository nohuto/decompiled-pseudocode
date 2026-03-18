/*
 * XREFs of ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x140122EB8
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x14011B070 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x140123000 (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall xxxManageKeyboardModifiers(struct tagKL *a1, struct tagKL *a2)
{
  struct tagTHREADINFO *v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rbx
  struct tagTHREADINFO *v9; // rsi
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rax
  int v13; // ecx
  __int64 UserSessionState; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rax
  unsigned __int8 v19[16]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v20; // [rsp+60h] [rbp-38h]

  v4 = PtiCurrent((__int64)a1, (__int64)a2);
  v8 = 0LL;
  v9 = v4;
  if ( *((_QWORD *)v4 + 58) )
  {
    if ( a1 )
    {
      *(_OWORD *)v19 = 0LL;
      v20 = 0LL;
      xxxAdjustPushStateForKL(v4, v19, a1, a1, a2);
      xxxAdjustPushStateForKL(v9, v19, a2, a1, a2);
      v12 = *((_QWORD *)a1 + 6);
      if ( v12 )
      {
        v13 = *(_DWORD *)(*(_QWORD *)(v12 + 32) + 80LL);
        if ( (v13 & 1) != 0 && (*(_BYTE *)(W32GetUserSessionState(v13, v10, v11) + 14396) & 4) == 0 )
          xxxKeyEventEx(32930, 541, 0, 0, 0LL, 0LL, 0, 0, 0LL, 0LL);
      }
    }
    else
    {
      do
      {
        *(_BYTE *)(v8 + *((_QWORD *)v9 + 58) + 280) &= 0xAAu;
        UserSessionState = W32GetUserSessionState(v6, v5, v7);
        *(_BYTE *)(UserSessionState + v8 + 14328) &= 0xAAu;
        v18 = W32GetUserSessionState(v16, v15, v17);
        *(_BYTE *)(v18 + v8++ + 14392) &= 0xAAu;
      }
      while ( v8 < 64 );
    }
  }
}
