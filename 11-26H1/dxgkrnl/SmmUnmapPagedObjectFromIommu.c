/*
 * XREFs of SmmUnmapPagedObjectFromIommu @ 0x14006BC64
 * Callers:
 *     ?SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x140040978 (-SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140041508 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmUnmapPagesFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x140041524 (-SmmUnmapPagesFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 */

__int64 __fastcall SmmUnmapPagedObjectFromIommu(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v4; // di
  __int64 LogicalAddress; // rax

  result = *(unsigned int *)(a1 + 44);
  v4 = 1;
  if ( (result & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1605;
    result = DxgkLogInternalTriageEvent(
               0LL,
               262146,
               -1,
               (__int64)L"pPhysicalObject->Flags.NonPaged == 0",
               1605LL,
               0LL,
               0LL,
               0LL,
               0LL);
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
    if ( (*(_DWORD *)(a1 + 44) & 0x200) == 0 && (dword_1401696C0 & 4) == 0 )
      v4 = 0;
    return SmmUnmapPagesFromIommu(
             a3,
             LogicalAddress,
             *(_QWORD *)(a1 + 56) + 48LL,
             (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 56) + 40LL) >> 12,
             v4,
             0,
             a1);
  }
  return result;
}
