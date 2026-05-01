/*
 * XREFs of ?__abi_Platform_?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_get_Value@?Q?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJPEAIPEAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1806B8780
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x18009E9CC (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     ?CopyToOrDetach@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x1806B3C10 (-CopyToOrDetach@-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ___abi_Platform___IBoxArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal______abi_get_Value__Q__IBoxArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Platform____Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAJPEAIPEAPEAPE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Z(
        char *a1,
        _DWORD *a2,
        void **a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi

  __abi_winrt_throw_on_disposed(a1[128]);
  *a2 = 0;
  *a3 = 0LL;
  try
  {
    v6 = (*(__int64 (**)(void))(*(_QWORD *)a1 + 56LL))();
    v7 = v6;
    if ( v6 )
    {
      Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::CopyToOrDetach(
        v6,
        a3,
        a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a3 = 0LL;
      *a2 = 0;
    }
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
