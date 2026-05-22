/*
 * XREFs of ??D?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@XZ @ 0x1800628FC
 * Callers:
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEBAAEAUPointerFrame@PointerInputMediator@@XZ @ 0x1800628F0 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::operator*(
        _QWORD *a1)
{
  return std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(*a1, a1[1]);
}
