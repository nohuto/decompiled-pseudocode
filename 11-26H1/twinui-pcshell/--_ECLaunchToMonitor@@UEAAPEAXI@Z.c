/*
 * XREFs of ??_ECLaunchToMonitor@@UEAAPEAXI@Z @ 0x1806803A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x180092310 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CLaunchToMonitor *__fastcall CLaunchToMonitor::`vector deleting destructor'(CLaunchToMonitor *this, char a2)
{
  *((_DWORD *)this + 15) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CLaunchToMonitor *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
