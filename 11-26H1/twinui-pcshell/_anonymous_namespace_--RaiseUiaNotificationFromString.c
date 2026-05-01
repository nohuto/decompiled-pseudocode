/*
 * XREFs of _anonymous_namespace_::RaiseUiaNotificationFromString @ 0x18053BAA0
 * Callers:
 *     ?EndAppBarResize@JointResizeAcc@@UEAAXXZ @ 0x18053B670 (-EndAppBarResize@JointResizeAcc@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C6D84 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_constan.c)
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x1801EB5F8 (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 *     Microsoft::WRL::Details::Make__SnapAccessibilityHelpers::RaiseSnapHotkeyResultsUiaNotification_::_2_::DummyProvider_ @ 0x18053B470 (Microsoft--WRL--Details--Make__SnapAccessibilityHelpers--RaiseSnapHotkeyResultsUiaNotification_-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void anonymous_namespace_::RaiseUiaNotificationFromString()
{
  IRawElementProviderSimple *v0; // rbx
  HRESULT v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  BSTR activityId; // [rsp+48h] [rbp+10h] BYREF
  BSTR displayString; // [rsp+50h] [rbp+18h] BYREF
  IRawElementProviderSimple *provider; // [rsp+58h] [rbp+20h] BYREF

  if ( UiaClientsAreListening() )
  {
    wil::make_bstr(&displayString);
    wil::make_bstr(&activityId);
    Microsoft::WRL::Details::Make__SnapAccessibilityHelpers::RaiseSnapHotkeyResultsUiaNotification_::_2_::DummyProvider_(&provider);
    v0 = provider;
    v1 = UiaRaiseNotificationEvent(
           provider,
           NotificationKind_ActionCompleted,
           NotificationProcessing_ImportantMostRecent,
           displayString,
           activityId);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x44,
        (int)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
        (const char *)(unsigned int)v1);
    if ( v0 )
      ((void (__fastcall *)(IRawElementProviderSimple *))v0->lpVtbl->Release)(v0);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&activityId);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&displayString);
  }
}
