/*
 * XREFs of HalpIommuAllocateDmaDomain @ 0x14058F814
 * Callers:
 *     HalpIommuInitializeDmar @ 0x1405903A8 (HalpIommuInitializeDmar.c)
 *     IommuDomainCreate @ 0x140789AC0 (IommuDomainCreate.c)
 *     IommuDomainCreateEx @ 0x140789AF0 (IommuDomainCreateEx.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404749BC (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpIommuDomainMapLogicalRange @ 0x14047578C (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuDomainGetSupportedPageTableDepths @ 0x14058FF98 (HalpIommuDomainGetSupportedPageTableDepths.c)
 *     HalpIommuFreeDmaDomain @ 0x140590068 (HalpIommuFreeDmaDomain.c)
 *     HalpIommuGetPageTableType @ 0x140590198 (HalpIommuGetPageTableType.c)
 *     HalpIommuCreateDmarPageTable @ 0x1405A30AC (HalpIommuCreateDmarPageTable.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x1405AE1AC (HalpBuddyAllocatorCreateAllocator.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpIommuAllocateDmaDomain(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4, ULONG_PTR *a5)
{
  int PageTableType; // edi
  int v9; // r15d
  void *v10; // rax
  ULONG_PTR v11; // rsi
  __int64 v12; // rdx
  bool v13; // r13
  int v14; // eax
  char v15; // al
  bool v16; // zf
  unsigned __int32 v17; // eax
  __int64 v18; // rcx
  __int64 *v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // r15
  ULONG_PTR v23; // rdx
  char v24; // [rsp+40h] [rbp-40h]
  int v25; // [rsp+44h] [rbp-3Ch] BYREF
  int v26; // [rsp+48h] [rbp-38h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR *v28; // [rsp+58h] [rbp-28h]
  __int64 v29; // [rsp+60h] [rbp-20h] BYREF
  bool v30; // [rsp+68h] [rbp-18h]
  __int16 v31; // [rsp+69h] [rbp-17h]
  char v32; // [rsp+6Bh] [rbp-15h]

  PageTableType = 0;
  v28 = a5;
  LODWORD(v27) = 0;
  v25 = 0;
  v26 = 0;
  v9 = a1;
  v10 = (void *)HalpMmAllocCtxAlloc(a1, 112LL);
  v11 = (ULONG_PTR)v10;
  if ( v10 )
  {
    memset_0(v10, 0, 0x70uLL);
    *(_DWORD *)(v11 + 56) = -1;
    *(_DWORD *)(v11 + 8) = 4;
    v12 = 1LL;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v13 = 0;
        v24 = 0;
        v14 = 0;
        goto LABEL_14;
      }
      if ( v9 == 2 )
      {
        v13 = 0;
        *(_BYTE *)(v11 + 52) = 1;
        v24 = 0;
LABEL_13:
        v14 = 2;
LABEL_14:
        *(_DWORD *)(v11 + 12) = v14;
        *(_DWORD *)(v11 + 8) = v9;
        *(_QWORD *)(v11 + 80) = v11 + 72;
        *(_QWORD *)(v11 + 72) = v11 + 72;
        *(_DWORD *)(v11 + 88) = 0;
        v15 = HalpHvIommu;
        if ( HalpHvIommu )
          *(_QWORD *)(v11 + 104) = 0LL;
        if ( v9 == 2 )
          goto LABEL_17;
        if ( v15 )
        {
          if ( v9 == 1 )
          {
            *(_DWORD *)(v11 + 48) = 0;
            goto LABEL_30;
          }
          if ( *(_BYTE *)(v11 + 52) )
            v16 = HalpHvParaVirtIommuDomain == 0;
          else
            v16 = HalpHvIommuDeviceDomain == 0;
          if ( !v16 )
          {
            if ( v9 != 3 )
            {
              v17 = _InterlockedIncrement(&HalpIommuDomainId);
              *(_DWORD *)(v11 + 48) = v17;
              v29 = v17;
              BYTE4(v29) = *(_BYTE *)(v11 + 52);
              v32 = 0;
              v30 = (a2 & 0x4000000000000000LL) != 0;
              v31 = a2 < 0;
              PageTableType = guard_dispatch_icall_no_overrides(&v29, 1LL);
              if ( PageTableType < 0 )
                goto LABEL_54;
            }
LABEL_30:
            if ( v13 )
            {
              HalpIommuDomainGetSupportedPageTableDepths(v11, 0LL, &v25, &v26);
              LOBYTE(v18) = *(_BYTE *)(v11 + 52);
              PageTableType = HalpIommuGetPageTableType(v18, &v27);
              if ( PageTableType < 0 )
                goto LABEL_54;
              PageTableType = HalpIommuCreateDmarPageTable(v27, v26, v25);
              if ( PageTableType < 0 )
                goto LABEL_54;
            }
            if ( a3 )
            {
              if ( !v24 && *a3 )
              {
                PageTableType = -1073741811;
                goto LABEL_54;
              }
              v12 = v11 + 64;
              *(_QWORD *)(v11 + 64) = 0LL;
              if ( *a3 )
              {
                if ( *a3 != 1 )
                  goto LABEL_7;
                PageTableType = HalpBuddyAllocatorCreateAllocator((unsigned int)a3[1]);
                if ( PageTableType < 0 )
                  goto LABEL_54;
              }
              else
              {
                PageTableType = 0;
              }
            }
            v19 = a4;
            if ( !a4 )
            {
LABEL_48:
              *v28 = v11;
              return (unsigned int)PageTableType;
            }
            while ( 1 )
            {
              v20 = *(_QWORD *)(v11 + 64);
              v21 = v19[1] & 0xFFFFFFFFFFFFF000uLL;
              if ( v20 )
              {
                PageTableType = guard_dispatch_icall_no_overrides(v20, v19[1] & 0xFFFFFFFFFFFFF000uLL);
                if ( PageTableType < 0 )
                  break;
              }
              if ( *((_BYTE *)v19 + 24) )
              {
                PageTableType = HalpIommuDomainMapLogicalRange(v11, 3LL, v21, v19[2] << 12, v21);
                if ( PageTableType < 0 )
                  break;
              }
              v19 = (__int64 *)*v19;
              if ( !v19 )
                goto LABEL_48;
            }
            while ( a4 != v19 )
            {
              if ( *((_BYTE *)a4 + 24) )
              {
                v23 = a4[1] & 0xFFFFFFFFFFFFF000uLL;
                v27 = a4[2] << 12;
                HalpIommuDomainUnmapLogicalRange(v11, v23, &v27, 0);
              }
              a4 = (__int64 *)*a4;
            }
LABEL_54:
            HalpIommuFreeDmaDomain(v11, v12);
            return (unsigned int)PageTableType;
          }
        }
        else if ( (a2 & 0x4000000000000000LL) == 0 )
        {
          *(_QWORD *)(v11 + 24) = v11 + 16;
          *(_QWORD *)(v11 + 16) = v11 + 16;
          *(_QWORD *)(v11 + 32) = 0LL;
          goto LABEL_30;
        }
LABEL_17:
        PageTableType = -1073741637;
        goto LABEL_54;
      }
      if ( v9 != 3 )
      {
LABEL_7:
        PageTableType = -1073741585;
        goto LABEL_54;
      }
      v13 = 1;
      *(_BYTE *)(v11 + 52) = 1;
    }
    else
    {
      v13 = HalpHvIommu == 0;
    }
    v24 = 1;
    goto LABEL_13;
  }
  return (unsigned int)-1073741670;
}
