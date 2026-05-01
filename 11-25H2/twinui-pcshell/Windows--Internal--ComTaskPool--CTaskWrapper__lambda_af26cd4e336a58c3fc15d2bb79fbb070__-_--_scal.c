/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070__&_::_scalar_deleting_destructor_ @ 0x1802BE290
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070__&_::_CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070__&_ @ 0x180083504 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070__-_--_CTas.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070____::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070____::_CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070____((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
