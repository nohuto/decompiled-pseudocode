/*
 * XREFs of WheaEnterCriticalState @ 0x1406D4AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WheaEnterCriticalState()
{
  _InterlockedIncrement(&WheapCriticalStateRefCount);
}
