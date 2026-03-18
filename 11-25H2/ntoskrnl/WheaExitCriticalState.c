/*
 * XREFs of WheaExitCriticalState @ 0x14064FC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WheaExitCriticalState()
{
  _InterlockedDecrement(&WheapCriticalStateRefCount);
}
