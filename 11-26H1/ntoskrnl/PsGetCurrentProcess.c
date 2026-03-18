/*
 * XREFs of PsGetCurrentProcess @ 0x14044F990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
