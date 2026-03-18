/*
 * XREFs of WheaExitCriticalState @ 0x1406D4B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WheaExitCriticalState()
{
  _InterlockedDecrement(&WheapCriticalStateRefCount);
}
