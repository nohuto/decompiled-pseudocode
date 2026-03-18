/*
 * XREFs of MiSetProcessPartitionId @ 0x1404E2A98
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140ABD3B0 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetProcessPartitionId(__int64 a1, __int16 a2)
{
  *(_WORD *)(a1 + 1198) = a2;
}
