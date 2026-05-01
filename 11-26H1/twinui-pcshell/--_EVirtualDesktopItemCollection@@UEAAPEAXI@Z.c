/*
 * XREFs of ??_EVirtualDesktopItemCollection@@UEAAPEAXI@Z @ 0x1804B1DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopItemCollection@@UEAA@XZ @ 0x1804B1C40 (--1VirtualDesktopItemCollection@@UEAA@XZ.c)
 */

VirtualDesktopItemCollection *__fastcall VirtualDesktopItemCollection::`vector deleting destructor'(
        VirtualDesktopItemCollection *this,
        char a2)
{
  VirtualDesktopItemCollection::~VirtualDesktopItemCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
