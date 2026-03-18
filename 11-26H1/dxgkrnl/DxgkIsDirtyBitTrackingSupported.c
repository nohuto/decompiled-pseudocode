/*
 * XREFs of DxgkIsDirtyBitTrackingSupported @ 0x14007107C
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1404279F8 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkIsDirtyBitTrackingSupported(__int64 a1)
{
  return *(_DWORD *)(a1 + 5168) & 1;
}
