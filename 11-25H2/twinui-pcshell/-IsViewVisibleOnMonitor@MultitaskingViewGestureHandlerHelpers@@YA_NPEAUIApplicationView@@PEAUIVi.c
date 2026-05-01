/*
 * XREFs of ?IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUHMONITOR__@@@Z @ 0x18049973C
 * Callers:
 *     ?CacheAllVisibleAppsOnMonitor@CAppThumbnailWindow@@IEAAJXZ @ 0x18049205C (-CacheAllVisibleAppsOnMonitor@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z @ 0x180498CB0 (-TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802ED918 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?IsViewVisible@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180499584 (-IsViewVisible@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesk.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall MultitaskingViewGestureHandlerHelpers::IsViewVisibleOnMonitor(
        MultitaskingViewGestureHandlerHelpers *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3,
        HMONITOR a4)
{
  char IsEnabled; // al
  struct IVirtualDesktop *v8; // r8
  char v9; // si
  __int64 v10; // rcx
  bool v11; // bl
  __int64 v12; // rax
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF
  HWND hWnd; // [rsp+58h] [rbp+38h] BYREF

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl);
  v9 = 1;
  LODWORD(v14) = 0;
  hWnd = 0LL;
  if ( IsEnabled )
  {
    v11 = MultitaskingViewGestureHandlerHelpers::IsViewVisible(this, a2, v8)
       && (*(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, HWND *))(*(_QWORD *)this + 72LL))(this, &hWnd) >= 0
       && !IsIconic(hWnd);
    if ( (unsigned int)IsGamingFullScreenExperienceActive(v10) )
      goto LABEL_10;
    if ( !v11 )
      goto LABEL_9;
  }
  else if ( !MultitaskingViewGestureHandlerHelpers::IsViewVisible(this, a2, v8)
         || (*(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, HWND *))(*(_QWORD *)this + 72LL))(
              this,
              &hWnd) < 0
         || IsIconic(hWnd) )
  {
    goto LABEL_9;
  }
  if ( (*(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, __int64 *))(*(_QWORD *)this + 88LL))(this, &v14) < 0
    || !(_DWORD)v14 )
  {
LABEL_9:
    v11 = 0;
    goto LABEL_10;
  }
  v11 = 1;
LABEL_10:
  if ( !a3 )
    return v11;
  v14 = 0LL;
  hWnd = 0LL;
  if ( !v11
    || (v12 = *(_QWORD *)this,
        v14 = 0LL,
        (*(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, __int64 *))(v12 + 80))(this, &v14) < 0)
    || (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v14 + 40LL))(v14, &hWnd) < 0
    || a3 != (struct IVirtualDesktop *)hWnd )
  {
    v9 = 0;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  return v9;
}
