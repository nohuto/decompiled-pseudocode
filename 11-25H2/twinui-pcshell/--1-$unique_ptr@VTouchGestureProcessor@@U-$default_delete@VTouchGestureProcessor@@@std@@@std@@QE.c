/*
 * XREFs of ??1?$unique_ptr@VTouchGestureProcessor@@U?$default_delete@VTouchGestureProcessor@@@std@@@std@@QEAA@XZ @ 0x1802CF604
 * Callers:
 *     ??1TouchGestureComponent@@UEAA@XZ @ 0x180567328 (--1TouchGestureComponent@@UEAA@XZ.c)
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180568280 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 *     _TouchGestureComponent::TouchGestureComponent_::_1_::dtor$1 @ 0x1806CEAE5 (_TouchGestureComponent--TouchGestureComponent_--_1_--dtor$1.c)
 * Callees:
 *     ??R?$default_delete@VTouchGestureProcessor@@@std@@QEBAXPEAVTouchGestureProcessor@@@Z @ 0x1805673BC (--R-$default_delete@VTouchGestureProcessor@@@std@@QEBAXPEAVTouchGestureProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<TouchGestureProcessor>::~unique_ptr<TouchGestureProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<TouchGestureProcessor>::operator()();
  return result;
}
