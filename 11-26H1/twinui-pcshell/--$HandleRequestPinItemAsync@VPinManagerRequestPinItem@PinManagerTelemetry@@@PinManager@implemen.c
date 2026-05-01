/*
 * XREFs of ??$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@45@Uhstring@5@0USecondaryTile@StartScreen@UI@45@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1805DF3C8
 * Callers:
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x1805E8B20 (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180283114 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180283C50 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DE960 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1805E27FC (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect_ea_1805E27FC.c)
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1805E2E24 (--0-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation_ea_1805E2E24.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@$$QEAV01@@Z @ 0x1805E2F54 (--0-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@d_ea_1805E2F54.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805E3868 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=10
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync<PinManagerTelemetry::PinManagerRequestPinItem>(
        __int64 a1,
        __int64 *a2,
        volatile signed __int32 **a3,
        volatile signed __int32 **a4,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        PinManagerTelemetry::PinManagerRequestPinItem *a10,
        void **a11,
        __int64 a12)
{
  _QWORD *v16; // rax
  __int64 v17; // rdi
  volatile signed __int32 *v18; // rax
  volatile signed __int32 *v19; // rax
  __int64 v20; // rax
  void *v21; // rax
  __int64 v22; // rbx
  __int64 v24; // [rsp+30h] [rbp-59h] BYREF
  __int64 v25; // [rsp+38h] [rbp-51h]
  __int64 *v26; // [rsp+40h] [rbp-49h]
  volatile signed __int32 **v27; // [rsp+48h] [rbp-41h]
  volatile signed __int32 **v28; // [rsp+50h] [rbp-39h]
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v29; // [rsp+58h] [rbp-31h]
  void **v30; // [rsp+60h] [rbp-29h]
  __int64 v31; // [rsp+68h] [rbp-21h]
  PinManagerTelemetry::PinManagerRequestPinItem *v32; // [rsp+70h] [rbp-19h]

  v26 = a2;
  v27 = a3;
  v28 = a4;
  v29 = a5;
  v32 = a10;
  v30 = a11;
  v25 = a12;
  v31 = a12;
  v16 = operator new(0x640uLL);
  v17 = (__int64)(v16 + 14);
  v16[145] = a1;
  v18 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(v17 + 1056) = v18;
  v19 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(v17 + 1064) = v19;
  v20 = *(_QWORD *)a5;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(v17 + 1072) = v20;
  *(_QWORD *)(v17 + 1080) = 0LL;
  *(_WORD *)(v17 + 1088) = 1;
  *(_DWORD *)(v17 + 1092) = 28;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    v17 + 1096,
    a10);
  *(_QWORD *)(v17 + 1096) = &PinManagerTelemetry::PinManagerRequestPinItem::`vftable';
  v21 = *a11;
  *a11 = 0LL;
  *(_QWORD *)(v17 + 1424) = v21;
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((struct wil::details::IFailureCallback *)(v17 + 1432));
  *(_QWORD *)v17 = winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_1_PinManagerTelemetry::PinManagerRequestPinItem_;
  *(_DWORD *)(v17 + 8) = 65538;
  v22 = v17 - 112;
  memset_0((void *)(v17 - 112), 0, 0x70uLL);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>(v17 - 112);
  *(_QWORD *)v22 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type::`vftable';
  *(_BYTE *)(v22 + 104) = 0;
  *a2 = v17 - 112 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  v24 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
  *(_BYTE *)(v17 + 1040) = 0;
  winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_1_PinManagerTelemetry::PinManagerRequestPinItem_(v17);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a4);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a5);
  PinManagerTelemetry::PinManagerRequestPinItem::~PinManagerRequestPinItem(a10);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(a11);
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v25);
  return a2;
}
