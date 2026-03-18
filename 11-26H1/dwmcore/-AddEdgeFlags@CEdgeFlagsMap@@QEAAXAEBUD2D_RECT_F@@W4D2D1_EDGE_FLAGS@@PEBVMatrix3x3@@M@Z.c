/*
 * XREFs of ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1801438CC
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A1DB4 (-Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801DD93C (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 * Callees:
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180036B30 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800949F0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?IsCompatibleTransform@CRectangleMapStrategy@CEdgeFlagsMap@@SA_NPEBVMatrix3x3@@@Z @ 0x180143BC0 (-IsCompatibleTransform@CRectangleMapStrategy@CEdgeFlagsMap@@SA_NPEBVMatrix3x3@@@Z.c)
 *     ?AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x180143C38 (-AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMat.c)
 *     ?ClipRectAndEdgeFlags@@YA?AW4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@W41@01PEAU2@PEAW41@@Z @ 0x180144340 (-ClipRectAndEdgeFlags@@YA-AW4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@W41@01PEAU2@PEAW41@@Z.c)
 *     ?_Reset@?$_Variant_base@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStrategy@4@@std@@QEAAXXZ @ 0x1801A1EC0 (-_Reset@-$_Variant_base@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStrate.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801A3D10 (--1-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KPEAVCC.c)
 *     ??$?0$01$$V$0A@@?$_Variant_storage_@$0A@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStrategy@4@@std@@QEAA@U?$integral_constant@_K$01@1@@Z @ 0x18020B7F4 (--$-0$01$$V$0A@@-$_Variant_storage_@$0A@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VC.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

char __fastcall CEdgeFlagsMap::AddEdgeFlags(__int64 a1, FLOAT *a2, unsigned int a3, FLOAT *a4, int a5)
{
  int v5; // esi
  char v10; // al
  int v11; // eax
  __int128 v12; // xmm0
  unsigned int v13; // ebx
  FLOAT v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  int v17; // xmm1_4
  const struct D2D_MATRIX_3X2_F *v18; // r8
  unsigned int v19; // eax
  unsigned int *v20; // r11
  struct D2D_MATRIX_3X2_F v22; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-28h]
  int v24; // [rsp+4Ch] [rbp-24h]
  int v25; // [rsp+50h] [rbp-20h]
  int v26; // [rsp+54h] [rbp-1Ch]

  v5 = 0;
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( *(_BYTE *)(a1 + 24) == 1
      && a1
      && !CEdgeFlagsMap::CRectangleMapStrategy::IsCompatibleTransform((const struct Matrix3x3 *)a4) )
    {
      v13 = *(_DWORD *)(a1 + 16);
      *(_OWORD *)&v22.m11 = *(_OWORD *)a1;
      std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Reset(a1);
      *(_BYTE *)(a1 + 24) = 0;
      std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Reset(a1);
      std::_Variant_storage_<0,std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Variant_storage_<0,std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>(a1);
      *(_BYTE *)(a1 + 24) = 2;
      CEdgeFlagsMap::CPolygonMapStrategy::AddEdgeFlags(a1, &v22, v13, 0LL, a5);
    }
  }
  else
  {
    if ( CEdgeFlagsMap::CRectangleMapStrategy::IsCompatibleTransform((const struct Matrix3x3 *)a4) )
    {
      if ( *(char *)(a1 + 24) != -1LL && (unsigned __int64)*(char *)(a1 + 24) >= 2 )
        std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>(a1);
      *(_DWORD *)a1 = -8388609;
      *(_DWORD *)(a1 + 4) = -8388609;
      v10 = 1;
      *(_DWORD *)(a1 + 8) = 2139095039;
      *(_QWORD *)(a1 + 12) = 2139095039LL;
    }
    else
    {
      std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Reset(a1);
      std::_Variant_storage_<0,std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Variant_storage_<0,std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>(a1);
      v10 = 2;
    }
    *(_BYTE *)(a1 + 24) = v10;
  }
  LOBYTE(v11) = *(_BYTE *)(a1 + 24);
  if ( (_BYTE)v11 == 1 )
  {
    if ( a1 )
    {
      if ( a4 )
      {
        v14 = a4[1];
        v22.dx = *a4;
        v23 = *((_DWORD *)a4 + 3);
        v15 = *((_DWORD *)a4 + 6);
        v22.dy = v14;
        v16 = *((_DWORD *)a4 + 4);
        v25 = v15;
        v24 = v16;
        v17 = *((_DWORD *)a4 + 7);
        *(_OWORD *)&v22.m11 = 0LL;
        v26 = v17;
        D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
          (D2DMatrixHelper *)a2,
          (const struct D2D_RECT_F *)v22.m[2],
          &v22,
          (struct D2D_RECT_F *)a4);
        v19 = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving((D2DMatrixHelper *)a3, &v22.dx, v18);
        LOBYTE(v11) = ClipRectAndEdgeFlags(a1, *v20, &v22, v19, a1, v20);
      }
      else
      {
        if ( (float)(*a2 - *(float *)a1) > 0.0000011920929 )
        {
          v22.m11 = *a2;
          v5 = 50331648;
        }
        else
        {
          v22.m11 = *(FLOAT *)a1;
        }
        if ( (float)(a2[1] - *(float *)(a1 + 4)) <= 0.0000011920929 )
        {
          v22.m12 = *(FLOAT *)(a1 + 4);
        }
        else
        {
          v22.m12 = a2[1];
          v5 |= 3u;
        }
        if ( (float)(*(float *)(a1 + 8) - a2[2]) <= 0.0000011920929 )
        {
          v22.m21 = *(FLOAT *)(a1 + 8);
        }
        else
        {
          v22.m21 = a2[2];
          v5 |= 0x300u;
        }
        if ( (float)(*(float *)(a1 + 12) - a2[3]) <= 0.0000011920929 )
        {
          v22.m22 = *(FLOAT *)(a1 + 12);
        }
        else
        {
          v22.m22 = a2[3];
          v5 |= 0x30000u;
        }
        v12 = *(_OWORD *)&v22.m11;
        v11 = a3 & v5 | *(_DWORD *)(a1 + 16) & ~v5;
        *(_DWORD *)(a1 + 16) = v11;
        *(_OWORD *)a1 = v12;
      }
    }
  }
  else if ( (_BYTE)v11 == 2 && a1 )
  {
    LOBYTE(v11) = CEdgeFlagsMap::CPolygonMapStrategy::AddEdgeFlags(a1, a2, a3, a4, a5);
  }
  return v11;
}
