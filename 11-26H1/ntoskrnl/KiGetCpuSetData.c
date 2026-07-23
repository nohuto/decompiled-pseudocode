/*
 * XREFs of KiGetCpuSetData @ 0x1404EB37C
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140B6DAC4 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall KiGetCpuSetData(int a1, int a2)
{
  return &stru_140FC11F0.SavedApcState.ApcListHead[0].Flink[a2 + (a1 << 6)];
}
