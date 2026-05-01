/*
 * XREFs of ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x180189FC8
 * Callers:
 *     ?__abi_Release@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x180189D90 (-__abi_Release@-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ @ 0x180189DE0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x180189E40 (-__abi_Release@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ @ 0x180189E90 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@VSize@Foundation@Windows@@@Details@2@UE$AAAKXZ @ 0x180678C10 (-__abi_Release@-QObject@Platform@@-$CustomBox@VSize@Foundation@Windows@@@Details@2@UE$AAAKXZ.c)
 *     ?__abi_dtor@__abi_FTMWeakRefData@@QEAAXXZ @ 0x180678CA0 (-__abi_dtor@__abi_FTMWeakRefData@@QEAAXXZ.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAKXZ @ 0x1806922F0 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experien.c)
 *     ?__abi_Release@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@UE$AAAKXZ @ 0x1806923F0 (-__abi_Release@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@S.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x180692490 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 *     ?__abi_Release@?QObject@Platform@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x180692570 (-__abi_Release@-QObject@Platform@@-$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Exp.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAKXZ @ 0x180692630 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ @ 0x1806926D0 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@UE$AAAKXZ @ 0x180698290 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ @ 0x1806998A0 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x180699DF0 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall __abi_FTMWeakRefData::ReleaseControlBlock(Platform::Details::ControlBlock **this)
{
  Platform::Details::ControlBlock *v1; // rbx

  v1 = *this;
  Platform::Details::ControlBlock::ReleaseTarget(*this);
  Platform::Details::ControlBlock::__abi_Release(v1);
}
