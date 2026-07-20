/*
 * XREFs of SmpNtSerializeBoot @ 0x14000D240
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140002770 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpAsyncMemoryConfiguration @ 0x14000ED40 (SmpAsyncMemoryConfiguration.c)
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x140009220 (SmpEventWriteULONG.c)
 *     SmpEventWrite @ 0x14000D280 (SmpEventWrite.c)
 */

__int64 SmpNtSerializeBoot()
{
  unsigned int v0; // ebx

  SmpEventWrite(&SmssEvt_SerializeBoot_Start);
  v0 = NtSerializeBoot();
  SmpEventWriteULONG(&SmssEvt_SerializeBoot_Stop, v0);
  return v0;
}
