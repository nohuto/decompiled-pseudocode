/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___::_scalar_deleting_destructor_ @ 0x180305340
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___::_CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___ @ 0x180304824 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___::_CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
