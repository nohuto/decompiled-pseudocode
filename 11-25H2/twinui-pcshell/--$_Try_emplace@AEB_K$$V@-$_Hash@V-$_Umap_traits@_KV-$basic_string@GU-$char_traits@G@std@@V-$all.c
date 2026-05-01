/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800643A4
 * Callers:
 *     _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x1800639B0 (_lambda_8ded4d93739c225b374c706a19b0781a_--operator()_std--pair_unsigned___int64_const__winrt--W.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1800F30A0 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180229910 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18055ADE4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Try_emplace<unsigned __int64 const &,>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  unsigned __int64 i; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  char *v12; // rbx
  __int64 v13; // rdx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v6);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD **)(v8 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = *(_QWORD **)(a1 + 8);
  if ( v9 == v10 )
    goto LABEL_12;
  while ( 1 )
  {
    if ( *a3 == v9[2] )
    {
      v10 = (_QWORD *)*v9;
      goto LABEL_6;
    }
    if ( v9 == *(_QWORD **)(v8 + 16 * (v6 & *(_QWORD *)(a1 + 48))) )
      break;
    v9 = (_QWORD *)v9[1];
  }
  v10 = v9;
  v9 = 0LL;
LABEL_6:
  if ( !v9 )
  {
LABEL_12:
    if ( *(_QWORD *)(a1 + 16) == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v23[0] = a1 + 8;
    v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v23[1] = v12;
    *((_QWORD *)v12 + 2) = *a3;
    *(_OWORD *)(v12 + 24) = 0LL;
    *((_QWORD *)v12 + 5) = 0LL;
    *((_QWORD *)v12 + 6) = 7LL;
    *((_WORD *)v12 + 12) = 0;
    v13 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v13 < 0 )
      v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
          + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
    else
      v14 = (float)(int)v13;
    v15 = *(_QWORD *)(a1 + 56);
    if ( v15 < 0 )
    {
      v21 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v15 >> 1);
      v16 = (float)(int)v21 + (float)(int)v21;
    }
    else
    {
      v16 = (float)(int)v15;
    }
    if ( (float)(v14 / v16) > *(float *)a1 )
    {
      v22 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Forced_rehash(
        a1,
        v22);
      v10 = *(_QWORD **)std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Find_last<unsigned __int64>(
                          a1,
                          v23,
                          v12 + 16,
                          v6);
    }
    v17 = (_QWORD *)v10[1];
    ++*(_QWORD *)(a1 + 16);
    *(_QWORD *)v12 = v10;
    *((_QWORD *)v12 + 1) = v17;
    *v17 = v12;
    v10[1] = v12;
    v18 = *(_QWORD *)(a1 + 24);
    v19 = 2 * (v6 & *(_QWORD *)(a1 + 48));
    v20 = *(_QWORD **)(v18 + 16 * (v6 & *(_QWORD *)(a1 + 48)));
    if ( v20 == *(_QWORD **)(a1 + 8) )
    {
      *(_QWORD *)(v18 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v12;
    }
    else
    {
      if ( v20 == v10 )
      {
        *(_QWORD *)(v18 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v12;
        goto LABEL_23;
      }
      if ( *(_QWORD **)(v18 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8) != v17 )
      {
LABEL_23:
        *(_QWORD *)a2 = v12;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
    }
    *(_QWORD *)(v18 + 8 * v19 + 8) = v12;
    goto LABEL_23;
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
