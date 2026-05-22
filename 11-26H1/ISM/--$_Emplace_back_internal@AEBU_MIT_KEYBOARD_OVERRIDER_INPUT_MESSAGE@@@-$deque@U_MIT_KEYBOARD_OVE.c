/*
 * XREFs of ??$_Emplace_back_internal@AEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F56E8
 * Callers:
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800F58C0 (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@_K@Z @ 0x18008B294 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@.c)
 *     ?_Getblock@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEBA_J_K@Z @ 0x1800C7554 (-_Getblock@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMe.c)
 *     ?_Growmap@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAX_K@Z @ 0x1800F6CE4 (-_Growmap@-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER_.c)
 */

_OWORD *__fastcall std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Emplace_back_internal<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE const &>(
        _QWORD *a1,
        _OWORD *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  _OWORD *result; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Growmap();
  a1[3] &= a1[2] - 1LL;
  v4 = a1[3] + a1[4];
  v5 = std::deque<PointerInputMediator::PointerFrame>::_Getblock((__int64)a1, v4);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits>(0x170uLL);
  result = (_OWORD *)std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(
                       (__int64)a1,
                       v4);
  v7 = 2LL;
  do
  {
    *result = *a2;
    result[1] = a2[1];
    result[2] = a2[2];
    result[3] = a2[3];
    result[4] = a2[4];
    result[5] = a2[5];
    result[6] = a2[6];
    result += 8;
    v8 = a2[7];
    a2 += 8;
    *(result - 1) = v8;
    --v7;
  }
  while ( v7 );
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  ++a1[4];
  return result;
}
