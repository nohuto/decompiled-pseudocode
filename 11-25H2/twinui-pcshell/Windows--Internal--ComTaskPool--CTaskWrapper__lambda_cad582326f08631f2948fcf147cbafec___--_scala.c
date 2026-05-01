/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___::_scalar_deleting_destructor_ @ 0x1803A6760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___::_CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___ @ 0x1803A4CA4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___::_CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
