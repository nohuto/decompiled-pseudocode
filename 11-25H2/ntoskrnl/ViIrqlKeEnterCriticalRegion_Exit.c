/*
 * XREFs of ViIrqlKeEnterCriticalRegion_Exit @ 0x140B8D6A0
 * Callers:
 *     <none>
 * Callees:
 *     ViIrqlLogCRStackTrace @ 0x140B8D718 (ViIrqlLogCRStackTrace.c)
 */

__int64 ViIrqlKeEnterCriticalRegion_Exit()
{
  return ViIrqlLogCRStackTrace();
}
