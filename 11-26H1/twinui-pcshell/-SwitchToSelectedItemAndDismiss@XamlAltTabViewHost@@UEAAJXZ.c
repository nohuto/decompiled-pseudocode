/*
 * XREFs of ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x18009CCD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?InvokeFocusedItem@__IAltTabPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x18009AF40 (-InvokeFocusedItem@__IAltTabPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsIntern.c)
 *     ?StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAXXZ @ 0x18009CDF0 (-StartActivity@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18009DD28 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009E034 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009E14C (--1-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18009E1BC (-reset@-$shared_object@V-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009E218 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlAltTabViewHost::SwitchToSelectedItemAndDismiss(XamlAltTabViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // esi
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  void **v7; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v8[272]; // [rsp+48h] [rbp-160h] BYREF
  _BYTE v9[8]; // [rsp+158h] [rbp-50h] BYREF
  _BYTE v10[48]; // [rsp+160h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  try
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      &v7,
      "SwitchToSelectedItemAndDismiss");
    v7 = &XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::`vftable';
    XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::StartActivity((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)&v7);
    v4 = *((_QWORD *)this + 20);
    if ( v4 )
      WindowsInternal::ComposableShell::Experiences::Switcher::__IAltTabPublicNonVirtuals::InvokeFocusedItem(v4);
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v7);
    v7 = &XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::`vftable';
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v7);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v10);
    wil::details::shared_object<wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v9);
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>(v8);
    if ( v3 >= 0 )
      LeaveCriticalSection(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1D0,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                           v5);
  }
  return result;
}
