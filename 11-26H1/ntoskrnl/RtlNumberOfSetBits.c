/*
 * XREFs of RtlNumberOfSetBits @ 0x140358310
 * Callers:
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140357EBC (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     HvpGenerateLogEntryDirtyData @ 0x140358118 (HvpGenerateLogEntryDirtyData.c)
 *     RtlNumberOfClearBits @ 0x1403582F0 (RtlNumberOfClearBits.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x140359080 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x140511D00 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1408666FC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpApplyLegacyLogFile @ 0x140868C18 (HvpApplyLegacyLogFile.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     HvpGenerateLogEntry @ 0x1408BD3E8 (HvpGenerateLogEntry.c)
 *     HvFreeHivePartial @ 0x1408BE014 (HvFreeHivePartial.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409FA6E8 (PopEvaluateGlobalUserStatus.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 *     SepGetLowBoxNumberEntry @ 0x140A3E414 (SepGetLowBoxNumberEntry.c)
 *     PspQueryRateControlHistory @ 0x140A856AC (PspQueryRateControlHistory.c)
 *     MiReleaseDriverPtes @ 0x140A85EA8 (MiReleaseDriverPtes.c)
 *     HvWriteHivePrimaryFile @ 0x140AA80BC (HvWriteHivePrimaryFile.c)
 *     SepAddLuidToIndexEntry @ 0x140AB7B44 (SepAddLuidToIndexEntry.c)
 *     HvFoldBackUnreconciledData @ 0x140AE33FC (HvFoldBackUnreconciledData.c)
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int SizeOfBitMap; // r12d
  int v2; // r8d
  unsigned __int64 *Buffer; // rax
  unsigned int v4; // r9d
  unsigned int v5; // esi
  ULONG v6; // r11d
  int v7; // ebx
  unsigned int v8; // r14d
  unsigned int v9; // r10d
  int v10; // r15d
  unsigned int v11; // r9d
  int i; // edi
  char v13; // dl
  int v14; // edx
  __int64 v16; // r10
  int v17; // r9d
  char v18; // dl

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v2 = 0;
  Buffer = (unsigned __int64 *)BitMapHeader->Buffer;
  v4 = BitMapHeader->SizeOfBitMap >> 3;
  v5 = BitMapHeader->SizeOfBitMap & 7;
  v6 = 0;
  v7 = (unsigned __int8)Buffer & 7;
  v8 = v4 + (v5 != 0);
  if ( 8 - (unsigned __int64)((unsigned __int8)Buffer & 7) <= (unsigned __int64)BitMapHeader->SizeOfBitMap >> 3 )
  {
    v9 = 8 - v7;
    v17 = ((_BYTE)v4 - (8 - (_BYTE)v7)) & 7;
    v10 = v17 + 1;
    if ( !v5 )
      v10 = v17;
    v11 = v8 - v10 - v9;
  }
  else
  {
    v9 = v4 + ((BitMapHeader->SizeOfBitMap & 7) != 0);
    v10 = 0;
    v11 = 0;
  }
  for ( i = 0; v9; --v9 )
  {
    v13 = *(_BYTE *)Buffer;
    Buffer = (unsigned __int64 *)((char *)Buffer + 1);
    if ( i == v8 - 1 && v5 )
      v13 &= byte_1400327C0[SizeOfBitMap & 7];
    ++i;
    v6 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v13);
  }
  v14 = 0;
  if ( v11 )
  {
    if ( ((v11 + 7) & 0xFFFFFFF8) < 0x10 )
      goto LABEL_8;
    v16 = ((v11 - 9) >> 4) + 1;
    i += 16 * v16;
    do
    {
      v2 += __popcnt(*Buffer);
      v11 -= 16;
      v14 += __popcnt(Buffer[1]);
      Buffer += 2;
      --v16;
    }
    while ( v16 );
    if ( v11 )
    {
LABEL_8:
      v6 += __popcnt(*Buffer++);
      i += 8;
    }
    v6 += v14 + v2;
  }
  for ( ; v10; --v10 )
  {
    v18 = *(_BYTE *)Buffer;
    Buffer = (unsigned __int64 *)((char *)Buffer + 1);
    if ( i == v8 - 1 && (SizeOfBitMap & 7) != 0 )
      v18 &= byte_1400327C0[SizeOfBitMap & 7];
    ++i;
    v6 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v18);
  }
  return v6;
}
