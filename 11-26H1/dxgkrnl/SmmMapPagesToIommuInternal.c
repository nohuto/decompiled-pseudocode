/*
 * XREFs of SmmMapPagesToIommuInternal @ 0x14006A87C
 * Callers:
 *     ?SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x1400415EC (-SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 *     SmmMapContiguousRangeToIommu @ 0x14009C028 (SmmMapContiguousRangeToIommu.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     SmmMapIommu @ 0x140062F34 (SmmMapIommu.c)
 *     SmmIommuMapStagingArray @ 0x14009BED4 (SmmIommuMapStagingArray.c)
 */

__int64 __fastcall SmmMapPagesToIommuInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rbx
  _QWORD v12[2]; // [rsp+50h] [rbp-38h] BYREF
  int v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+64h] [rbp-24h]
  __int64 v15; // [rsp+68h] [rbp-20h]

  if ( !a5 || (*(_DWORD *)(a1 + 28) & 1) != 0 )
  {
    v8 = SmmMapIommu(a1, a2, a3, a4);
  }
  else
  {
    v12[1] = *(_QWORD *)(a1 + 176);
    v15 = 0LL;
    v12[0] = a3;
    v13 = a4;
    v14 = 256;
    v8 = SmmIommuMapStagingArray(a1, v12);
  }
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = v8;
    WdLogSingleEntry5(2LL, a3, a2, a1, a5, v8);
    WdLogGlobalForLineNumber = 855;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to map PFN array 0x%.16I64x to IOMMU at logical address 0x%.16I64x. pIommu=0x%.16I64x, Referenced="
                "%u, Status=0x%.8x",
      a3,
      a2,
      a1,
      a5,
      v10);
  }
  return v9;
}
