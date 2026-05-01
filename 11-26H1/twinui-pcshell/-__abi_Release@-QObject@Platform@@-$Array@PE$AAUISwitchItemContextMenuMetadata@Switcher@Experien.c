/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAKXZ @ 0x1806B97F0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@W7E$AAAKXZ @ 0x1806B9850 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1806B9850.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WBA@E$AAAKXZ @ 0x1806B9860 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1806B9860.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WBI@E$AAAKXZ @ 0x1806B9870 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1806B9870.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WCA@E$AAAKXZ @ 0x1806B9880 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1806B9880.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WCI@E$AAAKXZ @ 0x1806B9890 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1806B9890.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WDA@E$AAAKXZ @ 0x1806B98A0 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1806B98A0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WDI@E$AAAKXZ @ 0x1806B98B0 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1806B98B0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WEA@E$AAAKXZ @ 0x1806B98C0 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1806B98C0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WHA@E$AAAKXZ @ 0x1806B98D0 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1806B98D0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WHI@E$AAAKXZ @ 0x1806B98E0 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1806B98E0.c)
 * Callees:
 *     ?_Dispose_@IDisposable@Platform@@UE$AAAXXZ @ 0x18009F4D0 (-_Dispose_@IDisposable@Platform@@UE$AAAXXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18017D914 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x18017D9F8 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAKXZ(
        __int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx

  v1 = (Platform::Details::ControlBlock **)(a1 + 88);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 88));
  if ( !v3 )
  {
    v4 = (a1 + 24) & -(__int64)(a1 != 0);
    if ( v4 )
      Platform::IDisposable::_Dispose_(v4);
    __abi_FTMWeakRefData::ReleaseControlBlock(v1);
  }
  return v3;
}
