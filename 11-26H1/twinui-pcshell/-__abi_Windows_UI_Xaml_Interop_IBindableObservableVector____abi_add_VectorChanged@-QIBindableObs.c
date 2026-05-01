/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged@?QIBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJPE$AAVBindableVectorChangedEventHandler@2345@PEAVEventRegistrationToken@Foundation@5@@Z @ 0x1806BA9C0
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged@?QIBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WCA@E$AAAJPE$AAVBindableVectorChangedEventHandler@2345@PEAVEventRegistrationToken@Foundation@5@@Z @ 0x1806BAA60 (-__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged@-_ea_1806BAA60.c)
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x18009E9CC (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_add_VectorChanged__QIBindableObservableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__UE_AAAJPE_AAVBindableVectorChangedEventHandler_2345_PEAVEventRegistrationToken_Foundation_5__Z(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF

  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 168));
  memset_0(&v6, 0, sizeof(v6));
  try
  {
    *a3 = v6;
    *(_BYTE *)(a1 + 112) = 1;
    *a3 = Platform::Details::EventSourceAdd(a1 + 128, a1 + 152);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
