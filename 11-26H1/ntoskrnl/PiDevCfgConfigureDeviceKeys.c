/*
 * XREFs of PiDevCfgConfigureDeviceKeys @ 0x140988AF0
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x1407ABE10 (PpDevCfgProcessDeviceClass.c)
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x14098C258 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x14098C5F0 (PiDevCfgConfigureDeviceDriver.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140AD10DC (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140B393C0 (PiDevCfgConfigureDeviceLocation.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1404FCFB8 (PnpValidateRegistryDword.c)
 *     PiDevCfgQueryResolveValue @ 0x1405DB494 (PiDevCfgQueryResolveValue.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140987D80 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1409880EC (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1409887D8 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgFreeResolveContext @ 0x140988CE4 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgInitResolveContext @ 0x140988D74 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgConfigureDeviceFilters @ 0x140B354B0 (PiDevCfgConfigureDeviceFilters.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeys(__int64 a1, __int64 a2, void *a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int inited; // edi
  unsigned int *v12; // rcx
  unsigned int *v13; // rcx
  unsigned int *v14; // rcx
  __int64 v15; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  __int128 v17; // [rsp+58h] [rbp-39h] BYREF
  _OWORD v18[2]; // [rsp+68h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF

  KeyHandle = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitResolveContext(a1, a3, v18);
  if ( inited >= 0 )
  {
    inited = PiDevCfgEnumDeviceKeys(a1, a2, a3, a4, 1, (__int64)PiDevCfgConfigureDeviceKeyCallback, (__int64)v18);
    if ( inited >= 0 )
    {
      if ( (a4 & 8) == 0
        || (inited = PiDevCfgConfigureDeviceInterfaces(*(_QWORD *)(a2 + 8), a3, (__int64)v18), inited >= 0) )
      {
        if ( (a4 & 0x10) == 0 || (inited = PiDevCfgConfigureSoftwareDevices(*(_QWORD *)(a2 + 16), a3), inited >= 0) )
        {
          if ( (a4 & 0x200) == 0 || (inited = PiDevCfgConfigureDeviceFilters(*(_QWORD *)(a2 + 16), a3), inited >= 0) )
          {
            LODWORD(v17) = 917516;
            *((_QWORD *)&v17 + 1) = L"Status";
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
            *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
            ObjectAttributes.RootDirectory = a3;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              if ( a6 )
              {
                if ( (int)PiDevCfgQueryResolveValue((__int64)v18, KeyHandle, (__int64)L"Reboot", &v15) >= 0 )
                {
                  if ( PnpValidateRegistryDword(v15) && *(unsigned int *)((char *)v12 + v12[2]) )
                    *a6 |= 0x40u;
                  ExFreePoolWithTag(v12, 0);
                }
                if ( (int)PiDevCfgQueryResolveValue((__int64)v18, KeyHandle, (__int64)L"ClassConfigured", &v15) >= 0 )
                {
                  if ( PnpValidateRegistryDword(v15) && *(unsigned int *)((char *)v13 + v13[2]) )
                    *a6 |= 2u;
                  ExFreePoolWithTag(v13, 0);
                }
              }
              if ( a5 && (int)PiDevCfgQueryResolveValue((__int64)v18, KeyHandle, (__int64)L"ConfigFlags", &v15) >= 0 )
              {
                if ( PnpValidateRegistryDword(v15) )
                  *a5 |= *(unsigned int *)((char *)v14 + v14[2]);
                ExFreePoolWithTag(v14, 0);
              }
            }
          }
        }
      }
    }
  }
  PiDevCfgFreeResolveContext(v18);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
