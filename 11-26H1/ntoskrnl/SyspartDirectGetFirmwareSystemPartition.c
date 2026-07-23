/*
 * XREFs of SyspartDirectGetFirmwareSystemPartition @ 0x14089AA00
 * Callers:
 *     <none>
 * Callees:
 *     SiGetSystemDeviceName @ 0x140AEB728 (SiGetSystemDeviceName.c)
 */

__int64 __fastcall SyspartDirectGetFirmwareSystemPartition(__int64 a1, unsigned int a2, __int64 a3)
{
  return SiGetSystemDeviceName(SiGetFirmwareSystemPartition, a1, a2, a3);
}
