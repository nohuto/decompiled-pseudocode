/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::_scalar_deleting_destructor_ @ 0x1801FC640
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::_CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___ @ 0x1801FC67C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___--_CTask.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::_CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x178);
  return a1;
}
