/*
 * XREFs of IommupDeviceGetFaultSettings @ 0x140534238
 * Callers:
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 * Callees:
 *     IommupGetDeviceCreationConfigEntry @ 0x1405A271C (IommupGetDeviceCreationConfigEntry.c)
 */

__int64 __fastcall IommupDeviceGetFaultSettings(__int64 a1, int *a2)
{
  unsigned int v2; // r8d
  int *v3; // r10
  int v4; // r9d
  __int64 DeviceCreationConfigEntry; // rax
  unsigned __int64 v6; // rax

  v2 = 0;
  v3 = a2;
  v4 = 0;
  if ( a1 )
  {
    DeviceCreationConfigEntry = IommupGetDeviceCreationConfigEntry(a1, 6LL);
    if ( DeviceCreationConfigEntry )
    {
      v6 = *(_QWORD *)(DeviceCreationConfigEntry + 24);
      if ( v6 < 2 )
      {
        if ( (v6 & 1) != 0 )
          v4 = 1;
      }
      else
      {
        v2 = -1073741776;
      }
    }
  }
  *v3 = v4;
  return v2;
}
