/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___::_scalar_deleting_destructor_ @ 0x1805E5550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___::_CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___ @ 0x1805E50A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___::_CTaskWrapper__lambda_8b5f1623488306f7e465df1f94f78972___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
