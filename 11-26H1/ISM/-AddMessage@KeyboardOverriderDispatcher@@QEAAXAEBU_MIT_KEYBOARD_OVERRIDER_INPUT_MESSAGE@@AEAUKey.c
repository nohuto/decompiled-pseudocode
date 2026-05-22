/*
 * XREFs of ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800F58C0
 * Callers:
 *     ?ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F2F80 (-ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSA.c)
 * Callees:
 *     ??$_Emplace_back_internal@AEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F56E8 (--$_Emplace_back_internal@AEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@-$deque@U_MIT_KEYBOARD_OVE.c)
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F6268 (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800F6520 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 *     memcpy_s_3 @ 0x1800F6E70 (memcpy_s_3.c)
 */

void __fastcall KeyboardOverriderDispatcher::AddMessage(
        KeyboardOverriderDispatcher *this,
        const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *a2,
        struct KeyboardInputInfo *a3)
{
  rsize_t v6; // rdx
  rsize_t v7; // r9
  _QWORD *v8; // rcx

  if ( (*(_BYTE *)a3 & 4) != 0 )
  {
    if ( *((char *)a2 + 270) >= 0 && *((_QWORD *)this + 55) )
    {
      std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Emplace_back_internal<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE const &>(
        (_QWORD *)this + 3,
        a2);
      if ( !*((_BYTE *)this + 704) )
        memcpy_s_3((char *)this + 448, v6, (char *)a2 + 14, v7);
      KeyboardOverriderDispatcher::SendMessageToNarrator(this, a2, a3);
    }
    else
    {
      v8 = (_QWORD *)((char *)this + 24);
      if ( v8[4] )
        std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Emplace_back_internal<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE const &>(
          v8,
          a2);
      else
        KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(this, a2);
    }
  }
}
