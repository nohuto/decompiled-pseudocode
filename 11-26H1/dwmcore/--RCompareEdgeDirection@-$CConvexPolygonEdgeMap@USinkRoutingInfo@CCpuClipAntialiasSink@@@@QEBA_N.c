/*
 * XREFs of ??RCompareEdgeDirection@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEBA_NAEBUD2D_VECTOR_2F@@0@Z @ 0x180167520
 * Callers:
 *     ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x18016742C (--$_Find_hint@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeDat_ea_18016742C.c)
 * Callees:
 *     <none>
 */

bool __fastcall CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection::operator()(
        __int64 a1,
        float *a2,
        float *a3)
{
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  __int64 v6; // r8
  float v7; // xmm4_4
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // r9d
  _DWORD v13[6]; // [rsp+0h] [rbp-18h] BYREF

  v3 = a3[1];
  v4 = *a3;
  v5 = *a2;
  v6 = 1LL;
  v7 = a2[1];
  v8 = 1LL;
  v9 = 2LL;
  v13[0] = 0;
  v10 = 2LL;
  v13[1] = 1;
  v13[2] = 3;
  v13[3] = 2;
  if ( v3 <= 0.0 )
    v8 = 0LL;
  if ( v4 >= 0.0 )
    v10 = 0LL;
  v11 = v13[v10 + v8];
  if ( v7 <= 0.0 )
    v6 = 0LL;
  if ( v5 >= 0.0 )
    v9 = 0LL;
  if ( v13[v9 + v6] < v11 )
    return 1;
  if ( v13[v9 + v6] == v11 )
    return (float)((float)(v3 * v5) - (float)(v4 * v7)) > 0.000081380211;
  return 0;
}
