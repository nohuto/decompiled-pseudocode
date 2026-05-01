/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5a7970b3483e4de1ddc73b2db688a0a___::_scalar_deleting_destructor_ @ 0x180478B90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5a7970b3483e4de1ddc73b2db688a0a___::_CTaskWrapper__lambda_c5a7970b3483e4de1ddc73b2db688a0a___ @ 0x180478760 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c5a7970b3483e4de1ddc73b2db688a0a___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5a7970b3483e4de1ddc73b2db688a0a___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c5a7970b3483e4de1ddc73b2db688a0a___::_CTaskWrapper__lambda_c5a7970b3483e4de1ddc73b2db688a0a___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
