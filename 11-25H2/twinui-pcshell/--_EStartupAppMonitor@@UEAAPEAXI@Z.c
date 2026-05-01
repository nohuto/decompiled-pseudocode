/*
 * XREFs of ??_EStartupAppMonitor@@UEAAPEAXI@Z @ 0x180560618
 * Callers:
 *     ??_EStartupAppMonitor@@WCI@EAAPEAXI@Z @ 0x180560480 (--_EStartupAppMonitor@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1StartupAppMonitor@@UEAA@XZ @ 0x18055FFD0 (--1StartupAppMonitor@@UEAA@XZ.c)
 */

StartupAppMonitor *__fastcall StartupAppMonitor::`vector deleting destructor'(StartupAppMonitor *this, void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  StartupAppMonitor::~StartupAppMonitor(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2A0);
  return this;
}
