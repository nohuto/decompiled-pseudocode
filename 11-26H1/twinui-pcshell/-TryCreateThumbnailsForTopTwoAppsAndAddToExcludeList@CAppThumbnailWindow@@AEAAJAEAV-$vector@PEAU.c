/*
 * XREFs of ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A9760
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A3304 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B8D3C (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ??$emplace_back@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAAEAPEAUHWND__@@AEAPEAU2@@Z @ 0x1804A2AB0 (--$emplace_back@AEAPEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAAAE.c)
 *     ?CreateThumbnailAppWithChilden@CAppThumbnailWindow@@AEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x1804A4C30 (-CreateThumbnailAppWithChilden@CAppThumbnailWindow@@AEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z.c)
 *     ?TryGetTopTwoApplicationViews@CAppThumbnailWindow@@AEAAXPEAPEAUIApplicationView@@0@Z @ 0x1804A9A28 (-TryGetTopTwoApplicationViews@CAppThumbnailWindow@@AEAAXPEAPEAUIApplicationView@@0@Z.c)
 *     ?TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z @ 0x1804A9CEC (-TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppThumbnailWindow::TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList(
        CAppThumbnailWindow *this,
        __int64 *a2)
{
  HWND WindowForView; // rsi
  HWND v4; // r14
  struct IApplicationView *v5; // rdx
  int ThumbnailAppWithChilden; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // r15
  _QWORD *v10; // r12
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  HWND v15; // [rsp+20h] [rbp-10h] BYREF
  HWND v16; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  ApplicationViewHelpers *v19; // [rsp+80h] [rbp+50h] BYREF
  ApplicationViewHelpers *v20; // [rsp+88h] [rbp+58h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  WindowForView = 0LL;
  v16 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
  {
    v19 = 0LL;
    v20 = 0LL;
    CAppThumbnailWindow::TryGetTopTwoApplicationViews(this, &v20, &v19);
    if ( v20 )
    {
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v20,
                              v5);
      v16 = WindowForView;
    }
    if ( v19 )
    {
      v4 = (HWND)ApplicationViewHelpers::GetWindowForView(
                   (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v19,
                   v5);
      v15 = v4;
    }
  }
  else
  {
    CAppThumbnailWindow::TryGetTopTwoWindows(this, &v16, &v15);
    WindowForView = v16;
    v4 = v15;
  }
  if ( WindowForView && v4 )
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 52);
    ThumbnailAppWithChilden = CAppThumbnailWindow::CreateThumbnailAppWithChilden(
                                this,
                                WindowForView,
                                (struct IDCompThumbnail **)this + 52);
    v7 = ThumbnailAppWithChilden;
    if ( ThumbnailAppWithChilden < 0 )
    {
      v8 = 539LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)ThumbnailAppWithChilden);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
      return v7;
    }
    v9 = (_QWORD *)((char *)this + 432);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 54);
    ThumbnailAppWithChilden = CAppThumbnailWindow::CreateThumbnailAppWithChilden(
                                this,
                                WindowForView,
                                (struct IDCompThumbnail **)this + 54);
    v7 = ThumbnailAppWithChilden;
    if ( ThumbnailAppWithChilden < 0 )
    {
      v8 = 540LL;
      goto LABEL_23;
    }
    v10 = (_QWORD *)((char *)this + 448);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 56);
    ThumbnailAppWithChilden = CAppThumbnailWindow::CreateThumbnailAppWithChilden(
                                this,
                                v4,
                                (struct IDCompThumbnail **)this + 56);
    v7 = ThumbnailAppWithChilden;
    if ( ThumbnailAppWithChilden < 0 )
    {
      v8 = 541LL;
      goto LABEL_23;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
    {
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
        (__int64 *)this + 71,
        (__int64 *)&v20);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
        (__int64 *)this + 72,
        (__int64 *)&v19);
    }
    *((_QWORD *)this + 73) = WindowForView;
    *((_QWORD *)this + 74) = v4;
    LOBYTE(v11) = 1;
    ThumbnailAppWithChilden = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v9 + 152LL))(
                                *v9,
                                *((_QWORD *)this + 8),
                                v11);
    v7 = ThumbnailAppWithChilden;
    if ( ThumbnailAppWithChilden < 0 )
    {
      v8 = 560LL;
      goto LABEL_23;
    }
    LOBYTE(v12) = 1;
    ThumbnailAppWithChilden = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v10 + 152LL))(
                                *v10,
                                *v9,
                                v12);
    v7 = ThumbnailAppWithChilden;
    if ( ThumbnailAppWithChilden < 0 )
    {
      v8 = 561LL;
      goto LABEL_23;
    }
    LOBYTE(v13) = 1;
    ThumbnailAppWithChilden = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 52) + 152LL))(
                                *((_QWORD *)this + 52),
                                *v10,
                                v13);
    v7 = ThumbnailAppWithChilden;
    if ( ThumbnailAppWithChilden < 0 )
    {
      v8 = 562LL;
      goto LABEL_23;
    }
    std::vector<HWND__ *>::emplace_back<HWND__ * &>(a2, (__int64 *)&v16);
    std::vector<HWND__ *>::emplace_back<HWND__ * &>(a2, (__int64 *)&v15);
    *((_QWORD *)this + 22) = v15;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
  return 0LL;
}
