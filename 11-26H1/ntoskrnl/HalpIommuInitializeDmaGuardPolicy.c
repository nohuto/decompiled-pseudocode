/*
 * XREFs of HalpIommuInitializeDmaGuardPolicy @ 0x1405902B4
 * Callers:
 *     HalpIommuInitSystem @ 0x140BF16E0 (HalpIommuInitSystem.c)
 * Callees:
 *     strstr @ 0x140537FA0 (strstr.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuInitializeDmaGuardPolicy(__int64 a1, __int64 a2)
{
  int v3; // ecx
  bool v5; // si
  const char *v6; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  if ( HalpHvIommu && HalpHvCpuManager )
  {
    v7 = 0;
    if ( HalpPrebootMode )
    {
      HalpDmaGuardEnabled = 0;
      return 0;
    }
    else
    {
      v3 = guard_dispatch_icall_no_overrides(&v7, a2);
      if ( v3 >= 0 )
      {
        HalpDmaGuardEnabled = v7;
        if ( v7 )
        {
          HalpIommuPolicy = 3;
          HalpIommuSecurityPolicy = 1;
        }
      }
    }
    return (unsigned int)v3;
  }
  else
  {
    v5 = 0;
    if ( a1 )
    {
      v6 = *(const char **)(a1 + 216);
      if ( v6 )
        v5 = strstr(v6, "DMAGUARDPOLICY=ENABLE") != 0LL;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 240) + 2648LL) & 8) != 0 || v5 )
        goto LABEL_15;
    }
    if ( HalpIommuDmaGuardTableOptIn )
    {
LABEL_15:
      HalpIommuPolicy = 3;
      HalpIommuSecurityPolicy = 1;
    }
    return 0LL;
  }
}
