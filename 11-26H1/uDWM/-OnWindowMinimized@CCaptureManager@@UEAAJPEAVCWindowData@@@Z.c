/*
 * XREFs of ?OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180076610
 * Callers:
 *     <none>
 * Callees:
 *     ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180038F30 (-OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800A53AC (-_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5E48 (-_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CCaptureManager::OnWindowMinimized(__int64 ****this, struct CWindowData *a2)
{
  HWND HostWindowHandleForProxyWindow; // rax
  int updated; // eax
  unsigned int v6; // edi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)a2 + 114)
    || *((_QWORD *)a2 + 81)
    || (HostWindowHandleForProxyWindow = CCaptureManager::_GetHostWindowHandleForProxyWindow(
                                           (CCaptureManager *)this,
                                           a2),
        updated = CCaptureManager::_UpdateCaptureControllerCaptureState(
                    (CCaptureManager *)this,
                    HostWindowHandleForProxyWindow,
                    0),
        v6 = updated,
        updated >= 0) )
  {
    v8 = CCaptureManager::OnWindowVisibilityUpdated(this, a2);
    v9 = v8;
    if ( v8 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33C,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v8,
        v10);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x338,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)updated,
      v10);
    return v6;
  }
}
