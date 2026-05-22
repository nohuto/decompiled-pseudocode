/*
 * XREFs of ?_Tidy@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXXZ @ 0x18007C550
 * Callers:
 *     ??1?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA@XZ @ 0x18007C520 (--1-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@.c)
 * Callees:
 *     ?_Reset_map@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXXZ @ 0x18015DC8C (-_Reset_map@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@st.c)
 */

__int64 __fastcall std::deque<ShellGesturesClientProxy *>::_Tidy(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  while ( 1 )
  {
    result = a1[4];
    if ( !result )
      break;
    v2 = result - 1;
    a1[4] = v2;
    if ( !v2 )
      a1[3] = 0LL;
  }
  if ( a1[1] )
    return std::deque<ShellGesturesClientProxy *>::_Reset_map();
  return result;
}
