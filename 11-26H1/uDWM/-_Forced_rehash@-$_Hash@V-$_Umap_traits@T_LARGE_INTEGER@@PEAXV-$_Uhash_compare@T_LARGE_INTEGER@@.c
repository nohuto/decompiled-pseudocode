/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E4C00
 * Callers:
 *     ??$emplace@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@PEAX@1@@Z @ 0x1800DF184 (--$emplace@U-$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAX.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180030030 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180030030.c)
 *     ??$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z @ 0x18007868C (--$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??8@YA_NAEBT_LARGE_INTEGER@@0@Z @ 0x180086A60 (--8@YA_NAEBT_LARGE_INTEGER@@0@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800DF6FC (--1_Clear_guard@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T_LARGE_INTEGER@@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Forced_rehash(
        const char *a1,
        unsigned __int64 a2)
{
  const char *v2; // r15
  char v3; // cl
  __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 i; // r10
  _QWORD *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // r9
  _QWORD *v14; // r8
  _QWORD *v15; // r14
  _QWORD *v16; // rsi
  __int64 v17; // r9
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v29; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v29) = 0;
  v2 = a1;
  _BitScanReverse64((unsigned __int64 *)&a1, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Dwm_Xlength_error(a1);
  v4 = *((_QWORD *)v2 + 1);
  LODWORD(v29) = 0;
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    (__int64)(v2 + 24),
    2 * v6,
    v4);
  *((_QWORD *)v2 + 7) = v6;
  *((_QWORD *)v2 + 6) = v6 - 1;
  for ( i = **((_QWORD **)v2 + 1); i != v4; i = v11 )
  {
    v8 = (_QWORD *)(i + 16);
    v9 = std::_Hash_representation<HWND__ *>(i + 16);
    v12 = *((_QWORD *)v2 + 3);
    v13 = 2 * (*((_QWORD *)v2 + 6) & v9);
    if ( *(_QWORD *)(v12 + 16 * (*((_QWORD *)v2 + 6) & v9)) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (*((_QWORD *)v2 + 6) & v9)) = v10;
LABEL_14:
      *(_QWORD *)(v12 + 8 * v13 + 8) = v10;
      continue;
    }
    if ( operator==(v8, (_QWORD *)(*(_QWORD *)(v12 + 16 * (*((_QWORD *)v2 + 6) & v9) + 8) + 16LL)) )
    {
      v24 = *v14;
      if ( v24 != v10 )
      {
        v25 = *(_QWORD **)(v10 + 8);
        *v25 = v11;
        v26 = *(_QWORD **)(v11 + 8);
        *v26 = v24;
        v27 = *(_QWORD **)(v24 + 8);
        *v27 = v10;
        *(_QWORD *)(v24 + 8) = v26;
        *(_QWORD *)(v11 + 8) = v25;
        *(_QWORD *)(v10 + 8) = v27;
      }
      goto LABEL_14;
    }
    v15 = v14;
    while ( 1 )
    {
      v16 = v14 + 1;
      if ( *(_QWORD **)(v12 + 8 * v13) == v15 )
        break;
      v15 = (_QWORD *)*v16;
      if ( operator==(v8, (_QWORD *)(*v16 + 16LL)) )
      {
        v17 = *v14;
        v18 = *(_QWORD **)(v10 + 8);
        *v18 = v11;
        v19 = *(_QWORD **)(v11 + 8);
        *v19 = v17;
        v20 = *(_QWORD **)(v17 + 8);
        *v20 = v10;
        *(_QWORD *)(v17 + 8) = v19;
        *(_QWORD *)(v11 + 8) = v18;
        *(_QWORD *)(v10 + 8) = v20;
        goto LABEL_15;
      }
    }
    v21 = *(_QWORD **)(v10 + 8);
    *v21 = v11;
    v22 = *(_QWORD **)(v11 + 8);
    *v22 = v14;
    v23 = (_QWORD *)*v16;
    *v23 = v10;
    *v16 = v22;
    *(_QWORD *)(v11 + 8) = v21;
    *(_QWORD *)(v10 + 8) = v23;
    *(_QWORD *)(v12 + 8 * v13) = v10;
LABEL_15:
    ;
  }
  v29 = 0LL;
  return std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Clear_guard::~_Clear_guard(&v29);
}
