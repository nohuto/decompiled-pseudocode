/*
 * XREFs of ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049ADEC
 * Callers:
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18049D460 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180499BE8 (--1-$com_ptr_t@V-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180499CBC (--1-$test_watcher@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18049A930 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewTelemetry@@SAXXZ @ 0x18049AF34 (-CreateAndOpenAppThumbnailWindows@MultitaskingViewTelemetry@@SAXXZ.c)
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049AF88 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18049DFDC (-start@-$tip_test@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@.c)
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x1804A6BD0 (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MultitaskingViewGestureHandler::CreateAndOpenAppThumbnailWindows(CAppThumbnailWindow ***this)
{
  __int64 v2; // rbx
  int AppThumbnailWindows; // eax
  unsigned int v4; // edi
  CAppThumbnailWindow **v5; // rdi
  CAppThumbnailWindow **v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // esi
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  char v11; // [rsp+28h] [rbp-48h]
  void **v12; // [rsp+30h] [rbp-40h] BYREF
  char v13[40]; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v14; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  volatile signed __int32 *v16; // [rsp+98h] [rbp+28h] BYREF

  MultitaskingViewTelemetry::CreateAndOpenAppThumbnailWindows();
  v16 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>::start(&v16, &v10);
  v12 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v13,
    (struct wil::details::IFailureCallback *)&v12,
    0LL,
    1);
  v14 = v16;
  if ( v16 )
    _InterlockedIncrement(v16 + 68);
  wil::com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>((void **)&v16);
  v2 = *winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
          &v16,
          (__int64)this);
  v10 = v2;
  v11 = 1;
  AppThumbnailWindows = MultitaskingViewGestureHandler::CreateAppThumbnailWindows((MultitaskingViewGestureHandler *)this);
  v4 = AppThumbnailWindows;
  if ( AppThumbnailWindows >= 0 )
  {
    v5 = this[12];
    v6 = this[13];
    while ( v5 != v6 )
    {
      v7 = CAppThumbnailWindow::Open(*v5);
      v8 = v7;
      if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2147467260 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12B,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)v7);
        MultitaskingViewGestureHandler::AnimationComplete(v2, 0);
        v4 = v8;
        goto LABEL_12;
      }
      v5 += 2;
    }
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11F,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)AppThumbnailWindows);
    MultitaskingViewGestureHandler::AnimationComplete(v2, 0);
  }
LABEL_12:
  tip2::test_watcher<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>::~test_watcher<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>((__int64)&v12);
  return v4;
}
