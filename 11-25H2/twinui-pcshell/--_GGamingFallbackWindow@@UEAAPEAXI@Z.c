/*
 * XREFs of ??_GGamingFallbackWindow@@UEAAPEAXI@Z @ 0x1804E1D6C
 * Callers:
 *     ??_E?$heap_implements@VGamingFallbackWindow@@@impl@winrt@@W7EAAPEAXI@Z @ 0x1804E1D00 (--_E-$heap_implements@VGamingFallbackWindow@@@impl@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GamingFallbackWindow@@UEAA@XZ @ 0x1804E16E8 (--1GamingFallbackWindow@@UEAA@XZ.c)
 */

GamingFallbackWindow *__fastcall GamingFallbackWindow::`scalar deleting destructor'(
        GamingFallbackWindow *this,
        char a2)
{
  GamingFallbackWindow::~GamingFallbackWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
