/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180290918
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18029093C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, 0x50uLL);
}
