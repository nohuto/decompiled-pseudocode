/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c876813055a0f8eb90a291ca9ab0fec3___::_scalar_deleting_destructor_ @ 0x180539980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c876813055a0f8eb90a291ca9ab0fec3___::_CTaskWrapper__lambda_c876813055a0f8eb90a291ca9ab0fec3___ @ 0x180538ACC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c876813055a0f8eb90a291ca9ab0fec3___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c876813055a0f8eb90a291ca9ab0fec3___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c876813055a0f8eb90a291ca9ab0fec3___::_CTaskWrapper__lambda_c876813055a0f8eb90a291ca9ab0fec3___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x80);
  return a1;
}
