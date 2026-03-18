/*
 * XREFs of ViIrqlKeEnterCriticalRegion_Exit @ 0x140C3C670
 * Callers:
 *     <none>
 * Callees:
 *     ViIrqlLogCRStackTrace @ 0x140C3C6E8 (ViIrqlLogCRStackTrace.c)
 */

__int64 ViIrqlKeEnterCriticalRegion_Exit()
{
  return ViIrqlLogCRStackTrace();
}
