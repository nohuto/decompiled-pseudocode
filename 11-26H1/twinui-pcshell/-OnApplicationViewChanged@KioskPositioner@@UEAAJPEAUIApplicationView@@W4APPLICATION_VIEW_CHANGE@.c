/*
 * XREFs of ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804F1440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18016D4B8 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18016D4E0 (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18016D508 (-IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18020D68C (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18022C628 (-IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z @ 0x1804EF60C (--$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?AddViewToKioskPositioner@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804EFEF4 (-AddViewToKioskPositioner@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F0E44 (-IsPrimaryAppView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F10B0 (-IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804F12D4 (-MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?RemoveView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F1BC4 (-RemoveView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18067FEAC (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KioskPositioner::OnApplicationViewChanged(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        const char *a4)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  bool IsWin32ApplicationView; // r14
  KioskPositioner *v9; // rsi
  const WCHAR *v10; // rax
  KioskPositioner *v11; // rcx
  struct IApplicationView *v12; // rdx
  ApplicationViewHelpers *WindowForView; // rdi
  HWND v14; // rdx
  HWND v15; // rdx
  HWND v16; // rdx
  struct IApplicationView *v17; // rdx
  struct IApplicationView *v18; // rdx
  __int64 result; // rax
  const WCHAR *v20[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v21[8]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
          v20,
          a1 - 136);
        v6 = *(__int64 **)(a1 + 504);
        v7 = *v6;
        v21[0] = off_18074F9D8;
        v21[1] = v20[0];
        v21[7] = v21;
        (*(void (__fastcall **)(__int64 *, struct IApplicationView *, _QWORD, _QWORD *))(v7 + 24))(
          v6,
          a2,
          *(_QWORD *)(a1 + 72),
          v21);
        GamingApplicationViewCollection::RemoveView((GamingApplicationViewCollection *)(a1 + 512), a2);
      }
    }
    else
    {
      IsWin32ApplicationView = GamingPosturePositioner::IsWin32ApplicationView((GamingPosturePositioner *)a1, a2);
      v9 = (KioskPositioner *)(a1 - 136);
      if ( !*(_BYTE *)(a1 - 136 + 634)
        && !(unsigned __int8)KioskPositioner::IsPrimaryAppView((KioskPositioner *)(a1 - 136), a2) )
      {
        *(_BYTE *)(a1 + 498) = 1;
        v10 = L"Win32";
        if ( !IsWin32ApplicationView )
          v10 = L"UWP";
        v20[0] = v10;
        CustomShellHostTelemetry::SecondaryAppLaunched<unsigned short const *>(v20);
      }
      if ( IsWin32ApplicationView )
      {
        if ( KioskPositioner::ShouldHandleView((KioskPositioner *)(a1 - 136), a2) )
        {
          KioskPositioner::AddViewToKioskPositioner(v11, a2);
          WindowForView = (ApplicationViewHelpers *)ApplicationViewHelpers::GetWindowForView(
                                                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                                                      v12);
          if ( IsWindow((HWND)WindowForView) )
          {
            if ( ApplicationViewHelpers::CanResizeWindow(WindowForView, v14)
              && ApplicationViewHelpers::CanMaximizeWindow(WindowForView, v15)
              && !ApplicationViewHelpers::IsWindowInHighZOrderBand(WindowForView, v16)
              && !ApplicationViewHelpers::HasRootSwitchableOwner((struct IUnknown *)a2, v17)
              && ApplicationViewHelpers::IsViewShownInSwitchers(a2, v18) )
            {
              KioskPositioner::MaximizeWin32View(v9, a2);
            }
          }
        }
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x345,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           a4);
  }
  return result;
}
