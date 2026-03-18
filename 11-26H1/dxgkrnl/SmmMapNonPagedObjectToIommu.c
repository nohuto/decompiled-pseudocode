/*
 * XREFs of SmmMapNonPagedObjectToIommu @ 0x14004099C
 * Callers:
 *     ?SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x14003EDA8 (-SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140041508 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x1400415EC (-SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 *     SmmMapContiguousRangeToIommu @ 0x14009C028 (SmmMapContiguousRangeToIommu.c)
 */

__int64 __fastcall SmmMapNonPagedObjectToIommu(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  unsigned __int64 LogicalAddress; // rax
  int v8; // ebp
  int v9; // edx
  int v10; // eax
  __int64 v11; // r8
  int v12; // edi
  int v14; // [rsp+20h] [rbp-38h]

  v3 = 1;
  if ( (*(_DWORD *)(a1 + 44) & 1) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1238;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPhysicalObject->Flags.NonPaged == 1",
      1238LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
  v8 = LogicalAddress;
  if ( (*(_DWORD *)(a1 + 44) & 0x200) == 0 && (dword_1401696C0 & 4) == 0 )
    v3 = 0;
  v9 = *(_DWORD *)(a1 + 44) & 0x1E;
  switch ( v9 )
  {
    case 4:
      LOBYTE(v14) = v3;
      v10 = SmmMapPagesToIommu(
              a3,
              LogicalAddress,
              *(_QWORD *)(a1 + 8) + 48LL,
              (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 8) + 40LL) >> 12,
              v14,
              0,
              a1);
      goto LABEL_13;
    case 10:
      LODWORD(v11) = (unsigned __int64)MmGetPhysicalAddress(*(PVOID *)(a1 + 8)).QuadPart >> 12;
LABEL_12:
      v10 = SmmMapContiguousRangeToIommu(a3, v8, v11, *(_QWORD *)a1, v3, 0, a1);
LABEL_13:
      v12 = v10;
      if ( v10 >= 0 )
        return (unsigned int)v12;
      goto LABEL_16;
    case 6:
      v11 = *(_QWORD *)(a1 + 8) >> 12;
      goto LABEL_12;
  }
  v12 = -1073741811;
LABEL_16:
  WdLogSingleEntry2(2LL, a2, v12);
  WdLogGlobalForLineNumber = 1292;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to map SysMm adapter object 0x%.16I64x to IOMMU. Status=0x%.8x",
    a2,
    v12,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v12;
}
