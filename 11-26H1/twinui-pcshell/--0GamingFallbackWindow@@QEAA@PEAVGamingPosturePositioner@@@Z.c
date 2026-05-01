/*
 * XREFs of ??0GamingFallbackWindow@@QEAA@PEAVGamingPosturePositioner@@@Z @ 0x1804F6F48
 * Callers:
 *     ??0GamingPosturePositioner@@QEAA@XZ @ 0x1804F7190 (--0GamingPosturePositioner@@QEAA@XZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x180326550 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??1?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ @ 0x180328D64 (--1-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$ConstructedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F35DC (--$ConstructedFallbackWindow@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEA.c)
 *     ?WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1805039E0 (-WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA-AVActivityThreadWatcher@wil@@PE.c)
 */

// Hidden C++ exception states: #wind=2
GamingFallbackWindow *__fastcall GamingFallbackWindow::GamingFallbackWindow(
        GamingFallbackWindow *this,
        struct GamingPosturePositioner *a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rax
  const char *v6; // r9
  __int64 WindowInBand; // rax
  signed int Error; // eax
  char IsEnabled; // al
  HWND v10; // rcx
  const char *v11; // r9
  WNDCLASSEXW v13; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v14[80]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v15[80]; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  *(_QWORD *)this = &winrt::impl::producers_base<GamingPosturePositioner,std::tuple<IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IInternalFullScreenHandler,void>'};
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 2) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::producers_base<GamingFallbackWindow,std::tuple<IInspectable>>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::root_implements<GamingFallbackWindow,IInspectable>'};
  v4 = (__int64 *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v14[72] = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v5 = GamingPosturePositionerTelemetryProvider::WatchCurrentThread(v15, "GamingFallbackWindow::ctor");
    std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>((__int64)v14, v5);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v15);
  }
  *((_QWORD *)this + 4) = a2;
  v13.cbSize = 80;
  memset_0(&v13.style, 0, 0x4CuLL);
  v13.style = 512;
  v13.lpfnWndProc = (WNDPROC)GamingFallbackWindow::FallbackWndProc;
  v13.hInstance = &_ImageBase;
  v13.lpszClassName = L"GamingFallbackWindow";
  v13.cbWndExtra = 8;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    if ( !RegisterClassExW(&v13) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xDE8,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        v6);
  }
  else
  {
    RegisterClassExW(&v13);
  }
  WindowInBand = CreateWindowInBand(136315008LL, v13.lpszClassName, 0LL, 0x80000000LL);
  *v4 = WindowInBand;
  if ( WindowInBand )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  if ( Error < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xDFB,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)Error,
      0);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl);
  v10 = (HWND)*v4;
  if ( IsEnabled )
  {
    if ( !SetPropW(v10, L"UIA_WindowVisibilityOverridden", HANDLE_FLAG_PROTECT_FROM_CLOSE) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xE02,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        v11);
    GamingPosturePositionerTelemetryProvider::ConstructedFallbackWindow<HWND__ * &>(v4);
  }
  else
  {
    SetPropW(v10, L"UIA_WindowVisibilityOverridden", HANDLE_FLAG_PROTECT_FROM_CLOSE);
  }
  std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)v14);
  return this;
}
