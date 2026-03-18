/*
 * XREFs of HsaIommuWaitCommand @ 0x14047E660
 * Callers:
 *     HsaInvalidateRemappingTableEntries @ 0x14047E348 (HsaInvalidateRemappingTableEntries.c)
 *     HsaFlushTbInternal @ 0x14047E3E0 (HsaFlushTbInternal.c)
 *     HsaFlushDeviceTbOnly @ 0x1405A9790 (HsaFlushDeviceTbOnly.c)
 *     HsaUpdateDeviceTableEntry @ 0x1405AAA50 (HsaUpdateDeviceTableEntry.c)
 * Callees:
 *     HsaIommuSendCommand @ 0x14047E698 (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaIommuWaitCommand(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = 0LL;
  v2[0] = 0x1000000000000000LL;
  return HsaIommuSendCommand(a1, v2);
}
