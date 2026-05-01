/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAKXZ @ 0x180692630
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@W7E$AAAKXZ @ 0x180692690 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMeta_ea_180692690.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WBA@E$AAAKXZ @ 0x1806926A0 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMeta_ea_1806926A0.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WBI@E$AAAKXZ @ 0x1806926B0 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMeta_ea_1806926B0.c)
 *     ?__abi_Release@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WCA@E$AAAKXZ @ 0x1806926C0 (-__abi_Release@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMeta_ea_1806926C0.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180189EE4 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x180189FC8 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
 *     ?_Dispose_@IDisposable@Platform@@UE$AAAXXZ @ 0x18021E910 (-_Dispose_@IDisposable@Platform@@UE$AAAXXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____WriteOnlyArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAKXZ(
        __int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx

  v1 = (Platform::Details::ControlBlock **)(a1 + 56);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 56));
  if ( !v3 )
  {
    v4 = (a1 + 8) & -(__int64)(a1 != 0);
    if ( v4 )
      Platform::IDisposable::_Dispose_(v4);
    __abi_FTMWeakRefData::ReleaseControlBlock(v1);
  }
  return v3;
}
