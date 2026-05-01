/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@3@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1806B56D4
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@3@WDI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1806B5720 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$Array@PE$AAUISwitchIte_ea_1806B5720.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@3@WHA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1806B5730 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$Array@PE$AAUISwitchIte_ea_1806B5730.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@2Collections@3@WCA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1806B5740 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$IteratorForVectorView@PE$AAUISwitch.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@3@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1806B8814 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1806B8814.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@2Collections@3@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1806B8890 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1806B8890.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform____Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_3_UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h]

  v3 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 88));
  v1 = __abi_winrt_ptr_ctor(v3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  return v1;
}
