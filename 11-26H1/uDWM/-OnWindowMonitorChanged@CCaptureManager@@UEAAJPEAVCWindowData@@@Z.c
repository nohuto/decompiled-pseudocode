/*
 * XREFs of ?OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180065CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetDefaultSDRBoostForWindow@CCaptureManager@@AEAAJPEAVCWindowData@@PEAM@Z @ 0x1800A5224 (-_GetDefaultSDRBoostForWindow@CCaptureManager@@AEAAJPEAVCWindowData@@PEAM@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800A53AC (-_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800A61E0 (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@M@Z.c)
 */

__int64 __fastcall CCaptureManager::OnWindowMonitorChanged(CCaptureManager *this, struct CWindowData *a2)
{
  int DefaultSDRBoostForWindow; // eax
  CCaptureManager *v6; // rcx
  unsigned int v7; // edi
  HWND HostWindowHandleForProxyWindow; // rax
  int updated; // eax
  unsigned int v10; // ebx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v13; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_DWORD *)a2 + 114) || *((_QWORD *)a2 + 81) )
    return 0LL;
  v13 = 0.0;
  DefaultSDRBoostForWindow = CCaptureManager::_GetDefaultSDRBoostForWindow(this, a2, &v13);
  v7 = DefaultSDRBoostForWindow;
  if ( DefaultSDRBoostForWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)DefaultSDRBoostForWindow,
      v11);
    return v7;
  }
  HostWindowHandleForProxyWindow = CCaptureManager::_GetHostWindowHandleForProxyWindow(v6, a2);
  updated = CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost(this, HostWindowHandleForProxyWindow, v13);
  v10 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x35F,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)updated,
    v11);
  return v10;
}
