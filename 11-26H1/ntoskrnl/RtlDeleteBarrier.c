/*
 * XREFs of RtlDeleteBarrier @ 0x140622DC0
 * Callers:
 *     MiWritePteHighLevel @ 0x1406F2B98 (MiWritePteHighLevel.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FB178 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 */

int __fastcall RtlDeleteBarrier(_DWORD *a1)
{
  int result; // eax
  int i; // [rsp+30h] [rbp+8h] BYREF

  result = *a1 & 0x7FFFFFFF;
  for ( i = 0; a1[1] != result; result = *a1 & 0x7FFFFFFF )
    KeYieldProcessorEx(&i);
  return result;
}
