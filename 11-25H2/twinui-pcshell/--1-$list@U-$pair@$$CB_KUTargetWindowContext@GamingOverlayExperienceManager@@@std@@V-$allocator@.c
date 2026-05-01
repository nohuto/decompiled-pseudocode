/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@2@@std@@QEAA@XZ @ 0x18034128C
 * Callers:
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$78 @ 0x1806BCB98 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$78.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18033E04C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUTargetWindowContext@GamingOverlayExp.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>::~list<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)0x38);
}
