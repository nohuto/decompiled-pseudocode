/*
 * XREFs of ?CopyTo@PrimitiveUVDesc@@QEBAXPEAU1@PEBVMatrix3x3@@@Z @ 0x18016E3B0
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x1800BE540 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 * Callees:
 *     <none>
 */

void __fastcall PrimitiveUVDesc::CopyTo(PrimitiveUVDesc *this, struct PrimitiveUVDesc *a2, const struct Matrix3x3 *a3)
{
  float v3; // xmm5_4
  float v4; // xmm4_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm11_4
  float v11; // xmm12_4
  float v12; // xmm13_4
  float v13; // xmm14_4
  float v14; // xmm3_4
  float v15; // xmm15_4
  float v16; // [rsp+0h] [rbp-B8h]
  float v17; // [rsp+4h] [rbp-B4h]
  float v18; // [rsp+C0h] [rbp+8h]
  float v19; // [rsp+C8h] [rbp+10h]
  float v20; // [rsp+D0h] [rbp+18h]
  float v21; // [rsp+D8h] [rbp+20h]

  if ( a3 )
  {
    v3 = *(float *)a3;
    v4 = *((float *)a3 + 1);
    v19 = *((float *)this + 7);
    v18 = *((float *)this + 8);
    v5 = *((float *)a3 + 2);
    v6 = *((float *)a3 + 3);
    v21 = *((float *)this + 2);
    v20 = *((float *)this + 5);
    v7 = *((float *)a3 + 4);
    v8 = *((float *)a3 + 5);
    v17 = *((float *)a3 + 8);
    v9 = *((float *)this + 3);
    v10 = *(float *)this;
    v16 = *((float *)a3 + 7);
    v11 = *((float *)this + 4);
    v12 = *((float *)this + 6);
    v13 = *((float *)this + 1);
    v14 = (float)(v11 * v4) + (float)(v13 * *(float *)a3);
    v15 = *((float *)a3 + 6);
    *(float *)a2 = (float)((float)(v9 * v4) + (float)(*(float *)this * *(float *)a3)) + (float)(v12 * v5);
    *((float *)a2 + 1) = v14 + (float)(v19 * v5);
    *((float *)a2 + 2) = (float)((float)(v20 * v4) + (float)(v21 * v3)) + (float)(v18 * v5);
    *((float *)a2 + 3) = (float)((float)(v7 * v9) + (float)(v6 * v10)) + (float)(v8 * v12);
    *((float *)a2 + 4) = (float)((float)(v7 * v11) + (float)(v6 * v13)) + (float)(v8 * v19);
    *((float *)a2 + 5) = (float)((float)(v7 * v20) + (float)(v6 * v21)) + (float)(v8 * v18);
    *((float *)a2 + 6) = (float)((float)(v16 * v9) + (float)(v15 * v10)) + (float)(v17 * v12);
    *((float *)a2 + 7) = (float)((float)(v16 * v11) + (float)(v15 * v13)) + (float)(v17 * v19);
    *((float *)a2 + 8) = (float)((float)(v16 * v20) + (float)(v15 * v21)) + (float)(v17 * v18);
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)this;
    *((_OWORD *)a2 + 1) = *((_OWORD *)this + 1);
    *((_DWORD *)a2 + 8) = *((_DWORD *)this + 8);
  }
  *((_BYTE *)a2 + 52) = *((_BYTE *)this + 52);
  if ( *((_BYTE *)this + 52) )
    *(_OWORD *)((char *)a2 + 36) = *(_OWORD *)((char *)this + 36);
}
