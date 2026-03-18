/*
 * XREFs of HvlIsHypervisorPresent @ 0x1404F2A70
 * Callers:
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

_BOOL8 HvlIsHypervisorPresent()
{
  return HvlHypervisorConnected != 0;
}
