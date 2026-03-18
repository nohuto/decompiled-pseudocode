/*
 * XREFs of ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180036B30
 * Callers:
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18003781C (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1801438CC (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
        D2DMatrixHelper *this,
        float *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v3; // r8d
  float v5; // xmm3_4
  int v6; // r9d
  __int32 v7; // xmm1_4
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // rdx
  __int64 v13; // r10
  int *v14; // r9
  __int64 v15; // rax
  int v16; // eax
  bool v17; // cc
  float v18; // xmm0_4
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+0h] [rbp-38h] BYREF
  int v22; // [rsp+4h] [rbp-34h]
  int v23; // [rsp+8h] [rbp-30h]
  int v24; // [rsp+Ch] [rbp-2Ch]
  int v25; // [rsp+10h] [rbp-28h]
  _DWORD v26[9]; // [rsp+14h] [rbp-24h] BYREF

  v3 = (int)this;
  if ( (_DWORD)this == 50529027 || !(_DWORD)this )
    return (unsigned int)this;
  v5 = a2[1];
  v6 = 1;
  COERCE_FLOAT(v7 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v25 = 0x1000000;
  v26[0] = 0x2000000;
  v26[1] = 1;
  v26[2] = 2;
  v26[3] = 256;
  v26[4] = 512;
  v26[5] = 0x10000;
  v26[6] = 0x20000;
  if ( COERCE_FLOAT(LODWORD(v5) & v7) >= 0.000081380211 || COERCE_FLOAT((_DWORD)a2[2] & v7) >= 0.000081380211 )
  {
    v8 = 3;
    if ( a2[2] > 0.0 )
    {
      v8 = 1;
      v6 = 3;
    }
    v21 = v8;
    v9 = 0;
    v10 = 2;
    v23 = v6;
    if ( v5 > 0.0 )
      v10 = 0;
    v22 = v10;
    v11 = 0;
    if ( v5 > 0.0 )
      v11 = 2;
    v24 = v11;
  }
  else
  {
    v9 = 0;
    v16 = 2;
    v17 = *a2 <= 0.0;
    v18 = a2[3];
    if ( *a2 > 0.0 )
      v16 = 0;
    v21 = v16;
    v19 = 0;
    if ( !v17 )
      v19 = 2;
    v23 = v19;
    v20 = 3;
    if ( v18 > 0.0 )
    {
      v20 = 1;
      v6 = 3;
    }
    v24 = v6;
    v22 = v20;
  }
  v12 = v26;
  v13 = 4LL;
  v14 = &v21;
  do
  {
    v15 = (unsigned int)*v14;
    if ( (v3 & v26[2 * v15 - 1]) != 0 )
      v9 |= *(v12 - 1);
    if ( (v3 & v26[2 * v15]) != 0 )
      v9 |= *v12;
    ++v14;
    v12 += 2;
    --v13;
  }
  while ( v13 );
  return v9;
}
