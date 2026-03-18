/*
 * XREFs of SmmUnmapNonPagedObjectFromIommu @ 0x140040B5C
 * Callers:
 *     ?SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMMU@@@Z @ 0x140040978 (-SmmUnmapObjectFromIommu@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_IOMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140041508 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmUnmapPagesFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x140041524 (-SmmUnmapPagesFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 *     SmmUnmapContiguousRangeFromIommu @ 0x14009C4B4 (SmmUnmapContiguousRangeFromIommu.c)
 */

__int64 __fastcall SmmUnmapNonPagedObjectFromIommu(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 result; // rax
  int v8; // esi
  int v9; // edx
  __int64 v10; // r8
  int v11; // [rsp+20h] [rbp-38h]

  v3 = 1;
  if ( (*(_DWORD *)(a1 + 44) & 1) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1520;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPhysicalObject->Flags.NonPaged == 1",
      1520LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  result = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
  v8 = result;
  if ( (*(_DWORD *)(a1 + 44) & 0x200) == 0 && (dword_1401696C0 & 4) == 0 )
    v3 = 0;
  v9 = *(_DWORD *)(a1 + 44) & 0x1E;
  switch ( v9 )
  {
    case 4:
      LOBYTE(v11) = v3;
      return SmmUnmapPagesFromIommu(
               a3,
               result,
               *(_QWORD *)(a1 + 8) + 48LL,
               (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 8) + 40LL) >> 12,
               v11,
               0,
               a1);
    case 10:
      LODWORD(v10) = (unsigned __int64)MmGetPhysicalAddress(*(PVOID *)(a1 + 8)).QuadPart >> 12;
      break;
    case 6:
      v10 = *(_QWORD *)(a1 + 8) >> 12;
      break;
    default:
      return result;
  }
  return SmmUnmapContiguousRangeFromIommu(a3, v8, v10, *(_QWORD *)a1, v3, 0, a1);
}
