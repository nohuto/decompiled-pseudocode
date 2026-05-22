/*
 * XREFs of ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@AEAAXXZ @ 0x180063698
 * Callers:
 *     ??0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180092BC8 (--0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ??$?0U_Move_allocator_tag@std@@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@$0A@@?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@AEAA@U_Move_allocator_tag@1@AEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@@Z @ 0x1800F49A8 (--$-0U_Move_allocator_tag@std@@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInput.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>::_Alloc_sentinel_and_proxy(
        _QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(56LL);
  *result = result;
  result[1] = result;
  *a1 = result;
  return result;
}
