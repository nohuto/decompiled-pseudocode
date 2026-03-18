/*
 * XREFs of PnpGetRegistryDword @ 0x1404F4BE8
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x140B24300 (PipDmgGetDriverDmarCompatLevel.c)
 *     PipDmgGetDeviceDmarRegistryValue @ 0x140B387B8 (PipDmgGetDeviceDmarRegistryValue.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PnpQueryWatchdogTimeoutConfiguration @ 0x140CC4788 (PnpQueryWatchdogTimeoutConfiguration.c)
 *     PiUEventProcessRegistry @ 0x140CC5028 (PiUEventProcessRegistry.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1404FCFB8 (PnpValidateRegistryDword.c)
 *     IopGetRegistryValue @ 0x140A121A8 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
