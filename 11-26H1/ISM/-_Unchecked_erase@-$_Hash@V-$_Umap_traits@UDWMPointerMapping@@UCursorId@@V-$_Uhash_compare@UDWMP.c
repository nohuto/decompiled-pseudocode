/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@2@PEAU32@@Z @ 0x1801CCA20
 * Callers:
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1801CC964 (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rbx

  v4 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(a2 + 20);
  v5 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(a2 + 16);
  v6 = a1[3];
  v7 = 2 * (a1[6] & (v4 ^ v5));
  if ( *(unsigned __int8 **)(v6 + 16 * (a1[6] & (v4 ^ v5)) + 8) == a2 )
  {
    if ( *(unsigned __int8 **)(v6 + 16 * (a1[6] & (v4 ^ v5))) == a2 )
    {
      v8 = a1[1];
      *(_QWORD *)(v6 + 8 * v7) = v8;
    }
    else
    {
      v8 = *((_QWORD *)a2 + 1);
    }
    *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
  }
  else if ( *(unsigned __int8 **)(v6 + 16 * (a1[6] & (v4 ^ v5))) == a2 )
  {
    *(_QWORD *)(v6 + 16 * (a1[6] & (v4 ^ v5))) = *(_QWORD *)a2;
  }
  v9 = *(_QWORD *)a2;
  --a1[2];
  **((_QWORD **)a2 + 1) = v9;
  *(_QWORD *)(v9 + 8) = *((_QWORD *)a2 + 1);
  std::_Deallocate<16>(a2, (struct std::nothrow_t *)0x20);
  return v9;
}
