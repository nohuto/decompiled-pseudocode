/*
 * XREFs of ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x14014E39C
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3EF0 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x14014E4EC (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall xxxManageKeyboardModifiers(struct tagKL *a1, struct tagKL *a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int8 v16[16]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v17; // [rsp+60h] [rbp-38h]

  v4 = PtiCurrent();
  v7 = 0LL;
  v8 = v4;
  if ( *((_QWORD *)v4 + 59) )
  {
    if ( a1 )
    {
      *(_OWORD *)v16 = 0LL;
      v17 = 0LL;
      xxxAdjustPushStateForKL(v4, v16, a1, a1, a2);
      xxxAdjustPushStateForKL(v8, v16, a2, a1, a2);
      v10 = *((_QWORD *)a1 + 6);
      if ( v10 )
      {
        v11 = *(unsigned int *)(*(_QWORD *)(v10 + 32) + 80LL);
        if ( (v11 & 1) != 0 && (*(_BYTE *)(W32GetUserSessionState(v11, v9) + 14404) & 4) == 0 )
          xxxKeyEventEx(32930, 541, 0, 0, 0LL, 0LL, 0, 0, 0LL, 0LL);
      }
    }
    else
    {
      do
      {
        *(_BYTE *)(*((_QWORD *)v8 + 59) + v7 + 256) &= 0xAAu;
        UserSessionState = W32GetUserSessionState(v6, v5);
        *(_BYTE *)(UserSessionState + v7 + 14336) &= 0xAAu;
        v15 = W32GetUserSessionState(v14, v13);
        *(_BYTE *)(v15 + v7++ + 14400) &= 0xAAu;
      }
      while ( v7 < 64 );
    }
  }
}
