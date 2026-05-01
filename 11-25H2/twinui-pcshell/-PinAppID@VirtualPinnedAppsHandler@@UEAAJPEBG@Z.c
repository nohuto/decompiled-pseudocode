/*
 * XREFs of ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180540320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180056C00 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800F44C8 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z @ 0x1801FB218 (-IsAppIdPinnedInternal@VirtualPinnedAppsHandler@@AEAA_NPEBG@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180217F3C (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296D24 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802AFA9C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ??$_Emplace_one_at_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1802C280C (--$_Emplace_one_at_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1805400B0 (--1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180540D38 (-StartActivity@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x180540FC8 (-Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtual.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
__int64 __fastcall VirtualPinnedAppsHandler::PinAppID(VirtualPinnedAppsHandler *this, unsigned __int16 *a2)
{
  __int64 v4; // rdx
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  struct IApplicationView *v12; // rbx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-1F8h]
  struct IVirtualDesktop *v15; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-1D0h] BYREF
  RTL_SRWLOCK *v17; // [rsp+50h] [rbp-1C8h] BYREF
  struct IApplicationView *v18; // [rsp+58h] [rbp-1C0h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-1B8h] BYREF
  struct IApplicationView *v20[2]; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v21; // [rsp+78h] [rbp-1A0h] BYREF
  int v22; // [rsp+80h] [rbp-198h]
  void *v23; // [rsp+88h] [rbp-190h] BYREF
  __int64 v24[4]; // [rsp+90h] [rbp-188h] BYREF
  volatile signed __int32 *v25[42]; // [rsp+B0h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v17);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v25,
    (__int64)"VirtualDesktopPinAppActivity");
  v25[0] = (volatile signed __int32 *)&VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v25);
  if ( !*((_QWORD *)this + 10) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x81,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)0x80070490LL,
      v14);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 440LL))(*((_QWORD *)this + 6)) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x82,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)0x8007139FLL,
      v14);
  if ( (unsigned __int8)VirtualPinnedAppsHandler::IsAppIdPinnedInternal(this, a2) )
  {
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::~VirtualDesktopPinAppActivity(v25);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
    return 1LL;
  }
  else
  {
    LOBYTE(v4) = 1;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, unsigned __int16 *))(**((_QWORD **)this + 7) + 32LL))(
           *((_QWORD *)this + 7),
           v4,
           L"PinnedApps",
           a2);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x89,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v6);
    std::wstring::wstring((char **)&v23, a2);
    std::vector<std::wstring>::_Emplace_one_at_back<std::wstring>((__int64)this + 88, (__int64)&v23);
    std::wstring::_Tidy_deallocate(&v23);
    v16 = 0LL;
    v7 = (__int64 *)*((_QWORD *)this + 10);
    v8 = *v7;
    v16 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 *, __int64 *))(v8 + 40))(v7, a2, &v16);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8D,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v9,
        4);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v21,
      v16);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v19,
      (__int64)&v21,
      0);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v23,
      (__int64)&v21,
      v22);
    while ( v19 != (_DWORD)v23 || v20[1] != (struct IApplicationView *)v24[1] )
    {
      v12 = v20[0];
      v18 = v20[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
      v13 = VirtualPinnedAppsHandler::PinViewInternal(this, v12, 1);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x90,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
      ++v19;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v19);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    v15 = 0LL;
    v10 = (__int64 *)*((_QWORD *)this + 6);
    v11 = *v10;
    v15 = 0LL;
    (*(void (__fastcall **)(__int64 *, struct IVirtualDesktop **))(v11 + 368))(v10, &v15);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v25,
      a2,
      v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::~VirtualDesktopPinAppActivity(v25);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
    return 0LL;
  }
}
