/*
 * XREFs of SmmMapPagedObjectToIommu @ 0x14006AEE8
 * Callers:
 *     ?SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x14003EDA8 (-SmmMapObjectToIommu@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140041508 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x1400415EC (-SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 */

__int64 __fastcall SmmMapPagedObjectToIommu(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v7; // si
  __int64 LogicalAddress; // rdx

  v3 = 0;
  v7 = 1;
  if ( (*(_DWORD *)(a1 + 44) & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1416;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPhysicalObject->Flags.NonPaged == 0",
      1416LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
    if ( (*(_DWORD *)(a1 + 44) & 0x200) == 0 && (dword_1401696C0 & 4) == 0 )
      v7 = 0;
    return (unsigned int)SmmMapPagesToIommu(
                           a3,
                           LogicalAddress,
                           *(_QWORD *)(a1 + 56) + 48LL,
                           (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 56) + 40LL) >> 12,
                           v7,
                           0,
                           a1);
  }
  return v3;
}
