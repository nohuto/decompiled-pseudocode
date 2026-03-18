/*
 * XREFs of ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A1DB4
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1801438CC (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 *     ?_Reset@?$_Variant_base@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStrategy@4@@std@@QEAAXXZ @ 0x1801A1EC0 (-_Reset@-$_Variant_base@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStrate.c)
 *     ??$?0$01$$V$0A@@?$_Variant_storage_@$0A@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStrategy@4@@std@@QEAA@U?$integral_constant@_K$01@1@@Z @ 0x18020B7F4 (--$-0$01$$V$0A@@-$_Variant_storage_@$0A@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VC.c)
 *     ?Copy@?$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18025DAD8 (-Copy@-$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

void __fastcall CEdgeFlagsMap::Copy(
        CEdgeFlagsMap *this,
        const struct CEdgeFlagsMap *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  const struct CEdgeFlagsMap *v6; // r8
  FLOAT m12; // xmm1_4
  FLOAT m22; // xmm0_4
  FLOAT dx; // xmm1_4
  FLOAT dy; // xmm0_4
  __int128 v11; // xmm0
  unsigned int v12; // r8d
  _DWORD v13[10]; // [rsp+30h] [rbp-40h] BYREF
  FLOAT v14[6]; // [rsp+58h] [rbp-18h] BYREF

  std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Reset(this);
  *((_BYTE *)this + 24) = 0;
  if ( a2 && *((_BYTE *)a2 + 24) == 1 )
    v6 = a2;
  else
    v6 = 0LL;
  if ( v6 )
  {
    if ( a3 )
    {
      m12 = a3->m12;
      v13[0] = LODWORD(a3->m11);
      m22 = a3->m22;
      *(FLOAT *)&v13[1] = m12;
      v13[3] = LODWORD(a3->m21);
      dx = a3->dx;
      *(FLOAT *)&v13[4] = m22;
      dy = a3->dy;
      *(FLOAT *)&v13[6] = dx;
      *(FLOAT *)&v13[7] = dy;
      v13[2] = 0;
      v13[5] = 0;
      v13[8] = 1065353216;
    }
    v11 = *(_OWORD *)v6;
    v12 = *((_DWORD *)v6 + 4);
    *(_OWORD *)v14 = v11;
    CEdgeFlagsMap::AddEdgeFlags(
      (__int64)this,
      v14,
      v12,
      (FLOAT *)((unsigned __int64)v13 & -(__int64)(a3 != 0LL)),
      FLOAT_0_000081380211);
  }
  else if ( a2 && *((_BYTE *)a2 + 24) == 2 )
  {
    std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Reset(this);
    std::_Variant_storage_<0,std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Variant_storage_<0,std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>(this);
    *((_BYTE *)this + 24) = 2;
    CConvexPolygonEdgeMap<unsigned int>::Copy(this, a2, a3);
  }
}
