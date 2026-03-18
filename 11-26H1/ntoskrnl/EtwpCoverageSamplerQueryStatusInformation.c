/*
 * XREFs of EtwpCoverageSamplerQueryStatusInformation @ 0x1408312D8
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x14093E61C (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 */

__int64 __fastcall EtwpCoverageSamplerQueryStatusInformation(_BYTE *a1)
{
  RtlWriteUCharToUser(a1, ExpSysDbgLock.QueuedScb != 0LL);
  return 0LL;
}
