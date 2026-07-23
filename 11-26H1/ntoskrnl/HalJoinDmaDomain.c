/*
 * XREFs of HalJoinDmaDomain @ 0x1405113F0
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x140782F1C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     HalpDmaDereferenceDomainObject @ 0x140346528 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaReferenceDomainObject @ 0x14034B1CC (HalpDmaReferenceDomainObject.c)
 *     HalpDmaGetAdapterVersion @ 0x14035E758 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateDomain @ 0x14058CB90 (HalpDmaAllocateDomain.c)
 *     HalpDmaIsDomainCompatible @ 0x14058D52C (HalpDmaIsDomainCompatible.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalJoinDmaDomain(__int64 a1, __int64 *a2)
{
  char v4; // bp
  __int64 Domain; // rdi
  int v6; // ebx
  __int64 v7; // rdx

  v4 = 0;
  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 3 && !*(_QWORD *)(a1 + 512) )
  {
    if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      Domain = HalpDmaAllocateDomain(a1);
      if ( !Domain )
      {
        v6 = -1073741670;
        goto LABEL_17;
      }
      v6 = 0;
    }
    else
    {
      Domain = *a2;
      if ( !Domain || !(unsigned __int8)HalpDmaIsDomainCompatible(a1, Domain) )
      {
        v6 = -1073741811;
        goto LABEL_17;
      }
      v6 = HalpDmaReferenceDomainObject(Domain);
      if ( v6 < 0 )
      {
LABEL_17:
        *(_QWORD *)(a1 + 512) = 0LL;
        if ( v4 )
          HalpDmaDereferenceDomainObject((__int64 *)Domain);
        return (unsigned int)v6;
      }
    }
    *(_QWORD *)(a1 + 512) = Domain;
    v4 = 1;
    if ( !*(_DWORD *)(Domain + 48) )
      return (unsigned int)v6;
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(Domain + 40), *(_QWORD *)(a1 + 544));
    if ( v6 >= 0 )
    {
      if ( *(_DWORD *)(Domain + 48) != 3 )
        return (unsigned int)v6;
      v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(Domain + 40), *(unsigned int *)(a1 + 252));
      if ( v6 >= 0 )
        return (unsigned int)v6;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 544), v7);
    }
    goto LABEL_17;
  }
  return 3221225485LL;
}
