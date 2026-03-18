/*
 * XREFs of ??0CThreadContext@@AEAA@XZ @ 0x180203284
 * Callers:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive4@@@Z @ 0x180009AF4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive4@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x180009B94 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCpuClipAntialiasDrawListEntry@@V1@@@SAPEAX_K@Z @ 0x180009C34 (-Alloc@-$CThreadLocalObjectCache@VCCpuClipAntialiasDrawListEntry@@V1@@@SAPEAX_K@Z.c)
 *     ??_GCCommonRenderingEffect@@MEAAPEAXI@Z @ 0x18001B330 (--_GCCommonRenderingEffect@@MEAAPEAXI@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18001B764 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18001E070 (-InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z @ 0x18001E36C (-Alloc@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAPEAX_K@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x180026DF0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ??_GCCpuClipAntialiasDrawListEntry@@UEAAPEAXI@Z @ 0x18002D220 (--_GCCpuClipAntialiasDrawListEntry@@UEAAPEAXI@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z @ 0x18002D734 (-Free@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAXPEAX@Z @ 0x1800373F0 (-Free@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180038840 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x18003AEBC (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18003D4D0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x18004CD80 (-IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z @ 0x180054C88 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z @ 0x18007B0D0 (-Alloc@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x18007BC70 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18007C360 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x18007DFEC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180082350 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180087C70 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180093290 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?Delete@CResource@@IEAAXXZ @ 0x180093CC0 (-Delete@CResource@@IEAAXXZ.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x180094404 (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180094C7C (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ??_ECReconstructableDrawListEntry_UVx2@@UEAAPEAXI@Z @ 0x18009D7F0 (--_ECReconstructableDrawListEntry_UVx2@@UEAAPEAXI@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18009F950 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18009FD9C (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x18009FE40 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800A0850 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800BA030 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800BAA70 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800C8C10 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800D9814 (-Alloc@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z @ 0x1800DDC94 (-Alloc@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z.c)
 *     ??2CRoundedRectangleShape@@SAPEAX_K@Z @ 0x1800DE5E4 (--2CRoundedRectangleShape@@SAPEAX_K@Z.c)
 *     ?ReleaseExclusive@CTreeLock@@QEAAXXZ @ 0x18014F560 (-ReleaseExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?AcquireExclusive@CTreeLock@@QEAAXXZ @ 0x18014F6D0 (-AcquireExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@PEAPEAV1@@Z @ 0x180176560 (-Create@CD2DLayer@@SAJAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS.c)
 *     ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x180176A50 (--_ECRoundedRectangleShape@@UEAAPEAXI@Z.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x1801829E0 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ??_GCDrawListEntry@@MEAAPEAXI@Z @ 0x180183110 (--_GCDrawListEntry@@MEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1801870B0 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x180187438 (-Alloc@-$CThreadLocalObjectCache@VCMultiPrimitiveDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAXPEAX@Z @ 0x18018769C (-Free@-$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasSinkContext@@@Z @ 0x180188090 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasSinkContext@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAPEAX_K@Z @ 0x180188AA8 (-Alloc@-$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAPEAX_K@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAPEAX_K@Z @ 0x180188CD8 (-Alloc@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAPEAX_K@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z @ 0x18018C2A8 (-Free@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

CThreadContext *__fastcall CThreadContext::CThreadContext(CThreadContext *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 2LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  return this;
}
