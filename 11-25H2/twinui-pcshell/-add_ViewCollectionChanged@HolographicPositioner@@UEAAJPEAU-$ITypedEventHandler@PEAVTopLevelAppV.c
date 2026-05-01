/*
 * XREFs of ?add_ViewCollectionChanged@HolographicPositioner@@UEAAJPEAU?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180221EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$GitEventSourceSupportsAgile@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1802D0C04 (-Add@-$GitEventSourceSupportsAgile@U-$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Int.c)
 */

__int64 __fastcall HolographicPositioner::add_ViewCollectionChanged(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = Windows::Internal::GitEventSourceSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Add(a1 + 208);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x495,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
