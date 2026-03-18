/*
 * XREFs of ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1402877F4
 * Callers:
 *     UserRecreateRedirectionBitmap @ 0x140287A60 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x14009A2A0 (GreSelectRedirectionBitmap.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x140175610 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 */

void __fastcall UnselectRedirectionBitmapsInDCEs(struct tagWND *const a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  struct tagWND *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
  v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 56968);
  v7 = *(struct tagWND **)(v6 + 24);
  v9 = *(_QWORD *)(W32GetUserSessionState(v8, v6) + 56968) + 24LL;
  if ( v7 != (struct tagWND *)v9 )
  {
    do
    {
      v11 = *((unsigned int *)v7 + 12);
      if ( (*((_DWORD *)v7 + 12) & 0x4404800) == 0x4000
        && *((_QWORD *)v7 + 10)
        && (v11 & 0x1000) != 0
        && (unsigned int)WindowMatchesDCE(a1, (struct tagWND *const *)v7)
        && !(unsigned int)GreSelectRedirectionBitmap(*((HDC *)v7 + 2), 0LL) )
      {
        GreSelectVisRgn(*((_QWORD *)v7 + 2), 0LL, 1LL);
      }
      v7 = *(struct tagWND **)v7;
      v10 = *(_QWORD *)(W32GetUserSessionState(v11, v9) + 56968) + 24LL;
    }
    while ( v7 != (struct tagWND *)v10 );
  }
  v12 = W32GetUserSessionState(v10, v9);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v12 + 56968) + 48LL));
}
