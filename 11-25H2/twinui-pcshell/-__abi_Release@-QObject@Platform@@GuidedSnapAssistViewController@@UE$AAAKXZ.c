/*
 * XREFs of ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@UE$AAAKXZ @ 0x180698290
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@W7E$AAAKXZ @ 0x1806982E0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WBA@E$AAAKXZ @ 0x1806982F0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WBI@E$AAAKXZ @ 0x180698300 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WCA@E$AAAKXZ @ 0x180698310 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WCI@E$AAAKXZ @ 0x180698320 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WDA@E$AAAKXZ @ 0x180698330 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WJI@E$AAAKXZ @ 0x180698340 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WKA@E$AAAKXZ @ 0x180698360 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WKA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180189EE4 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x180189FC8 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x1801D8228 (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__GuidedSnapAssistViewController__UE_AAAKXZ(__int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // ebx

  v1 = (Platform::Details::ControlBlock **)(a1 + 128);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 128));
  if ( !v3 )
  {
    GuidedSnapAssistViewController::~GuidedSnapAssistViewController((__int64 *)a1);
    __abi_FTMWeakRefData::ReleaseControlBlock(v1);
  }
  return v3;
}
