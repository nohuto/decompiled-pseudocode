/*
 * XREFs of ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x18053D064
 * Callers:
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x18053F100 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18053F1F0 (-StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@QEAAXPEAVVirtualDesktopGestureContext@@@Z @ 0x180158794 (-reset@-$unique_ptr@VVirtualDesktopGestureContext@@U-$default_delete@VVirtualDesktopGestureConte.c)
 *     ?_DismissContextMenuIfPresent@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x1801F0ED0 (-_DismissContextMenuIfPresent@CMultitaskingViewServiceProvider@@AEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??0VirtualDesktopGestureContext@@QEAA@UtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@Z @ 0x180538700 (--0VirtualDesktopGestureContext@@QEAA@UtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchT.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x180539E70 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z.c)
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJK@Z @ 0x18053CA40 (-Initialize@VirtualDesktopGestureContext@@QEAAJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureHandler::InitializeContext(VirtualDesktopGestureHandler *this, unsigned int a2)
{
  unsigned int v4; // ebx
  CMultitaskingViewServiceProvider *v5; // rcx
  const char *v6; // r9
  __int64 v7; // rdx
  struct IImmersiveMonitorManager *v9; // rbx
  struct IImmersiveSettingsCache *v10; // rdi
  struct IApplicationViewCollection *v11; // r15
  struct ISwitchThumbnailDeviceManager *v12; // r12
  struct IVirtualDesktopManagerInternal *v13; // r13
  VirtualDesktopGestureContext *v14; // rax
  VirtualDesktopGestureContext *v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  struct tagSIZE v19; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v20[4]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v21; // [rsp+60h] [rbp-59h]
  __int128 v22; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v23; // [rsp+C0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  if ( *((_QWORD *)this + 5) )
  {
    VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)((char *)this + 16), 0);
    CMultitaskingViewServiceProvider::_DismissContextMenuIfPresent(v5);
    memset_0(v20, 0, 0x60uLL);
    if ( !(unsigned int)GetPointerInfo(a2, v20) )
    {
      v7 = 1779LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v7,
               (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
               v6);
    }
    v23 = 0LL;
    v22 = 0LL;
    if ( !(unsigned int)GetPointerDeviceRects(v21, &v22, &v23) )
    {
      v7 = 1785LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v7,
               (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
               v6);
    }
    v19.cx = DWORD2(v22) - v22;
    v19.cy = HIDWORD(v22) - DWORD1(v22);
    v9 = (struct IImmersiveMonitorManager *)*((_QWORD *)this + 8);
    v10 = (struct IImmersiveSettingsCache *)*((_QWORD *)this + 7);
    v11 = (struct IApplicationViewCollection *)*((_QWORD *)this + 6);
    v12 = (struct ISwitchThumbnailDeviceManager *)*((_QWORD *)this + 5);
    v13 = (struct IVirtualDesktopManagerInternal *)*((_QWORD *)this + 4);
    v14 = (VirtualDesktopGestureContext *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v14 )
      v15 = VirtualDesktopGestureContext::VirtualDesktopGestureContext(v14, v19, v13, v12, v11, v10, v9);
    else
      v15 = 0LL;
    v19 = (struct tagSIZE)v15;
    if ( v15 )
    {
      v18 = VirtualDesktopGestureContext::Initialize(v15, v20[0]);
      v4 = v18;
      if ( v18 >= 0 )
      {
        *((_DWORD *)v15 + 45) = a2;
        v19 = 0LL;
        wistd::unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>::reset(
          (VirtualDesktopGestureContext **)this + 10,
          v15);
        v4 = 0;
        goto LABEL_17;
      }
      v16 = (unsigned int)v18;
      v17 = 1790LL;
    }
    else
    {
      v4 = -2147024882;
      v16 = 2147942414LL;
      v17 = 1789LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)v16);
LABEL_17:
    wistd::unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>::reset(
      (VirtualDesktopGestureContext **)&v19,
      0LL);
    return v4;
  }
  v4 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6EC,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)0x8007139FLL);
  return v4;
}
