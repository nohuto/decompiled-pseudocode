/*
 * XREFs of KiGetCpuSetData @ 0x1404F1D9C
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140B6A8B4 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall KiGetCpuSetData(int a1, int a2)
{
  return &stru_140FC01F0.SavedApcState.ApcListHead[0].Blink[a2 + (a1 << 6)];
}
