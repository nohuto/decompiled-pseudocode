/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@2@PEAU32@@Z @ 0x18014C544
 * Callers:
 *     ?RemoveIfUnused@CPreWalkVisual@@CAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@@Z @ 0x18014C2C8 (-RemoveIfUnused@CPreWalkVisual@@CAXV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@.c)
 *     ?UnregisterTransformParentChild@CPreWalkVisual@@SAXPEAVCVisual@@@Z @ 0x18014C300 (-UnregisterTransformParentChild@CPreWalkVisual@@SAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18014C5D0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@s.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CPreWalkVisual,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CPreWalkVisual>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r11
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx

  v3 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()((unsigned __int8 *)(a2 + 16));
  v5 = a1[3];
  v6 = 2 * (a1[6] & v3);
  if ( *(_QWORD **)(v5 + 16 * (a1[6] & v3) + 8) == v4 )
  {
    if ( *(_QWORD **)(v5 + 16 * (a1[6] & v3)) == v4 )
    {
      v7 = a1[1];
      *(_QWORD *)(v5 + 8 * v6) = v7;
    }
    else
    {
      v7 = v4[1];
    }
    *(_QWORD *)(v5 + 8 * v6 + 8) = v7;
  }
  else if ( *(_QWORD **)(v5 + 16 * (a1[6] & v3)) == v4 )
  {
    *(_QWORD *)(v5 + 16 * (a1[6] & v3)) = *v4;
  }
  v8 = *v4;
  --a1[2];
  *(_QWORD *)v4[1] = v8;
  v9 = v4[1];
  *(_QWORD *)(v8 + 8) = v9;
  std::_List_node<std::pair<CVisual * const,CPreWalkVisual>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<CVisual * const,CPreWalkVisual>,void *>>>(
    v9,
    v4);
  return v8;
}
