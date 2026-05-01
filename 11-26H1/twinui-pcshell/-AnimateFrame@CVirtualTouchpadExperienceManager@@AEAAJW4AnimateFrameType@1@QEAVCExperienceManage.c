/*
 * XREFs of ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x180396380
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1803973D4 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1803991DC (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1802304DC (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::AnimateFrame(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int LastError; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  const char *v12; // r9
  __int64 v13; // rdx
  HMONITOR v14; // rax
  struct tagRECT *p_Rect; // rcx
  __int64 v17; // [rsp+40h] [rbp-49h] BYREF
  HWND hWnd; // [rsp+48h] [rbp-41h] BYREF
  struct tagRECT Rect; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT v20; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v22; // [rsp+80h] [rbp-9h] BYREF
  struct tagMONITORINFO mi; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v17 = 0LL;
  v6 = *(_QWORD *)(a1 + 344);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  v8 = v7(v6, &v17);
  LastError = v8;
  if ( v8 < 0 )
  {
    v10 = 882LL;
    goto LABEL_5;
  }
  hWnd = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v17 + 24LL))(v17, &hWnd);
  LastError = v8;
  if ( v8 < 0 )
  {
    v10 = 885LL;
    goto LABEL_5;
  }
  Rect = 0LL;
  if ( !GetWindowRect(hWnd, &Rect) )
  {
    v13 = 888LL;
LABEL_9:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v13,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                  v12);
    goto LABEL_20;
  }
  rc = Rect;
  v14 = MonitorFromRect(&Rect, 2u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v14, &mi) )
  {
    v13 = 893LL;
    goto LABEL_9;
  }
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      LastError = -2147418113;
      v11 = 2147549183LL;
      v10 = 906LL;
      goto LABEL_6;
    }
    p_Rect = &Rect;
  }
  else
  {
    p_Rect = &rc;
  }
  OffsetRect(p_Rect, 0, mi.rcMonitor.bottom - Rect.top);
  v22 = rc;
  v20 = Rect;
  OffsetRect(&v22, -rc.left, -rc.top);
  OffsetRect(&v20, -v20.left, -v20.top);
  v8 = CExperienceManagerAnimationHelper::Begin(
         a3,
         *(_QWORD *)(a1 + 344),
         562036744,
         (__int64)&v22,
         (__int64)&rc,
         (__int64)&v20,
         (__int64)&Rect,
         (__int64)&mi.rcMonitor);
  LastError = v8;
  if ( v8 >= 0 )
  {
    LastError = 0;
    goto LABEL_20;
  }
  v10 = 918LL;
LABEL_5:
  v11 = (unsigned int)v8;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)v11);
LABEL_20:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  return LastError;
}
