/*
 * XREFs of SmmMapContiguousRangeToIommu @ 0x14009C028
 * Callers:
 *     SmmMapNonPagedObjectToIommu @ 0x14004099C (SmmMapNonPagedObjectToIommu.c)
 *     ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x14009C46C (-SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z.c)
 *     ?SysMmMapContiguousRangeToIommu@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x14009C680 (-SysMmMapContiguousRangeToIommu@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_NW4SYSMM_MAPPING_OBJ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400416A0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??0SYSMM_LOG_ENTRY_MAPPING@@QEAA@_KPEB_K00_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBXJ@Z @ 0x140062C58 (--0SYSMM_LOG_ENTRY_MAPPING@@QEAA@_KPEB_K00_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBXJ@Z.c)
 *     SmmMapPagesToIommuInternal @ 0x14006A87C (SmmMapPagesToIommuInternal.c)
 *     SmmUnmapPagesFromIommuInternal @ 0x14006D4E4 (SmmUnmapPagesFromIommuInternal.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmMapContiguousRangeToIommu(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        __int64 a7)
{
  unsigned __int8 v7; // r12
  __int64 v8; // r14
  unsigned __int64 v10; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  _QWORD *v14; // rbx
  unsigned __int64 i; // rcx
  unsigned __int64 j; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  char v19; // si
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  const wchar_t *v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  __int64 v29; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+58h] [rbp-18h]
  unsigned __int64 v31; // [rsp+60h] [rbp-10h]
  unsigned __int64 v32; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int64 v34; // [rsp+C8h] [rbp+58h]

  v33 = a2;
  v7 = a5;
  v8 = 0LL;
  v10 = a4 >> 12;
  v34 = a4 >> 12;
  LODWORD(v12) = 0;
  if ( !a5 || (*(_DWORD *)(a1 + 28) & 1) != 0 )
  {
    if ( !a2 || a2 == a3 << 12 )
    {
      v25 = *(_QWORD *)(a1 + 48);
      v30 = a3 << 12;
      v29 = 1LL;
      v31 = a4;
      v26 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))qword_140169628)(v25, 3LL, &v29);
      v12 = v26;
      if ( v26 >= 0 )
        goto LABEL_30;
      WdLogSingleEntry1(2LL);
      v24 = L"MapIdentityRangeEx failed 0x%I64x";
      WdLogGlobalForLineNumber = 1000;
    }
    else
    {
      v30 = a3 << 12;
      v22 = *(_QWORD *)(a1 + 48);
      v31 = a4;
      v29 = 1LL;
      v32 = 0LL;
      v23 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64 *, _QWORD, _QWORD, unsigned __int64 *))qword_140169618)(
              v22,
              3LL,
              &v29,
              &v33,
              0LL,
              0LL,
              &v32);
      v12 = v23;
      if ( v23 >= 0 )
        goto LABEL_30;
      WdLogSingleEntry1(2LL);
      v24 = L"MapLogicalRangeEx failed 0x%I64x";
      WdLogGlobalForLineNumber = 1020;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v24, v12, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    v13 = 8 * v10;
    if ( !is_mul_ok(v10, 8uLL) )
      v13 = -1LL;
    v14 = (_QWORD *)operator new[](v13, 0x39737844u, 64LL);
    if ( v14 )
    {
      for ( i = 0LL; i < v10; ++i )
        v14[i] = i + a3;
      LODWORD(v12) = SmmMapPagesToIommuInternal(a1, v33, (__int64)v14, v10, v7);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
    }
    else
    {
      for ( j = 0LL; j < v10; ++j )
      {
        v32 = j + a3;
        if ( v33 )
          v17 = v8 + v33;
        else
          v17 = 0LL;
        LODWORD(v12) = SmmMapPagesToIommuInternal(a1, v17, (__int64)&v32, 1LL, v7);
        if ( (int)v12 < 0 )
        {
          v18 = 0LL;
          if ( j )
          {
            v19 = a5;
            v20 = 0LL;
            do
            {
              v32 = v18 + a3;
              if ( v33 )
                v21 = v20 + v33;
              else
                v21 = 0LL;
              SmmUnmapPagesFromIommuInternal(a1, v21, (__int64)&v32, 1LL, v19);
              ++v18;
              v20 += 4096LL;
            }
            while ( v18 < j );
            LODWORD(v10) = v34;
            v7 = a5;
          }
          break;
        }
        v8 += 4096LL;
      }
    }
  }
LABEL_30:
  v27 = operator new(32, (struct DXGK_LOG *)(a1 + 192), 0, 8 * dword_1401696D0);
  if ( v27 )
    SYSMM_LOG_ENTRY_MAPPING::SYSMM_LOG_ENTRY_MAPPING(v27, v33, 0LL, a3, v10, v7, a6, a7, v12);
  return (unsigned int)v12;
}
