/*
 * XREFs of ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V?$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U?$hash@UDCOMPOSITION_PROPERTY_ID@@@std@@U?$equal_to@UDCOMPOSITION_PROPERTY_ID@@@3@@std@@V?$allocator@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@3@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1801D83F4
 * Callers:
 *     ??$emplace@AEAUDCOMPOSITION_PROPERTY_ID@@AEAU1@@?$_Hash@V?$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V?$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U?$hash@UDCOMPOSITION_PROPERTY_ID@@@std@@U?$equal_to@UDCOMPOSITION_PROPERTY_ID@@@3@@std@@V?$allocator@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@std@@@std@@@std@@_N@1@AEAUDCOMPOSITION_PROPERTY_ID@@0@Z @ 0x180242A28 (--$emplace@AEAUDCOMPOSITION_PROPERTY_ID@@AEAU1@@-$_Hash@V-$_Umap_traits@UDCOMPOSITION_PROPERTY_I.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<DCOMPOSITION_PROPERTY_ID,DCOMPOSITION_PROPERTY_ID,std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>,std::allocator<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>,0>>::_Insert_new_node_before(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r11

  v4 = *(_QWORD **)(a3 + 8);
  ++a1[2];
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = a2 & a1[6];
  v6 = a1[3];
  v7 = 2 * v5;
  v8 = *(_QWORD *)(v6 + 8 * v7);
  if ( v8 == a1[1] )
  {
    *(_QWORD *)(v6 + 8 * v7) = a4;
LABEL_6:
    *(_QWORD *)(v6 + 8 * v7 + 8) = a4;
    return a4;
  }
  if ( v8 == a3 )
  {
    *(_QWORD *)(v6 + 8 * v7) = a4;
    return a4;
  }
  if ( *(_QWORD **)(v6 + 8 * v7 + 8) == v4 )
    goto LABEL_6;
  return a4;
}
