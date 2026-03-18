/*
 * XREFs of SyspartGetSystemPartition @ 0x140894628
 * Callers:
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 * Callees:
 *     SiLogMessage @ 0x140771464 (SiLogMessage.c)
 *     SiGetSystemDeviceName @ 0x140AE9378 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x140B25240 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetSystemPartition(__int64 a1, __int64 a2, __int64 a3)
{
  int SystemInformationString; // eax
  int SystemDeviceName; // ebx

  SystemInformationString = SiQuerySystemInformationString(98LL, a1, 4096LL, a3);
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
