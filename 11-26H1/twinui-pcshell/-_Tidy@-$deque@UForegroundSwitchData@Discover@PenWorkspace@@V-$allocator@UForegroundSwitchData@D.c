/*
 * XREFs of ?_Tidy@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@AEAAXXZ @ 0x180286280
 * Callers:
 *     ??1?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAA@XZ @ 0x180286250 (--1-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchData@Disco.c)
 * Callees:
 *     ?_Reset_map@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@AEAAXXZ @ 0x1803E8EA0 (-_Reset_map@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchD.c)
 */

__int64 __fastcall std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Tidy(_QWORD *a1)
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
    return std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Reset_map();
  return result;
}
