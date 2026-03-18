/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V?$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U?$hash@UDCOMPOSITION_PROPERTY_ID@@@std@@U?$equal_to@UDCOMPOSITION_PROPERTY_ID@@@3@@std@@V?$allocator@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180243A84
 * Callers:
 *     ??$emplace@AEAUDCOMPOSITION_PROPERTY_ID@@AEAU1@@?$_Hash@V?$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V?$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U?$hash@UDCOMPOSITION_PROPERTY_ID@@@std@@U?$equal_to@UDCOMPOSITION_PROPERTY_ID@@@3@@std@@V?$allocator@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@std@@@std@@@std@@_N@1@AEAUDCOMPOSITION_PROPERTY_ID@@0@Z @ 0x180242A28 (--$emplace@AEAUDCOMPOSITION_PROPERTY_ID@@AEAU1@@-$_Hash@V-$_Umap_traits@UDCOMPOSITION_PROPERTY_I.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@std@@@std@@@2@@Z @ 0x1801C2C60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1801C2C60.c)
 *     ??$?RUDCOMPOSITION_PROPERTY_ID@@@?$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U?$hash@UDCOMPOSITION_PROPERTY_ID@@@std@@U?$equal_to@UDCOMPOSITION_PROPERTY_ID@@@3@@std@@QEBA_KAEBUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18021C3F4 (--$-RUDCOMPOSITION_PROPERTY_ID@@@-$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U-$hash@UDCOMPOSITI.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V?$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U?$hash@UDCOMPOSITION_PROPERTY_ID@@@std@@U?$equal_to@UDCOMPOSITION_PROPERTY_ID@@@3@@std@@V?$allocator@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180242D00 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V-$_Uhash_compare@UDCOMPOS.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<DCOMPOSITION_PROPERTY_ID,DCOMPOSITION_PROPERTY_ID,std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>,std::allocator<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 i; // r9
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // r11
  __int64 *v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  __int64 v25; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v25) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  LODWORD(v25) = 0;
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  for ( i = *(_QWORD *)a1[1]; i != v4; i = v11 )
  {
    v9 = std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>::operator()<DCOMPOSITION_PROPERTY_ID>(
           v7,
           (int *)(i + 16));
    v12 = a1[3];
    v13 = 2 * (a1[6] & v9);
    if ( *(_QWORD *)(v12 + 16 * (a1[6] & v9)) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (a1[6] & v9)) = v10;
LABEL_7:
      *(_QWORD *)(v12 + 8 * v13 + 8) = v10;
      continue;
    }
    v14 = *(__int64 **)(v12 + 16 * (a1[6] & v9) + 8);
    v7 = *(unsigned int *)(v10 + 16);
    if ( (_DWORD)v7 == *((_DWORD *)v14 + 4) )
    {
      v15 = *v14;
      if ( *v14 != v10 )
      {
        v16 = *(_QWORD **)(v10 + 8);
        *v16 = v11;
        v7 = *(_QWORD *)(v11 + 8);
        *(_QWORD *)v7 = v15;
        v17 = *(_QWORD **)(v15 + 8);
        *v17 = v10;
        *(_QWORD *)(v15 + 8) = v7;
        *(_QWORD *)(v11 + 8) = v16;
        *(_QWORD *)(v10 + 8) = v17;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v18 = v14 + 1;
      if ( *(__int64 **)(v12 + 8 * v13) == v14 )
        break;
      v14 = (__int64 *)*v18;
      if ( (_DWORD)v7 == *(_DWORD *)(*v18 + 16) )
      {
        v19 = *v14;
        v20 = *(_QWORD **)(v10 + 8);
        *v20 = v11;
        v7 = *(_QWORD *)(v11 + 8);
        *(_QWORD *)v7 = v19;
        v21 = *(_QWORD **)(v19 + 8);
        *v21 = v10;
        *(_QWORD *)(v19 + 8) = v7;
        *(_QWORD *)(v11 + 8) = v20;
        *(_QWORD *)(v10 + 8) = v21;
        goto LABEL_15;
      }
    }
    v22 = *(_QWORD **)(v10 + 8);
    *v22 = v11;
    v7 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)v7 = v14;
    v23 = (_QWORD *)*v18;
    *v23 = v10;
    *v18 = v7;
    *(_QWORD *)(v11 + 8) = v22;
    *(_QWORD *)(v10 + 8) = v23;
    *(_QWORD *)(v12 + 8 * v13) = v10;
LABEL_15:
    ;
  }
  v25 = 0LL;
  return std::_Hash<std::_Umap_traits<DCOMPOSITION_PROPERTY_ID,DCOMPOSITION_PROPERTY_ID,std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>,std::allocator<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>,0>>::_Clear_guard::~_Clear_guard(&v25);
}
