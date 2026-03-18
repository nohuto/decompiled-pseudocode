/*
 * XREFs of PsGetCurrentThreadStackBase @ 0x1404CDDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackBase()
{
  return KeGetCurrentThread()->StackBase;
}
