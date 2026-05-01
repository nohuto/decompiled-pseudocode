/*
 * XREFs of ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180462A74
 * Callers:
 *     _lambda_ce5f0a13437f36dbd45420a359bd80e9_::operator() @ 0x18045E9CC (_lambda_ce5f0a13437f36dbd45420a359bd80e9_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOccludingRectInGlobalCoordinates@ViewRectHelper@KeyboardHosting@@SA?AUtagRECT@@U3@URect@Foundation@Windows@@@Z @ 0x180147F28 (-GetOccludingRectInGlobalCoordinates@ViewRectHelper@KeyboardHosting@@SA-AUtagRECT@@U3@URect@Foun.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x180147F94 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18017B924 (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180294234 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1804602DC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x18046CA58 (-OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  int FrameWrapper; // eax
  unsigned int LastError; // ebx
  int ViewInfo; // eax
  __int64 v7; // rdx
  const char *v8; // r9
  std::_Ref_count_base *v9; // rsi
  const struct Windows::Foundation::Rect *v10; // rdx
  bool IsRectNull; // al
  struct tagRECT *v12; // rcx
  struct tagRECT v13; // xmm3
  std::_Ref_count_base *v15[2]; // [rsp+20h] [rbp-29h] BYREF
  struct IUnknown *v16; // [rsp+30h] [rbp-19h] BYREF
  HWND hWnd; // [rsp+38h] [rbp-11h] BYREF
  struct tagRECT v18; // [rsp+40h] [rbp-9h] BYREF
  struct tagRECT v19; // [rsp+50h] [rbp+7h] BYREF
  __int128 v20; // [rsp+60h] [rbp+17h] BYREF
  struct tagRECT Rect; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v16 = 0LL;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((RTL_SRWLOCK *)this, (__int64)a2, (__int64 *)&v16);
  LastError = FrameWrapper;
  if ( FrameWrapper < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF0,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)FrameWrapper);
    goto LABEL_21;
  }
  *(_OWORD *)v15 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)this, v16, v15);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 3826LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_6;
  }
  hWnd = 0LL;
  ViewInfo = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a2 + 40LL))(a2, &hWnd);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 3828LL;
    goto LABEL_5;
  }
  Rect = 0LL;
  if ( !GetWindowRect(hWnd, &Rect) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xEF6,
                  (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  v8);
LABEL_6:
    if ( v15[1] )
      std::_Ref_count_base::_Decref(v15[1]);
    goto LABEL_21;
  }
  v9 = v15[0];
  ViewInfo = KeyboardHosting::TabTipAdapter::OnFramePositionAndSizeUpdateCompleted(
               *((KeyboardHosting::TabTipAdapter **)this + 73),
               *((_DWORD *)v15[0] + 26),
               &Rect);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 3831LL;
    goto LABEL_5;
  }
  v18 = 0LL;
  IsRectNull = KeyboardHosting::IsRectNull((std::_Ref_count_base *)((char *)v9 + 168), v10);
  v13 = Rect;
  if ( !IsRectNull )
  {
    v18 = *v12;
    v19 = Rect;
    v18 = *(struct tagRECT *)KeyboardHosting::ViewRectHelper::GetOccludingRectInGlobalCoordinates(
                               &v20,
                               (const struct Windows::Foundation::Rect *)&v19,
                               (KeyboardHosting *)&v18);
  }
  v19 = v13;
  ViewInfo = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
               (KeyboardHosting::TabTipAdapter **)this,
               (const struct tagRECT *)*((unsigned int *)v9 + 26),
               &v19,
               &v18);
  LastError = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 3838LL;
    goto LABEL_5;
  }
  if ( v15[1] )
    std::_Ref_count_base::_Decref(v15[1]);
  LastError = 0;
LABEL_21:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  return LastError;
}
