/*
 * XREFs of _dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueue__ @ 0x1801DDED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__PointerInputMediator::s_frameQueue__()
{
  return std::deque<PointerInputMediator::PointerFrame>::~deque<PointerInputMediator::PointerFrame>(&PointerInputMediator::s_frameQueue);
}
