/*
 * XREFs of WmipAllocProviderId @ 0x140A9B408
 * Callers:
 *     WmipAllocRegEntry @ 0x1404AB318 (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
