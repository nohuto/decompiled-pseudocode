/*
 * XREFs of ??1?$list@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@2@@std@@QEAA@XZ @ 0x1802865E0
 * Callers:
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$12 @ 0x1806D552A (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$12.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18028647C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX.c)
 */

void __fastcall std::list<std::pair<unsigned int const,KeyboardHosting::ViewState>>::~list<std::pair<unsigned int const,KeyboardHosting::ViewState>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x60);
}
