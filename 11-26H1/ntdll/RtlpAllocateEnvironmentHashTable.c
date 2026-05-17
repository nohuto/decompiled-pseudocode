/*
 * XREFs of RtlpAllocateEnvironmentHashTable @ 0x1800A069C
 * Callers:
 *     RtlpInsertEnvironmentHashTableEntry @ 0x18009DE60 (RtlpInsertEnvironmentHashTableEntry.c)
 *     RtlpSetupEnvironmentHashTable @ 0x1800A0618 (RtlpSetupEnvironmentHashTable.c)
 * Callees:
 *     <none>
 */

__int64 RtlpAllocateEnvironmentHashTable()
{
  if ( NtCurrentPeb()->ProcessHeap )
    return RtlAllocateHeap_0();
  else
    return 0LL;
}
