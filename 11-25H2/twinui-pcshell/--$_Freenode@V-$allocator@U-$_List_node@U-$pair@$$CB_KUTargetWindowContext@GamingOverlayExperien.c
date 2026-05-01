/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18033E080
 * Callers:
 *     ??$_Erase@_K@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x18033DDBC (--$_Erase@_K@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V-$_.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18033E04C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUTargetWindowContext@GamingOverlayExp.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180351B34 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperien.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x18033D5B0 (--$_Destroy_range@V-$allocator@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@s.c)
 */

void __fastcall std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx

  v2 = a2[3];
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(v2, a2[4]);
    std::_Deallocate<16,0>((void *)a2[3], (const struct std::nothrow_t *)((a2[5] - a2[3]) & 0xFFFFFFFFFFFFFFF8uLL));
    a2[3] = 0LL;
    a2[4] = 0LL;
    a2[5] = 0LL;
  }
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x38);
}
