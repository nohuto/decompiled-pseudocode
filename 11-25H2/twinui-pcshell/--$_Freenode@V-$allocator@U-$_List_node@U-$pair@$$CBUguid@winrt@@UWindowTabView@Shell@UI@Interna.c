/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800A3BA8
 * Callers:
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAAXXZ @ 0x18055C6E0 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Interna.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a2 + 32));
  std::_Deallocate<16,0>((void *)a2, (const struct std::nothrow_t *)0x28);
}
