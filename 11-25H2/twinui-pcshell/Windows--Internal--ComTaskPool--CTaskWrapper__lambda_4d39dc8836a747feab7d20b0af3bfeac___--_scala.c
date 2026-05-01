/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___::_scalar_deleting_destructor_ @ 0x1801AE3F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4d39dc8836a747feab7d20b0af3bfeac_::__lambda_4d39dc8836a747feab7d20b0af3bfeac_ @ 0x1801AE438 (_lambda_4d39dc8836a747feab7d20b0af3bfeac_--__lambda_4d39dc8836a747feab7d20b0af3bfeac_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_4d39dc8836a747feab7d20b0af3bfeac_::__lambda_4d39dc8836a747feab7d20b0af3bfeac_(a1 + 4);
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
