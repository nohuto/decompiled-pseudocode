/*
 * XREFs of ?GetCSMRegistryState@DevicePostureHelpers@@YA?AW4CSMRegistryState@1@XZ @ 0x180116590
 * Callers:
 *     ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@W4DeviceConvertibility@1@@Z @ 0x180116130 (-CalculateDevicePostureMode@DevicePostureHelpers@@YA-AW4DevicePostureMode@Input@Internal@UI@Wind.c)
 * Callees:
 *     <none>
 */

__int64 DevicePostureHelpers::GetCSMRegistryState()
{
  unsigned int v0; // ebx
  int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v2 = 1;
  v0 = 0;
  v3 = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"System\\CurrentControlSet\\Control\\PriorityControl",
          L"ConvertibleSlateMode",
          0x10u,
          0LL,
          &v2,
          &v3) )
    return 2 - (unsigned int)(v2 != 0);
  return v0;
}
