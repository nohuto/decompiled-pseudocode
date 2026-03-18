/*
 * XREFs of WmipAllocProviderId @ 0x140B416F8
 * Callers:
 *     WmipAllocRegEntry @ 0x1404E79BC (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
