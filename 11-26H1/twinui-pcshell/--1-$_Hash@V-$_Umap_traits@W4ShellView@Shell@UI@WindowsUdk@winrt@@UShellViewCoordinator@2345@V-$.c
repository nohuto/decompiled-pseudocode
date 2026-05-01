/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V?$_Uhash_compare@W4ShellView@Shell@UI@WindowsUdk@winrt@@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@$0A@@std@@@std@@QEAA@XZ @ 0x1800B76CC
 * Callers:
 *     ??1TouchEdgeGestureManager@@UEAA@XZ @ 0x1800B75AC (--1TouchEdgeGestureManager@@UEAA@XZ.c)
 *     ?Create@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@AEBUShellAnimationCoordinator@34567@@Z @ 0x18027C84C (-Create@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@.c)
 *     ??1?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAA@XZ @ 0x1802C63A0 (--1-$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U-$hash@W4S.c)
 *     ??1EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18069CB9C (--1EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@UEAA.c)
 *     _TouchEdgeGestureManager::TouchEdgeGestureManager_::_1_::dtor$48 @ 0x1806CFBC2 (_TouchEdgeGestureManager--TouchEdgeGestureManager_--_1_--dtor$48.c)
 *     _std::unordered_map_enum_winrt::WindowsUdk::UI::Shell::ShellView_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_std::hash_enum_winrt::WindowsUdk::UI::Shell::ShellView__std::equal_to_enum_winrt::WindowsUdk::UI::Shell::ShellView__std::allocator_std::pair_enum_winrt::WindowsUdk::UI::Shell::ShellView_const__winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_____::unordered_map_enum_winrt::WindowsUdk::UI::Shell::ShellView_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_std::hash_enum_winrt::WindowsUdk::UI::Shell::ShellView__std::equal_to_enum_winrt::WindowsUdk::UI::Shell::ShellView__std::allocator_std::pair_enum_winrt::WindowsUdk::UI::Shell::ShellView_const__winrt::WindowsUdk::UI::Shell::ShellViewCoordinator______::_1_::dtor$0 @ 0x1806CFBD4 (_std--unordered_map_enum_winrt--WindowsUdk--UI--Shell--ShellView_winrt--WindowsUdk--UI--Shell--S.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DAF74 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,std::_Uhash_compare<enum winrt::WindowsUdk::UI::Shell::ShellView,std::hash<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::equal_to<enum winrt::WindowsUdk::UI::Shell::ShellView>>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>,0>>::~_Hash<std::_Umap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,std::_Uhash_compare<enum winrt::WindowsUdk::UI::Shell::ShellView,std::hash<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::equal_to<enum winrt::WindowsUdk::UI::Shell::ShellView>>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>,0>>(
        _QWORD *a1)
{
  __int64 v2; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (a1[5] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>(
    v2,
    a1[1]);
  return std::_Deallocate<16>(a1[1], 32LL);
}
