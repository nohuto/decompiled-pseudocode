/*
 * XREFs of ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18009E24C
 * Callers:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18009E5C8 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D2750 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180198E90 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A76A0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x1801A7A80 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801B7070 (--1-$out_param_t@V-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrus.c)
 * Callees:
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x18009E7F0 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ??1CNineGridDrawListBrush@@UEAA@XZ @ 0x18009EDE8 (--1CNineGridDrawListBrush@@UEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z @ 0x18009F29C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z.c)
 */

void __fastcall std::default_delete<CNineGridDrawListBrush>::operator()(__int64 a1, CNineGridDrawListBrush *a2)
{
  struct CNineGridDrawListBrush *v3; // rcx
  CObjectCache *ObjectCache; // rax

  if ( a2 )
  {
    CNineGridDrawListBrush::~CNineGridDrawListBrush(a2);
    ObjectCache = CThreadContext::GetObjectCache(v3);
    CObjectCache::Free(ObjectCache, a2);
  }
}
