/*
 * XREFs of SiGetSystemDisk @ 0x14089A8E0
 * Callers:
 *     <none>
 * Callees:
 *     SiTranslateSymbolicLink @ 0x14089B018 (SiTranslateSymbolicLink.c)
 *     SiGetEfiSystemDevice @ 0x14089B348 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemDisk @ 0x14089BB3C (SiGetBiosSystemDisk.c)
 *     SiIsWinPEBoot @ 0x140AC21E0 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x140B09BA0 (SiGetBootDeviceName.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetSystemDisk(int a1, PCWSTR *a2)
{
  char IsWinPEBoot; // bp
  __int64 v5; // rdx
  int BootDeviceName; // ebx
  int v7; // r8d
  int BiosSystemDisk; // eax
  int v9; // r8d
  int v11; // [rsp+60h] [rbp+18h] BYREF
  const WCHAR *v12; // [rsp+68h] [rbp+20h]

  v12 = 0LL;
  v11 = 1;
  IsWinPEBoot = SiIsWinPEBoot();
  BootDeviceName = SiGetBootDeviceName(0, (unsigned int)L"WindowsSysPartDevice", 0, 0, 0, (__int64)a2);
  if ( BootDeviceName < 0 )
  {
    if ( IsWinPEBoot
      || (LOBYTE(v7) = 1,
          BootDeviceName = SiGetBootDeviceName(0, (unsigned int)L"FirmwareBootDevice", v7, 0, 0, (__int64)a2),
          BootDeviceName < 0) )
    {
      if ( a1 == 1 )
      {
        BiosSystemDisk = SiGetBiosSystemDisk(a2);
      }
      else
      {
        if ( a1 != 2 )
          return (unsigned int)-1073741637;
        BiosSystemDisk = SiGetEfiSystemDevice(0LL, v5, a2);
      }
      if ( BiosSystemDisk >= 0 )
      {
        BootDeviceName = SiTranslateSymbolicLink(*a2);
        if ( BootDeviceName >= 0 )
        {
          ExFreePoolWithTag((PVOID)*a2, 0);
          *a2 = v12;
          return (unsigned int)BootDeviceName;
        }
        return 0;
      }
      BootDeviceName = BiosSystemDisk;
      if ( BiosSystemDisk == -1073740719 )
      {
        if ( IsWinPEBoot )
        {
          if ( a1 == 2 )
          {
            LOBYTE(v9) = 1;
            if ( (int)SiGetBootDeviceName(
                        0,
                        (unsigned int)L"FirmwareBootDevice",
                        v9,
                        (unsigned int)&v11,
                        1,
                        (__int64)a2) >= 0 )
              return 0;
          }
        }
      }
    }
  }
  return (unsigned int)BootDeviceName;
}
