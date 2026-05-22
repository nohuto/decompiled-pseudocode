/*
 * XREFs of ?pop_front@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x1800101AC
 * Callers:
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180010060 (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800683E8 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 * Callees:
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x1800101FC (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 */

void __fastcall std::deque<PointerInputMediator::PointerFrame>::pop_front(_QWORD *a1)
{
  PointerInputMediator::PointerFrame::~PointerFrame(*(PointerInputMediator::PointerFrame **)(a1[1]
                                                                                           + 8 * (a1[3] & (a1[2] - 1LL))));
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
  else
    ++a1[3];
}
