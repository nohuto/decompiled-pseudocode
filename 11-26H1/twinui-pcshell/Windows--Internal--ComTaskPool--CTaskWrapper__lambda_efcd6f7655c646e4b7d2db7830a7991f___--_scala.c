/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___::_scalar_deleting_destructor_ @ 0x18020D470
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___::_CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___ @ 0x1802B9860 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___::_CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
