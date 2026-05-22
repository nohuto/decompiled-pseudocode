/*
 * XREFs of ?pop_back@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x180085154
 * Callers:
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800683E8 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 *     ?_Tidy@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXXZ @ 0x18008A808 (-_Tidy@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 * Callees:
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x1800101FC (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 */

void __fastcall std::deque<PointerInputMediator::PointerFrame>::pop_back(_QWORD *a1)
{
  PointerInputMediator::PointerFrame::~PointerFrame(*(PointerInputMediator::PointerFrame **)(a1[1]
                                                                                           + 8
                                                                                           * ((a1[2] - 1LL) & (a1[3] - 1LL + a1[4]))));
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
}
