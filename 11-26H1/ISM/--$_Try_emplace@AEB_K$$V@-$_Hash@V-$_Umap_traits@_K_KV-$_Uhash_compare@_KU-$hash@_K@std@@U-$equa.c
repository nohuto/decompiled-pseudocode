/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180047F64
 * Callers:
 *     NotifyInputSinkParented @ 0x180047CE0 (NotifyInputSinkParented.c)
 * Callees:
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA_NXZ @ 0x18001B830 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_.c)
 *     ?_Check_max_size@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEBAXXZ @ 0x1800480C0 (-_Check_max_size@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ??$?0$$QEA_K$$Z$$V@?$pair@$$CB_K_K@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@$$QEA_K@1@V?$tuple@$$V@1@@Z @ 0x1800480F4 (--$-0$$QEA_K$$Z$$V@-$pair@$$CB_K_K@std@@QEAA@Upiecewise_construct_t@1@V-$tuple@$$QEA_K@1@V-$tupl.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18005E7EC (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800787FC (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x1800A5514 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64 const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 *v19; // [rsp+60h] [rbp+8h] BYREF

  v6 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()(a3);
  v7 = a1[3];
  v8 = *(_QWORD *)(v7 + 16 * (a1[6] & v6) + 8);
  v9 = a1[1];
  if ( v8 != v9 )
  {
    v10 = *(_QWORD *)(v7 + 16 * (a1[6] & v6));
    while ( 1 )
    {
      if ( *(_QWORD *)a3 == *(_QWORD *)(v8 + 16) )
      {
        *(_QWORD *)a2 = v8;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      if ( v8 == v10 )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
    v9 = v8;
  }
  std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Check_max_size(a1);
  v18[0] = a1 + 1;
  v12 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(32LL);
  v18[1] = v12;
  v19 = a3;
  ____0__QEA_K__Z__V___pair___CB_K_K_std__QEAA_Upiecewise_construct_t_1_V__tuple___QEA_K_1_V__tuple___V_1__Z(
    v12 + 2,
    v13,
    &v19);
  if ( std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Check_rehash_required_1((__int64)a1) )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Rehash_for_1(a1);
    v9 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Find_last<unsigned __int64>(
                      a1,
                      v18,
                      v12 + 2,
                      v6);
  }
  v14 = *(_QWORD **)(v9 + 8);
  ++a1[2];
  *v12 = v9;
  v12[1] = v14;
  *v14 = v12;
  *(_QWORD *)(v9 + 8) = v12;
  v15 = 2 * (v6 & a1[6]);
  v16 = a1[3];
  v17 = *(_QWORD *)(v16 + 16 * (v6 & a1[6]));
  if ( v17 == a1[1] )
  {
    *(_QWORD *)(v16 + 16 * (v6 & a1[6])) = v12;
  }
  else
  {
    if ( v17 == v9 )
    {
      *(_QWORD *)(v16 + 16 * (v6 & a1[6])) = v12;
      goto LABEL_7;
    }
    if ( *(_QWORD **)(v16 + 16 * (v6 & a1[6]) + 8) != v14 )
      goto LABEL_7;
  }
  *(_QWORD *)(v16 + 8 * v15 + 8) = v12;
LABEL_7:
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
