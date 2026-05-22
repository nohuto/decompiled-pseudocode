/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18004DA84
 * Callers:
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x1800468C4 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??8@YA_NAEBUDWMPointerMapping@@0@Z @ 0x180046ACC (--8@YA_NAEBUDWMPointerMapping@@0@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180096570 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPoi.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // r11
  _QWORD *v8; // rbx
  unsigned __int8 *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // r9
  _QWORD *v15; // r8
  _QWORD *v16; // rbp
  _QWORD *v17; // rsi
  __int64 v18; // r9
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v30; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v30) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = *(_QWORD *)(a1 + 8);
  LODWORD(v30) = 0;
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)(a1 + 24),
    2 * v6,
    v4);
  *(_QWORD *)(a1 + 56) = v6;
  *(_QWORD *)(a1 + 48) = v6 - 1;
  v7 = **(_QWORD ***)(a1 + 8);
  v8 = v7;
  while ( v7 != (_QWORD *)v4 )
  {
    v8 = (_QWORD *)*v8;
    v9 = (unsigned __int8 *)(v7 + 2);
    v10 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)v7 + 20);
    v11 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(v9);
    v13 = *(_QWORD *)(a1 + 24);
    v14 = 2 * (*(_QWORD *)(a1 + 48) & (v10 ^ v11));
    if ( *(_QWORD *)(v13 + 16 * (*(_QWORD *)(a1 + 48) & (v10 ^ v11))) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (*(_QWORD *)(a1 + 48) & (v10 ^ v11))) = v12;
LABEL_15:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_16;
    }
    if ( operator==(v9, (_DWORD *)(*(_QWORD *)(v13 + 16 * (*(_QWORD *)(a1 + 48) & (v10 ^ v11)) + 8) + 16LL)) )
    {
      v25 = *v15;
      if ( v25 != v12 )
      {
        v26 = *(_QWORD **)(v12 + 8);
        *v26 = v8;
        v27 = (_QWORD *)v8[1];
        *v27 = v25;
        v28 = *(_QWORD **)(v25 + 8);
        *v28 = v12;
        *(_QWORD *)(v25 + 8) = v27;
        v8[1] = v26;
        *(_QWORD *)(v12 + 8) = v28;
      }
      goto LABEL_15;
    }
    v16 = v15;
    while ( 1 )
    {
      v17 = v15 + 1;
      if ( *(_QWORD **)(v13 + 8 * v14) == v16 )
        break;
      v16 = (_QWORD *)*v17;
      if ( operator==(v9, (_DWORD *)(*v17 + 16LL)) )
      {
        v18 = *v15;
        v19 = *(_QWORD **)(v12 + 8);
        *v19 = v8;
        v20 = (_QWORD *)v8[1];
        *v20 = v18;
        v21 = *(_QWORD **)(v18 + 8);
        *v21 = v12;
        *(_QWORD *)(v18 + 8) = v20;
        v8[1] = v19;
        *(_QWORD *)(v12 + 8) = v21;
        goto LABEL_16;
      }
    }
    v22 = *(_QWORD **)(v12 + 8);
    *v22 = v8;
    v23 = (_QWORD *)v8[1];
    *v23 = v15;
    v24 = (_QWORD *)*v17;
    *v24 = v12;
    *v17 = v23;
    v8[1] = v22;
    *(_QWORD *)(v12 + 8) = v24;
    *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_16:
    v7 = v8;
  }
  v30 = 0LL;
  return std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Clear_guard::~_Clear_guard(&v30);
}
