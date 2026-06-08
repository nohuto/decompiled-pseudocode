/*
 * XREFs of AcknowledgeWpsUpdateCallback @ 0x14000CC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AcknowledgeWpsUpdateCallback()
{
  return (unsigned int)_InterlockedExchange(&dword_140015FBC, 0);
}
