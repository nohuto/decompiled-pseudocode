/*
 * XREFs of ??1?$list@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@2@@std@@QEAA@XZ @ 0x180201A18
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor$8 @ 0x1806A7461 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--GetAllAppTabAllotm_ea_1806A7461.c)
 *     _std::_Hash_std::_Umap_traits_HWINEVENTHOOK_____GamingOverlayExperienceManager___std::_Uhash_compare_HWINEVENTHOOK_____std::hash_HWINEVENTHOOK______std::equal_to_HWINEVENTHOOK________std::allocator_std::pair_HWINEVENTHOOK_____const_GamingOverlayExperienceManager______0___::_Hash_std::_Umap_traits_HWINEVENTHOOK_____GamingOverlayExperienceManager___std::_Uhash_compare_HWINEVENTHOOK_____std::hash_HWINEVENTHOOK______std::equal_to_HWINEVENTHOOK________std::allocator_std::pair_HWINEVENTHOOK_____const_GamingOverlayExperienceManager______0____::_1_::dtor$0 @ 0x1806AC7E5 (_std--_Hash_std--_Umap_traits_HWINEVENTHOOK_____GamingOverlayExperienceManager___std--_Uhash_com.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::WindowsTracker_::_1_::dtor$17 @ 0x1806DBB3A (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--WindowsTracker_--_1_--dtor$17.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180201A44 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExper.c)
 */

void __fastcall std::list<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>::~list<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>(
        void **a1)
{
  std::_List_node<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>,void *>>>(
    a1,
    *a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
