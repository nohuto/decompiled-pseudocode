/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@2@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@@Z @ 0x1800D967C
 * Callers:
 *     ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18001E9B0 (-GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA-AUITransition@234@W4ShellTransitionTy.c)
 * Callees:
 *     ??$_Find_last@W4ShellTransitionType@Transitions@Udwm@winrt@@@?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@@1@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@_K@Z @ 0x180030480 (--$_Find_last@W4ShellTransitionType@Transitions@Udwm@winrt@@@-$_Hash@V-$_Umap_traits@W4ShellTran.c)
 *     ??$_Hash_representation@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@YA_KAEBW4ShellTransitionType@Transitions@Udwm@winrt@@@Z @ 0x18004AC88 (--$_Hash_representation@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@YA_KAEBW4ShellTransi.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransitionType,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransitionType,std::hash<enum winrt::Udwm::Transitions::ShellTransitionType>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransitionType>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>,0>>::find(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  _DWORD *v5; // r10
  __int64 v6; // r8
  _QWORD *v7; // r11
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = std::_Hash_representation<enum winrt::Udwm::Transitions::ShellTransitionType>(a3);
  v6 = std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransitionType,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransitionType,std::hash<enum winrt::Udwm::Transitions::ShellTransitionType>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransitionType>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>,0>>::_Find_last<enum winrt::Udwm::Transitions::ShellTransitionType>(
         a1,
         v9,
         v5,
         v4)[1];
  if ( !v6 )
    v6 = a1[1];
  *v7 = v6;
  return v7;
}
