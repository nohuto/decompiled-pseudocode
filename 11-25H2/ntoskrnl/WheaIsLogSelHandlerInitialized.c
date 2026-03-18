/*
 * XREFs of WheaIsLogSelHandlerInitialized @ 0x1406520C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool WheaIsLogSelHandlerInitialized()
{
  return LODWORD(WheapDispatchPtr.Dpc.SystemArgument2) != 0;
}
