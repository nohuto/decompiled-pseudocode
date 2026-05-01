/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_::_scalar_deleting_destructor_ @ 0x180562370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_::_CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_ @ 0x180561FE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__-_--_CTas.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36____::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36____::_CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36____((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
