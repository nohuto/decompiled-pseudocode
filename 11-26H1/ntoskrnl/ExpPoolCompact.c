/*
 * XREFs of ExpPoolCompact @ 0x140346EA0
 * Callers:
 *     ExpPoolMgrCompactPools @ 0x140AC36CC (ExpPoolMgrCompactPools.c)
 * Callees:
 *     ExpHpCompactHeapCallback @ 0x140346EF0 (ExpHpCompactHeapCallback.c)
 */

__int64 __fastcall ExpPoolCompact(__int64 a1)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
    result = ExpHpCompactHeapCallback(*(_QWORD *)(a1 + 16 * (i + 5LL)), 0LL);
  return result;
}
