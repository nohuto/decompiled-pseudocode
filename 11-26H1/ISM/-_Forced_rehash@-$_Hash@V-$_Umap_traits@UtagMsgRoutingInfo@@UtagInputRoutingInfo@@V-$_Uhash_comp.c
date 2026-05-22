/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18004DC48
 * Callers:
 *     ??$emplace@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@_N@1@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@Z @ 0x180063A7C (--$emplace@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRouti.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800320FC (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

char __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  _QWORD *v8; // r9
  _QWORD *v9; // r10
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // r11
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rbp
  unsigned __int64 *v18; // r8
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = *(_QWORD *)(a1 + 8);
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)(a1 + 24),
    2 * v6,
    v4);
  *(_QWORD *)(a1 + 56) = v6;
  LOBYTE(v7) = v6 - 1;
  *(_QWORD *)(a1 + 48) = v6 - 1;
  v8 = **(_QWORD ***)(a1 + 8);
  v9 = v8;
  while ( v8 != (_QWORD *)v4 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v7 = *((unsigned int *)v8 + 5);
    v9 = (_QWORD *)*v9;
    v11 = 2 * (*(_QWORD *)(a1 + 48) & (v7 | ((unsigned __int64)*((unsigned int *)v8 + 4) << 32)));
    if ( *(_QWORD *)(v10 + 16 * (*(_QWORD *)(a1 + 48) & (v7 | ((unsigned __int64)*((unsigned int *)v8 + 4) << 32)))) == v4 )
    {
      *(_QWORD *)(v10 + 16 * (*(_QWORD *)(a1 + 48) & (v7 | ((unsigned __int64)*((unsigned int *)v8 + 4) << 32)))) = v8;
LABEL_7:
      *(_QWORD *)(v10 + 8 * v11 + 8) = v8;
      goto LABEL_16;
    }
    LOBYTE(v7) = operator==(
                   (__int64)(v8 + 2),
                   *(_QWORD *)(v10
                             + 16 * (*(_QWORD *)(a1 + 48) & (v7 | ((unsigned __int64)*((unsigned int *)v8 + 4) << 32)))
                             + 8)
                 + 16LL);
    if ( (_BYTE)v7 )
    {
      v14 = (_QWORD *)*v13;
      if ( (_QWORD *)*v13 != v8 )
      {
        v15 = (_QWORD *)v8[1];
        *v15 = v9;
        v16 = (_QWORD *)v9[1];
        *v16 = v14;
        v7 = v14[1];
        *(_QWORD *)v7 = v8;
        v14[1] = v16;
        v9[1] = v15;
        v8[1] = v7;
      }
      goto LABEL_7;
    }
    v17 = v13;
    while ( 1 )
    {
      v18 = v13 + 1;
      if ( *(_QWORD **)(v10 + 8 * v11) == v17 )
        break;
      v17 = (_QWORD *)*v18;
      if ( operator==(v12, *v18 + 16) )
      {
        v19 = *v13;
        v20 = (_QWORD *)v8[1];
        *v20 = v9;
        v21 = (_QWORD *)v9[1];
        *v21 = v19;
        v7 = *(_QWORD *)(v19 + 8);
        *(_QWORD *)v7 = v8;
        *(_QWORD *)(v19 + 8) = v21;
        v9[1] = v20;
        v8[1] = v7;
        goto LABEL_16;
      }
    }
    v22 = (_QWORD *)v8[1];
    *v22 = v9;
    v7 = v9[1];
    *(_QWORD *)v7 = v13;
    v23 = (_QWORD *)*v18;
    *v23 = v8;
    *v18 = v7;
    v9[1] = v22;
    v8[1] = v23;
    *(_QWORD *)(v10 + 8 * v11) = v8;
LABEL_16:
    v8 = v9;
  }
  return v7;
}
