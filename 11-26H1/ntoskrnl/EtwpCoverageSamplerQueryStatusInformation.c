/*
 * XREFs of EtwpCoverageSamplerQueryStatusInformation @ 0x140837518
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x140A31734 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 */

__int64 __fastcall EtwpCoverageSamplerQueryStatusInformation(_BYTE *a1)
{
  RtlWriteUCharToUser(a1, ExpSysDbgLock.UserWaitTime != 0);
  return 0LL;
}
