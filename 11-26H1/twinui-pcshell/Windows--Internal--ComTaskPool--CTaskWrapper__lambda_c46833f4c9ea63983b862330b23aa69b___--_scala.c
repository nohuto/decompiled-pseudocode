/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c46833f4c9ea63983b862330b23aa69b___::_scalar_deleting_destructor_ @ 0x1804F8830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c46833f4c9ea63983b862330b23aa69b___::_CTaskWrapper__lambda_c46833f4c9ea63983b862330b23aa69b___ @ 0x1804F751C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c46833f4c9ea63983b862330b23aa69b___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c46833f4c9ea63983b862330b23aa69b___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c46833f4c9ea63983b862330b23aa69b___::_CTaskWrapper__lambda_c46833f4c9ea63983b862330b23aa69b___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
