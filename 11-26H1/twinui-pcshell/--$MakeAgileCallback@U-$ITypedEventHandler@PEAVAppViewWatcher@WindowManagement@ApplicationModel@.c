/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIInspectable@@@_E@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@_E@Z @ 0x1804266FC
 * Callers:
 *     _lambda_245d2a2be388f7a941ea2187d291aeff_::operator() @ 0x180428980 (_lambda_245d2a2be388f7a941ea2187d291aeff_--operator().c)
 * Callees:
 *     ??0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z@Z @ 0x18028DC38 (--0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowMan.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802E77A0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_51b902f140e950cb28b7e50a926f6d35_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@01@$$QEAV_lambda_51b902f140e950cb28b7e50a926f6d35_@@@Z @ 0x1804253F0 (--$Callback@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVAppV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ___MakeAgileCallback_U__ITypedEventHandler_PEAVAppViewWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAUIInspectable___Foundation_Windows__AEBQEAVWindowManagerBridge__P84_EAAJPEAUIAppViewWatcher_WindowManagement_ApplicationModel_Internal_3_PEAUIInspectable____E_wil__YA_AV__ComPtr_U__ITypedEventHandler_PEAVAppViewWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAUIInspectable___Foundation_Windows___WRL_Microsoft__AEBQEAVWindowManagerBridge____QEAP84_EAAJPEAUIAppViewWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAUIInspectable____E_Z(
        __int64 *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 v4; // rax
  const char *v5; // r9
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF

  v10 = *a2;
  v7 = *a3;
  v4 = _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_((__int64)&v8, &v10, &v7);
  Microsoft::WRL::Callback<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *,IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_51b902f140e950cb28b7e50a926f6d35_>(
    a1,
    v4);
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      85LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
  return a1;
}
