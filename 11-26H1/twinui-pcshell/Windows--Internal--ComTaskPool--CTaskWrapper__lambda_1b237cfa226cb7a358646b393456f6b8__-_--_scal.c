/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__&_::_scalar_deleting_destructor_ @ 0x1801A7EF0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::_CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___ @ 0x180128CB8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8____::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::_CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
