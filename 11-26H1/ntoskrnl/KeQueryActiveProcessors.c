/*
 * XREFs of KeQueryActiveProcessors @ 0x1404EB670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return *(KAFFINITY *)((char *)&stru_140FC01F0.116 + 4);
}
