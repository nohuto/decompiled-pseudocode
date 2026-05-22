/*
 * XREFs of ?_Tidy@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAXXZ @ 0x1800F420C
 * Callers:
 *     ??1?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@QEAA@XZ @ 0x1800F0D2C (--1-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_M.c)
 * Callees:
 *     ?_Reset_map@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAXXZ @ 0x1800F4018 (-_Reset_map@-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDE.c)
 */

void __fastcall std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Tidy(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  while ( 1 )
  {
    v1 = a1[4];
    if ( !v1 )
      break;
    v2 = v1 - 1;
    a1[4] = v2;
    if ( !v2 )
      a1[3] = 0LL;
  }
  if ( a1[1] )
    std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Reset_map((__int64)a1);
}
