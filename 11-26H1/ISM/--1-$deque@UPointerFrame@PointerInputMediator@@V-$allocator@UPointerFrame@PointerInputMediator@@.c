/*
 * XREFs of ??1?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA@XZ @ 0x18008A5F4
 * Callers:
 *     _dynamic_atexit_destructor_for__PointerInputMediator::s_frameLookaside__ @ 0x1801DDE50 (_dynamic_atexit_destructor_for__PointerInputMediator--s_frameLookaside__.c)
 *     _dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueue__ @ 0x1801DDED0 (_dynamic_atexit_destructor_for__PointerInputMediator--s_frameQueue__.c)
 * Callees:
 *     ?_Tidy@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXXZ @ 0x18008A808 (-_Tidy@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 */

__int64 __fastcall std::deque<PointerInputMediator::PointerFrame>::~deque<PointerInputMediator::PointerFrame>(
        __int64 *a1)
{
  __int64 v2; // rcx

  std::deque<PointerInputMediator::PointerFrame>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  return std::_Deallocate<16>(v2, 16LL);
}
