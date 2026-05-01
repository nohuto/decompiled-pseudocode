/*
 * XREFs of ?__abi_Release@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x18017D7C0
 * Callers:
 *     ?__abi_Release@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x1806A4500 (-__abi_Release@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInt.c)
 *     ?__abi_Release@RoutedEventHandler@Xaml@UI@Windows@@WBA@E$AAAKXZ @ 0x1806A4510 (-__abi_Release@RoutedEventHandler@Xaml@UI@Windows@@WBA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18017D914 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ??_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z @ 0x18017D9A8 (--_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x18017D9F8 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::__abi_Release(
        __int64 a1)
{
  unsigned int v2; // edx
  unsigned int v3; // ebx

  v3 = __abi_FTMWeakRefData::Decrement(a1 + 24);
  if ( !v3 )
  {
    Platform::Details::__abi_CapturePtr::`scalar deleting destructor'(
      (Platform::Details::__abi_CapturePtr *)(a1 + 40),
      v2);
    __abi_FTMWeakRefData::ReleaseControlBlock((__abi_FTMWeakRefData *)(a1 + 24));
  }
  return v3;
}
