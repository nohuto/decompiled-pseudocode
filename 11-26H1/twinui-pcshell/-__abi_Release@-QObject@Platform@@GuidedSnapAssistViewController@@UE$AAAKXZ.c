/*
 * XREFs of ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@UE$AAAKXZ @ 0x1806BFA40
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@W7E$AAAKXZ @ 0x1806BFA90 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WBA@E$AAAKXZ @ 0x1806BFAA0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WBI@E$AAAKXZ @ 0x1806BFAB0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WCA@E$AAAKXZ @ 0x1806BFAC0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WCI@E$AAAKXZ @ 0x1806BFAD0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WDA@E$AAAKXZ @ 0x1806BFAE0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WJI@E$AAAKXZ @ 0x1806BFAF0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WKA@E$AAAKXZ @ 0x1806BFB10 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WKA@E$AAAKXZ.c)
 * Callees:
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x18009B724 (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18017D914 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x18017D9F8 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
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
