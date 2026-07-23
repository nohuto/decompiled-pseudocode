/*
 * XREFs of ExpPoolCompact @ 0x140348F20
 * Callers:
 *     ExpPoolMgrCompactPools @ 0x140AC533C (ExpPoolMgrCompactPools.c)
 * Callees:
 *     ExpHpCompactHeapCallback @ 0x140348F70 (ExpHpCompactHeapCallback.c)
 */

__int64 __fastcall ExpPoolCompact(__int64 a1)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
    result = ExpHpCompactHeapCallback(*(_QWORD *)(a1 + 16 * (i + 5LL)), 0LL);
  return result;
}
