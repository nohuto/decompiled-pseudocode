/*
 * XREFs of ?OnGraphicsDeviceLost@CBorderBrushCache@CCachedBorderBrush@CWindowBorder@@UEAAXXZ @ 0x1800DE620
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180087208 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std.c)
 */

void __fastcall CWindowBorder::CCachedBorderBrush::CBorderBrushCache::OnGraphicsDeviceLost(
        CWindowBorder::CCachedBorderBrush::CBorderBrushCache *this)
{
  std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>::_Free_non_head<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>(
    (__int64)this,
    *((_QWORD *)this + 3));
  **((_QWORD **)this + 3) = *((_QWORD *)this + 3);
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = 0LL;
}
