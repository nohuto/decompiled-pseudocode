/*
 * XREFs of MiFreeCacheSlice @ 0x140716848
 * Callers:
 *     MiFreeLargeProcessPagesToCache @ 0x140716898 (MiFreeLargeProcessPagesToCache.c)
 *     MiFreeProcessLargePageCache @ 0x140716BA8 (MiFreeProcessLargePageCache.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14070FFD8 (MiCoalesceActivePagesIntoFree.c)
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
