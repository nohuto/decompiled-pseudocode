/*
 * XREFs of ??0?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@QEAA@AEBV01@@Z @ 0x18004F734
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18004AF44 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAAXXZ @ 0x180065B78 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::unordered_set<unsigned long>::unordered_set<unsigned long>(_QWORD *a1, __int64 a2)
{
  unsigned __int64 *v4; // r14
  _QWORD *v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 **v9; // rbx
  __int64 *i; // rdi
  _DWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rcx
  float v21; // xmm0_4
  __int64 v22; // rcx
  float v23; // xmm1_4
  __int64 *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // r14
  unsigned __int64 *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 *v33; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = a1 + 1;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v5 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(24LL);
  *v5 = v5;
  v5[1] = v5;
  *v4 = (unsigned __int64)v5;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = *(_QWORD *)(a2 + 48);
  a1[7] = *(_QWORD *)(a2 + 56);
  v6 = (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3;
  v7 = *v4;
  if ( (__int64)a1[4] >> 3 < v6 )
  {
    if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v29 = v6;
    v30 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits>(8 * v6);
    v31 = a1[3];
    v32 = (a1[5] - v31) >> 3;
    if ( v32 )
      std::_Deallocate<16>(v31, 8 * v32);
    a1[3] = v30;
    v33 = &v30[v29];
    a1[4] = &v30[v29];
    a1[5] = &v30[v29];
    while ( v30 != v33 )
      *v30++ = v7;
    v4 = a1 + 1;
  }
  else
  {
    v8 = (unsigned __int64)(a1[4] + 7LL) >> 3;
    if ( v8 )
      memset64(0LL, v7, v8);
  }
  v9 = *(__int64 ***)(a2 + 8);
  for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
  {
    v11 = i + 2;
    v12 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)i + 16);
    v13 = v12;
    v14 = a1[3];
    v15 = *(_QWORD *)(v14 + 16 * (v12 & a1[6]) + 8);
    v16 = *v4;
    if ( v15 == *v4 )
    {
LABEL_11:
      if ( a1[2] == 0xAAAAAAAAAAAAAAALL )
        std::_Xlength_error("unordered_map/set too long");
      v19 = std::_Allocate<16,std::_Default_allocate_traits>(24LL);
      *(_DWORD *)(v19 + 16) = *v11;
      v20 = a1[2] + 1LL;
      if ( v20 < 0 )
        v21 = (float)(v20 & 1 | (unsigned int)((unsigned __int64)v20 >> 1))
            + (float)(v20 & 1 | (unsigned int)((unsigned __int64)v20 >> 1));
      else
        v21 = (float)(int)v20;
      v22 = a1[7];
      if ( v22 < 0 )
      {
        v34 = a1[7] & 1LL | ((unsigned __int64)v22 >> 1);
        v23 = (float)(int)v34 + (float)(int)v34;
      }
      else
      {
        v23 = (float)(int)v22;
      }
      if ( (float)(v21 / v23) > *(float *)a1 )
      {
        std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Rehash_for_1(
          a1,
          v18);
        v16 = *std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                 a1,
                 &v35,
                 (_DWORD *)(v19 + 16),
                 v13);
      }
      v24 = *(__int64 **)(v16 + 8);
      ++a1[2];
      *(_QWORD *)v19 = v16;
      *(_QWORD *)(v19 + 8) = v24;
      *v24 = v19;
      *(_QWORD *)(v16 + 8) = v19;
      v25 = 2 * (v13 & a1[6]);
      v26 = a1[3];
      v27 = *(_QWORD *)(v26 + 16 * (v13 & a1[6]));
      if ( v27 == a1[1] )
      {
        *(_QWORD *)(v26 + 16 * (v13 & a1[6])) = v19;
        goto LABEL_21;
      }
      if ( v27 == v16 )
      {
        *(_QWORD *)(v26 + 16 * (v13 & a1[6])) = v19;
      }
      else if ( *(__int64 **)(v26 + 16 * (v13 & a1[6]) + 8) == v24 )
      {
LABEL_21:
        *(_QWORD *)(v26 + 8 * v25 + 8) = v19;
      }
      v4 = a1 + 1;
      continue;
    }
    v17 = *(_QWORD *)(v14 + 16 * (v12 & a1[6]));
    while ( *v11 != *(_DWORD *)(v15 + 16) )
    {
      if ( v15 == v17 )
      {
        v16 = v15;
        goto LABEL_11;
      }
      v15 = *(_QWORD *)(v15 + 8);
    }
  }
  return a1;
}
