/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___::_scalar_deleting_destructor_ @ 0x18046B980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___::_CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___ @ 0x1804687E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___::_CTaskWrapper__lambda_76f340d5d82a2ae937276f5837d7f307___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x60);
  return a1;
}
