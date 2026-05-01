/*
 * XREFs of ?InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ @ 0x180296D0C
 * Callers:
 *     ?InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x1801FF510 (-InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 * Callees:
 *     ?StartActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAAXXZ @ 0x1800189EC (-StartActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F0C8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006F1B0 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityB.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006F1E4 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006F71C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007903C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??4?$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801CC8E4 (--4-$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ??0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x180296E44 (--0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CShellSnapComponent::InitializeSnapFlyoutHost(CShellSnapComponent *this)
{
  struct IPrivilegedArrangementOperations *v2; // rsi
  SnapFlyoutHost *v3; // rdi
  _QWORD *v5[2]; // [rsp+20h] [rbp-178h] BYREF
  void **v6; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v7[272]; // [rsp+38h] [rbp-160h] BYREF
  volatile signed __int32 *v8; // [rsp+148h] [rbp-50h] BYREF
  _BYTE v9[48]; // [rsp+150h] [rbp-48h] BYREF

  if ( *((_BYTE *)this + 920) || *((_BYTE *)this + 921) )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v6,
      (__int64)"InitializeSnapFlyoutHost");
    v6 = &CSnapComponentTelemetry::InitializeSnapFlyoutHost::`vftable';
    CSnapComponentTelemetry::InitializeSnapFlyoutHost::StartActivity((CSnapComponentTelemetry::InitializeSnapFlyoutHost *)&v6);
    v2 = (struct IPrivilegedArrangementOperations *)*((_QWORD *)this + 50);
    v3 = (SnapFlyoutHost *)operator new(0xB8uLL);
    SnapFlyoutHost::SnapFlyoutHost(v3, v2);
    *(_QWORD *)v3 = &winrt::impl::heap_implements<SnapFlyoutHost>::`vftable';
    v5[0] = v3;
    winrt::com_ptr<SnapFlyoutHost>::operator=((__int64 *)this + 114, (__int64 *)v5);
    if ( v5[0] )
      winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(v5);
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v6);
    v6 = &CSnapComponentTelemetry::InitializeSnapFlyoutHost::`vftable';
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v6);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v9);
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v8);
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
  }
  return 0LL;
}
