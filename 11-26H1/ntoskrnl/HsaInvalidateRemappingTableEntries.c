/*
 * XREFs of HsaInvalidateRemappingTableEntries @ 0x140477CB8
 * Callers:
 *     HsaInvalidateRemappingTableEntry @ 0x140477CA0 (HsaInvalidateRemappingTableEntry.c)
 *     HsaUpdateRemappingDestination @ 0x1405AD5E0 (HsaUpdateRemappingDestination.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405AD79C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 * Callees:
 *     HsaIommuWaitCommand @ 0x140477FD0 (HsaIommuWaitCommand.c)
 *     HsaIommuSendCommand @ 0x140478008 (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaInvalidateRemappingTableEntries(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[1] = 0LL;
  v6[0] = 0x8000000000000000uLL;
  HsaIommuSendCommand(a1, v6);
  return HsaIommuWaitCommand(a1, a3);
}
