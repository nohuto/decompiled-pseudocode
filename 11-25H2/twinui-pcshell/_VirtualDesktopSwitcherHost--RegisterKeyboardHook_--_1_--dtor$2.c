/*
 * XREFs of _VirtualDesktopSwitcherHost::RegisterKeyboardHook_::_1_::dtor$2 @ 0x1806DE9FF
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall VirtualDesktopSwitcherHost::RegisterKeyboardHook_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 64), (const struct std::nothrow_t *)1);
}
