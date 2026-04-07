/*
 * XREFs of ??$emplace@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@PEAX@1@@Z @ 0x1800DF184
 * Callers:
 *     ?RegisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@PEAXUDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z @ 0x1800E3F60 (-RegisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@PEAXUDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z @ 0x18007868C (--$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800863C0 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSo.c)
 *     ??$_Find_last@T_LARGE_INTEGER@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@PEAX@std@@@1@AEBT_LARGE_INTEGER@@_K@Z @ 0x1800869F0 (--$_Find_last@T_LARGE_INTEGER@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18009AE08 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E4C00 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T_LARGE_INTEGER@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::emplace<std::pair<_LARGE_INTEGER const,void *>>(
        float *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v6; // r15
  _OWORD *v7; // rbx
  __int64 v8; // rdx
  float v9; // xmm0_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  char *v18; // r9
  _QWORD *v20; // [rsp+20h] [rbp-38h] BYREF
  _OWORD *v21; // [rsp+28h] [rbp-30h]
  char *v22[2]; // [rsp+30h] [rbp-28h] BYREF

  v6 = std::_Hash_representation<HWND__ *>((__int64)a3);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Find_last<_LARGE_INTEGER>(
    a1,
    v22,
    (__int64)a3,
    v6);
  if ( !v22[1] )
  {
    if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error(0LL);
    v20 = a1 + 2;
    v7 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
    v21 = v7;
    v7[1] = *a3;
    v8 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v8 < 0 )
      v9 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
         + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
    else
      v9 = (float)(int)v8;
    v10 = *((_QWORD *)a1 + 7);
    if ( v10 < 0 )
    {
      v12 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v10 >> 1);
      v11 = (float)(int)v12 + (float)(int)v12;
    }
    else
    {
      v11 = (float)(int)v10;
    }
    if ( (float)(v9 / v11) > *a1 )
    {
      v13 = std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v8);
      std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Forced_rehash(
        a1,
        v13);
      *(_OWORD *)v22 = *(_OWORD *)std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::_Find_last<_LARGE_INTEGER>(
                                    a1,
                                    v22,
                                    (__int64)(v7 + 1),
                                    v6);
    }
    v21 = 0LL;
    v14 = v22[0];
    v15 = (_QWORD *)*((_QWORD *)v22[0] + 1);
    ++*((_QWORD *)a1 + 2);
    *(_QWORD *)v7 = v14;
    *((_QWORD *)v7 + 1) = v15;
    *v15 = v7;
    *((_QWORD *)v14 + 1) = v7;
    v16 = 2 * (v6 & *((_QWORD *)a1 + 6));
    v17 = *((_QWORD *)a1 + 3);
    v18 = *(char **)(v17 + 16 * (v6 & *((_QWORD *)a1 + 6)));
    if ( v18 == *((char **)a1 + 1) )
    {
      *(_QWORD *)(v17 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v7;
LABEL_17:
      *(_QWORD *)(v17 + 8 * v16 + 8) = v7;
      goto LABEL_18;
    }
    if ( v18 == v14 )
    {
      *(_QWORD *)(v17 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v7;
    }
    else if ( *(_QWORD **)(v17 + 16 * (v6 & *((_QWORD *)a1 + 6)) + 8) == v15 )
    {
      goto LABEL_17;
    }
LABEL_18:
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 1;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>((__int64)&v20);
    return a2;
  }
  *(char **)a2 = v22[1];
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
