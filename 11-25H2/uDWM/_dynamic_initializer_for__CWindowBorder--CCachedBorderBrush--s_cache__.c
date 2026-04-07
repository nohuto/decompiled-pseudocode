/*
 * XREFs of _dynamic_initializer_for__CWindowBorder::CCachedBorderBrush::s_cache__ @ 0x180089E70
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

int __fastcall dynamic_initializer_for__CWindowBorder::CCachedBorderBrush::s_cache__(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  _QWORD *v2; // rax

  v2 = operator new[](0x20uLL, a2);
  *v2 = v2;
  v2[1] = v2;
  CWindowBorder::CCachedBorderBrush::s_cache = (__int64)v2;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CWindowBorder::CCachedBorderBrush::s_cache__);
}
