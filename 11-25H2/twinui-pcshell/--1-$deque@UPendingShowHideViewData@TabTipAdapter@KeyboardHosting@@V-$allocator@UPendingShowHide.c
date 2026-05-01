/*
 * XREFs of ??1?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x1802BED10
 * Callers:
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x180178B58 (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 *     ??1?$queue@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@@std@@QEAA@XZ @ 0x1802D19C0 (--1-$queue@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$deque@UPendingShowHideView.c)
 * Callees:
 *     ?_Tidy@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAXXZ @ 0x1802BED3C (-_Tidy@-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPendingShow.c)
 */

void __fastcall std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::~deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>(
        void **a1)
{
  void *v2; // rcx

  std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
