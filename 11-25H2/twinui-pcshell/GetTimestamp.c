/*
 * XREFs of GetTimestamp @ 0x1802CEDF4
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801DDBB0 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     _lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator() @ 0x1801DDFA0 (_lambda_328cf9fe8e40f62dbe0573cdd1213578_--operator().c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER GetTimestamp()
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  return PerformanceCount;
}
