/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___::_scalar_deleting_destructor_ @ 0x180398B80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___::_CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___ @ 0x1803986FC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___::_CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
