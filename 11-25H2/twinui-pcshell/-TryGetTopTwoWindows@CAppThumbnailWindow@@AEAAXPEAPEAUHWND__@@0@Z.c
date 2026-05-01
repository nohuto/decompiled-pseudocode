/*
 * XREFs of ?TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z @ 0x180498CB0
 * Callers:
 *     ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x180498AA8 (-TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV-$vector@PEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028F8E4 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802ED918 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ??$try_capture@UIGamingPosturePositioner@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU3@@winrt@@YA?AU?$com_ptr@UIGamingPosturePositioner@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x180491DD4 (--$try_capture@UIGamingPosturePositioner@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServicePro.c)
 *     ??$try_create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180491E24 (--$try_create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ?IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUHMONITOR__@@@Z @ 0x18049973C (-IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CAppThumbnailWindow::TryGetTopTwoWindows(CAppThumbnailWindow *this, HWND *a2, HWND *a3)
{
  __int64 v6; // rcx
  HWND v7; // rsi
  ApplicationViewHelpers *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rax
  struct IApplicationView *v11; // rdx
  struct IApplicationView *v12; // rdx
  HWND v13; // rdi
  __int64 *v14; // rcx
  __int64 v15; // rax
  unsigned int i; // ebx
  __int64 v17; // rax
  HMONITOR v18; // r9
  struct IApplicationView *v19; // rdx
  __int64 WindowForView; // rax
  unsigned int v21; // [rsp+30h] [rbp-40h] BYREF
  ApplicationViewHelpers *v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v23; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v24; // [rsp+48h] [rbp-28h] BYREF
  ApplicationViewHelpers *v25; // [rsp+50h] [rbp-20h] BYREF
  GUID v26; // [rsp+58h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
    && (*a2 = 0LL, *a3 = 0LL, (unsigned int)IsGamingFullScreenExperienceActive(v6)) )
  {
    v26 = CLSID_ImmersiveShell;
    winrt::try_create_instance<IServiceProvider>(&v25, (__int64)&v26);
    v8 = v25;
    if ( v25 )
    {
      v22 = v25;
      winrt::try_capture<IGamingPosturePositioner,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
        &v24,
        (void (__fastcall *)(_QWORD, GUID *, __int64 *, __int64 *))IUnknown_QueryService,
        &v22);
      v9 = v24;
      if ( v24 )
      {
        v22 = 0LL;
        *(_QWORD *)&v26.Data1 = 0LL;
        v10 = *v24;
        *(_QWORD *)&v26.Data1 = 0LL;
        v22 = 0LL;
        (*(void (__fastcall **)(_QWORD *, ApplicationViewHelpers **, GUID *))(v10 + 72))(v24, &v22, &v26);
        if ( v22 )
        {
          (*(void (__fastcall **)(ApplicationViewHelpers *, __int64, _QWORD))(*(_QWORD *)v22 + 96LL))(v22, 1LL, 0LL);
          *a2 = (HWND)ApplicationViewHelpers::GetWindowForView(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v22,
                        v11);
        }
        if ( *(_QWORD *)&v26.Data1 )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&v26.Data1 + 96LL))(*(_QWORD *)&v26.Data1, 1LL);
          *a3 = (HWND)ApplicationViewHelpers::GetWindowForView(
                        *(__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))&v26.Data1,
                        v12);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
      }
      if ( v9 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v24);
    }
    if ( v8 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v25);
  }
  else
  {
    v13 = 0LL;
    v21 = 0;
    v23 = 0LL;
    v14 = (__int64 *)*((_QWORD *)this + 4);
    v15 = *v14;
    v23 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 **))(v15 + 32))(v14, &v23) >= 0
      && (*(int (__fastcall **)(__int64 *, unsigned int *))(*v23 + 24))(v23, &v21) >= 0 )
    {
      for ( i = 0; i < v21; ++i )
      {
        *(_QWORD *)&v26.Data1 = 0LL;
        v17 = *v23;
        *(_QWORD *)&v26.Data1 = 0LL;
        if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *))(v17 + 32))(
               v23,
               i,
               &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
               &v26) >= 0
          && MultitaskingViewGestureHandlerHelpers::IsViewVisibleOnMonitor(
               *(MultitaskingViewGestureHandlerHelpers **)&v26.Data1,
               *((struct IApplicationView **)this + 16),
               *((struct IVirtualDesktop **)this + 19),
               v18) )
        {
          WindowForView = ApplicationViewHelpers::GetWindowForView(
                            *(__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))&v26.Data1,
                            v19);
          if ( v13 )
          {
            v7 = (HWND)WindowForView;
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
            break;
          }
          v13 = (HWND)WindowForView;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
      }
    }
    *a2 = v13;
    *a3 = v7;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
  }
}
