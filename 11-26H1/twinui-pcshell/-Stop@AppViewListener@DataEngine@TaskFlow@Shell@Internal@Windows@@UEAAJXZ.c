/*
 * XREFs of ?Stop@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x1803FC960
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800250B4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Stop(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 26) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 104LL))(*((_QWORD *)this + 12));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4C,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)v2);
    *((_DWORD *)this + 26) = 0;
  }
  if ( *((_DWORD *)this + 60) )
  {
    v3 = SmartCookie::Unregister((Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *)((char *)this + 120));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x52,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)v3);
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *))(**((_QWORD **)this + 11) + 56LL))(
         *((_QWORD *)this + 11),
         this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x55,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
