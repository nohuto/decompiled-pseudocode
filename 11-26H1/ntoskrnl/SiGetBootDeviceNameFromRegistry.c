/*
 * XREFs of SiGetBootDeviceNameFromRegistry @ 0x140AC225C
 * Callers:
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x14089BDAC (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     SiGetBootDeviceName @ 0x140B09BA0 (SiGetBootDeviceName.c)
 * Callees:
 *     _wcslwr @ 0x140538A50 (_wcslwr.c)
 *     SiGetRegistryValue @ 0x140AC22E0 (SiGetRegistryValue.c)
 */

__int64 __fastcall SiGetBootDeviceNameFromRegistry(int a1, wchar_t **a2, __int64 a3, int a4)
{
  int RegistryValue; // edi
  wchar_t *v7; // rbx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *String; // [rsp+58h] [rbp+20h] BYREF

  String = 0LL;
  v8 = 0;
  RegistryValue = SiGetRegistryValue(
                    a1,
                    a1,
                    (unsigned int)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
                    a4,
                    (__int64)&String,
                    (__int64)&v8);
  if ( RegistryValue >= 0 )
  {
    if ( v8 < 4 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v7 = String;
      wcslwr(String);
      *a2 = v7;
    }
  }
  return (unsigned int)RegistryValue;
}
