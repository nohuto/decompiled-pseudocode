/*
 * XREFs of PsGetCurrentProcessWin32Process @ 0x140445D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentProcessWin32Process()
{
  return KeGetCurrentThread()->ApcState.Process[1].Padding[2];
}
