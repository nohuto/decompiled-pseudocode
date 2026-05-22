/*
 * XREFs of ??$_Emplace_back_internal@AEBUKeyboardEvent@@@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXAEBUKeyboardEvent@@@Z @ 0x1800F55E8
 * Callers:
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800F6520 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@_K@Z @ 0x18008B294 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@.c)
 *     ?_Getblock@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEBA_J_K@Z @ 0x1800C7554 (-_Getblock@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMe.c)
 *     ?_Growmap@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAX_K@Z @ 0x1800F6B78 (-_Growmap@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<KeyboardEvent>::_Emplace_back_internal<KeyboardEvent const &>(_QWORD *a1, _OWORD *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  _OWORD *v6; // rcx
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<KeyboardEvent>::_Growmap();
  a1[3] &= a1[2] - 1LL;
  v4 = a1[3] + a1[4];
  v5 = std::deque<PointerInputMediator::PointerFrame>::_Getblock((__int64)a1, v4);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits>(0x128uLL);
  v6 = (_OWORD *)std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(
                   (__int64)a1,
                   v4);
  v7 = 2LL;
  do
  {
    *v6 = *a2;
    v6[1] = a2[1];
    v6[2] = a2[2];
    v6[3] = a2[3];
    v6[4] = a2[4];
    v6[5] = a2[5];
    v6[6] = a2[6];
    v6 += 8;
    v8 = a2[7];
    a2 += 8;
    *(v6 - 1) = v8;
    --v7;
  }
  while ( v7 );
  *v6 = *a2;
  v6[1] = a2[1];
  result = *((_QWORD *)a2 + 4);
  *((_QWORD *)v6 + 4) = result;
  ++a1[4];
  return result;
}
