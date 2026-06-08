/*
 * XREFs of AcknowledgeWpsUpdateCallback @ 0x14000EC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AcknowledgeWpsUpdateCallback()
{
  return (unsigned int)_InterlockedExchange(&dword_140019B8C, 0);
}
