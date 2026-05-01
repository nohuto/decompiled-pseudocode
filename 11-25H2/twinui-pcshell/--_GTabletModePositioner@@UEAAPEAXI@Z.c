/*
 * XREFs of ??_GTabletModePositioner@@UEAAPEAXI@Z @ 0x180224B70
 * Callers:
 *     ??_ETabletModePositioner@@WBI@EAAPEAXI@Z @ 0x1804F3FF0 (--_ETabletModePositioner@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TabletModePositioner@@UEAA@XZ @ 0x18007E224 (--1TabletModePositioner@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TabletModePositioner *__fastcall TabletModePositioner::`scalar deleting destructor'(
        TabletModePositioner *this,
        char a2)
{
  TabletModePositioner::~TabletModePositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x210);
  return this;
}
