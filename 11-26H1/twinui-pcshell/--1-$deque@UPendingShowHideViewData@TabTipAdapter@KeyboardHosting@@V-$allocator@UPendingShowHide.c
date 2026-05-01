/*
 * XREFs of ??1?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x180285FCC
 * Callers:
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x180168FBC (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 *     ??1?$queue@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@@std@@QEAA@XZ @ 0x18028675C (--1-$queue@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$deque@UPendingShowHideView.c)
 * Callees:
 *     ?_Tidy@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAXXZ @ 0x180285FFC (-_Tidy@-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPendingShow.c)
 */

void __fastcall std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::~deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>(
        void **a1)
{
  void *v2; // rcx

  std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16>(v2, (struct std::nothrow_t *)0x10);
}
