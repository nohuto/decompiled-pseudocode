/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::_scalar_deleting_destructor_ @ 0x1801EF380
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::_CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___ @ 0x1801EF3BC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::_CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
