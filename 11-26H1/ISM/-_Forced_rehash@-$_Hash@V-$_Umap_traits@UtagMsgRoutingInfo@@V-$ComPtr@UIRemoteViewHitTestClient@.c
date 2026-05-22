/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801A4404
 * Callers:
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x1801A2494 (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800320FC (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x1801A2DF4 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@V-$ComPtr@UIRemoteViewHitTestClient@.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // r11
  _QWORD *v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // rsi
  _QWORD *v15; // r9
  _QWORD *v16; // rbp
  _QWORD *v17; // r8
  __int64 v18; // r8
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
  __int64 *v30; // [rsp+58h] [rbp+10h] BYREF
  int v31; // [rsp+60h] [rbp+18h] BYREF

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
    v9 = (__int64)(v7 + 2);
    v31 = *((_DWORD *)v7 + 4);
    LODWORD(v30) = *((_DWORD *)v7 + 5);
    v10 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)&v30);
    v11 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)&v31);
    v13 = *(_QWORD *)(a1 + 24);
    v14 = 2 * (*(_QWORD *)(a1 + 48) & (v11 ^ v10));
    if ( *(_QWORD *)(v13 + 8 * v14) == v4 )
    {
      *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_15:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_16;
    }
    if ( operator==(v9, *(_QWORD *)(v13 + 8 * v14 + 8) + 16LL) )
    {
      v25 = *v15;
      if ( *v15 != v12 )
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
      if ( operator==(v9, *v17 + 16LL) )
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
  return std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,Microsoft::WRL::ComPtr<IRemoteViewHitTestClient>>>,0>>::_Clear_guard::~_Clear_guard(&v30);
}
