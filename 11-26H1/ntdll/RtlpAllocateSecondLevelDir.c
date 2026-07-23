/*
 * XREFs of RtlpAllocateSecondLevelDir @ 0x1800D5EF0
 * Callers:
 *     RtlExpandHashTable @ 0x1800D5B20 (RtlExpandHashTable.c)
 *     RtlpCreateHashTable @ 0x1800D5D78 (RtlpCreateHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateSecondLevelDir(char a1)
{
  return RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(16 << (a1 + 7)));
}
