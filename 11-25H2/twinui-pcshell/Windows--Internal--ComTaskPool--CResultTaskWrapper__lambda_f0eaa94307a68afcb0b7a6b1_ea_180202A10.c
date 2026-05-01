/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f0eaa94307a68afcb0b7a6b106b2f57f___::_scalar_deleting_destructor_ @ 0x180202A10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f0eaa94307a68afcb0b7a6b106b2f57f___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
