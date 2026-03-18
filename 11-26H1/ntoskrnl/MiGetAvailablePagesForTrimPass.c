/*
 * XREFs of MiGetAvailablePagesForTrimPass @ 0x1403B9C08
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402A65A8 (MiComputeSystemTrimCriteria.c)
 *     MiUpdatePartitionMemoryUsage @ 0x1402A6CA0 (MiUpdatePartitionMemoryUsage.c)
 *     MiAddWorkingSetEntries @ 0x1402EBAC0 (MiAddWorkingSetEntries.c)
 *     MiForcedTrim @ 0x1403B9340 (MiForcedTrim.c)
 *     MiWorkingSetVeryLarge @ 0x1403B99E0 (MiWorkingSetVeryLarge.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403E0ED8 (MiStoreUpdateMemoryConditions.c)
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
