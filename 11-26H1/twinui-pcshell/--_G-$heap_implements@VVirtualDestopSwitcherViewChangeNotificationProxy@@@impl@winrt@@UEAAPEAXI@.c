/*
 * XREFs of ??_G?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@UEAAPEAXI@Z @ 0x1802206A4
 * Callers:
 *     ??_E?$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@W7EAAPEAXI@Z @ 0x1804A0270 (--_E-$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ @ 0x1800E5234 (--1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

VirtualDestopSwitcherViewChangeNotificationProxy *__fastcall winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::`scalar deleting destructor'(
        VirtualDestopSwitcherViewChangeNotificationProxy *a1,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  VirtualDestopSwitcherViewChangeNotificationProxy::~VirtualDestopSwitcherViewChangeNotificationProxy(a1, a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xE0);
  return a1;
}
