/*
 * XREFs of RtlpAllocateEnvironmentHashTable @ 0x18009F7CC
 * Callers:
 *     RtlpInsertEnvironmentHashTableEntry @ 0x18009CF90 (RtlpInsertEnvironmentHashTableEntry.c)
 *     RtlpSetupEnvironmentHashTable @ 0x18009F748 (RtlpSetupEnvironmentHashTable.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateEnvironmentHashTable(SIZE_T Size)
{
  if ( NtCurrentPeb()->ProcessHeap )
    return RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, Size);
  else
    return 0LL;
}
