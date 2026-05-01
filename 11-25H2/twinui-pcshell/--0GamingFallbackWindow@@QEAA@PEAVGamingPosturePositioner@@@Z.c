/*
 * XREFs of ??0GamingFallbackWindow@@QEAA@PEAVGamingPosturePositioner@@@Z @ 0x1804E11CC
 * Callers:
 *     ??0GamingPosturePositioner@@QEAA@XZ @ 0x1804E1340 (--0GamingPosturePositioner@@QEAA@XZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
GamingFallbackWindow *__fastcall GamingFallbackWindow::GamingFallbackWindow(
        GamingFallbackWindow *this,
        struct GamingPosturePositioner *a2)
{
  __int64 WindowInBand; // rax
  signed int Error; // eax
  int v6; // [rsp+20h] [rbp-A8h]
  WNDCLASSEXW v7; // [rsp+70h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  *(_QWORD *)this = &winrt::impl::producers_base<GamingPosturePositioner,std::tuple<IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IInternalFullScreenHandler,void>'};
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 2) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::producers_base<GamingFallbackWindow,std::tuple<IInspectable>>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<GamingFallbackWindow>::`vftable'{for `winrt::impl::root_implements<GamingFallbackWindow,IInspectable>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = a2;
  v7.cbSize = 80;
  memset_0(&v7.style, 0, 0x4CuLL);
  v7.style = 512;
  v7.lpfnWndProc = (WNDPROC)GamingFallbackWindow::FallbackWndProc;
  v7.hInstance = &_ImageBase;
  v7.lpszClassName = L"GamingFallbackWindow";
  v7.cbWndExtra = 8;
  RegisterClassExW(&v7);
  WindowInBand = CreateWindowInBand(
                   136315008LL,
                   v7.lpszClassName,
                   0LL,
                   0x80000000LL,
                   0,
                   0,
                   0,
                   0,
                   0LL,
                   0LL,
                   &_ImageBase,
                   this,
                   1);
  *((_QWORD *)this + 3) = WindowInBand;
  if ( WindowInBand )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  if ( Error < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x620,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)Error,
      v6);
  SetPropW(*((HWND *)this + 3), L"UIA_WindowVisibilityOverridden", HANDLE_FLAG_PROTECT_FROM_CLOSE);
  return this;
}
