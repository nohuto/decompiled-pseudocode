/*
 * XREFs of ?pop_front@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@QEAAXXZ @ 0x1800F6E50
 * Callers:
 *     ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800F5BA0 (-DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ.c)
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800F6050 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800F6520 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 * Callees:
 *     <none>
 */

void __fastcall std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::pop_front(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
    *(_QWORD *)(a1 + 24) = 0LL;
  else
    ++*(_QWORD *)(a1 + 24);
}
