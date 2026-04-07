/*
 * XREFs of ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1800304E4
 * Callers:
 *     ??$_Try_emplace@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@_N@1@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@@Z @ 0x1800302C4 (--$_Try_emplace@AEBW4ShellTransitionType@Transitions@Udwm@winrt@@$$V@-$_Hash@V-$_Umap_traits@W4S.c)
 *     ??$_Try_emplace@AEB_KAEAPEAVCBitmapSource@@@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEB_KAEAPEAVCBitmapSource@@@Z @ 0x18009A4EC (--$_Try_emplace@AEB_KAEAPEAVCBitmapSource@@@-$_Hash@V-$_Umap_traits@_KV-$com_ptr_t@VCBitmapSourc.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransitionType,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransitionType,std::hash<enum winrt::Udwm::Transitions::ShellTransitionType>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransitionType>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>,0>>::_Insert_new_node_before(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r11

  v4 = *(_QWORD **)(a3 + 8);
  ++a1[2];
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = a2 & a1[6];
  v6 = a1[3];
  v7 = 2 * v5;
  v8 = *(_QWORD *)(v6 + 8 * v7);
  if ( v8 == a1[1] )
  {
    *(_QWORD *)(v6 + 8 * v7) = a4;
LABEL_6:
    *(_QWORD *)(v6 + 8 * v7 + 8) = a4;
    return a4;
  }
  if ( v8 == a3 )
  {
    *(_QWORD *)(v6 + 8 * v7) = a4;
  }
  else if ( *(_QWORD **)(v6 + 8 * v7 + 8) == v4 )
  {
    goto LABEL_6;
  }
  return a4;
}
