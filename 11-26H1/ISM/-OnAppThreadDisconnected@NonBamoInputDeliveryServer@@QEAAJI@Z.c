/*
 * XREFs of ?OnAppThreadDisconnected@NonBamoInputDeliveryServer@@QEAAJI@Z @ 0x180074610
 * Callers:
 *     ?OnPeerDisconnected@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIPEBX_N@Z @ 0x180074600 (-OnPeerDisconnected@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIPEBX_N.c)
 * Callees:
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@V21@@Z @ 0x18008A470 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUtagMsgRoutingInfo@@Ut.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::OnAppThreadDisconnected(NonBamoInputDeliveryServer *this, int a2)
{
  __int64 *i; // rbx
  __int64 *v5; // rcx
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // xmm0_8
  int v9; // eax
  int v11[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v15; // [rsp+60h] [rbp+8h] BYREF

  i = (__int64 *)*((_QWORD *)this + 28);
LABEL_2:
  for ( i = (__int64 *)*i;
        i != *((__int64 **)this + 28);
        i = *(__int64 **)std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>,0>(
                           (char *)this + 216,
                           &v15) )
  {
    if ( *((_DWORD *)i + 14) != a2 )
      goto LABEL_2;
    v5 = (__int64 *)*((_QWORD *)this + 4);
    v6 = *((_OWORD *)i + 5);
    *(_OWORD *)v11 = *((_OWORD *)i + 4);
    v7 = *v5;
    v8 = i[12];
    v12 = v6;
    v13 = v8;
    v9 = (*(__int64 (__fastcall **)(__int64 *, int *))(v7 + 40))(v5, v11);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x170,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        (const char *)(unsigned int)v9,
        v11[0]);
  }
  return 0LL;
}
