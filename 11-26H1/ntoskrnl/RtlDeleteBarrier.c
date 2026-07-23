/*
 * XREFs of RtlDeleteBarrier @ 0x140625E10
 * Callers:
 *     MiWritePteHighLevel @ 0x1406F7808 (MiWritePteHighLevel.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FFE48 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

NTSTATUS __cdecl RtlDeleteBarrier(PRTL_BARRIER Barrier)
{
  NTSTATUS result; // eax
  int i; // [rsp+30h] [rbp+8h] BYREF

  result = Barrier->Reserved1 & 0x7FFFFFFF;
  for ( i = 0; Barrier->Reserved2 != result; result = Barrier->Reserved1 & 0x7FFFFFFF )
    KeYieldProcessorEx(&i);
  return result;
}
