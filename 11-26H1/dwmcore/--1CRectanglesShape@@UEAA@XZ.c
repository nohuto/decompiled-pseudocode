/*
 * XREFs of ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020000 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B7170 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1800DA580 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DAFB8 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801254E0 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18016E794 (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETD.c)
 *     ?GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180188540 (-GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801BD674 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1801FE400 (-SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitmapResource@@@Z @ 0x180201CBC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitma.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@M@Z @ 0x180203840 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_180203840.c)
 *     ?GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@@@Z @ 0x1802074FC (-GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@.c)
 *     ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1802661C0 (-HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180268440 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??1CCompositionDynamicTexture@@UEAA@XZ @ 0x18026A6E4 (--1CCompositionDynamicTexture@@UEAA@XZ.c)
 *     ?OnSurfaceChanged@CSurfaceBrush@@QEAAXXZ @ 0x1802841D8 (-OnSurfaceChanged@CSurfaceBrush@@QEAAXXZ.c)
 *     ?OnSurfaceContentRectChanging@CSurfaceBrush@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802843F4 (-OnSurfaceContentRectChanging@CSurfaceBrush@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_P.c)
 *     ?SetSurfaceDirtyRect@CSurfaceBrush@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180284774 (-SetSurfaceDirtyRect@CSurfaceBrush@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSI.c)
 *     _dynamic_atexit_destructor_for__CRectanglesShape::sc_emptyShape__ @ 0x1802B9F20 (_dynamic_atexit_destructor_for__CRectanglesShape--sc_emptyShape__.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRectanglesShape::~CRectanglesShape(CRectanglesShape *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r8
  char *v9; // rdi
  __int64 v10; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = &CRectanglesShape::`vftable';
  v2 = *((_QWORD *)this + 2);
  v3 = (*((_QWORD *)this + 3) - v2) >> 4;
  if ( v3 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v12, v2, v3);
    *((_QWORD *)this + 3) += -16 * v4;
  }
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 7) = 0LL;
  }
  v6 = *((_QWORD *)this + 2);
  v7 = (*((_QWORD *)this + 3) - v6) >> 4;
  if ( v7 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v12, v6, v7);
    *((_QWORD *)this + 3) += -16 * v8;
  }
  v9 = (char *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v9 != (char *)this + 40 && v9 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v9);
  }
  v10 = *((_QWORD *)this + 1);
  if ( v10 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
