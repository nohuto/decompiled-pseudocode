/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb___::_scalar_deleting_destructor_ @ 0x1805506E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb___::_CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb___ @ 0x18042CAE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb___::_CTaskWrapper__lambda_bfcda2f4b09e169516dee7a5816294eb___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
