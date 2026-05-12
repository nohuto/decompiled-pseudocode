/*
 * XREFs of RaidIsDeviceQueueLocked @ 0x14005BB5C
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1401BB140 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidIsDeviceQueueLocked(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 37);
}
