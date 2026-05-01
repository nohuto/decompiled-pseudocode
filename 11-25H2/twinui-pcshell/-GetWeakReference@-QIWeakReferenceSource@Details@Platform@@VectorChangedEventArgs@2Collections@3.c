/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18068E3C0
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3@WBI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x18068E410 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2_ea_18068E410.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180691520 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180691520.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform__VectorChangedEventArgs_2Collections_3_UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h]

  v3 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 48));
  v1 = __abi_winrt_ptr_ctor(v3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  return v1;
}
