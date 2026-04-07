/*
 * XREFs of ??1?$list@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x1800D9DE0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::UserResizeVisual_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::UserResizeVisual____0___::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::UserResizeVisual_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::UserResizeVisual____0____::_1_::dtor$0 @ 0x1800EC03F (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--UserResizeVisual_std--_Uhash_co.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D94A8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UUserResizeVisual@Transitions@U.c)
 */

void __fastcall std::list<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>::~list<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>(
        __int64 *a1)
{
  std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)0x20);
}
