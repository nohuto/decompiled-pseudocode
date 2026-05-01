/*
 * XREFs of ??_EPerMonitorShellPositionerManager@@UEAAPEAXI@Z @ 0x180206E90
 * Callers:
 *     ??_EPerMonitorShellPositionerManager@@WBI@EAAPEAXI@Z @ 0x1804DAF80 (--_EPerMonitorShellPositionerManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1PerMonitorShellPositionerManager@@UEAA@XZ @ 0x180206ECC (--1PerMonitorShellPositionerManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PerMonitorShellPositionerManager *__fastcall PerMonitorShellPositionerManager::`vector deleting destructor'(
        PerMonitorShellPositionerManager *this,
        char a2)
{
  PerMonitorShellPositionerManager::~PerMonitorShellPositionerManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
