/*
 * XREFs of PiDevCfgQueryPolicyEnabled @ 0x1407AD9D8
 * Callers:
 *     PiDevCfgReadDriverPolicy @ 0x1407ADD30 (PiDevCfgReadDriverPolicy.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140B1D234 (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1404F64F8 (PnpValidateRegistryDword.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyEnabled(void *a1, __int64 a2, bool *a3)
{
  int v4; // ebx
  int RegistryValue; // eax
  unsigned int *v6; // rcx
  unsigned int v7; // edi

  v4 = 0;
  *a3 = 0;
  RegistryValue = IopGetRegistryValue(a1);
  v6 = 0LL;
  v7 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( PnpValidateRegistryDword(0LL) )
      v4 = *(unsigned int *)((char *)v6 + v6[2]);
    *a3 = v4 == 1;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
