/*
 * XREFs of ?ClipRectAndEdgeFlags@@YA?AW4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@W41@01PEAU2@PEAW41@@Z @ 0x180144340
 * Callers:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1801438CC (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x180144440 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClipRectAndEdgeFlags(float *a1, int a2, float *a3, int a4, _OWORD *a5, _DWORD *a6)
{
  char v8; // al
  float v9; // xmm2_4
  unsigned int v10; // ecx
  char v11; // dl
  __int64 result; // rax
  float v13[6]; // [rsp+0h] [rbp-18h]

  if ( (float)(*a3 - *a1) > 0.0000011920929 )
  {
    v13[0] = *a3;
    v8 = 1;
  }
  else
  {
    v13[0] = *a1;
    v8 = 0;
  }
  v9 = a1[1];
  v10 = v8 != 0 ? 0x3000000 : 0;
  if ( (float)(a3[1] - v9) <= 0.0000011920929 )
  {
    v13[1] = v9;
  }
  else
  {
    v13[1] = a3[1];
    v10 |= 3u;
  }
  if ( (float)(a1[2] - a3[2]) <= 0.0000011920929 )
  {
    v13[2] = a1[2];
    v11 = 0;
  }
  else
  {
    v13[2] = a3[2];
    v11 = 1;
  }
  result = v10 | 0x300;
  if ( !v11 )
    result = v10;
  if ( (float)(a1[3] - a3[3]) <= 0.0000011920929 )
  {
    v13[3] = a1[3];
  }
  else
  {
    v13[3] = a3[3];
    result = (unsigned int)result | 0x30000;
  }
  *a5 = *(_OWORD *)v13;
  *a6 = a4 & result | a2 & ~(_DWORD)result;
  return result;
}
