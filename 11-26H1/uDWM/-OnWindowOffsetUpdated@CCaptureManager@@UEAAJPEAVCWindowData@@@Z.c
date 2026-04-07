/*
 * XREFs of ?OnWindowOffsetUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180039710
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x18000A7A0 (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18000B03C (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x18003993C (-_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x18009BEB4 (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800A531C (-_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A5FD8 (-_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureC.c)
 */

__int64 __fastcall CCaptureManager::OnWindowOffsetUpdated(__int64 ****this, struct CWindowData *a2)
{
  int HostWindowHandle; // ebx
  HWND v6; // rdx
  CCaptureManager *v7; // rcx
  __int64 v8; // rdx
  HWND v9; // rbp
  __int64 ***v10; // rdi
  __int64 **i; // rbx
  int updated; // r14d
  __int64 v13; // rdx
  __int64 ***v14; // rdi
  __int64 **j; // rbx
  __int64 *v16; // r8
  unsigned __int64 v17; // rbp
  __int64 *v18; // rdx
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // ebp
  int v22; // [rsp+20h] [rbp-58h]
  struct tagRECT v23; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*((_QWORD *)a2 + 81) && *((_DWORD *)a2 + 114) )
  {
    v6 = (HWND)*((_QWORD *)a2 + 5);
    *(_QWORD *)&v23.left = 0LL;
    HostWindowHandle = CCaptureManager::_GetHostWindowHandle((CCaptureManager *)this, v6, (HWND *)&v23);
    if ( HostWindowHandle < 0 )
    {
      v8 = 1165LL;
      goto LABEL_9;
    }
    v9 = *(HWND *)&v23.left;
    if ( !*(_QWORD *)&v23.left )
      v9 = (HWND)*((_QWORD *)a2 + 5);
    v10 = this[2];
    for ( i = *v10; i != (__int64 **)v10; i = (__int64 **)*i )
    {
      if ( i[5] == (__int64 *)v9 )
      {
        updated = CCaptureManager::_UpdateCaptureControllerContentOffsetFromWindow(
                    v7,
                    v9,
                    (struct CCaptureControllerProxy *)i[4]);
        if ( updated < 0 )
        {
          v13 = 1176LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)updated,
            v22);
          return (unsigned int)updated;
        }
      }
    }
  }
  if ( *((_DWORD *)a2 + 115) )
  {
    v14 = this[26];
    for ( j = *v14; j != (__int64 **)v14; j = (__int64 **)*j )
    {
      v16 = j[11];
      v17 = 0LL;
      v18 = v16;
      while ( v17 < ((char *)j[12] - (char *)v16) >> 4 )
      {
        if ( *v18 == *((_QWORD *)a2 + 5) )
        {
          v19 = *((_QWORD *)a2 + 55);
          if ( v19 )
          {
            updated = CVisualProxy::SetOffset(
                        (CVisualProxy *)v16[2 * v17 + 1],
                        (double)*(int *)(v19 + 56),
                        (double)(int)HIDWORD(*(_QWORD *)(v19 + 56)),
                        0.0);
            if ( updated < 0 )
            {
              v13 = 1190LL;
              goto LABEL_19;
            }
            *(struct tagRECT *)&j[14][4 * v17 + 1] = *CTopLevelWindow::GetActualWindowRect(
                                                        *((CTopLevelWindow **)a2 + 55),
                                                        &v23,
                                                        0,
                                                        1,
                                                        1);
            v20 = CCaptureControllerProxy::SetWindowInfos(
                    (CCaptureControllerProxy *)j[4],
                    (const struct _DWMCaptureWindowInformation *)j[14],
                    ((char *)j[15] - (char *)j[14]) >> 5);
            v21 = v20;
            if ( v20 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x4A9,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
                (const char *)(unsigned int)v20,
                v22);
              return v21;
            }
            break;
          }
        }
        ++v17;
        v18 += 2;
      }
    }
  }
  HostWindowHandle = CCaptureManager::_EvaluateWindowForWindowCaptures((CCaptureManager *)this, a2);
  if ( HostWindowHandle >= 0 )
    return 0LL;
  v8 = 1200LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)HostWindowHandle,
    v22);
  return (unsigned int)HostWindowHandle;
}
