/*
 * XREFs of SiGetFirmwareSystemPartition @ 0x1408943B0
 * Callers:
 *     SiGetSystemPartition @ 0x140B07A20 (SiGetSystemPartition.c)
 * Callees:
 *     SiLogMessage @ 0x140771464 (SiLogMessage.c)
 *     SiTranslateSymbolicLink @ 0x140894C18 (SiTranslateSymbolicLink.c)
 *     SiGetEfiSystemDevice @ 0x140894F48 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemPartition @ 0x14089586C (SiGetBiosSystemPartition.c)
 *     SiIsWinPEBoot @ 0x140AC0140 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x140B07A70 (SiGetBootDeviceName.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetFirmwareSystemPartition(int a1, PCWSTR *a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  char IsWinPEBoot; // r14
  int BootDeviceName; // ebx
  int BiosSystemPartition; // eax
  int v9; // r8d
  int v10; // esi
  int v12; // [rsp+60h] [rbp+18h] BYREF
  const WCHAR *v13; // [rsp+68h] [rbp+20h]

  v13 = 0LL;
  v12 = 1;
  IsWinPEBoot = SiIsWinPEBoot();
  if ( IsWinPEBoot
    || (LOBYTE(v5) = 1,
        BootDeviceName = SiGetBootDeviceName(1, (unsigned int)L"FirmwareBootDevice", v5, 0, 0, (__int64)a2),
        BootDeviceName < 0) )
  {
    if ( a1 == 1 )
    {
      BiosSystemPartition = SiGetBiosSystemPartition(a2);
    }
    else
    {
      if ( a1 != 2 )
        return (unsigned int)-1073741637;
      BiosSystemPartition = SiGetEfiSystemDevice(1LL, v4, a2);
    }
    v10 = BiosSystemPartition;
    if ( BiosSystemPartition >= 0 )
    {
      BootDeviceName = SiTranslateSymbolicLink(*a2);
      if ( BootDeviceName < 0 )
      {
        return 0;
      }
      else
      {
        ExFreePoolWithTag((PVOID)*a2, 0);
        *a2 = v13;
      }
    }
    else
    {
      BootDeviceName = BiosSystemPartition;
      if ( BiosSystemPartition == -1073740719 && IsWinPEBoot && a1 == 2 )
      {
        LOBYTE(v9) = 1;
        BootDeviceName = 0;
        if ( (int)SiGetBootDeviceName(1, (unsigned int)L"FirmwareBootDevice", v9, (unsigned int)&v12, 1, (__int64)a2) < 0 )
          BootDeviceName = v10;
        SiLogMessage(
          3,
          L"UEFI WinPE boot found ambiguous system partition. Falling back to Firmware Boot Device. Status: %x",
          (unsigned int)BootDeviceName);
      }
    }
  }
  return (unsigned int)BootDeviceName;
}
