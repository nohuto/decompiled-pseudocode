/*
 * XREFs of ?Shutdown@CVirtualDesktopSoftLandingHandler@@UEAAJXZ @ 0x1805448D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180067668 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::Shutdown(CVirtualDesktopSoftLandingHandler *this)
{
  int v2; // eax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 10) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 104LL))(*((_QWORD *)this + 4));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
        (const char *)(unsigned int)v2);
    *((_DWORD *)this + 10) = 0;
  }
  v3 = SmartCookie::Unregister((CVirtualDesktopSoftLandingHandler *)((char *)this + 48));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x61,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}
