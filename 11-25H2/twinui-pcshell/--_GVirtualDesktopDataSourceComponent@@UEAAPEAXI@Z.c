/*
 * XREFs of ??_GVirtualDesktopDataSourceComponent@@UEAAPEAXI@Z @ 0x1800E1AD0
 * Callers:
 *     ??_EVirtualDesktopDataSourceComponent@@WCI@EAAPEAXI@Z @ 0x18047E760 (--_EVirtualDesktopDataSourceComponent@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1VirtualDesktopDataSourceComponent@@UEAA@XZ @ 0x1800E1B0C (--1VirtualDesktopDataSourceComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
