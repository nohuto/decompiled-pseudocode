/*
 * XREFs of ?_Tidy@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXXZ @ 0x1800F41D0
 * Callers:
 *     ??1?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@QEAA@XZ @ 0x1800F0CFC (--1-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?_Reset_map@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXXZ @ 0x1800F3F90 (-_Reset_map@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<KeyboardEvent>::_Tidy(_QWORD *a1)
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
    std::deque<KeyboardEvent>::_Reset_map((__int64)a1);
}
