/*
 * XREFs of HsaIommuWaitCommand @ 0x140477FD0
 * Callers:
 *     HsaInvalidateRemappingTableEntries @ 0x140477CB8 (HsaInvalidateRemappingTableEntries.c)
 *     HsaFlushTbInternal @ 0x140477D50 (HsaFlushTbInternal.c)
 *     HsaFlushDeviceTbOnly @ 0x1405ABFA0 (HsaFlushDeviceTbOnly.c)
 *     HsaUpdateDeviceTableEntry @ 0x1405AD260 (HsaUpdateDeviceTableEntry.c)
 * Callees:
 *     HsaIommuSendCommand @ 0x140478008 (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaIommuWaitCommand(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = 0LL;
  v2[0] = 0x1000000000000000LL;
  return HsaIommuSendCommand(a1, v2);
}
