/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@std@@@std@@@1@AEBQEAUHWND__@@@Z @ 0x180082918
 * Callers:
 *     ?OnWindowMoveSizeChanged@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x1800709BC (-OnWindowMoveSizeChanged@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z.c)
 *     ?EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x1800DBE10 (-EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__.c)
 * Callees:
 *     ??$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z @ 0x18008297C (--$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::find<void>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // r10
  _QWORD *v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *result; // rax

  v4 = std::_Hash_representation<HWND__ *>(a3);
  v7 = v5[3];
  v8 = 2 * (v5[6] & v4);
  v9 = *(_QWORD *)(v7 + 8 * v8 + 8);
  if ( v9 == v5[1] )
  {
LABEL_6:
    v9 = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 8 * v8);
    while ( *a3 != *(_QWORD *)(v9 + 16) )
    {
      if ( v9 == v10 )
        goto LABEL_6;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  result = v6;
  if ( !v9 )
    v9 = v5[1];
  *v6 = v9;
  return result;
}
