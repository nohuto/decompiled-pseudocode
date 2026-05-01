/*
 * XREFs of ??_EVirtualDesktopRegistryHelpers@@UEAAPEAXI@Z @ 0x18052AC70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopRegistryHelpers@@UEAA@XZ @ 0x18052AC40 (--1VirtualDesktopRegistryHelpers@@UEAA@XZ.c)
 */

HKEY *__fastcall VirtualDesktopRegistryHelpers::`vector deleting destructor'(HKEY *this, char a2)
{
  VirtualDesktopRegistryHelpers::~VirtualDesktopRegistryHelpers(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
