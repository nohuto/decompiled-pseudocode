/*
 * XREFs of ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x18006388C
 * Callers:
 *     ?OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z @ 0x180063850 (-OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z.c)
 * Callees:
 *     ??$emplace@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@_N@1@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@Z @ 0x180063A7C (--$emplace@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@-$_Hash@V-$_Umap_traits@UtagMsgRouti.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@V21@@Z @ 0x18008A470 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUtagMsgRoutingInfo@@Ut.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x1801617A0 (-find@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_compare@UtagMs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::OnAppThreadMessage(
        NonBamoInputDeliveryServer *this,
        const struct InputDeliveryServerMessage *a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v6; // rcx
  __int128 v7; // xmm1
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // xmm0_8
  __int64 (__fastcall *v12)(__int64 *, __int128 *, __int64, __int64); // rax
  int v13; // eax
  __int64 v15; // rdx
  const char *v16; // r9
  __int64 *v17; // rcx
  __int128 v18; // xmm1
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // xmm0_8
  __int64 (__fastcall *v23)(__int64 *, __int128 *, __int64, __int64); // rax
  __int64 *v24; // rcx
  char *v25; // rsi
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // xmm0_8
  __int64 (__fastcall *v29)(__int64 *, __int128 *); // rax
  int v30; // eax
  const char *v31; // r9
  int v32; // [rsp+20h] [rbp-50h]
  _BYTE v33[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v34; // [rsp+40h] [rbp-30h] BYREF
  __int128 v35; // [rsp+50h] [rbp-20h]
  __int64 v36; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  __int64 v38; // [rsp+88h] [rbp+18h] BYREF

  switch ( *(_DWORD *)a2 )
  {
    case 0:
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::emplace<tagMsgRoutingInfo const &,tagInputRoutingInfo const &>(
        (char *)this + 216,
        v33,
        (char *)a2 + 16);
      v6 = (__int64 *)*((_QWORD *)this + 4);
      v7 = *((_OWORD *)a2 + 2);
      v8 = *((unsigned int *)a2 + 15);
      v9 = *((unsigned int *)a2 + 14);
      v10 = *v6;
      v34 = *((_OWORD *)a2 + 1);
      v11 = *((_QWORD *)a2 + 6);
      v35 = v7;
      v12 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v10 + 24);
      v36 = v11;
      v13 = v12(v6, &v34, v9, v8);
      if ( v13 >= 0 )
        return 0LL;
      v15 = 308LL;
LABEL_5:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        (const char *)(unsigned int)v13,
        v32);
      return 0LL;
    case 1:
      v24 = (__int64 *)*((_QWORD *)this + 4);
      v25 = (char *)a2 + 16;
      v26 = *((_OWORD *)a2 + 2);
      v27 = *v24;
      v34 = *((_OWORD *)a2 + 1);
      v28 = *((_QWORD *)a2 + 6);
      v35 = v26;
      v29 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v27 + 40);
      v36 = v28;
      v30 = v29(v24, &v34);
      if ( v30 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x13C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          (const char *)(unsigned int)v30,
          v32);
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find(
        (char *)this + 216,
        &v38,
        v25);
      if ( v38 == *((_QWORD *)this + 28) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x13F,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          v31);
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>,0>(
        (char *)this + 216,
        &v38);
      break;
    case 2:
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find(
        (char *)this + 216,
        &v38,
        (char *)a2 + 16);
      if ( v38 == *((_QWORD *)this + 28) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x148,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          v16);
      v17 = (__int64 *)*((_QWORD *)this + 4);
      v18 = *((_OWORD *)a2 + 2);
      v19 = *((unsigned int *)a2 + 15);
      v20 = *((unsigned int *)a2 + 14);
      v21 = *v17;
      v34 = *((_OWORD *)a2 + 1);
      v22 = *((_QWORD *)a2 + 6);
      v35 = v18;
      v23 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v21 + 32);
      v36 = v22;
      v13 = v23(v17, &v34, v20, v19);
      if ( v13 < 0 )
      {
        v15 = 333LL;
        goto LABEL_5;
      }
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x154,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        a4);
  }
  return 0LL;
}
