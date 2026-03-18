/*
 * XREFs of ?Cursor_DaemonTimeRateChanged@@YAX_N@Z @ 0x14004E660
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x14004C710 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 */

void __fastcall Cursor_DaemonTimeRateChanged(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (_BYTE)a1 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36272) )
    {
      *(_DWORD *)(W32GetUserSessionState(v3, v2) + 36336) = 0;
      zzzAnimateCursor(0LL, 0LL, 0LL);
    }
  }
}
