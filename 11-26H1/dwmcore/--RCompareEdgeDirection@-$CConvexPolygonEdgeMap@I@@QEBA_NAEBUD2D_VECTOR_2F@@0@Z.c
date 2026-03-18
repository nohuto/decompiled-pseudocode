/*
 * XREFs of ??RCompareEdgeDirection@?$CConvexPolygonEdgeMap@I@@QEBA_NAEBUD2D_VECTOR_2F@@0@Z @ 0x1801440BC
 * Callers:
 *     ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1801435C4 (--$_Find_hint@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPo.c)
 *     ??$_Lower_bound_duplicate@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x180144004 (--$_Lower_bound_duplicate@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData.c)
 *     ??$_Find_lower_bound@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@std@@@1@AEBUD2D_VECTOR_2F@@@Z @ 0x180144038 (--$_Find_lower_bound@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CC.c)
 * Callees:
 *     <none>
 */

bool __fastcall CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // r10d
  _DWORD v12[6]; // [rsp+0h] [rbp-18h] BYREF

  v3 = a3[1];
  v4 = *a3;
  v5 = a2[1];
  v6 = 1LL;
  v12[0] = 0;
  v7 = 1LL;
  v12[1] = 1;
  v8 = 2LL;
  v12[2] = 3;
  v9 = 2LL;
  v12[3] = 2;
  if ( v3 <= 0.0 )
    v7 = 0LL;
  if ( v4 >= 0.0 )
    v9 = 0LL;
  v10 = v12[v9 + v7];
  if ( v5 <= 0.0 )
    v6 = 0LL;
  if ( *a2 >= 0.0 )
    v8 = 0LL;
  if ( v12[v8 + v6] < v10 )
    return 1;
  if ( v12[v8 + v6] == v10 )
    return (float)((float)(v3 * *a2) - (float)(v4 * v5)) > 0.000081380211;
  return 0;
}
