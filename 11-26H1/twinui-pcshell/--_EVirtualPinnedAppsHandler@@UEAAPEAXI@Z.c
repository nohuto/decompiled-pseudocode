/*
 * XREFs of ??_EVirtualPinnedAppsHandler@@UEAAPEAXI@Z @ 0x180563FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualPinnedAppsHandler@@UEAA@XZ @ 0x180563F74 (--1VirtualPinnedAppsHandler@@UEAA@XZ.c)
 */

VirtualPinnedAppsHandler *__fastcall VirtualPinnedAppsHandler::`vector deleting destructor'(
        VirtualPinnedAppsHandler *this,
        char a2)
{
  VirtualPinnedAppsHandler::~VirtualPinnedAppsHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
