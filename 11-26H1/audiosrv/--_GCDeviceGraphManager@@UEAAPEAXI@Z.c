/*
 * XREFs of ??_GCDeviceGraphManager@@UEAAPEAXI@Z @ 0x1800FA5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDeviceGraphManager@@UEAA@XZ @ 0x1800F998C (--1CDeviceGraphManager@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CDeviceGraphManager::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CDeviceGraphManager::~CDeviceGraphManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
