/*
 * XREFs of ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x18002D790
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18001F850 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@.c)
 *     ??R?$_Conditionally_enabled_hash@K$00@std@@SA_KAEBK@Z @ 0x18002D920 (--R-$_Conditionally_enabled_hash@K$00@std@@SA_KAEBK@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180043228 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180044DEC (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180044F8C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18004513C (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::emplace<unsigned long &,std::unique_ptr<TSSession>>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  _DWORD *v9; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rcx
  float v14; // xmm1_4
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v7 = std::_Conditionally_enabled_hash<unsigned long,1>::operator()(a3);
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Find_last<unsigned long>(
    v8,
    v20,
    a3,
    v7);
  if ( v20[1] )
  {
    *(_QWORD *)a2 = v20[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( qword_180068A40 == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v19[0] = &qword_180068A38;
    v9 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
    v19[1] = v9;
    v9[4] = *(_DWORD *)a3;
    v10 = *a4;
    *a4 = 0LL;
    *((_QWORD *)v9 + 3) = v10;
    v11 = qword_180068A40 + 1;
    if ( qword_180068A40 + 1 < 0 )
      v12 = (float)(int)(v11 & 1 | (v11 >> 1)) + (float)(int)(v11 & 1 | (v11 >> 1));
    else
      v12 = (float)(int)v11;
    v13 = qword_180068A68;
    if ( qword_180068A68 < 0 )
    {
      v13 = qword_180068A68 & 1;
      v14 = (float)(int)(v13 | ((unsigned __int64)qword_180068A68 >> 1))
          + (float)(int)(v13 | ((unsigned __int64)qword_180068A68 >> 1));
    }
    else
    {
      v14 = (float)(int)qword_180068A68;
    }
    if ( (float)(v12 / v14) > *(float *)&dword_180068A30 )
    {
      v15 = std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Desired_grow_bucket_count(
              v13,
              v11);
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Forced_rehash(
        v16,
        v15);
      *(_OWORD *)v20 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Find_last<unsigned long>(
                                    v17,
                                    v20,
                                    v9 + 4,
                                    v7);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Insert_new_node_before(
                      v13,
                      v7,
                      v20[0],
                      v9,
                      v19[0],
                      0LL);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>(v19);
  }
  return a2;
}
