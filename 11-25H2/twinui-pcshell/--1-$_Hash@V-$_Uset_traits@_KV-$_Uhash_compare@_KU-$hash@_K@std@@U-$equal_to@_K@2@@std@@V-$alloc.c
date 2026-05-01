/*
 * XREFs of ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x180067A68
 * Callers:
 *     ??1KBViewInfo@@QEAA@XZ @ 0x180067ABC (--1KBViewInfo@@QEAA@XZ.c)
 *     ?GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@@std@@XZ @ 0x1802A80EC (-GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA-.c)
 *     ??1?$unordered_map@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@U?$hash@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@@std@@@std@@@std@@QEAA@XZ @ 0x1802D1768 (--1-$unordered_map@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@Windo.c)
 *     ??1?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@QEAA@XZ @ 0x18062419C (--1-$pair@$$CBUhstring@winrt@@V-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@I@2@.c)
 *     ??1EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180675DA0 (--1EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UEAA.c)
 *     _std::unordered_map_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::hash_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::equal_to_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_const__enum_winrt::WindowsUdk::UI::Shell::ShellView_____::unordered_map_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::hash_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::equal_to_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_const__enum_winrt::WindowsUdk::UI::Shell::ShellView______::_1_::dtor$0 @ 0x1806DD6F0 (_std--unordered_map_enum_winrt--Windows--Internal--Shell--Animations--EdgeLocation__ea_1806DD6F0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@_KPEAX@std@@@std@@@?$_List_node@_KPEAX@std@@SAXAEAV?$allocator@U?$_List_node@_KPEAX@std@@@1@PEAU01@@Z @ 0x18020FAE4 (--$_Free_non_head@V-$allocator@U-$_List_node@_KPEAX@std@@@std@@@-$_List_node@_KPEAX@std@@SAXAEAV.c)
 */

void __fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::_List_node<unsigned __int64,void *>::_Free_non_head<std::allocator<std::_List_node<unsigned __int64,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x18);
}
