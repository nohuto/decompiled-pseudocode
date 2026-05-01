/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18061F3C0
 * Callers:
 *     ??$_Erase@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@AEAA_KAEBUhstring@winrt@@@Z @ 0x18061F160 (--$_Erase@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U12@V-$_Uhash_compare@Uhstrin.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18061F328 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@st.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18062D160 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U12@V-$_Uhash_compare@Uhstri.c)
 * Callees:
 *     ??1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1802CE1F0 (--1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
        __int64 a1,
        volatile signed __int32 **a2)
{
  winrt::Windows::UI::Xaml::Markup::XmlnsDefinition::~XmlnsDefinition(a2 + 2);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x20);
}
