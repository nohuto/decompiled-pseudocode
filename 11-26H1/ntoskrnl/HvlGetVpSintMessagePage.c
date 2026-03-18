/*
 * XREFs of HvlGetVpSintMessagePage @ 0x1405B9490
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1403E6258 (HvlpGetLpcbByLpIndex.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x1403E62C0 (HvlGetLpIndexFromProcessorIndex.c)
 */

struct _LIST_ENTRY *__fastcall HvlGetVpSintMessagePage(unsigned int a1)
{
  unsigned int LpIndexFromProcessorIndex; // eax

  LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(a1);
  return HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex)[2].Flink;
}
