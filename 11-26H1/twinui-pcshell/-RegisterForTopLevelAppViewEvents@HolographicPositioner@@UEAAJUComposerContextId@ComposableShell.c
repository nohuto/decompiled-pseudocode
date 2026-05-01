/*
 * XREFs of ?RegisterForTopLevelAppViewEvents@HolographicPositioner@@UEAAJUComposerContextId@ComposableShell@Internal@Windows@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1804050F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$GitEventSourceSupportsAgile@U?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18040220C (-Add@-$GitEventSourceSupportsAgile@U-$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEven.c)
 */

__int64 __fastcall HolographicPositioner::RegisterForTopLevelAppViewEvents(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct IUnknown **a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::Internal::GitEventSourceSupportsAgile<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Add(
         a1 + 272,
         a3,
         a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A3,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
