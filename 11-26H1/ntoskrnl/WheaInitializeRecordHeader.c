/*
 * XREFs of WheaInitializeRecordHeader @ 0x140451C20
 * Callers:
 *     HalpCreateMcaProcessorErrorRecord @ 0x140452784 (HalpCreateMcaProcessorErrorRecord.c)
 *     HalpCreateMcaMemoryErrorRecord @ 0x140454498 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpCreateNMIErrorRecord @ 0x14057EBC8 (HalpCreateNMIErrorRecord.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x1406D68BC (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     WheapGetTimestamp @ 0x140451C90 (WheapGetTimestamp.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall WheaInitializeRecordHeader(_DWORD *a1)
{
  memset_0(a1, 0, 0x80uLL);
  a1[4] |= 2u;
  *a1 = 1380274243;
  *((GUID *)a1 + 4) = WHEA_RECORD_CREATOR_GUID;
  *((_WORD *)a1 + 2) = 528;
  *(_DWORD *)((char *)a1 + 6) = -1;
  a1[3] = 3;
  WheapGetTimestamp(a1 + 6);
  *((_QWORD *)a1 + 12) = _InterlockedIncrement64(&WheapErrorRecordId);
  return 0LL;
}
