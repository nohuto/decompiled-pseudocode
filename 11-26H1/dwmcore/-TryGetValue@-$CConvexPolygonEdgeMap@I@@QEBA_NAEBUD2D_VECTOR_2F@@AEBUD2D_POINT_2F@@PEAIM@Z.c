/*
 * XREFs of ?TryGetValue@?$CConvexPolygonEdgeMap@I@@QEBA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@PEAIM@Z @ 0x18016084C
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@@std@@@2@AEBUD2D_VECTOR_2F@@@Z @ 0x1802182AC (-find@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEdgeMap@I@@UCompareE.c)
 */

char __fastcall CConvexPolygonEdgeMap<unsigned int>::TryGetValue(
        _QWORD *a1,
        float *a2,
        float *a3,
        _DWORD *a4,
        float a5)
{
  char result; // al
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  if ( *a2 == 0.0 && a2[1] == 0.0 )
    return 0;
  std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::find(
    a1,
    &v9,
    a2);
  if ( v9 == *a1
    || a5 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)(a3[1] - *(float *)(v9 + 40)) * *(float *)(v9 + 28))
                          - (float)((float)(*a3 - *(float *)(v9 + 36)) * *(float *)(v9 + 32))) & _xmm) )
  {
    return 0;
  }
  result = 1;
  *a4 = *(_DWORD *)(v9 + 44);
  return result;
}
