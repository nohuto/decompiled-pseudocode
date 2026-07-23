/*
 * XREFs of RtlGetFrame @ 0x180139500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PTEB_ACTIVE_FRAME RtlGetFrame(void)
{
  return NtCurrentTeb()->ActiveFrame;
}
