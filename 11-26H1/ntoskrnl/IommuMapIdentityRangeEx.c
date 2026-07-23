/*
 * XREFs of IommuMapIdentityRangeEx @ 0x1404A2FD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x140474984 (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainMapLogicalRange @ 0x14047578C (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuDomainGetLogicalAddressRange @ 0x14049F2BC (HalpIommuDomainGetLogicalAddressRange.c)
 *     HalpIommuDomainMapIdentityRange @ 0x1404A31E4 (HalpIommuDomainMapIdentityRange.c)
 *     IommupValidateMdl @ 0x14050B374 (IommupValidateMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuMapIdentityRangeEx(ULONG_PTR a1, unsigned int a2, __int64 a3)
{
  int v3; // r9d
  signed __int64 v4; // rbx
  _QWORD *v5; // r12
  int v6; // r15d
  int v8; // r9d
  char v9; // r9
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  ULONG_PTR v13; // rax
  int LogicalAddressRange; // edi
  int v15; // eax
  __int64 v17; // rcx
  __int64 i; // rbx
  ULONG_PTR v19; // [rsp+20h] [rbp-30h]
  _QWORD *v20; // [rsp+28h] [rbp-28h]
  _QWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF
  char v22; // [rsp+90h] [rbp+40h]
  ULONG_PTR v24; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = 0LL;
  v5 = 0LL;
  v21[0] = 0LL;
  v6 = 0;
  v24 = 0LL;
  if ( v3 )
  {
    v8 = v3 - 1;
    if ( !v8 )
      return 0;
    if ( v8 != 2 )
      return (unsigned int)-1073741585;
  }
  if ( !*(_DWORD *)a3 )
  {
    if ( !(unsigned __int8)IommupValidateMdl(*(_QWORD *)(a3 + 8)) )
      return (unsigned int)-1073741583;
    v9 = 0;
    v10 = *(unsigned int *)(v17 + 40);
    v5 = (_QWORD *)(v17 + 8 * (((unsigned __int64)*(unsigned int *)(v17 + 44) >> 12) + 6));
LABEL_8:
    v22 = 0;
    goto LABEL_9;
  }
  if ( *(_DWORD *)a3 != 1 )
  {
    if ( *(_DWORD *)a3 != 2 )
      return (unsigned int)-1073741583;
    v9 = 0;
    v5 = *(_QWORD **)(a3 + 8);
    v10 = *(_QWORD *)(a3 + 16) << 12;
    goto LABEL_8;
  }
  v4 = *(_QWORD *)(a3 + 8);
  v9 = 1;
  v10 = *(_QWORD *)(a3 + 16);
  v22 = 1;
  if ( v4 % 4096 )
    return (unsigned int)-1073741583;
LABEL_9:
  if ( !v10 )
    return (unsigned int)-1073741583;
  v24 = v4;
  if ( v9 )
  {
    LogicalAddressRange = HalpIommuDomainGetLogicalAddressRange(a1, &v24, v10, 0LL, 0LL, v21);
    if ( LogicalAddressRange < 0 )
      return (unsigned int)LogicalAddressRange;
    v6 = 1;
    v15 = HalpIommuDomainMapLogicalRange(a1, a2, v4, v10, v24);
  }
  else
  {
    v11 = v5;
    while ( v6 < (int)(v10 >> 12) )
    {
      v12 = *(_QWORD *)(a1 + 64);
      v13 = *v11 << 12;
      v24 = v13;
      if ( v12 )
      {
        v20 = v21;
        v19 = 0LL;
        LogicalAddressRange = guard_dispatch_icall_no_overrides(v12, &v24);
        if ( LogicalAddressRange < 0 )
          goto LABEL_29;
      }
      else
      {
        v21[0] = v13;
      }
      ++v6;
      ++v11;
    }
    v15 = HalpIommuDomainMapIdentityRange(a1, a2, v5, v10 >> 12, v19, v20);
  }
  LogicalAddressRange = v15;
  if ( v15 < 0 )
  {
LABEL_29:
    if ( v6 > 0 )
    {
      if ( v22 )
      {
        HalpIommuDomainFreeLogicalAddressRange(a1, v24);
      }
      else
      {
        for ( i = v6 - 1; i >= 0; --i )
        {
          v24 = v5[i] << 12;
          HalpIommuDomainFreeLogicalAddressRange(a1, v24);
        }
      }
    }
  }
  return (unsigned int)LogicalAddressRange;
}
