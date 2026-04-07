/*
 * XREFs of ??1CBorderBrushCache@CCachedBorderBrush@CWindowBorder@@QEAA@XZ @ 0x180090918
 * Callers:
 *     ??R?$default_delete@VCBorderBrushCache@CCachedBorderBrush@CWindowBorder@@@std@@QEBAXPEAVCBorderBrushCache@CCachedBorderBrush@CWindowBorder@@@Z @ 0x180090ADC (--R-$default_delete@VCBorderBrushCache@CCachedBorderBrush@CWindowBorder@@@std@@QEBAXPEAVCBorderB.c)
 * Callees:
 *     ??1CGraphicsResourceOwner@@IEAA@XZ @ 0x18001B464 (--1CGraphicsResourceOwner@@IEAA@XZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180087208 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std.c)
 */

void __fastcall CWindowBorder::CCachedBorderBrush::CBorderBrushCache::~CBorderBrushCache(
        CWindowBorder::CCachedBorderBrush::CBorderBrushCache *this)
{
  __int64 v2; // rcx

  CGraphicsResourceOwner::~CGraphicsResourceOwner(this);
  std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>::_Free_non_head<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>(
    v2,
    *((_QWORD *)this + 3));
  std::_Deallocate<16>(*((void **)this + 3), 0x20uLL);
}
