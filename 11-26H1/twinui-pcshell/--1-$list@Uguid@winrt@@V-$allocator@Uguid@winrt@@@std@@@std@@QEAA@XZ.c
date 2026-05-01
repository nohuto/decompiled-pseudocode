/*
 * XREFs of ??1?$list@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA@XZ @ 0x1801D4D90
 * Callers:
 *     _std::unordered_set_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid__std::allocator_winrt::guid___::unordered_set_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid__std::allocator_winrt::guid____::_1_::dtor$1 @ 0x1806CD806 (_std--unordered_set_winrt--guid_std--hash_winrt--guid__std--equal_to_winrt--guid__std--allocator.c)
 *     _std::_Hash_std::_Umap_traits_HWINEVENTHOOK_____GamingOverlayExperienceManager___std::_Uhash_compare_HWINEVENTHOOK_____std::hash_HWINEVENTHOOK______std::equal_to_HWINEVENTHOOK________std::allocator_std::pair_HWINEVENTHOOK_____const_GamingOverlayExperienceManager______0___::_Hash_std::_Umap_traits_HWINEVENTHOOK_____GamingOverlayExperienceManager___std::_Uhash_compare_HWINEVENTHOOK_____std::hash_HWINEVENTHOOK______std::equal_to_HWINEVENTHOOK________std::allocator_std::pair_HWINEVENTHOOK_____const_GamingOverlayExperienceManager______0____::_1_::dtor$0 @ 0x1806D5624 (_std--_Hash_std--_Umap_traits_HWINEVENTHOOK_____GamingOverlayExperienceManager___std--_Uhash_com.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::WindowsTracker_::_1_::dtor$17 @ 0x1807047DB (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--WindowsTracker_--_1_--dtor$17.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801D4DBC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExper.c)
 */

__int64 __fastcall std::list<winrt::guid>::~list<winrt::guid>(_QWORD *a1)
{
  std::_List_node<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>,void *>>>(
    a1,
    *a1);
  return std::_Deallocate<16>(*a1, 32LL);
}
