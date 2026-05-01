/*
 * XREFs of ?TryGetTopTwoApplicationViews@CAppThumbnailWindow@@AEAAXPEAPEAUIApplicationView@@0@Z @ 0x1804A9A28
 * Callers:
 *     ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A9760 (-TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV-$vector@PEAU.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802871EC (--4-$com_ptr_t@UISnappedWindow@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$copy_to@UIApplicationView@@@?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIApplicationView@@@Z @ 0x1804A2A7C (--$copy_to@UIApplicationView@@@-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??$try_capture@UIGamingPosturePositioner@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU3@@winrt@@YA?AU?$com_ptr@UIGamingPosturePositioner@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x1804A2B9C (--$try_capture@UIGamingPosturePositioner@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServicePro.c)
 *     ??$try_create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1804A2BF0 (--$try_create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ?IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUHMONITOR__@@@Z @ 0x1804AA5DC (-IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppThumbnailWindow::TryGetTopTwoApplicationViews(
        CAppThumbnailWindow *this,
        struct IApplicationView **a2,
        struct IApplicationView **a3)
{
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, __int64 *, __int64 *); // rdi
  __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned int i; // ebx
  __int64 v11; // rax
  HMONITOR v12; // r9
  MultitaskingViewGestureHandlerHelpers *v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  MultitaskingViewGestureHandlerHelpers *v16; // [rsp+48h] [rbp-28h] BYREF
  GUID v17; // [rsp+50h] [rbp-20h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  if ( (unsigned int)IsGamingFullScreenExperienceActive(this) )
  {
    v17 = CLSID_ImmersiveShell;
    winrt::try_create_instance<IServiceProvider>(&v13, (__int64)&v17);
    if ( v13 )
    {
      v16 = v13;
      winrt::try_capture<IGamingPosturePositioner,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
        &v17,
        (void (__fastcall *)(_QWORD, GUID *, __int64 *, __int64 *))IUnknown_QueryService,
        &v16);
      v6 = *(_QWORD *)&v17.Data1;
      if ( *(_QWORD *)&v17.Data1 )
      {
        v7 = *(void (__fastcall **)(__int64, __int64 *, __int64 *))(**(_QWORD **)&v17.Data1 + 72LL);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v7(v6, &v15, &v14);
        if ( v15 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 96LL))(v15, 1LL);
        if ( v14 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 96LL))(v14, 1LL);
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v17);
      }
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v13);
    }
  }
  else
  {
    LODWORD(v16) = 0;
    v8 = (__int64 *)*((_QWORD *)this + 4);
    v9 = *v8;
    *(_QWORD *)&v17.Data1 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, GUID *))(v9 + 32))(v8, &v17) >= 0
      && (*(int (__fastcall **)(_QWORD, MultitaskingViewGestureHandlerHelpers **))(**(_QWORD **)&v17.Data1 + 24LL))(
           *(_QWORD *)&v17.Data1,
           &v16) >= 0 )
    {
      for ( i = 0; i < (unsigned int)v16; ++i )
      {
        v11 = **(_QWORD **)&v17.Data1;
        v13 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, MultitaskingViewGestureHandlerHelpers **))(v11 + 32))(
               *(_QWORD *)&v17.Data1,
               i,
               &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
               &v13) >= 0
          && MultitaskingViewGestureHandlerHelpers::IsViewVisibleOnMonitor(
               v13,
               *((struct IApplicationView **)this + 16),
               *((struct IVirtualDesktop **)this + 19),
               v12) )
        {
          if ( v15 )
          {
            if ( !v14 )
            {
              wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(&v14, (__int64 *)&v13);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
              break;
            }
          }
          else
          {
            wil::com_ptr_t<ISnappedWindow,wil::err_returncode_policy>::operator=(&v15, (__int64 *)&v13);
          }
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
  }
  if ( v15 )
    wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::copy_to<IApplicationView>(&v15, a2);
  if ( v14 )
    wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::copy_to<IApplicationView>(&v14, a3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
}
