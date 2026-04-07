/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180074558
 * Callers:
 *     _CWindowBorder::CCachedBorderBrush::GetBorderBrush_::_1_::dtor$3 @ 0x1800E6EC2 (_CWindowBorder--CCachedBorderBrush--GetBorderBrush_--_1_--dtor$3.c)
 *     _std::list_std::weak_ptr_CWindowBorder::CCachedBorderBrush__std::allocator_std::weak_ptr_CWindowBorder::CCachedBorderBrush_____::emplace_std::shared_ptr_CWindowBorder::CCachedBorderBrush__&__::_1_::dtor$1 @ 0x1800E6F76 (_std--list_std--weak_ptr_CWindowBorder--CCachedBorderBrush__std--allocator_std--weak_ptr_CWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, 0x20uLL);
}
