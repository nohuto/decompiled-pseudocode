/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805BAE58
 * Callers:
 *     ??$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@45@Uhstring@5@0USecondaryTile@StartScreen@UI@45@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1805BBB00 (--$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implemen.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805BB040 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1805BEC7C (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@$$QEAV01@@Z @ 0x1805BEF80 (--0-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@d_ea_1805BEF80.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__InitCoro_2_PinManagerTelemetry::PinManagerRequestPinItem_(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 a7,
        char *a8,
        char *a9,
        int *a10,
        __int64 a11,
        __int64 *a12,
        int a13,
        __int64 a14)
{
  int v17; // r11d
  char v18; // r10
  char v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdi

  v17 = *a10;
  v18 = *a9;
  v19 = *a8;
  *(_QWORD *)(a2 + 1041) = a14;
  v20 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 1049) = v20;
  v21 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a2 + 1057) = v21;
  v22 = *a6;
  *a6 = 0LL;
  *(_QWORD *)(a2 + 1065) = v22;
  *(_QWORD *)(a2 + 1073) = a7;
  *(_BYTE *)(a2 + 1081) = v19;
  *(_BYTE *)(a2 + 1082) = v18;
  *(_DWORD *)(a2 + 1085) = v17;
  v23 = a2 + 1040;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    a2 + 1089,
    a11);
  *(_QWORD *)(v23 + 49) = &PinManagerTelemetry::PinManagerRequestPinItem::`vftable';
  v24 = *a12;
  *a12 = 0LL;
  *(_QWORD *)(a2 + 1417) = v24;
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((struct wil::details::IFailureCallback *)(a2 + 1425));
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_1_PinManagerTelemetry::PinManagerRequestPinItem_;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v25 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x70uLL);
  *(_QWORD *)(v25 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>>::`vftable';
  *(_QWORD *)(v25 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v25 + 8) = 1LL;
  *(_QWORD *)(v25 + 32) = 0LL;
  *(_QWORD *)(v25 + 40) = 0LL;
  *(_BYTE *)(v25 + 48) = 0;
  *(_QWORD *)v25 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type::`vftable';
  *(_QWORD *)(v25 + 56) = 0LL;
  *(_QWORD *)(v25 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(a2 - 112 + 56));
  *(_QWORD *)(v25 + 72) = 0LL;
  *(_QWORD *)(v25 + 80) = 0LL;
  *(_QWORD *)(v25 + 88) = 0LL;
  *(_DWORD *)(v25 + 96) = 0;
  *(_BYTE *)(v25 + 100) = 0;
  *(_QWORD *)v25 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type::`vftable';
  *(_BYTE *)(v25 + 104) = 0;
  *a3 = a2 - 112 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  a10 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a10);
  *(_BYTE *)(a2 + 1040) = 0;
  return winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_1_PinManagerTelemetry::PinManagerRequestPinItem_(a2);
}
