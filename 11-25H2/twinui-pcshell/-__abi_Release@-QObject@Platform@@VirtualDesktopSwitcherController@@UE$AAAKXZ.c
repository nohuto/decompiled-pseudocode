/*
 * XREFs of ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ @ 0x1806998A0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@W7E$AAAKXZ @ 0x1806998F0 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WBA@E$AAAKXZ @ 0x180699900 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WBI@E$AAAKXZ @ 0x180699910 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WCA@E$AAAKXZ @ 0x180699920 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WCI@E$AAAKXZ @ 0x180699930 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WDA@E$AAAKXZ @ 0x180699940 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WJI@E$AAAKXZ @ 0x180699950 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WKA@E$AAAKXZ @ 0x180699970 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WKA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180189EE4 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x180189FC8 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
 *     ??1VirtualDesktopSwitcherController@@AE$AAA@XZ @ 0x1806990D0 (--1VirtualDesktopSwitcherController@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__VirtualDesktopSwitcherController__UE_AAAKXZ(__int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // ebx

  v1 = (Platform::Details::ControlBlock **)(a1 + 128);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 128));
  if ( !v3 )
  {
    VirtualDesktopSwitcherController::~VirtualDesktopSwitcherController((__int64 *)a1);
    __abi_FTMWeakRefData::ReleaseControlBlock(v1);
  }
  return v3;
}
