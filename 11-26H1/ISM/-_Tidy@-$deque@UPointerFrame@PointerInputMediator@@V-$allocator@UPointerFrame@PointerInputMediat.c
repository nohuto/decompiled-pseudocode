/*
 * XREFs of ?_Tidy@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXXZ @ 0x18008A808
 * Callers:
 *     ??1?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA@XZ @ 0x18008A5F4 (--1-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediator@@.c)
 * Callees:
 *     ?pop_back@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x180085154 (-pop_back@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 *     ?_Reset_map@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXXZ @ 0x1800F4E0C (-_Reset_map@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputM.c)
 */

void __fastcall std::deque<PointerInputMediator::PointerFrame>::_Tidy(_QWORD *a1)
{
  while ( a1[4] )
    std::deque<PointerInputMediator::PointerFrame>::pop_back(a1);
  if ( a1[1] )
    std::deque<PointerInputMediator::PointerFrame>::_Reset_map(a1);
}
