/*
 * XREFs of SyspartGetFirmwarePartition @ 0x1407743C4
 * Callers:
 *     BiGetSystemPartition @ 0x140774324 (BiGetSystemPartition.c)
 * Callees:
 *     SiLogMessage @ 0x140774464 (SiLogMessage.c)
 *     SiGetSystemDeviceName @ 0x140AEB728 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x140B273D0 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetFirmwarePartition(void *a1, unsigned int a2, __int64 a3)
{
  int SystemInformationString; // eax
  int SystemDeviceName; // ebx

  SystemInformationString = SiQuerySystemInformationString(SystemFirmwarePartitionInformation, a1);
  SystemDeviceName = SystemInformationString;
  if ( SystemInformationString >= 0
    || SystemInformationString != -1073741789
    && (SiLogMessage(
          3LL,
          L"Firmware Partition Query failed. Will attempt Direct path. Status: %x",
          (unsigned int)SystemInformationString),
        SystemDeviceName = SiGetSystemDeviceName(SiGetFirmwareSystemPartition, a1, a2, a3),
        SystemDeviceName >= 0) )
  {
    SiLogMessage(2LL, L"System Firmware Partition Path: %ws", a1);
  }
  return (unsigned int)SystemDeviceName;
}
