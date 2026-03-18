/*
 * XREFs of WheaIsLogSelHandlerInitialized @ 0x1406D7190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool WheaIsLogSelHandlerInitialized()
{
  return LODWORD(CmpCallbackListLock.PropagateBoostsEntry.Next) != 0;
}
