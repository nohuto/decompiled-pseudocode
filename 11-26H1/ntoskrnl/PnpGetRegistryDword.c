/*
 * XREFs of PnpGetRegistryDword @ 0x1404EE1C8
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x140B267A0 (PipDmgGetDriverDmarCompatLevel.c)
 *     PipDmgGetDeviceDmarRegistryValue @ 0x140B3A9C8 (PipDmgGetDeviceDmarRegistryValue.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     PnpQueryWatchdogTimeoutConfiguration @ 0x140CCA868 (PnpQueryWatchdogTimeoutConfiguration.c)
 *     PiUEventProcessRegistry @ 0x140CCB108 (PiUEventProcessRegistry.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1404F64F8 (PnpValidateRegistryDword.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetRegistryDword(void *a1, __int64 a2, _DWORD *a3)
{
  int RegistryValue; // eax
  unsigned int *v5; // rcx
  unsigned int v6; // ebx

  *a3 = 0;
  RegistryValue = IopGetRegistryValue(a1);
  v5 = 0LL;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( (unsigned __int8)PnpValidateRegistryDword(0LL) )
      *a3 = *(unsigned int *)((char *)v5 + v5[2]);
    else
      v6 = -1073741271;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
