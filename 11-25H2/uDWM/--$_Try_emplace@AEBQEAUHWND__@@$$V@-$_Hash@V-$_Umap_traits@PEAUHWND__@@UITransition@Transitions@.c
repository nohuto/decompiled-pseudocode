/*
 * XREFs of ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1800DB9DC
 * Callers:
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18008EED4 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 * Callees:
 *     ??$_Find_last@PEAUHWND__@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@_K@Z @ 0x1800822EC (--$_Find_last@PEAUHWND__@@@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@win.c)
 *     ??$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z @ 0x18008297C (--$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x180083E30 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180099798 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellTransitionType@Transit.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800DAAC4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Ud.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800DC478 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V-$_Uha.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::_Try_emplace<HWND__ * const &,>(
        float *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rbp
  const char *v7; // rcx
  _QWORD *v8; // r14
  __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rax
  __int64 v14; // rax
  struct std::nothrow_t *v16[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-20h]

  v6 = std::_Hash_representation<HWND__ *>((__int64)a3);
  std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::_Find_last<HWND__ *>(
    a1,
    v16,
    a3,
    v6);
  if ( v16[1] )
  {
    *(struct std::nothrow_t **)a2 = v16[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error(v7);
    v17 = a1 + 2;
    v8 = operator new[](0x20uLL, 0LL);
    v18 = v8;
    v8[2] = *a3;
    v8[3] = 0LL;
    v9 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v9 < 0 )
      v10 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
          + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
    else
      v10 = (float)(int)v9;
    v11 = *((_QWORD *)a1 + 7);
    if ( v11 < 0 )
    {
      v13 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v11 >> 1);
      v12 = (float)(int)v13 + (float)(int)v13;
    }
    else
    {
      v12 = (float)(int)v11;
    }
    if ( (float)(v10 / v12) > *a1 )
    {
      v14 = std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v9);
      std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::_Forced_rehash(
        a1,
        v14);
      *(_OWORD *)v16 = *(_OWORD *)std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::_Find_last<HWND__ *>(
                                    a1,
                                    v16,
                                    v8 + 2,
                                    v6);
    }
    v18 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>::_Insert_new_node_before(
                      a1,
                      v6,
                      (__int64)v16[0],
                      v8);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>,void *>>>((__int64)&v17);
  }
  return a2;
}
