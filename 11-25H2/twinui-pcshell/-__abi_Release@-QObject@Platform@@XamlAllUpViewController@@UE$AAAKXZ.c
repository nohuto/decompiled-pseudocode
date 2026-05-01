/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ @ 0x180189DE0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@W7E$AAAKXZ @ 0x180692750 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ @ 0x180692760 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAKXZ @ 0x180692770 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ @ 0x180692780 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAKXZ @ 0x180692790 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAKXZ @ 0x1806927A0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAKXZ @ 0x1806927B0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAKXZ @ 0x1806927D0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WKI@E$AAAKXZ @ 0x1806927F0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WKI@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180189EE4 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x180189FC8 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
 *     ??1XamlAllUpViewController@@AE$AAA@XZ @ 0x18068BCAC (--1XamlAllUpViewController@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlAllUpViewController__UE_AAAKXZ(__int64 a1)
{
  __abi_FTMWeakRefData *v1; // rsi
  unsigned int v3; // ebx

  v1 = (__abi_FTMWeakRefData *)(a1 + 128);
  v3 = __abi_FTMWeakRefData::Decrement(a1 + 128);
  if ( !v3 )
  {
    XamlAllUpViewController::~XamlAllUpViewController(a1);
    __abi_FTMWeakRefData::ReleaseControlBlock(v1);
  }
  return v3;
}
