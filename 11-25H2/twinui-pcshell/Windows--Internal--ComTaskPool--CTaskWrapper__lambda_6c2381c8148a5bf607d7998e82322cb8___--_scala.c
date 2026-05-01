/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::_scalar_deleting_destructor_ @ 0x1801B8600
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::_CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___ @ 0x1801B863C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___::_CTaskWrapper__lambda_6c2381c8148a5bf607d7998e82322cb8___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
