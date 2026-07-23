/*
 * XREFs of HvlGetVpSintMessagePage @ 0x1405BBD00
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1402F3138 (HvlpGetLpcbByLpIndex.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x1402F31A0 (HvlGetLpIndexFromProcessorIndex.c)
 */

struct _LIST_ENTRY *__fastcall HvlGetVpSintMessagePage(unsigned int a1)
{
  unsigned int LpIndexFromProcessorIndex; // eax

  LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(a1);
  return HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex)[2].Flink;
}
