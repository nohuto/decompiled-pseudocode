/*
 * XREFs of ??_EUwpWindowManagerBridge@@UEAAPEAXI@Z @ 0x1804178B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1UwpWindowManagerBridge@@UEAA@XZ @ 0x180417334 (--1UwpWindowManagerBridge@@UEAA@XZ.c)
 */

UwpWindowManagerBridge *__fastcall UwpWindowManagerBridge::`vector deleting destructor'(
        UwpWindowManagerBridge *this,
        char a2)
{
  UwpWindowManagerBridge::~UwpWindowManagerBridge(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x138);
  return this;
}
