/*
 * XREFs of MiSetProcessPartitionId @ 0x1404DC178
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetProcessPartitionId(__int64 a1, __int16 a2)
{
  *(_WORD *)(a1 + 1198) = a2;
}
