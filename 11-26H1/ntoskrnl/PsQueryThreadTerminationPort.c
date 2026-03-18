/*
 * XREFs of PsQueryThreadTerminationPort @ 0x14077FC00
 * Callers:
 *     sub_140713090 @ 0x140713090 (sub_140713090.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
