/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::_scalar_deleting_destructor_ @ 0x18020E3B0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___::_CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___ @ 0x1802B4804 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_76ebab358cbfe9072c97f7416da7a23a___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
