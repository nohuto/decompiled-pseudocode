/*
 * XREFs of MiGetAvailablePagesExcludeSlists @ 0x14048CED8
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140865468 (MiAddPhysicalMemoryChunks.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesExcludeSlists(__int64 a1)
{
  return *(_QWORD *)(a1 + 22464);
}
