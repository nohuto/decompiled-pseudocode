/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::_scalar_deleting_destructor_ @ 0x18052EE70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::_CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___ @ 0x18052E5EC (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392_ea_18052E5EC.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___::_CResultTaskWrapper__lambda_9ed7a7ced0673f3c48cd8392bfbd9d70___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
