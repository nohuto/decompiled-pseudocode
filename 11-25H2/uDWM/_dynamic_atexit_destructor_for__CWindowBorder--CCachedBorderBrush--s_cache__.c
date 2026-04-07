/*
 * XREFs of _dynamic_atexit_destructor_for__CWindowBorder::CCachedBorderBrush::s_cache__ @ 0x1800EDDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180094F30 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std.c)
 */

void __fastcall dynamic_atexit_destructor_for__CWindowBorder::CCachedBorderBrush::s_cache__(__int64 a1)
{
  std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>::_Free_non_head<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>(
    a1,
    (_QWORD **)CWindowBorder::CCachedBorderBrush::s_cache);
  std::_Deallocate<16,0>((void *)CWindowBorder::CCachedBorderBrush::s_cache, (const struct std::nothrow_t *)0x20);
}
