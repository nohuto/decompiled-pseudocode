/*
 * XREFs of RtlInterlockedOr32ToUser @ 0x14077F458
 * Callers:
 *     PspTrySetProcessPebThrottlingFlags @ 0x1407F14B0 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140B003D8 (PspApplyWorkingSetLimitsToProcess.c)
 * Callees:
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

__int64 __fastcall RtlInterlockedOr32ToUser(volatile void *a1, unsigned int a2)
{
  ProbeForRead(a1, 4uLL, 4u);
  _m_prefetchw((const void *)a1);
  return (unsigned int)_InterlockedOr((volatile signed __int32 *)a1, a2);
}
