/*
 * XREFs of KdpSysWriteBusData @ 0x140C1B3AC
 * Callers:
 *     KdSystemDebugControl @ 0x14077FDF0 (KdSystemDebugControl.c)
 *     KdpSetBusData @ 0x140C1B198 (KdpSetBusData.c)
 * Callees:
 *     HalSetBusDataByOffset @ 0x14042C360 (HalSetBusDataByOffset.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KdpSysWriteBusData(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        _DWORD *a7)
{
  int v7; // eax

  if ( a1 == PCIConfiguration )
    v7 = guard_dispatch_icall_no_overrides(a2, a3);
  else
    v7 = HalSetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = v7;
  return Length != v7 ? 0xC0000001 : 0;
}
