/*
 * XREFs of HvpCountSetRangesInVector @ 0x1408B7184
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x140356378 (HvpGenerateLogEntryDirtyData.c)
 *     HvpGenerateLogEntry @ 0x1408B6E18 (HvpGenerateLogEntry.c)
 *     HvGetHiveLogFileStatus @ 0x1408B6FC8 (HvGetHiveLogFileStatus.c)
 *     HvpGenerateLogMetadata @ 0x1408B70C4 (HvpGenerateLogMetadata.c)
 *     HvStoreModifiedData @ 0x1408B7270 (HvStoreModifiedData.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x14041D9C0 (RtlFindNextForwardRunClear.c)
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
