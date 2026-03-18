/*
 * XREFs of WheaInitializeRecordHeader @ 0x14042DF20
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x14053C828 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpCreateMcaProcessorErrorRecord @ 0x14053CBE8 (HalpCreateMcaProcessorErrorRecord.c)
 *     HalpCreateNMIErrorRecord @ 0x1405414B8 (HalpCreateNMIErrorRecord.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x140651814 (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     WheapGetTimestamp @ 0x14042DF8C (WheapGetTimestamp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall WheaInitializeRecordHeader(_DWORD *a1)
{
  memset_0(a1, 0, 0x80uLL);
  *(_DWORD *)((char *)a1 + 6) = -1;
  a1[4] |= 2u;
  *((GUID *)a1 + 4) = WHEA_RECORD_CREATOR_GUID;
  *a1 = 1380274243;
  *((_WORD *)a1 + 2) = 528;
  a1[3] = 3;
  WheapGetTimestamp(a1 + 6);
  *((_QWORD *)a1 + 12) = _InterlockedIncrement64(&WheapErrorRecordId);
  return 0LL;
}
