/*
 * XREFs of SyspartGetSystemPartition @ 0x14089AA28
 * Callers:
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 * Callees:
 *     SiLogMessage @ 0x140774464 (SiLogMessage.c)
 *     SiGetSystemDeviceName @ 0x140AEB728 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x140B273D0 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetSystemPartition(void *a1, __int64 a2, __int64 a3)
{
  int SystemInformationString; // eax
  int SystemDeviceName; // ebx

  SystemInformationString = SiQuerySystemInformationString(SystemSystemPartitionInformation, a1);
  SystemDeviceName = SystemInformationString;
  if ( SystemInformationString >= 0
    || SystemInformationString != -1073741789
    && (SiLogMessage(
          3,
          L"System Partition Query failed. Will attempt Direct path. Status: %x",
          (unsigned int)SystemInformationString),
        SystemDeviceName = SiGetSystemDeviceName(SiGetSystemPartition, a1, 4096LL, a3),
        SystemDeviceName >= 0) )
  {
    SiLogMessage(2, L"System Partition Path: %ws", a1);
  }
  return (unsigned int)SystemDeviceName;
}
