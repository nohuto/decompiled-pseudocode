/*
 * XREFs of WheaEnterCriticalState @ 0x1406D8BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WheaEnterCriticalState()
{
  _InterlockedIncrement(&WheapCriticalStateRefCount);
}
