/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800DAB68
 * Callers:
 *     ??$emplace@PEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800D9748 (--$emplace@PEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$_Hash@V-$_Umap_traits@PEA.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@2@@Z @ 0x180062BD0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z @ 0x18008297C (--$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x1800D9EA8 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V-.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>::_Forced_rehash(
        const char *a1,
        unsigned __int64 a2)
{
  const char *v2; // rsi
  char v3; // cl
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 i; // r10
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 **v19; // rdi
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 **v25; // rcx
  __int64 *v26; // rax
  __int64 v28; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v28) = 0;
  v2 = a1;
  _BitScanReverse64((unsigned __int64 *)&a1, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Dwm_Xlength_error(a1);
  LODWORD(v28) = 0;
  v4 = *((_QWORD *)v2 + 1);
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>>>>>::_Assign_grow(
    (__int64 *)v2 + 3,
    2 * v6,
    v4);
  *((_QWORD *)v2 + 7) = v6;
  *((_QWORD *)v2 + 6) = v6 - 1;
  for ( i = **((_QWORD **)v2 + 1); i != v4; i = v10 )
  {
    v8 = std::_Hash_representation<HWND__ *>(i + 16);
    v11 = *((_QWORD *)v2 + 3);
    v12 = 2 * (*((_QWORD *)v2 + 6) & v8);
    if ( *(_QWORD *)(v11 + 16 * (*((_QWORD *)v2 + 6) & v8)) == v4 )
    {
      *(_QWORD *)(v11 + 16 * (*((_QWORD *)v2 + 6) & v8)) = v9;
LABEL_7:
      *(_QWORD *)(v11 + 8 * v12 + 8) = v9;
      continue;
    }
    v13 = *(__int64 **)(v11 + 16 * (*((_QWORD *)v2 + 6) & v8) + 8);
    v14 = *(_QWORD *)(v9 + 16);
    if ( v14 == v13[2] )
    {
      v15 = *v13;
      if ( *v13 != v9 )
      {
        v16 = *(_QWORD **)(v9 + 8);
        *v16 = v10;
        v17 = *(_QWORD **)(v10 + 8);
        *v17 = v15;
        v18 = *(_QWORD **)(v15 + 8);
        *v18 = v9;
        *(_QWORD *)(v15 + 8) = v17;
        *(_QWORD *)(v10 + 8) = v16;
        *(_QWORD *)(v9 + 8) = v18;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v19 = (__int64 **)(v13 + 1);
      if ( *(__int64 **)(v11 + 8 * v12) == v13 )
        break;
      v13 = *v19;
      if ( v14 == (*v19)[2] )
      {
        v20 = *v13;
        v21 = *(_QWORD **)(v9 + 8);
        *v21 = v10;
        v22 = *(_QWORD **)(v10 + 8);
        *v22 = v20;
        v23 = *(_QWORD **)(v20 + 8);
        *v23 = v9;
        *(_QWORD *)(v20 + 8) = v22;
        *(_QWORD *)(v10 + 8) = v21;
        *(_QWORD *)(v9 + 8) = v23;
        goto LABEL_15;
      }
    }
    v24 = *(_QWORD **)(v9 + 8);
    *v24 = v10;
    v25 = *(__int64 ***)(v10 + 8);
    *v25 = v13;
    v26 = *v19;
    *v26 = v9;
    *v19 = (__int64 *)v25;
    *(_QWORD *)(v10 + 8) = v24;
    *(_QWORD *)(v9 + 8) = v26;
    *(_QWORD *)(v11 + 8 * v12) = v9;
LABEL_15:
    ;
  }
  v28 = 0LL;
  return std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>::_Clear_guard::~_Clear_guard(&v28);
}
