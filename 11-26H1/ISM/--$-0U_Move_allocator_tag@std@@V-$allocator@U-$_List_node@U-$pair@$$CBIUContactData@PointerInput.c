/*
 * XREFs of ??$?0U_Move_allocator_tag@std@@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@$0A@@?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@AEAA@U_Move_allocator_tag@1@AEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@@Z @ 0x1800F49A8
 * Callers:
 *     ??0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z @ 0x180010340 (--0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x180059D60 (--0-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@AEAAXXZ @ 0x180063698 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBIUContactData@PointerInputMediator@@@std@@V-$alloc.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>(
        _QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  std::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>::_Alloc_sentinel_and_proxy(a1);
  return a1;
}
