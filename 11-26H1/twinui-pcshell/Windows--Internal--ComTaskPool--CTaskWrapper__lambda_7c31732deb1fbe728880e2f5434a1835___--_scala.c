/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c31732deb1fbe728880e2f5434a1835___::_scalar_deleting_destructor_ @ 0x1803AFAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c31732deb1fbe728880e2f5434a1835___::_CTaskWrapper__lambda_7c31732deb1fbe728880e2f5434a1835___ @ 0x1803ADEE4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7c31732deb1fbe728880e2f5434a1835___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c31732deb1fbe728880e2f5434a1835___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c31732deb1fbe728880e2f5434a1835___::_CTaskWrapper__lambda_7c31732deb1fbe728880e2f5434a1835___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x188);
  return a1;
}
