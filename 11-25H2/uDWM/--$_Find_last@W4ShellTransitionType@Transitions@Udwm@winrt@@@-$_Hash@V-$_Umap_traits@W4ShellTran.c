/*
 * XREFs of ??$_Find_last@W4ShellTransitionType@Transitions@Udwm@winrt@@@?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@@1@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@_K@Z @ 0x180058D50
 * Callers:
 *     ??$_Try_emplace@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@_N@1@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@@Z @ 0x18002AD28 (--$_Try_emplace@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@$$V@-$_Hash@V-$_Umap_traits@W4S.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransitionType,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransitionType,std::hash<enum winrt::Udwm::Transitions::ShellTransitionType>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransitionType>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>,0>>::_Find_last<enum winrt::Udwm::Transitions::ShellTransitionType>(
        _QWORD *a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v4; // r10
  _QWORD *v5; // r9
  __int64 v6; // rax
  _QWORD *result; // rax

  v4 = a1[1];
  v5 = (_QWORD *)(a1[3] + 16 * (a1[6] & a4));
  v6 = v5[1];
  if ( v6 == v4 )
  {
    *a2 = v4;
    result = a2;
    a2[1] = 0LL;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == *(_DWORD *)(v6 + 16) )
      {
        *a2 = *(_QWORD *)v6;
        a2[1] = v6;
        return a2;
      }
      if ( v6 == *v5 )
        break;
      v6 = *(_QWORD *)(v6 + 8);
    }
    *a2 = v6;
    a2[1] = 0LL;
    return a2;
  }
  return result;
}
