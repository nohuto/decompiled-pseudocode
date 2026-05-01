/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___::_scalar_deleting_destructor_ @ 0x18045F560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___::_CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___ @ 0x18045C3C8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___::_CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
