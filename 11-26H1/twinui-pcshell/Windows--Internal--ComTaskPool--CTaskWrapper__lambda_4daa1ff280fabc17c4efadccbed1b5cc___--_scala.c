/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4daa1ff280fabc17c4efadccbed1b5cc___::_scalar_deleting_destructor_ @ 0x1803AFA20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4daa1ff280fabc17c4efadccbed1b5cc___::_CTaskWrapper__lambda_4daa1ff280fabc17c4efadccbed1b5cc___ @ 0x1803ADE6C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4daa1ff280fabc17c4efadccbed1b5cc___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4daa1ff280fabc17c4efadccbed1b5cc___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4daa1ff280fabc17c4efadccbed1b5cc___::_CTaskWrapper__lambda_4daa1ff280fabc17c4efadccbed1b5cc___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
