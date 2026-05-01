/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___::_scalar_deleting_destructor_ @ 0x180454230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___::_CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___ @ 0x180453C04 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___::_scalar_deleting_destructor_(
        void *a1,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___::_CTaskWrapper__lambda_970a4c8158850becbf4915e24a83312a___(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
