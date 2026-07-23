/*
 * XREFs of RtlDllShutdownInProgress @ 0x1800CAE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_1801CA908 != 0;
}
