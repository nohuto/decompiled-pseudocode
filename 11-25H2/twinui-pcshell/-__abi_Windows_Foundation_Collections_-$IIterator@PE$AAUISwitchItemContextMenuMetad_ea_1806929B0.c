/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_get_Current@?Q?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAAJPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1806929B0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x1801D1778 (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IIterator_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal______abi_get_Current__Q__IIterator_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Details_2Platform__UE_AAAJPEAPE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Z(
        char *a1,
        _QWORD *a2)
{
  __abi_winrt_throw_on_disposed(a1[104]);
  try
  {
    *a2 = 0LL;
    *a2 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a1 + 80LL))(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
