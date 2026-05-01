/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_remove_VectorChanged@?QIBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJVEventRegistrationToken@Foundation@5@@Z @ 0x180693570
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_remove_VectorChanged@?QIBindableObservableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WCA@E$AAAJVEventRegistrationToken@Foundation@5@@Z @ 0x1806935D0 (-__abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_remove_VectorChange_ea_1806935D0.c)
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x1801D1778 (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableObservableVector____abi_remove_VectorChanged__QIBindableObservableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__UE_AAAJVEventRegistrationToken_Foundation_5__Z(
        __int64 a1,
        struct Platform::Details::EventLock *a2)
{
  struct EventRegistrationToken v4; // r9

  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 168));
  try
  {
    Platform::Details::EventSourceRemove((Platform::Details *)(a1 + 128), (void **)(a1 + 152), a2, v4);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
