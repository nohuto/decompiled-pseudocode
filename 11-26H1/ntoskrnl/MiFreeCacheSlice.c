/*
 * XREFs of MiFreeCacheSlice @ 0x140711B48
 * Callers:
 *     MiFreeLargeProcessPagesToCache @ 0x140711B98 (MiFreeLargeProcessPagesToCache.c)
 *     MiFreeProcessLargePageCache @ 0x140711EB0 (MiFreeProcessLargePageCache.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x1402A5600 (MiFreeLargeZeroPages.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14070B328 (MiCoalesceActivePagesIntoFree.c)
 */

__int64 __fastcall MiFreeCacheSlice(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 64) != 32LL )
    return MiFreeLargeZeroPages(a1, a2, 1);
  result = MiCoalesceActivePagesIntoFree(a1, *(_QWORD *)(a2 + 48), 1u);
  if ( !(_DWORD)result )
    return MiFreeLargeZeroPages(a1, a2, 1);
  return result;
}
