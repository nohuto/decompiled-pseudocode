/*
 * XREFs of ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x180009380
 * Callers:
 *     ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180007D60 (-BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawLis.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     PrimitiveStorage::Alloc_16_ @ 0x1800094C0 (PrimitiveStorage--Alloc_16_.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x180009790 (-Initialize@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawListPrimitive::Create(__int64 a1, int a2, int a3, __int64 a4, void *a5, char a6, __int64 *a7)
{
  unsigned int v7; // r10d
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v13; // r14d
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 result; // rax
  int v18; // [rsp+38h] [rbp-30h]
  unsigned int v19; // [rsp+40h] [rbp-28h] BYREF
  int v20; // [rsp+44h] [rbp-24h]
  int v21; // [rsp+48h] [rbp-20h]
  unsigned int v22; // [rsp+4Ch] [rbp-1Ch]

  v7 = *(_DWORD *)(a1 + 12);
  v9 = *(_DWORD *)a4;
  v10 = v7;
  v21 = a3;
  v19 = v7;
  v20 = v7;
  v22 = v9;
  v13 = a1;
  v14 = v7 & 1;
  if ( (v7 & 1) != 0 )
  {
    v10 = v7 - v14 + 2;
    v19 = v10;
    if ( v7 )
      v20 = v7 - v14 + 2;
  }
  if ( v10 > 0x10000 || v9 > 0x1FFFE )
  {
    v19 = 0;
    v22 = 0;
  }
  v15 = PrimitiveStorage::Alloc_16_(&v19);
  v16 = v15;
  if ( v15 )
  {
    LOBYTE(v18) = a6;
    CDrawListPrimitive::Initialize(v15, v13, a2, a3, *(void **)(a4 + 8), v9, a5, v18);
    result = 0LL;
    *a7 = v16;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x41u, 0LL);
    return 2147942414LL;
  }
  return result;
}
