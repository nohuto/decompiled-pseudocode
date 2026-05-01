/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___::_scalar_deleting_destructor_ @ 0x18046B900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___::_CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___ @ 0x180468790 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___::_CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1B8);
  return a1;
}
