/*
 * XREFs of IommupDeviceGetPasidSettings @ 0x14058A55C
 * Callers:
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 *     IommupDeviceEnableSvm @ 0x14078537C (IommupDeviceEnableSvm.c)
 * Callees:
 *     IommupGetDeviceCreationConfigEntry @ 0x1405A271C (IommupGetDeviceCreationConfigEntry.c)
 */

__int64 __fastcall IommupDeviceGetPasidSettings(__int64 a1, char *a2, char *a3, _BYTE *a4)
{
  char v4; // r10
  unsigned int v6; // ebx
  char v7; // di
  char v8; // r11
  __int64 DeviceCreationConfigEntry; // rax
  int v10; // ecx
  __int64 result; // rax

  v4 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( a1 )
  {
    DeviceCreationConfigEntry = IommupGetDeviceCreationConfigEntry(a1, 3LL);
    if ( DeviceCreationConfigEntry )
    {
      v10 = *(_DWORD *)(DeviceCreationConfigEntry + 24);
      if ( v10 )
      {
        if ( v10 == 1 )
          v4 = 1;
        else
          v6 = -1073741776;
      }
      else
      {
        v7 = 1;
      }
      v8 = *(_BYTE *)(DeviceCreationConfigEntry + 28);
    }
  }
  result = v6;
  *a3 = v7;
  *a4 = v8;
  *a2 = v4;
  return result;
}
