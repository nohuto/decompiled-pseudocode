/*
 * XREFs of HalpIommuUnmapLogicalRange @ 0x140474B78
 * Callers:
 *     HalpIommuDomainUnmapIdentityRange @ 0x140474774 (HalpIommuDomainUnmapIdentityRange.c)
 *     IommuUnmapLogicalRange @ 0x1404748C0 (IommuUnmapLogicalRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404749BC (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpIommuMapLogical @ 0x140475180 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x1404757DC (HalpIommuMapLogicalRange.c)
 *     HalpIommuDomainMapIdentityRange @ 0x1404A31E4 (HalpIommuDomainMapIdentityRange.c)
 * Callees:
 *     HalpIommuFlushPhysicalPtesFromCacheSize @ 0x1404754B4 (HalpIommuFlushPhysicalPtesFromCacheSize.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpIommuUnmapLogicalRange(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  int v3; // r12d
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rbp
  size_t v9; // r14
  __int64 v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rdx
  size_t v15; // r15
  void *v16; // rbx
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  unsigned __int64 v19; // r15
  _OWORD v21[3]; // [rsp+20h] [rbp-78h] BYREF

  v3 = *(_DWORD *)(a1 + 28);
  v6 = ((a3 & 0xFFF) + *a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  *a2 = v6;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v9 = (v6 >> 12) * (unsigned int)(1 << v3);
  memset(&v21[1], 0, 32);
  LODWORD(v10) = 0;
  v21[0] = v7;
  while ( v9 )
  {
    v11 = *(_DWORD *)(a1 + 24) - 1;
    while ( 1 )
    {
      v12 = *(_DWORD *)(a1 + 4LL * (unsigned int)v10 + 36);
      if ( (unsigned int)v10 >= v11 )
        break;
      if ( v12 >= 0x40 )
        LODWORD(v13) = -1;
      else
        v13 = (1LL << v12) - 1;
      v7 = *(_QWORD *)(v7
                     + (1 << v12 << v3)
                     + 8LL * ((unsigned int)v13 & (unsigned int)(v8 >> *(_DWORD *)(a1 + 4LL * (unsigned int)v10 + 60))));
      if ( !v7 )
        return 3221225485LL;
      v10 = (unsigned int)(v10 + 1);
      *((_QWORD *)v21 + v10) = v7;
    }
    if ( v12 >= 0x40 )
      LODWORD(v14) = -1;
    else
      v14 = (1LL << v12) - 1;
    v15 = v9;
    v16 = (void *)(v7
                 + (((unsigned int)v14 & (unsigned int)(v8 >> *(_DWORD *)(a1 + 4LL * (unsigned int)v10 + 60))) << v3));
    v17 = (1 << v12 << v3)
        - (unsigned __int64)(((unsigned int)v14 & (unsigned int)(v8 >> *(_DWORD *)(a1 + 4LL * (unsigned int)v10 + 60))) << v3);
    if ( v17 <= v9 )
      v15 = v17;
    memset_0(v16, 0, v15);
    HalpIommuFlushPhysicalPtesFromCacheSize(v16, (unsigned int)v15);
    v9 -= v15;
    v18 = 0;
    v19 = v8 + (v15 >> v3 << 12);
    if ( *(_DWORD *)(a1 + 24) != 1 )
    {
      do
      {
        if ( (v19 & (1LL << *(_DWORD *)(a1 + 4LL * (unsigned int)(v10 - 1) + 60))) == (v8 & (1LL << *(_DWORD *)(a1 + 4LL * (unsigned int)(v10 - 1) + 60)))
          && v9 )
        {
          break;
        }
        ++v18;
        LODWORD(v10) = v10 - 1;
      }
      while ( v18 < *(_DWORD *)(a1 + 24) - 1 );
    }
    v8 = v19;
    v7 = *((_QWORD *)v21 + (unsigned int)v10);
  }
  return 0LL;
}
