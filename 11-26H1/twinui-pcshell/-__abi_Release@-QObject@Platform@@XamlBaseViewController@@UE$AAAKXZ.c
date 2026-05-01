/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x1806C1AC0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@W7E$AAAKXZ @ 0x1806C1B10 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@WBA@E$AAAKXZ @ 0x1806C1B20 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@WBI@E$AAAKXZ @ 0x1806C1B30 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@WCA@E$AAAKXZ @ 0x1806C1B40 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@WCI@E$AAAKXZ @ 0x1806C1B50 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@WCI@E$AAAKXZ.c)
 * Callees:
 *     ??1XamlBaseViewController@@IE$AAA@XZ @ 0x18009B22C (--1XamlBaseViewController@@IE$AAA@XZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18017D914 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x18017D9F8 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlBaseViewController__UE_AAAKXZ(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 120));
  if ( !v2 )
  {
    XamlBaseViewController::~XamlBaseViewController((__int64 *)a1);
    __abi_FTMWeakRefData::ReleaseControlBlock((Platform::Details::ControlBlock **)(a1 + 120));
  }
  return v2;
}
