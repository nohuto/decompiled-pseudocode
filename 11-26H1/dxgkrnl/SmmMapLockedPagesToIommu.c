/*
 * XREFs of SmmMapLockedPagesToIommu @ 0x14009D188
 * Callers:
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140288370 (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140041508 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x1400415EC (-SmmMapPagesToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEB_K1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z.c)
 *     ??0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z @ 0x1400531E0 (--0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z.c)
 *     ??1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ @ 0x140055278 (--1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ.c)
 */

__int64 __fastcall SmmMapLockedPagesToIommu(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 LogicalAddress; // rax
  char v9; // cl
  unsigned int v10; // ebx
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF

  SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
    (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v12,
    (struct SYSMM_IOMMU *)(a1 + 64));
  if ( *(_DWORD *)(a1 + 104) )
  {
    v10 = 0;
  }
  else
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a3 + 24));
    v9 = (*(_DWORD *)(a2 + 44) & 0x200) != 0 || (dword_1401696C0 & 4) != 0;
    v10 = SmmMapPagesToIommu(
            a1 + 64,
            LogicalAddress,
            a4 + 48,
            (unsigned __int64)*(unsigned int *)(a4 + 40) >> 12,
            v9,
            0,
            a2);
  }
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v12);
  return v10;
}
