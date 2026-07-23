/*
 * XREFs of IommuUnmapIdentityRangeEx @ 0x140474620
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainUnmapIdentityRange @ 0x140474774 (HalpIommuDomainUnmapIdentityRange.c)
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x140474984 (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404749BC (HalpIommuDomainUnmapLogicalRange.c)
 *     IommupValidateMdl @ 0x14050B374 (IommupValidateMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuUnmapIdentityRangeEx(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // rbx
  __int64 v4; // r14
  int v6; // r8d
  char v7; // r8
  unsigned __int64 v8; // rdi
  __int64 i; // rbx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0LL;
  v4 = 0LL;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( !v6 )
      return 0LL;
    if ( v6 != 2 )
      return 3221225711LL;
  }
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v3 = *(_QWORD *)(a2 + 8);
      v8 = *(_QWORD *)(a2 + 16);
      v7 = 1;
      if ( v3 % 4096 )
        return 3221225712LL;
    }
    else
    {
      if ( *(_DWORD *)a2 != 2 )
        return 3221225712LL;
      v7 = 0;
      v4 = *(_QWORD *)(a2 + 8);
      v8 = *(_QWORD *)(a2 + 16) << 12;
    }
  }
  else
  {
    if ( !(unsigned __int8)IommupValidateMdl(*(_QWORD *)(a2 + 8)) )
      return 3221225712LL;
    v7 = 0;
    v8 = *(unsigned int *)(v12 + 40);
    v4 = v12 + 8 * (((unsigned __int64)*(unsigned int *)(v12 + 44) >> 12) + 6);
  }
  if ( !v8 )
    return 3221225712LL;
  if ( v7 )
  {
    result = HalpIommuDomainFreeLogicalAddressRange(a1, v3);
    if ( (int)result >= 0 )
    {
      v13 = v8;
      return HalpIommuDomainUnmapLogicalRange(a1, v3, &v13, 0LL);
    }
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < v8 >> 12; i = (unsigned int)(i + 1) )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        result = guard_dispatch_icall_no_overrides(v10, *(_QWORD *)(v4 + 8 * i) << 12);
        if ( (int)result < 0 )
          return result;
      }
    }
    return HalpIommuDomainUnmapIdentityRange(a1, v4, v8 >> 12);
  }
  return result;
}
