/*
 * XREFs of HvpCountSetRangesInVector @ 0x1408BD754
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x140358118 (HvpGenerateLogEntryDirtyData.c)
 *     HvpGenerateLogEntry @ 0x1408BD3E8 (HvpGenerateLogEntry.c)
 *     HvGetHiveLogFileStatus @ 0x1408BD598 (HvGetHiveLogFileStatus.c)
 *     HvpGenerateLogMetadata @ 0x1408BD694 (HvpGenerateLogMetadata.c)
 *     HvStoreModifiedData @ 0x1408BD840 (HvStoreModifiedData.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140415210 (RtlFindNextForwardRunClear.c)
 */

__int64 __fastcall HvpCountSetRangesInVector(PRTL_BITMAP BitMapHeader)
{
  ULONG v1; // edi
  unsigned int v2; // ebx
  ULONG NextForwardRunClear; // ecx
  ULONG StartingRunIndex; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  StartingRunIndex = 0;
  v2 = 0;
  while ( v1 < BitMapHeader->SizeOfBitMap )
  {
    NextForwardRunClear = RtlFindNextForwardRunClear(BitMapHeader, v1, &StartingRunIndex);
    if ( !NextForwardRunClear )
      return ++v2;
    if ( StartingRunIndex != v1 )
      ++v2;
    v1 = StartingRunIndex + NextForwardRunClear;
  }
  return v2;
}
