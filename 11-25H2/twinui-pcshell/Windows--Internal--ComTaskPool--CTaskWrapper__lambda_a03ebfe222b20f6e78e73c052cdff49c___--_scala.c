/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___::_scalar_deleting_destructor_ @ 0x180311C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___::_CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___ @ 0x180311954 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___::_scalar_deleting_destructor_(
        void *a1,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___::_CTaskWrapper__lambda_a03ebfe222b20f6e78e73c052cdff49c___(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
