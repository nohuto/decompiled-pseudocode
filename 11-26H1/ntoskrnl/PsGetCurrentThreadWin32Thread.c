/*
 * XREFs of PsGetCurrentThreadWin32Thread @ 0x140443FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID PsGetCurrentThreadWin32Thread()
{
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
