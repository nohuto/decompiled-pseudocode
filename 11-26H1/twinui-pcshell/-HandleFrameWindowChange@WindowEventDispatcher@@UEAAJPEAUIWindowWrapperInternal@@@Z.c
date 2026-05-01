/*
 * XREFs of ?HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z @ 0x18041A410
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18041A314 (-HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowEventDispatcher::HandleFrameWindowChange(
        WindowEventDispatcher *this,
        struct IWindowWrapperInternal *a2)
{
  __int64 v3; // rax
  HWND v4; // rdx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 352LL))(a2);
  v4 = (HWND)*((_QWORD *)this + 54);
  if ( v4 == (HWND)v3 )
  {
    try
    {
      WindowEventDispatcher::HandleForegroundWindow((WindowEventDispatcher *)((char *)this - 16), v4);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x6F5,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        v5);
    }
  }
  return 0LL;
}
