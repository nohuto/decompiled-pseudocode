/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x180244E08
 * Callers:
 *     ??$emplace@_KAEAPEAVBamoDataSourceProxy@@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x180243DA0 (--$emplace@_KAEAPEAVBamoDataSourceProxy@@@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourcePro.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E8884 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x18022E42C (--1_Clear_guard@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uh.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // r11
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 **v19; // r10
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 **v25; // rcx
  __int64 *v26; // rax
  __int64 v28; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v28) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  LODWORD(v28) = 0;
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  v7 = *(_QWORD **)a1[1];
  v8 = v7;
  while ( v7 != (_QWORD *)v4 )
  {
    v8 = (_QWORD *)*v8;
    v9 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()((unsigned __int8 *)v7 + 16);
    v11 = a1[3];
    v12 = 2 * (a1[6] & v9);
    if ( *(_QWORD *)(v11 + 16 * (a1[6] & v9)) == v4 )
    {
      *(_QWORD *)(v11 + 16 * (a1[6] & v9)) = v10;
LABEL_7:
      *(_QWORD *)(v11 + 8 * v12 + 8) = v10;
      goto LABEL_15;
    }
    v13 = *(__int64 **)(v11 + 16 * (a1[6] & v9) + 8);
    v14 = *(_QWORD *)(v10 + 16);
    if ( v14 == v13[2] )
    {
      v15 = *v13;
      if ( *v13 != v10 )
      {
        v16 = *(_QWORD **)(v10 + 8);
        *v16 = v8;
        v17 = (_QWORD *)v8[1];
        *v17 = v15;
        v18 = *(_QWORD **)(v15 + 8);
        *v18 = v10;
        *(_QWORD *)(v15 + 8) = v17;
        v8[1] = v16;
        *(_QWORD *)(v10 + 8) = v18;
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
        v21 = *(_QWORD **)(v10 + 8);
        *v21 = v8;
        v22 = (_QWORD *)v8[1];
        *v22 = v20;
        v23 = *(_QWORD **)(v20 + 8);
        *v23 = v10;
        *(_QWORD *)(v20 + 8) = v22;
        v8[1] = v21;
        *(_QWORD *)(v10 + 8) = v23;
        goto LABEL_15;
      }
    }
    v24 = *(_QWORD **)(v10 + 8);
    *v24 = v8;
    v25 = (__int64 **)v8[1];
    *v25 = v13;
    v26 = *v19;
    *v26 = v10;
    *v19 = (__int64 *)v25;
    v8[1] = v24;
    *(_QWORD *)(v10 + 8) = v26;
    *(_QWORD *)(v11 + 8 * v12) = v10;
LABEL_15:
    v7 = v8;
  }
  v28 = 0LL;
  return std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Clear_guard::~_Clear_guard(&v28);
}
