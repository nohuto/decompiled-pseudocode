/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A2288
 * Callers:
 *     ??$_Erase@_K@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x1802A21E0 (--$_Erase@_K@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A96AC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUWindowData@implementation@Shell@Inte.c)
 * Callees:
 *     ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800A3448 (--1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  winrt::Windows::Internal::Shell::implementation::WindowData::~WindowData((winrt::Windows::Internal::Shell::implementation::WindowData *)(a2 + 24));
  std::_Deallocate<16,0>((void *)a2, (const struct std::nothrow_t *)0xF0);
}
