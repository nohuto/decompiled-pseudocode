/*
 * XREFs of ?OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036D7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180018F54 (--0-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180019A80 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001D8C8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x180114AE8 (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18036B300 (--1EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x18036E6B8 (-StartActivity@EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnViewHidden(
        struct _TP_TIMER **this,
        struct CSingleViewShellExperience *a2)
{
  const unsigned __int16 *v3; // rdx
  _QWORD v5[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v5,
    (__int64)"EM_ViewHiddenActivity");
  v5[0] = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewHiddenActivity::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewHiddenActivity::StartActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewHiddenActivity *)v5);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 67,
    0LL);
  CControlCenterExperienceManager::OnVisibilityChanged((HSTRING *)this - 13, v3);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v5, 0);
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewHiddenActivity::~EM_ViewHiddenActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewHiddenActivity *)v5);
  return 0LL;
}
