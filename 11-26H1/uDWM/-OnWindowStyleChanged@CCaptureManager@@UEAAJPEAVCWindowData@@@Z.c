/*
 * XREFs of ?OnWindowStyleChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800596E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800A53AC (-_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5E48 (-_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CCaptureManager::OnWindowStyleChanged(CCaptureManager *this, struct CWindowData *a2)
{
  HWND HostWindowHandleForProxyWindow; // rax
  bool v4; // r8
  CCaptureManager *v5; // r9
  int updated; // eax
  unsigned int v7; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)a2 + 114) )
    return 0LL;
  if ( *((_QWORD *)a2 + 81) )
    return 0LL;
  HostWindowHandleForProxyWindow = CCaptureManager::_GetHostWindowHandleForProxyWindow(this, a2);
  updated = CCaptureManager::_UpdateCaptureControllerCaptureState(v5, HostWindowHandleForProxyWindow, v4);
  v7 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x541,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)updated,
    v8);
  return v7;
}
