/*
 * XREFs of ?HasAntialiasEdgeFlags@@YA_NW4D2D1_EDGE_FLAGS@@@Z @ 0x180144700
 * Callers:
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x18000E850 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x180144440 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     <none>
 */

bool __fastcall HasAntialiasEdgeFlags(int a1)
{
  int v1; // r8d
  bool v3; // dl
  bool v4; // al
  bool v5; // cl
  bool v6; // al

  v1 = a1 & 0x300;
  v3 = (a1 & 0x3000000) != 50331648;
  v4 = (a1 & 3) != 3;
  v5 = 0;
  v6 = v4 && v3;
  if ( v1 != 768 )
    v5 = v6;
  return !v5 || (a1 & 0x30000) == 196608;
}
