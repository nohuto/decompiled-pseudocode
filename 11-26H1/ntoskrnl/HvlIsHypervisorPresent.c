/*
 * XREFs of HvlIsHypervisorPresent @ 0x1404EC050
 * Callers:
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     <none>
 */

_BOOL8 HvlIsHypervisorPresent()
{
  return HvlHypervisorConnected != 0;
}
