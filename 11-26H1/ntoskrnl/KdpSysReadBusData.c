/*
 * XREFs of KdpSysReadBusData @ 0x140C1B344
 * Callers:
 *     KdSystemDebugControl @ 0x14077FDF0 (KdSystemDebugControl.c)
 *     KdpGetBusData @ 0x140C19FF0 (KdpGetBusData.c)
 * Callees:
 *     HalGetBusDataByOffset @ 0x14042C5F0 (HalGetBusDataByOffset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KdpSysReadBusData(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        _DWORD *a7)
{
  int BusDataByOffset; // eax

  if ( a1 == PCIConfiguration )
    BusDataByOffset = guard_dispatch_icall_no_overrides(a2, a3);
  else
    BusDataByOffset = HalGetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = BusDataByOffset;
  return Length != BusDataByOffset ? 0xC0000001 : 0;
}
