/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@2@PEAU32@@Z @ 0x1800324BC
 * Callers:
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x180032394 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // r11
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v10; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = *(_DWORD *)(a2 + 16);
  v11 = *(_DWORD *)(a2 + 20);
  v3 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)&v11);
  v4 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)&v12);
  v6 = a1[3];
  v7 = 2 * (a1[6] & (v4 ^ v3));
  if ( *(_QWORD **)(v6 + 8 * v7 + 8) == v5 )
  {
    if ( *(_QWORD **)(v6 + 8 * v7) == v5 )
    {
      v10 = a1[1];
      *(_QWORD *)(v6 + 8 * v7) = v10;
    }
    else
    {
      v10 = v5[1];
    }
    *(_QWORD *)(v6 + 8 * v7 + 8) = v10;
  }
  else if ( *(_QWORD **)(v6 + 8 * v7) == v5 )
  {
    *(_QWORD *)(v6 + 8 * v7) = *v5;
  }
  v8 = *v5;
  --a1[2];
  *(_QWORD *)v5[1] = v8;
  *(_QWORD *)(v8 + 8) = v5[1];
  std::_Deallocate<16>(v5, 64LL);
  return v8;
}
