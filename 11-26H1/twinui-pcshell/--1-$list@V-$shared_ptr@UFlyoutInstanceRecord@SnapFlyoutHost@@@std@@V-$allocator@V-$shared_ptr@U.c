/*
 * XREFs of ??1?$list@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAA@XZ @ 0x1805B2864
 * Callers:
 *     _SnapFlyoutHost::OnFlyoutInstanceShutdown_::_1_::dtor$0 @ 0x1806F9840 (_SnapFlyoutHost--OnFlyoutInstanceShutdown_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1805B210C (--$_Free_non_head@V-$allocator@U-$_List_node@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@.c)
 */

void __fastcall std::list<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::~list<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>(
        void **a1)
{
  std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x20);
}
