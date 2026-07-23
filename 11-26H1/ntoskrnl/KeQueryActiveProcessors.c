/*
 * XREFs of KeQueryActiveProcessors @ 0x1404E4C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return *(KAFFINITY *)((char *)&stru_140FC11F0.116 + 4);
}
