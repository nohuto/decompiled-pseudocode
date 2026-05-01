/*
 * XREFs of ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1805122A4
 * Callers:
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180512A10 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800AF4A0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU3@@Z @ 0x180166600 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x180166C54 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1805128E0 (-_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_CalculateTaskbarFlyoutPosition(
        CDesktopPositioner *this,
        LPCRECT lprc,
        struct tagSIZE a3,
        struct tagRECT *a4)
{
  HMONITOR v8; // r12
  int EdgeUIPositionForMonitor; // eax
  unsigned int LastError; // edi
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, HMONITOR, __int64 *); // rdi
  int v13; // eax
  CDesktopPositioner *v14; // rcx
  int WorkAreaFromRect; // eax
  __int64 v16; // rdx
  const char *v17; // r9
  RECT *popupWindowPosition; // [rsp+20h] [rbp-59h]
  RECT *popupWindowPositiona; // [rsp+20h] [rbp-59h]
  struct IApplicationViewTitlebarConfiguration *v21; // [rsp+40h] [rbp-39h] BYREF
  __int64 v22; // [rsp+48h] [rbp-31h] BYREF
  int v23; // [rsp+50h] [rbp-29h] BYREF
  SIZE windowSize; // [rsp+58h] [rbp-21h] BYREF
  POINT anchorPoint; // [rsp+60h] [rbp-19h] BYREF
  RECT v26; // [rsp+68h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+78h] [rbp-1h] BYREF
  RECT excludeRect; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  excludeRect = 0LL;
  v23 = 0;
  v8 = MonitorFromRect(lprc, 1u);
  EdgeUIPositionForMonitor = CDesktopPositioner::_GetEdgeUIPositionForMonitor(
                               this,
                               v8,
                               &excludeRect,
                               (enum EDGEUI_TRAYSTUCKPLACE *)&v23);
  LastError = EdgeUIPositionForMonitor;
  if ( EdgeUIPositionForMonitor >= 0 )
  {
    anchorPoint.x = (lprc->left + lprc->right) / 2;
    anchorPoint.y = (lprc->top + lprc->bottom) / 2;
    v22 = 0LL;
    v11 = *((_QWORD *)this + 33);
    v12 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v11 + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    v13 = v12(v11, v8, &v22);
    LastError = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x653,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13);
LABEL_19:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      return LastError;
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    WorkAreaFromRect = CDesktopPositioner::_CreateTitlebarConfiguration(v14, 0LL, &v21);
    LastError = WorkAreaFromRect;
    if ( WorkAreaFromRect >= 0 )
    {
      windowSize = 0LL;
      WorkAreaFromRect = (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE, __int64, __int64, int, struct IApplicationViewTitlebarConfiguration *, SIZE *))(**((_QWORD **)this + 36) + 48LL))(
                           *((_QWORD *)this + 36),
                           a3,
                           v22,
                           1LL,
                           1,
                           v21,
                           &windowSize);
      LastError = WorkAreaFromRect;
      if ( WorkAreaFromRect >= 0 )
      {
        v26 = 0LL;
        if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, 0x10054u, &excludeRect, &v26) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x660,
                        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                        v17);
          goto LABEL_8;
        }
        if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea(
                             (__int64)this,
                             1,
                             &v26.left,
                             0LL,
                             (__int64)popupWindowPosition,
                             a4) == -2147024809 )
        {
          rc = 0LL;
          WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, &v26, &rc);
          LastError = WorkAreaFromRect;
          if ( WorkAreaFromRect < 0 )
          {
            v16 = 1641LL;
            goto LABEL_7;
          }
          v26.top = rc.top;
          v26.bottom = rc.bottom;
          WorkAreaFromRect = CDesktopPositioner::_FixRectForWorkArea(
                               (__int64)this,
                               1,
                               &v26.left,
                               0LL,
                               (__int64)popupWindowPositiona,
                               a4);
          LastError = WorkAreaFromRect;
          if ( WorkAreaFromRect < 0 )
          {
            v16 = 1646LL;
            goto LABEL_7;
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
        LastError = 0;
        goto LABEL_19;
      }
      v16 = 1627LL;
    }
    else
    {
      v16 = 1623LL;
    }
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect);
LABEL_8:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x64C,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)EdgeUIPositionForMonitor);
  return LastError;
}
