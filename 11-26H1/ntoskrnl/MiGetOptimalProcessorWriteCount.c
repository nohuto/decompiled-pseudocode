/*
 * XREFs of MiGetOptimalProcessorWriteCount @ 0x1404D0810
 * Callers:
 *     MiInitializeZeroEngines @ 0x140B2A06C (MiInitializeZeroEngines.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetOptimalProcessorWriteCount(unsigned int a1, int a2, __int64 a3, int a4)
{
  return *(unsigned int *)(*(_QWORD *)(384LL * a1 + qword_140E2D838 + 376) + 8 * (a4 + 21LL * a2) + 164);
}
