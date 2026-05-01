/*
 * XREFs of ?HandleFrameWindowChange@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowWrapperInternal@@@Z @ 0x18016F660
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18016F6A4 (-HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::HandleFrameWindowChange(
        UwpWindowEventDispatcher *this,
        struct IUwpWindowWrapperInternal *a2)
{
  __int64 v3; // rax
  HWND v4; // rdx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 352LL))(a2);
  v4 = (HWND)*((_QWORD *)this + 56);
  if ( v4 == (HWND)v3 )
  {
    try
    {
      UwpWindowEventDispatcher::HandleForegroundWindow((UwpWindowEventDispatcher *)((char *)this - 16), v4);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x805,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        v6);
    }
  }
  return 0LL;
}
