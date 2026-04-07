/*
 * XREFs of ??_ECVirtualDesktopSwitch@@UEAAPEAXI@Z @ 0x1800C0730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1CVirtualDesktopSwitch@@UEAA@XZ @ 0x1800C0490 (--1CVirtualDesktopSwitch@@UEAA@XZ.c)
 */

void **__fastcall CVirtualDesktopSwitch::`vector deleting destructor'(void **this, char a2)
{
  CVirtualDesktopSwitch::~CVirtualDesktopSwitch(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
