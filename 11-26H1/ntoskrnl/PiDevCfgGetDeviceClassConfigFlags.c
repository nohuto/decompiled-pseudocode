/*
 * XREFs of PiDevCfgGetDeviceClassConfigFlags @ 0x140B3CD40
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x1407AEE54 (PpDevCfgProcessDeviceClass.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgGetDeviceClassConfigFlags(__int64 a1, char *a2, _DWORD *a3)
{
  int v7; // [rsp+80h] [rbp+18h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0;
  v8 = 1;
  v7 = 0;
  if ( (unsigned int)PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a1,
                       2,
                       a2,
                       0LL,
                       (__int64)DEVPKEY_DeviceClass_ConfigFilters,
                       &v8,
                       0LL,
                       0,
                       (__int64)&v7,
                       0) == -1073741789
    || (unsigned int)PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a1,
                       2,
                       a2,
                       0LL,
                       (__int64)DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                       &v8,
                       0LL,
                       0,
                       (__int64)&v7,
                       0) == -1073741789 )
  {
    *a3 |= 0x80000u;
  }
  return 0LL;
}
