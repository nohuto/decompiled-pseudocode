/*
 * XREFs of PsQueryThreadTerminationPort @ 0x140782700
 * Callers:
 *     sub_140717D80 @ 0x140717D80 (sub_140717D80.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
