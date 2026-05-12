/*
 * XREFs of RaidUpdateZoneIoMetadata @ 0x14002B1E0
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x140015370 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x14006DF50 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     IsZonedWriteRequest @ 0x140034D00 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoSubmission @ 0x14007461C (RaidUpdateZoneIoSubmission.c)
 */

void __fastcall RaidUpdateZoneIoMetadata(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && (*(_BYTE *)(a1 + 136) & 2) != 0 )
  {
    v6 = 0;
    if ( (unsigned __int8)IsZonedWriteRequest(a1, a2, a3, &v6) )
    {
      RtlInterlockedClearBitRun(a1 + 3448, v6, 1LL);
      RaidUpdateZoneIoSubmission(a1 + 720, a2, a3);
    }
  }
}
