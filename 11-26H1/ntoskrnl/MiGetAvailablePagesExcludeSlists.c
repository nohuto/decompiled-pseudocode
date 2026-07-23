/*
 * XREFs of MiGetAvailablePagesExcludeSlists @ 0x140486A18
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x14086B848 (MiAddPhysicalMemoryChunks.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesExcludeSlists(__int64 a1)
{
  return *(_QWORD *)(a1 + 22464);
}
