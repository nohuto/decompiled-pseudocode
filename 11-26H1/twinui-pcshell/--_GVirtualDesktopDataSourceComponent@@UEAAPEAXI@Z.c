/*
 * XREFs of ??_GVirtualDesktopDataSourceComponent@@UEAAPEAXI@Z @ 0x1800DAC64
 * Callers:
 *     ??_EVirtualDesktopDataSourceComponent@@WCI@EAAPEAXI@Z @ 0x18048F210 (--_EVirtualDesktopDataSourceComponent@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1VirtualDesktopDataSourceComponent@@UEAA@XZ @ 0x1800DACA0 (--1VirtualDesktopDataSourceComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

VirtualDesktopDataSourceComponent *__fastcall VirtualDesktopDataSourceComponent::`scalar deleting destructor'(
        VirtualDesktopDataSourceComponent *this,
        char a2)
{
  VirtualDesktopDataSourceComponent::~VirtualDesktopDataSourceComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
