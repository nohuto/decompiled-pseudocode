/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_::_scalar_deleting_destructor_ @ 0x18035D710
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_::_CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__&_ @ 0x180110AAC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce__-_--_CTas.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce____::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce____::_CTaskWrapper__lambda_3fd5a9359bd88b84e59fbdca2ad299ce____((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
