/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ @ 0x18017D810
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@W7E$AAAKXZ @ 0x1806B9C50 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ @ 0x1806B9C60 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAKXZ @ 0x1806B9C70 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ @ 0x1806B9C80 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAKXZ @ 0x1806B9C90 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAKXZ @ 0x1806B9CA0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAKXZ @ 0x1806B9CB0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAKXZ @ 0x1806B9CD0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WKI@E$AAAKXZ @ 0x1806B9CF0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WKI@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18017D914 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x18017D9F8 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
 *     ??1XamlAllUpViewController@@AE$AAA@XZ @ 0x1806B3094 (--1XamlAllUpViewController@@AE$AAA@XZ.c)
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
