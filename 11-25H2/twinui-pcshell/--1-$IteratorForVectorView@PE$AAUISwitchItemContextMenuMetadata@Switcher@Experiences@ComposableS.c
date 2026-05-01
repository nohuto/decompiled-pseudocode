/*
 * XREFs of ??1?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@AE$AAA@XZ @ 0x18068B9A4
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@UE$AAAKXZ @ 0x1806923F0 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@S.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Platform::Collections::Details::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::~IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 72);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = *(std::_Ref_count_base **)(a1 + 56);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
