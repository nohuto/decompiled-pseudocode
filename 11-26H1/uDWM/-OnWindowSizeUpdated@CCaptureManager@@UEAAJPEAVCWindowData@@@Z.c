/*
 * XREFs of ?OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180039570
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18000B03C (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x18003993C (-_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x18009BEB4 (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800A53AC (-_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800A6310 (-_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800BEC2C (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CCaptureManager::OnWindowSizeUpdated(CCaptureManager *this, struct CWindowData *a2)
{
  int updated; // ebx
  __int64 v6; // rdx
  CProjectionBorderVisual *v7; // rcx
  HWND HostWindowHandleForProxyWindow; // rax
  __int64 ***v9; // rdi
  __int64 **i; // rbx
  char *v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  CTopLevelWindow *v14; // rax
  int v15; // eax
  unsigned int v16; // ebp
  int v17; // [rsp+20h] [rbp-48h]
  struct tagRECT v18; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*((_DWORD *)a2 + 114) )
    goto LABEL_24;
  v7 = (CProjectionBorderVisual *)*((_QWORD *)a2 + 58);
  if ( v7 )
    CProjectionBorderVisual::UpdateRectFromWindow(v7, a2);
  if ( *((_QWORD *)a2 + 81)
    || (HostWindowHandleForProxyWindow = CCaptureManager::_GetHostWindowHandleForProxyWindow(v7, a2),
        updated = CCaptureManager::_UpdateCaptureControllerSize(this, HostWindowHandleForProxyWindow),
        updated >= 0) )
  {
LABEL_24:
    if ( *((_DWORD *)a2 + 115) )
    {
      v9 = (__int64 ***)*((_QWORD *)this + 26);
      for ( i = *v9; i != (__int64 **)v9; i = (__int64 **)*i )
      {
        v11 = (char *)i[11];
        v12 = 0LL;
        v13 = ((char *)i[12] - v11) >> 4;
        while ( v12 < v13 )
        {
          if ( *(_QWORD *)v11 == *((_QWORD *)a2 + 5) )
          {
            v14 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
            if ( v14 )
            {
              *(struct tagRECT *)&i[14][4 * v12 + 1] = *CTopLevelWindow::GetActualWindowRect(v14, &v18, 0, 1, 1);
              v15 = CCaptureControllerProxy::SetWindowInfos(
                      (CCaptureControllerProxy *)i[4],
                      (const struct _DWMCaptureWindowInformation *)i[14],
                      ((char *)i[15] - (char *)i[14]) >> 5);
              v16 = v15;
              if ( v15 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x315,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
                  (const char *)(unsigned int)v15,
                  v17);
                return v16;
              }
              break;
            }
          }
          ++v12;
          v11 += 16;
        }
      }
    }
    updated = CCaptureManager::_EvaluateWindowForWindowCaptures(this, a2);
    if ( updated >= 0 )
      return 0LL;
    v6 = 796LL;
  }
  else
  {
    v6 = 775LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)updated,
    v17);
  return (unsigned int)updated;
}
