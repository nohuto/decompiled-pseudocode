/*
 * XREFs of ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801DBED0
 * Callers:
 *     ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x18016742C (--$_Find_hint@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeDat_ea_18016742C.c)
 * Callees:
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@PEAU32@@Z @ 0x18021C594 (-_Max@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEd.c)
 */

__int64 *__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>,std::_Iterator_base0>::operator--(
        __int64 *a1)
{
  __int64 v1; // rax
  __int64 *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rax

  v1 = *a1;
  v2 = a1;
  if ( *(_BYTE *)(*a1 + 25) )
  {
    *a1 = *(_QWORD *)(v1 + 16);
  }
  else if ( *(_BYTE *)(*(_QWORD *)v1 + 25LL) )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v3 + 25) )
    {
      v4 = v1;
      do
      {
        v5 = v3;
        v1 = v4;
        if ( v4 != *(_QWORD *)v3 )
          break;
        *v2 = v3;
        v4 = v3;
        v3 = *(_QWORD *)(v3 + 8);
        v1 = v5;
      }
      while ( !*(_BYTE *)(v3 + 25) );
    }
    if ( !*(_BYTE *)(v1 + 25) )
      *v2 = v3;
  }
  else
  {
    v6 = std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Max(*(_QWORD *)v1);
    *v2 = v6;
  }
  return v2;
}
