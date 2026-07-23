/*
 * XREFs of MiGetAvailablePagesForTrimPass @ 0x1403C3B08
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402A59C4 (MiComputeSystemTrimCriteria.c)
 *     MiUpdatePartitionMemoryUsage @ 0x1402A60BC (MiUpdatePartitionMemoryUsage.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     MiForcedTrim @ 0x1403C3240 (MiForcedTrim.c)
 *     MiWorkingSetVeryLarge @ 0x1403C38E0 (MiWorkingSetVeryLarge.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403E40C8 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesForTrimPass(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 i; // rdx

  result = *(_QWORD *)(a1 + 3408) + *(_QWORD *)(a1 + 3280);
  for ( i = a1 + 3648; i < a1 + 4176; i += 88LL )
    result += *(_QWORD *)(i + 16);
  return result;
}
