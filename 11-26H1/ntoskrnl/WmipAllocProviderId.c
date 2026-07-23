/*
 * XREFs of WmipAllocProviderId @ 0x140B43708
 * Callers:
 *     WmipAllocRegEntry @ 0x1404E0D7C (WmipAllocRegEntry.c)
 * Callees:
 *     <none>
 */

__int64 WmipAllocProviderId()
{
  return (unsigned int)_InterlockedIncrement(&WmipProviderIdCounter);
}
