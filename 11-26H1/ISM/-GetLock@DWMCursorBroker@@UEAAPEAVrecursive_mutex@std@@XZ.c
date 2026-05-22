/*
 * XREFs of ?GetLock@DWMCursorBroker@@UEAAPEAVrecursive_mutex@std@@XZ @ 0x180074960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct std::recursive_mutex *__fastcall DWMCursorBroker::GetLock(DWMCursorBroker *this)
{
  return (struct std::recursive_mutex *)&DWMCursorBroker::s_lock;
}
