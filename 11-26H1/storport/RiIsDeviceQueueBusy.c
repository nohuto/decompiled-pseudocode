/*
 * XREFs of RiIsDeviceQueueBusy @ 0x14005C9A4
 * Callers:
 *     RaidStallDeviceQueue @ 0x140028300 (RaidStallDeviceQueue.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1400A13C0 (RaUnitSetUnresponsiveAttribute.c)
 * Callees:
 *     <none>
 */

bool __fastcall RiIsDeviceQueueBusy(__int64 a1)
{
  return *(_DWORD *)(a1 + 28) || ((*(__int64 *)(a1 + 88) >> 2) & 0x3FFFFFFF) >= *(_DWORD *)(a1 + 4);
}
