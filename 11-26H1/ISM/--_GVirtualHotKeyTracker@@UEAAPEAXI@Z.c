/*
 * XREFs of ??_GVirtualHotKeyTracker@@UEAAPEAXI@Z @ 0x1801B53D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualHotKeyTracker@@UEAA@XZ @ 0x1801B5354 (--1VirtualHotKeyTracker@@UEAA@XZ.c)
 */

void **__fastcall VirtualHotKeyTracker::`scalar deleting destructor'(void **this, char a2)
{
  VirtualHotKeyTracker::~VirtualHotKeyTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
