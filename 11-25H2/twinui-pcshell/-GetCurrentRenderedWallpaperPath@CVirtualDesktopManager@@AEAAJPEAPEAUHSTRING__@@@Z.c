/*
 * XREFs of ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x1801F4E5C
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18020C980 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180533884 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJXZ @ 0x1805346DC (-UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F4F44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@QEAAX_NW4Repo.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x18021DD30 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18029F730 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_187e8ca969ed88f0e176cfab90feca38___ @ 0x18052CC88 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_187e8ca969ed88f0e176cfab90feca38.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopManager::GetCurrentRenderedWallpaperPath(CVirtualDesktopManager *this, HSTRING *a2)
{
  HSTRING *v2; // rdi
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  HSTRING v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  HSTRING string; // [rsp+40h] [rbp+20h] BYREF
  void *v11; // [rsp+48h] [rbp+28h] BYREF
  void *v12; // [rsp+50h] [rbp+30h] BYREF

  string = (HSTRING)this;
  v2 = a2;
  *a2 = 0LL;
  v11 = 0LL;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwSotUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VwSotUpdates>::GetImpl'::`2'::impl,
    a2);
  v3 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
         &string,
         &v11);
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_187e8ca969ed88f0e176cfab90feca38___(v3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v11 )
    {
      string = 0LL;
      v12 = v11;
      v6 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>(&string, &v12);
      v5 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5C3,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v6);
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_8;
      }
      v7 = string;
      string = 0LL;
      *v2 = v7;
      WindowsDeleteString(0LL);
    }
    v5 = 0;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5B3,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_8:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v11);
  return v5;
}
