/*
 * XREFs of ?RegisterForViewEvents@HolographicPositioner@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180405140
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$GitEventSourceSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1804022A8 (-Add@-$GitEventSourceSupportsAgile@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 */

__int64 __fastcall HolographicPositioner::RegisterForViewEvents(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v8; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v8 = 0LL;
  v4 = Windows::Internal::GitEventSourceSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Add(
         a1 + 168,
         a2,
         &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *a3 = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x452,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
