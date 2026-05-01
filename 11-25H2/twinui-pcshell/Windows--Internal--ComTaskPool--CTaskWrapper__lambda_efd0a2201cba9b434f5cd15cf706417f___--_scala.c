/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::_scalar_deleting_destructor_ @ 0x18050B020
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::_CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___ @ 0x18050AF08 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::_CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
