/*
 * XREFs of ?__abi_Release@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x18017D870
 * Callers:
 *     ?__abi_Release@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x1806A4520 (-__abi_Release@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7.c)
 *     ?__abi_Release@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x1806A4530 (-__abi_Release@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WB.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18017D914 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ??_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z @ 0x18017D9A8 (--_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x18017D9F8 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::__abi_Release(
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
