/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::_scalar_deleting_destructor_ @ 0x18021C400
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::_CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___ @ 0x1802BD798 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::_CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x178);
  return a1;
}
