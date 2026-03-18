/*
 * XREFs of ??$_Find@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x180008A90
 * Callers:
 *     ?TryAddEdge@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBUSinkRoutingInfo@CCpuClipAntialiasSink@@M@Z @ 0x1800089AC (-TryAddEdge@-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAA_NAEBUD2D_VECT.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Find<D2D_VECTOR_2F>(
        __int64 *a1,
        float *a2)
{
  __int64 *v2; // rbx
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 *v6; // r8
  float v7; // xmm4_4
  float v8; // xmm3_4
  int *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r9d
  float v12; // xmm1_4
  __int64 v13; // rcx
  float v14; // xmm0_4
  __int64 v15; // rax
  _DWORD *v16; // rax
  char v17; // cl
  __int64 *v18; // rax
  float v19; // xmm0_4
  __int64 v20; // rcx
  float v21; // xmm4_4
  __int64 v22; // rax
  float v23; // xmm1_4
  float v24; // xmm3_4
  unsigned int v25; // edx
  int v27; // [rsp+0h] [rbp-38h] BYREF
  _DWORD v28[3]; // [rsp+4h] [rbp-34h] BYREF
  _DWORD v29[3]; // [rsp+10h] [rbp-28h] BYREF
  int v30; // [rsp+1Ch] [rbp-1Ch]

  v2 = (__int64 *)*a1;
  v30 = 0;
  v4 = 2LL;
  v5 = 1LL;
  v6 = (__int64 *)v2[1];
  if ( !*((_BYTE *)v6 + 25) )
  {
    v7 = a2[1];
    v8 = *a2;
    v9 = &v27;
    v27 = 0;
    v28[0] = 1;
    v28[1] = 3;
    v28[2] = 2;
    if ( v7 > 0.0 )
      v9 = v28;
    v10 = 2LL;
    if ( v8 >= 0.0 )
      v10 = 0LL;
    v11 = v9[v10];
    do
    {
      v12 = *((float *)v6 + 8);
      v13 = 1LL;
      v14 = *((float *)v6 + 7);
      v15 = 2LL;
      if ( v12 <= 0.0 )
        v13 = 0LL;
      if ( v14 >= 0.0 )
        v15 = 0LL;
      v16 = &v28[v15 - 1];
      if ( v16[v13] < v11 )
      {
        v17 = 1;
      }
      else if ( v16[v13] == v11 && (float)((float)(v14 * v7) - (float)(v12 * v8)) > 0.000081380211 )
      {
        v17 = 1;
      }
      else
      {
        v17 = 0;
        v2 = v6;
      }
      v18 = v6 + 2;
      if ( !v17 )
        v18 = v6;
      v6 = (__int64 *)*v18;
    }
    while ( !*(_BYTE *)(*v18 + 25) );
  }
  if ( *((_BYTE *)v2 + 25) )
    return (__int64 *)*a1;
  v19 = *a2;
  v20 = 1LL;
  v21 = *((float *)v2 + 8);
  v22 = 2LL;
  v23 = a2[1];
  v24 = *((float *)v2 + 7);
  v29[0] = 0;
  v29[1] = 1;
  v29[2] = 3;
  v30 = 2;
  if ( v21 <= 0.0 )
    v20 = 0LL;
  if ( v24 >= 0.0 )
    v22 = 0LL;
  v25 = v29[v22 + v20];
  if ( v19 >= 0.0 )
    v4 = 0LL;
  if ( v23 <= 0.0 )
    v5 = 0LL;
  if ( v29[v5 + v4] < v25 || v29[v5 + v4] == v25 && (float)((float)(v19 * v21) - (float)(v23 * v24)) > 0.000081380211 )
    return (__int64 *)*a1;
  else
    return v2;
}
