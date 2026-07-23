/*
 * XREFs of IommuMapLogicalRangeEx @ 0x140474E60
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x140474984 (HalpIommuDomainFreeLogicalAddressRange.c)
 *     IommupHvMapDeviceLogical @ 0x1404750C0 (IommupHvMapDeviceLogical.c)
 *     HalpIommuMapLogical @ 0x140475180 (HalpIommuMapLogical.c)
 *     HalpIommuDomainMapLogicalRange @ 0x14047578C (HalpIommuDomainMapLogicalRange.c)
 *     IommupValidateMdl @ 0x14050B374 (IommupValidateMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuMapLogicalRangeEx(
        ULONG_PTR a1,
        int a2,
        __int64 a3,
        ULONG_PTR *a4,
        __int64 a5,
        __int64 a6,
        ULONG_PTR *a7)
{
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r14
  ULONG_PTR *v10; // r10
  char v13; // r15
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // edi
  ULONG_PTR v17; // rax
  __int64 v18; // rsi
  int v19; // eax
  __int64 v21; // rcx
  ULONG_PTR v22; // [rsp+80h] [rbp+8h]

  v22 = 0LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD *)(a1 + 8);
  LODWORD(v9) = 0;
  v10 = a4;
  if ( v8 && v8 != 3 )
    return (unsigned int)-1073741585;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      v7 = *(_QWORD *)(a3 + 8);
      v14 = *(_QWORD *)(a3 + 16);
      v13 = 1;
      if ( v7 % 4096 )
        return (unsigned int)-1073741583;
    }
    else
    {
      if ( *(_DWORD *)a3 != 2 )
        return (unsigned int)-1073741583;
      v13 = 0;
      v9 = *(_QWORD *)(a3 + 8);
      v14 = *(_QWORD *)(a3 + 16) << 12;
    }
  }
  else
  {
    if ( !(unsigned __int8)IommupValidateMdl(*(_QWORD *)(a3 + 8)) )
      return (unsigned int)-1073741583;
    v13 = 0;
    v14 = *(unsigned int *)(v21 + 40);
    LODWORD(v9) = v21 + 8 * ((*(_DWORD *)(v21 + 44) >> 12) + 6);
  }
  if ( !v14 )
    return (unsigned int)-1073741583;
  v15 = *(_QWORD *)(a1 + 64);
  if ( v15 )
  {
    v16 = guard_dispatch_icall_no_overrides(v15, v10);
    if ( v16 < 0 )
      return (unsigned int)v16;
    v17 = 0LL;
  }
  else
  {
    if ( !v10 )
      return (unsigned int)-1073741637;
    v17 = *a4;
    if ( (*a4 & 0xFFF) != 0 )
      return (unsigned int)-1073741584;
    v22 = *a4;
  }
  if ( v13 )
  {
    v19 = HalpIommuDomainMapLogicalRange(a1, a2, v7, v14, v17);
  }
  else
  {
    v18 = v14 >> 12;
    if ( !HalpHvIommu || *(_BYTE *)(a1 + 52) )
      v19 = HalpIommuMapLogical(v15, *(_QWORD *)(a1 + 40), a2, v9, v18, v17);
    else
      v19 = IommupHvMapDeviceLogical(a1, v17);
  }
  v16 = v19;
  if ( v19 < 0 )
    HalpIommuDomainFreeLogicalAddressRange(a1, v22);
  else
    *a7 = v22;
  return (unsigned int)v16;
}
