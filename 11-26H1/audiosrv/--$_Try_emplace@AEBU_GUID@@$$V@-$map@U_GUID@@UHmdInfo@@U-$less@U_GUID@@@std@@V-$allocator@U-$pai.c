/*
 * XREFs of ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x180150320
 * Callers:
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180151000 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180151240 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800E8360 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801006B0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@.c)
 *     ??$?0V?$tuple@AEBU_GUID@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBU_GUID@@UHmdInfo@@@std@@AEAA@AEAV?$tuple@AEBU_GUID@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x180150058 (--$-0V-$tuple@AEBU_GUID@@@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CBU_GUID@@UHmdInfo@@@std@@AEAA@.c)
 *     ??$_Find_lower_bound@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@1@AEBU_GUID@@@Z @ 0x180150280 (--$_Find_lower_bound@U_GUID@@@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180150A14 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<_GUID,HmdInfo>::_Try_emplace<_GUID const &,>(__int64 *a1, __int64 a2, __int128 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  __int128 Buf2; // [rsp+30h] [rbp-40h] BYREF
  __int128 Buf1; // [rsp+40h] [rbp-30h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]
  __int128 *v14; // [rsp+A8h] [rbp+38h] BYREF

  std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Find_lower_bound<_GUID>(
    (__int64)a1,
    &v12,
    a3);
  v6 = v13;
  if ( *(_BYTE *)(v13 + 25) || (Buf2 = *(_OWORD *)(v13 + 32), Buf1 = *a3, memcmp_0(&Buf1, &Buf2, 0x10uLL) < 0) )
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    *(_QWORD *)&Buf2 = a1;
    v8 = operator new(0x48uLL);
    v14 = a3;
    ____0V__tuple_AEBU_GUID___std__V__tuple___V_1__0A___Z_S___pair___CBU_GUID__UHmdInfo___std__AEAA_AEAV__tuple_AEBU_GUID___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      (__int64)(v8 + 4),
      &v14);
    *v8 = v7;
    v8[1] = v7;
    v8[2] = v7;
    *((_WORD *)v8 + 12) = 0;
    *((_QWORD *)&Buf2 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>(&Buf2);
    Buf1 = v12;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,APPLICATION_REF_DATA>>>::_Insert_node(
                      a1,
                      (__int64)&Buf1,
                      (__int64)v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
