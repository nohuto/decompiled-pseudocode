/*
 * XREFs of DeleteOrSetRedirectionBitmap @ 0x14005DC60
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x140058298 (UnsetRedirectedWindow.c)
 *     DeleteOldRedirectionBitmap @ 0x14005DBBC (DeleteOldRedirectionBitmap.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x140287A60 (UserRecreateRedirectionBitmap.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B4DB4 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402B5280 (xxxDwmStopRedirection.c)
 * Callees:
 *     GreSetRedirection @ 0x14005DB50 (GreSetRedirection.c)
 *     GreDereferenceObject @ 0x14007BF50 (GreDereferenceObject.c)
 */

__int64 __fastcall DeleteOrSetRedirectionBitmap(__int64 a1, HSURF a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( a3 || (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) != 0x29D )
  {
    GreSetRedirection(a2, 0);
    GreMarkDeletableBitmap(a2);
    UserSessionState = W32GetUserSessionState(v6, v5);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
    GreDereferenceObject(a2);
    v10 = W32GetUserSessionState(v9, v8);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v10 + 56968) + 48LL));
    result = *(_QWORD *)(v3 + 40);
    if ( a2 == *(HSURF *)(result + 120) )
      *(_QWORD *)(result + 120) = 0LL;
  }
  else
  {
    result = *(_QWORD *)(v3 + 40);
    *(_QWORD *)(result + 120) = a2;
  }
  return result;
}
