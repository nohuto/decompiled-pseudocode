/*
 * XREFs of ?MoveNext@?Q?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAA_NXZ @ 0x18068F650
 * Callers:
 *     ?MoveNext@?Q?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@WBA@E$AAA_NXZ @ 0x18068F6B0 (-MoveNext@-Q-$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C_ea_18068F6B0.c)
 *     ?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_MoveNext@?Q?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAAJPEA_N@Z @ 0x180692960 (-__abi_Windows_Foundation_Collections_-$IIterator@PE$AAUISwitchItemContextMenuMetad_ea_180692960.c)
 * Callees:
 *     ?ValidateBounds@Details@Collections@Platform@@YAX_N@Z @ 0x180690044 (-ValidateBounds@Details@Collections@Platform@@YAX_N@Z.c)
 *     ?ValidateCounter@Details@Collections@Platform@@YAXAEBV?$shared_ptr@I@std@@I@Z @ 0x1806900A4 (-ValidateCounter@Details@Collections@Platform@@YAXAEBV-$shared_ptr@I@std@@I@Z.c)
 */

bool __fastcall _MoveNext__Q__IIterator_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Details_2Platform__UE_AAA_NXZ(
        __int64 a1)
{
  unsigned __int64 v2; // rdx
  Platform::Collections::Details *v3; // rcx

  Platform::Collections::Details::ValidateCounter(a1 + 48, *(unsigned int *)(a1 + 80));
  v2 = (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) - **(_QWORD **)(a1 + 64)) >> 5;
  LOBYTE(v3) = *(unsigned int *)(a1 + 84) < v2;
  Platform::Collections::Details::ValidateBounds(v3, v2);
  return (unsigned int)++*(_DWORD *)(a1 + 84) < (unsigned __int64)((__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL)
                                                                           - **(_QWORD **)(a1 + 64)) >> 5);
}
