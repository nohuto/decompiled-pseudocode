/*
 * XREFs of RtlProcessFlsData @ 0x18007EFE0
 * Callers:
 *     LdrShutdownProcess @ 0x18007ECA0 (LdrShutdownProcess.c)
 * Callees:
 *     <none>
 */

__int64 RtlProcessFlsData()
{
  return RtlpFlsDataCleanup(&RtlpFlsContext);
}
