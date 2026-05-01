/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_IndexOf@?Q?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAIPEA_N@Z @ 0x1806931D0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x1801D1778 (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     ?IndexOf@?Q?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAA_NPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18068EE90 (-IndexOf@-Q-$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShe.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal______abi_IndexOf__Q__IVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAJPE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__PEAIPEA_N_Z(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        bool *a4)
{
  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 120));
  *a4 = 0;
  if ( a3 )
    *a3 = 0;
  try
  {
    *a4 = _IndexOf__Q__IVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAA_NPE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__PEAI_Z(
            a1,
            a2,
            a3);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
