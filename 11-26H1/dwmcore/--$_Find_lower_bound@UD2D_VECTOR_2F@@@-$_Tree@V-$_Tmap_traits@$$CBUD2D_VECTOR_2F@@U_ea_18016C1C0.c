/*
 * XREFs of ??$_Find_lower_bound@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@AEBUD2D_VECTOR_2F@@@Z @ 0x18016C1C0
 * Callers:
 *     ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x18016742C (--$_Find_hint@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeDat_ea_18016742C.c)
 * Callees:
 *     <none>
 */

float **__fastcall std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Find_lower_bound<D2D_VECTOR_2F>(
        __int64 a1,
        float **a2,
        float *a3)
{
  float *v5; // rdx
  float v6; // xmm4_4
  int *v7; // rcx
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rax
  int v16; // eax
  int v18; // [rsp+0h] [rbp-18h] BYREF
  _DWORD v19[5]; // [rsp+4h] [rbp-14h] BYREF

  v5 = *(float **)(*(_QWORD *)a1 + 8LL);
  *a2 = v5;
  a2[1] = 0LL;
  for ( a2[2] = *(float **)a1; !*((_BYTE *)v5 + 25); v5 = *(float **)v5 )
  {
    *a2 = v5;
    v6 = a3[1];
    v7 = &v18;
    v8 = *a3;
    v9 = v5[8];
    v10 = v5[7];
    v18 = 0;
    v19[0] = 1;
    v19[1] = 3;
    v19[2] = 2;
    if ( v6 > 0.0 )
      v7 = v19;
    v11 = 2LL;
    if ( v8 >= 0.0 )
      v11 = 0LL;
    v12 = v7[v11];
    v13 = 1LL;
    v14 = 2LL;
    if ( v9 <= 0.0 )
      v13 = 0LL;
    if ( v10 >= 0.0 )
      v14 = 0LL;
    v15 = &v19[v14 - 1];
    if ( v15[v13] < v12 || v15[v13] == v12 && (float)((float)(v10 * v6) - (float)(v9 * v8)) > 0.000081380211 )
    {
      v5 += 4;
      v16 = 0;
    }
    else
    {
      a2[2] = v5;
      v16 = 1;
    }
    *((_DWORD *)a2 + 2) = v16;
  }
  return a2;
}
