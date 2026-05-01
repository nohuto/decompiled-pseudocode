/*
 * XREFs of ?First@?Q?$IIterable@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@234@XZ @ 0x18068D400
 * Callers:
 *     ?BindableFirst@?QIBindableIterable@Interop@Xaml@UI@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAPE$AAUIBindableIterator@2345@XZ @ 0x18068C1E0 (-BindableFirst@-QIBindableIterable@Interop@Xaml@UI@Windows@@-$VectorView@PE$AAUISwitchItemContex.c)
 *     ?First@?Q?$IIterable@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAPE$AAU?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@234@XZ @ 0x18068D480 (-First@-Q-$IIterable@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Comp_ea_18068D480.c)
 *     ?__abi_Windows_Foundation_Collections_?$IIterable@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_First@?Q?$IIterable@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJPEAPE$AAU?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@234@@Z @ 0x180692870 (-__abi_Windows_Foundation_Collections_-$IIterable@PE$AAUISwitchItemContextMenuMetad_ea_180692870.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??0?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@QE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@5@@Z @ 0x18068B2AC (--0-$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableS.c)
 *     ?ValidateCounter@Details@Collections@Platform@@YAXAEBV?$shared_ptr@I@std@@I@Z @ 0x1806900A4 (-ValidateCounter@Details@Collections@Platform@@YAXAEBV-$shared_ptr@I@std@@I@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _First__Q__IIterable_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAPE_AAU__IIterator_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___234_XZ(
        __int64 a1)
{
  void *v2; // rax
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h]

  Platform::Collections::Details::ValidateCounter(a1 + 64, *(unsigned int *)(a1 + 96));
  v2 = Platform::Details::Heap::Allocate(0x58uLL, 0x70uLL);
  v5 = Platform::Collections::Details::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::IteratorForVectorView<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>(
         (__int64)v2,
         (int **)(a1 + 64),
         (_QWORD *)(a1 + 80));
  v3 = __abi_winrt_ptr_ctor(v5);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v5);
  return v3;
}
