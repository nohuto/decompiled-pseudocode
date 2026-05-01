/*
 * XREFs of ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1800F545C
 * Callers:
 *     ?IsPinAllowed@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAXPEA_N@Z @ 0x1805E71C0 (-IsPinAllowed@-$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@34.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800F5760 (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1802820F8 (-IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV-$shared_p.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180283114 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     ?Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z @ 0x180283660 (-Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180284470 (-reset@-$shared_object@V-$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802844C4 (--1-$ActivityData@VPinManagerTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1802849C8 (-IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV-$shar.c)
 *     ?StartActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBG@Z @ 0x180284B68 (-StartActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180284C28 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180288564 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x18028CDF0 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028F740 (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 *     ??0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV?$SimpleVectorIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@AEAPEAEAEAV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x180297C24 (--0_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEAA@PEAV-$SimpleVectorIterator@UDisplayRegionId@W.c)
 *     ??1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ @ 0x1802985CC (--1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802985F8 (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??1?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x1802C32A0 (--1-$tuple@V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_n.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$move@AEAV_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@std@@YA$$QEAV_lambda_cde4a48620a5d22db594fe5feaac6c81_@@AEAV1@@Z @ 0x1802DCDC4 (--$move@AEAV_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@std@@YA$$QEAV_lambda_cde4a48620a5d22db59.c)
 *     ??$QueueTask@V_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@Z @ 0x1805DFF9C (--$QueueTask@V_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ?__autoclassinit2@_lambda_cde4a48620a5d22db594fe5feaac6c81_@@QEAAX_K@Z @ 0x1805EC958 (-__autoclassinit2@_lambda_cde4a48620a5d22db594fe5feaac6c81_@@QEAAX_K@Z.c)
 *     ?IsNotificationConsentAvailable@@YA_NXZ @ 0x1805F01A0 (-IsNotificationConsentAvailable@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsPinAllowed(
        winrt::Windows::Internal::Shell::implementation::PinManager *this,
        const struct winrt::hstring *a2)
{
  const unsigned __int16 *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // rax
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  DWORD CurrentThreadId; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  char v21; // bl
  int v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v23; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v29; // [rsp+78h] [rbp-88h]
  std::_Ref_count_base *v30[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[32]; // [rsp+90h] [rbp-70h] BYREF
  void **v32; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v33[272]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v34[8]; // [rsp+1C8h] [rbp+C8h] BYREF
  _BYTE v35[48]; // [rsp+1D0h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  memset_0(&v32, 0, 0x148uLL);
  v4 = winrt::hstring::c_str(a2);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v32);
  v32 = &PinManagerTelemetry::PinManagerIsPinAllowed::`vftable';
  PinManagerTelemetry::PinManagerIsPinAllowed::StartActivity((PinManagerTelemetry::PinManagerIsPinAllowed *)&v32, v4);
  *(_QWORD *)v22 = 0LL;
  winrt::Windows::Internal::Shell::implementation::PinManager::GetPinRequestContext(
    (_DWORD)this,
    (unsigned int)&v27,
    (_DWORD)a2,
    0,
    (__int64)v22);
  v5 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v24, &v28);
  LOBYTE(v6) = 1;
  if ( !(unsigned __int8)winrt::Windows::Internal::Shell::implementation::PinManager::IsPinRequestorAllowed(
                           v22,
                           v27,
                           v5,
                           v6) )
  {
    v7 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v28, v25);
    PinManagerTelemetry::PinManagerIsPinAllowed::Stop(&v32, *v7, 1LL);
LABEL_3:
    std::tuple<std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~tuple<std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(&v27);
    wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(v22);
    PinManagerTelemetry::PinManagerIsPinAllowed::~PinManagerIsPinAllowed((PinManagerTelemetry::PinManagerIsPinAllowed *)&v32);
    return 0;
  }
  *(_OWORD *)v30 = 0LL;
  v23 = 0LL;
  v9 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v25, &v28);
  PinOperationContext::Create(v30, v9, a2, &v23);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
  if ( v30[1] )
    _InterlockedIncrement((volatile signed __int32 *)v30[1] + 2);
  v24 = *(_OWORD *)v30;
  LOBYTE(v10) = 1;
  if ( !(unsigned __int8)winrt::Windows::Internal::Shell::implementation::PinManager::IsPinOperationAllowed(
                           this,
                           &v24,
                           v10,
                           v22) )
  {
    v11 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v28, v25);
    v12 = 2LL;
    goto LABEL_10;
  }
  if ( !IsNotificationConsentAvailable() )
  {
    v11 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v28, v25);
    v12 = 4LL;
LABEL_10:
    PinManagerTelemetry::PinManagerIsPinAllowed::Stop(&v32, *v11, v12);
    if ( v30[1] )
      std::_Ref_count_base::_Decref(v30[1]);
    goto LABEL_3;
  }
  v26[0] = 0;
  _lambda_cde4a48620a5d22db594fe5feaac6c81_::__autoclassinit2((_lambda_cde4a48620a5d22db594fe5feaac6c81_ *)v31, v13);
  _lambda_8310241115156db3d8926b31d9f5a4c3_::_lambda_8310241115156db3d8926b31d9f5a4c3_(v31, &v28, v30, v26);
  CurrentThreadId = GetCurrentThreadId();
  v16 = std::move<_lambda_cde4a48620a5d22db594fe5feaac6c81_ &>(v31, v15, CurrentThreadId);
  v20 = Windows::Internal::ComTaskPool::QueueTask<_lambda_cde4a48620a5d22db594fe5feaac6c81_>(v18, v17, v19, v16);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2EA,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v20,
      (int)v22);
  PinManagerTelemetry::PinManagerIsPinAllowed::Stop(
    &v32,
    *(_QWORD *)(v28 + 24) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v28 + 24) >> 64),
    v26[0] == 0 ? 3 : 0);
  v21 = v26[0];
  if ( v30[1] )
    std::_Ref_count_base::_Decref(v30[1]);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v27);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(v22);
  v32 = &PinManagerTelemetry::PinManagerIsPinAllowed::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v32);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v35);
  wil::details::shared_object<wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>>::reset(v34);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<PinManagerTelemetry,_TlgReflectorTag_Param0IsProviderType>(v33);
  return v21;
}
