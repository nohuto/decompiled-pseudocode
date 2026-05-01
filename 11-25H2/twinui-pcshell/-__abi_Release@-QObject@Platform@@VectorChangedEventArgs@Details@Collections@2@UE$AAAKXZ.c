/*
 * XREFs of ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAKXZ @ 0x1806926D0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@W7E$AAAKXZ @ 0x180692710 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBA@E$AAAKXZ @ 0x180692720 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBI@E$AAAKXZ @ 0x180692730 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WCA@E$AAAKXZ @ 0x180692740 (-__abi_Release@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WCA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180189EE4 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ @ 0x180189FC8 (-ReleaseControlBlock@__abi_FTMWeakRefData@@QEAAXXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__VectorChangedEventArgs_Details_Collections_2_UE_AAAKXZ(__int64 a1)
{
  Platform::Details::ControlBlock **v1; // rdi
  unsigned int v2; // ebx

  v1 = (Platform::Details::ControlBlock **)(a1 + 48);
  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 48));
  if ( !v2 )
    __abi_FTMWeakRefData::ReleaseControlBlock(v1);
  return v2;
}
