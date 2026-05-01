/*
 * XREFs of ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x1805E8B20
 * Callers:
 *     ?RequestPinItemAsync@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAX00PEAPEAX@Z @ 0x1805E8A40 (-RequestPinItemAsync@-$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinMan.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x180280FBC (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028228C (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180283114 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180283C50 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802846CC (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@2@XZ @ 0x1802A26CC (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U1.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802ACC38 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?TileId@?$consume_Windows_UI_StartScreen_ISecondaryTile@UISecondaryTile@StartScreen@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18044B188 (-TileId@-$consume_Windows_UI_StartScreen_ISecondaryTile@UISecondaryTile@StartScreen@UI@Windows@w.c)
 *     ??$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@45@Uhstring@5@0USecondaryTile@StartScreen@UI@45@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1805DF3C8 (--$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implemen.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1805E2900 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect_ea_1805E2900.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@$$QEAV01@@Z @ 0x1805E2F54 (--0-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@d_ea_1805E2F54.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805E3868 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x1805E4D68 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?StartActivity@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00@Z @ 0x1805E9684 (-StartActivity@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::RequestPinItemAsync(
        __int64 a1,
        __int64 a2,
        winrt::hstring *a3,
        winrt::hstring *a4,
        __int64 *a5)
{
  char v7; // r15
  const unsigned __int16 *v8; // rax
  unsigned __int16 **v9; // rdx
  int v10; // eax
  const WCHAR *v11; // rbx
  __int64 *v12; // rax
  winrt::hstring *v13; // rax
  const unsigned __int16 *v14; // rsi
  const unsigned __int16 *v15; // rdi
  const unsigned __int16 *v16; // rbx
  struct wil::details::IFailureCallback *v17; // rdi
  volatile signed __int32 *v18; // rcx
  unsigned int v19; // r8d
  volatile signed __int32 **v20; // rbx
  unsigned int v21; // r8d
  volatile signed __int32 **v22; // rax
  int v24; // [rsp+28h] [rbp-D8h]
  int v25; // [rsp+30h] [rbp-D0h]
  int v26; // [rsp+38h] [rbp-C8h]
  int v27; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  PCWSTR pszSrc; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  int v32; // [rsp+80h] [rbp-80h]
  volatile signed __int32 *v33; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v34[8]; // [rsp+90h] [rbp-70h] BYREF
  int v35[2]; // [rsp+98h] [rbp-68h]
  int v36[2]; // [rsp+A0h] [rbp-60h]
  winrt::hstring *v37; // [rsp+A8h] [rbp-58h]
  winrt::hstring *v38; // [rsp+B0h] [rbp-50h]
  __int64 *v39; // [rsp+B8h] [rbp-48h]
  _BYTE *v40; // [rsp+C0h] [rbp-40h]
  __int64 *v41; // [rsp+C8h] [rbp-38h]
  __int64 *v42; // [rsp+D0h] [rbp-30h]
  __int64 *v43; // [rsp+D8h] [rbp-28h]
  _BYTE *v44; // [rsp+E0h] [rbp-20h]
  _BYTE v45[56]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v46[41]; // [rsp+128h] [rbp+28h] BYREF
  void *v47; // [rsp+270h] [rbp+170h] BYREF
  _OWORD v48[3]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v49; // [rsp+2A8h] [rbp+1A8h]
  _QWORD v50[42]; // [rsp+2B0h] [rbp+1B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+458h] [rbp+358h]

  *(_QWORD *)v35 = a2;
  *(_QWORD *)v36 = a1;
  v31 = a2;
  v37 = a3;
  v38 = a4;
  v39 = a5;
  v7 = 0;
  v32 = 0;
  v47 = 0LL;
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                 (__int64)&v47,
                 &v28)
            + 272) = 1;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((void **)&v28);
  memset(v48, 0, sizeof(v48));
  v49 = 0LL;
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::start_and_watch_errors(
    &v47,
    (struct wil::details::IFailureCallback *)v48);
  pszSrc = 0LL;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&pszSrc);
  v8 = winrt::hstring::c_str(a3);
  v10 = LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(v8, v9);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x30E,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v10);
  v11 = pszSrc;
  if ( pszSrc )
  {
    v12 = tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
            (__int64)&v47,
            &v28);
    StrCpyNW((PWSTR)(*v12 + 276), v11, 260);
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((void **)&v28);
  }
  memset_0(v50, 0, 0x148uLL);
  if ( *a5 )
  {
    v13 = (winrt::hstring *)winrt::impl::consume_Windows_UI_StartScreen_ISecondaryTile<winrt::Windows::UI::StartScreen::ISecondaryTile>::TileId(
                              a5,
                              &v33);
    v7 = 1;
    v14 = winrt::hstring::c_str(v13);
  }
  else
  {
    v14 = &pvData;
  }
  v15 = winrt::hstring::c_str(a4);
  v16 = winrt::hstring::c_str(a3);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v50,
    (__int64)"PinManagerRequestPinItem");
  v50[0] = &PinManagerTelemetry::PinManagerRequestPinItem::`vftable';
  PinManagerTelemetry::PinManagerRequestPinItem::StartActivity(
    (PinManagerTelemetry::PinManagerRequestPinItem *)v50,
    v16,
    v15,
    v14);
  if ( (v7 & 1) != 0 )
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v33);
  v40 = v45;
  v17 = tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((struct wil::details::IFailureCallback *)v45);
  v41 = &v28;
  v18 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v47);
  v28 = (__int64)v18;
  if ( v18 )
    _InterlockedIncrement(v18 + 334);
  v42 = v46;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v46,
    (__int64)v50);
  v46[0] = (__int64)&PinManagerTelemetry::PinManagerRequestPinItem::`vftable';
  v43 = &v29;
  v29 = *a5;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v29);
  v44 = v34;
  v20 = (volatile signed __int32 **)winrt::hstring::hstring((winrt::hstring *)v34, a4, v19);
  v22 = (volatile signed __int32 **)winrt::hstring::hstring((winrt::hstring *)&v31, a3, v21);
  winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync<PinManagerTelemetry::PinManagerRequestPinItem>(
    *(__int64 *)v36,
    *(__int64 **)v35,
    v22,
    v20,
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v29,
    v24,
    v25,
    v26,
    v27,
    (PinManagerTelemetry::PinManagerRequestPinItem *)v46,
    (void **)&v28,
    (__int64)v17);
  PinManagerTelemetry::PinManagerRequestPinItem::~PinManagerRequestPinItem((PinManagerTelemetry::PinManagerRequestPinItem *)v50);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszSrc);
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((__int64)v48);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(&v47);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a4);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a5);
  return *(_QWORD *)v35;
}
