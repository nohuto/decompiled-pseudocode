/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@std@@@std@@@2@AEBQEAUHWND__@@@Z @ 0x1800D9628
 * Callers:
 *     ?OnWindowMoveSizeChanged@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x180018050 (-OnWindowMoveSizeChanged@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z.c)
 *     ?EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x1800D8BA0 (-EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__.c)
 * Callees:
 *     ??$_Find_last@PEAUHWND__@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@_K@Z @ 0x180068294 (--$_Find_last@PEAUHWND__@@@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@win.c)
 *     ??$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z @ 0x18007868C (--$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::find(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r10
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = std::_Hash_representation<HWND__ *>(a3);
  v7 = std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::_Find_last<HWND__ *>(
         a1,
         v9,
         v6,
         v5)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
