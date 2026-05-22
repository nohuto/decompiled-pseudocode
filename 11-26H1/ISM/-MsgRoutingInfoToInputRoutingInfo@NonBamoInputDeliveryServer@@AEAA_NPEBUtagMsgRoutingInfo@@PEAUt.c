/*
 * XREFs of ?MsgRoutingInfoToInputRoutingInfo@NonBamoInputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInputRoutingInfo@@@Z @ 0x1800645D4
 * Callers:
 *     ?Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x180064540 (-Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x1801617A0 (-find@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_compare@UtagMs.c)
 */

bool __fastcall NonBamoInputDeliveryServer::MsgRoutingInfoToInputRoutingInfo(
        NonBamoInputDeliveryServer *this,
        const struct tagMsgRoutingInfo *a2,
        struct tagInputRoutingInfo *a3)
{
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  bool result; // al
  unsigned __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  if ( *(_OWORD *)a2 == 0LL && !*((_QWORD *)a2 + 2) )
  {
    v9 = *((_QWORD *)a2 + 3) - _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    if ( !v9 )
      v9 = *((_QWORD *)a2 + 4);
    if ( !v9 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        0LL);
  }
  std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find(
    (char *)this + 216,
    &v11,
    a2);
  v5 = v11;
  if ( v11 == *((_QWORD *)this + 28) )
    return 0;
  v6 = *(_OWORD *)(v11 + 72);
  *(_OWORD *)a3 = *(_OWORD *)(v11 + 56);
  v7 = *(_OWORD *)(v5 + 88);
  result = 1;
  *((_OWORD *)a3 + 1) = v6;
  *((_OWORD *)a3 + 2) = v7;
  return result;
}
