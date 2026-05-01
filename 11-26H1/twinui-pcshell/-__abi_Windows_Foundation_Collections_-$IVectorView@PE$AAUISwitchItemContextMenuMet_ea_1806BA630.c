/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_GetMany@?Q?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x1806BA630
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x18009E9CC (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetMany@?Q?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAIIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x1806B52F0 (-GetMany@-Q-$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShe.c)
 *     ?Init@?$ArrayReference@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@AEAAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I_N@Z @ 0x1806B6320 (-Init@-$ArrayReference@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal______abi_GetMany__Q__IVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAJIIPEAPE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__PEAI_Z(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  _QWORD v10[4]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v11[112]; // [rsp+50h] [rbp-B8h] BYREF

  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 120));
  *a5 = 0;
  try
  {
    Platform::ArrayReference<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Init(
      v10,
      a4,
      a3,
      1);
    *a5 = _GetMany__Q__IVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAIIP_01E_AAV__WriteOnlyArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_6__Z(
            a1,
            a2,
            (__int64)v11);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
