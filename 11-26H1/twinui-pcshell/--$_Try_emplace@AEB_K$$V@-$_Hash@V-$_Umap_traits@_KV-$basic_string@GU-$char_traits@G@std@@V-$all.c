/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18013ADE0
 * Callers:
 *     _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x18013ABF0 (_lambda_8ded4d93739c225b374c706a19b0781a_--operator()_std--pair_unsigned___int64_const__winrt--W.c)
 * Callees:
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18010BC30 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18016DF38 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x180285E40 (--R-$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z.c)
 *     ??$?0V?$tuple@AEB_K@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@AEAA@AEAV?$tuple@AEB_K@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1802C4088 (--$-0V-$tuple@AEB_K@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CB_KV-$basic_string@GU-$char_traits@G.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18057EDD8 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Try_emplace<unsigned __int64 const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // rbp
  __int64 *v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  __int64 **v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 *v24; // [rsp+70h] [rbp+8h] BYREF

  v6 = std::_Conditionally_enabled_hash<HWINEVENTHOOK__ *,1>::operator()(a3);
  v7 = a1[3];
  v8 = *(__int64 **)(v7 + 16 * (a1[6] & v6) + 8);
  v9 = (__int64 *)a1[1];
  if ( v8 == v9 )
  {
LABEL_6:
    if ( a1[2] == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v23[0] = a1 + 1;
    v11 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(56LL);
    v23[1] = v11;
    v24 = a3;
    ____0V__tuple_AEB_K_std__V__tuple___V_1__0A___Z_S___pair___CB_KV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std___std__AEAA_AEAV__tuple_AEB_K_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      v11 + 2,
      &v24);
    v12 = a1[2] + 1LL;
    if ( v12 < 0 )
      v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
          + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
    else
      v13 = (float)(int)v12;
    v14 = a1[7];
    if ( v14 < 0 )
    {
      v21 = a1[7] & 1LL | ((unsigned __int64)v14 >> 1);
      v15 = (float)(int)v21 + (float)(int)v21;
    }
    else
    {
      v15 = (float)(int)v14;
    }
    if ( (float)(v13 / v15) > *(float *)a1 )
    {
      v22 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Forced_rehash(
        a1,
        v22);
      v9 = *std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Find_last<unsigned __int64>(
              a1,
              v23,
              v11 + 2,
              v6);
    }
    v16 = (__int64 **)v9[1];
    ++a1[2];
    *v11 = (__int64)v9;
    v11[1] = (__int64)v16;
    *v16 = v11;
    v9[1] = (__int64)v11;
    v17 = 2 * (v6 & a1[6]);
    v18 = a1[3];
    v19 = *(__int64 **)(v18 + 16 * (v6 & a1[6]));
    if ( v19 == (__int64 *)a1[1] )
    {
      *(_QWORD *)(v18 + 16 * (v6 & a1[6])) = v11;
    }
    else
    {
      if ( v19 == v9 )
      {
        *(_QWORD *)(v18 + 16 * (v6 & a1[6])) = v11;
        goto LABEL_20;
      }
      if ( *(__int64 ***)(v18 + 16 * (v6 & a1[6]) + 8) != v16 )
      {
LABEL_20:
        *(_QWORD *)a2 = v11;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
    }
    *(_QWORD *)(v18 + 8 * v17 + 8) = v11;
    goto LABEL_20;
  }
  v10 = *(__int64 **)(v7 + 16 * (a1[6] & v6));
  while ( *(_QWORD *)a3 != v8[2] )
  {
    if ( v8 == v10 )
    {
      v9 = v8;
      goto LABEL_6;
    }
    v8 = (__int64 *)v8[1];
  }
  *(_QWORD *)a2 = v8;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
