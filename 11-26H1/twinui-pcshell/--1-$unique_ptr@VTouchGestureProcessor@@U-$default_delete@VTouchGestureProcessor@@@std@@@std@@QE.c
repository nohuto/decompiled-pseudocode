/*
 * XREFs of ??1?$unique_ptr@VTouchGestureProcessor@@U?$default_delete@VTouchGestureProcessor@@@std@@@std@@QEAA@XZ @ 0x1802C6920
 * Callers:
 *     ??1TouchGestureComponent@@UEAA@XZ @ 0x18058B584 (--1TouchGestureComponent@@UEAA@XZ.c)
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x18058C020 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 *     _TouchGestureComponent::TouchGestureComponent_::_1_::dtor$1 @ 0x1806F7258 (_TouchGestureComponent--TouchGestureComponent_--_1_--dtor$1.c)
 * Callees:
 *     ??R?$default_delete@VTouchGestureProcessor@@@std@@QEBAXPEAVTouchGestureProcessor@@@Z @ 0x18058B618 (--R-$default_delete@VTouchGestureProcessor@@@std@@QEBAXPEAVTouchGestureProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<TouchGestureProcessor>::~unique_ptr<TouchGestureProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<TouchGestureProcessor>::operator()();
  return result;
}
