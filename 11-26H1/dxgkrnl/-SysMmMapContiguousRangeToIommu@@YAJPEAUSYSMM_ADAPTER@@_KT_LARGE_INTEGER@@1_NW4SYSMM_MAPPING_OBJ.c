/*
 * XREFs of ?SysMmMapContiguousRangeToIommu@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x14009C680
 * Callers:
 *     <none>
 * Callees:
 *     ??0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z @ 0x1400531E0 (--0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z.c)
 *     ??1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ @ 0x140055278 (--1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ.c)
 *     SmmMapContiguousRangeToIommu @ 0x14009C028 (SmmMapContiguousRangeToIommu.c)
 */

__int64 __fastcall SysMmMapContiguousRangeToIommu(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // rdi
  __int64 v9; // rbx
  char v11; // cl
  unsigned int v12; // ebx
  _BYTE v14[24]; // [rsp+40h] [rbp-18h] BYREF

  v7 = a1 + 64;
  v9 = a3 >> 12;
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
    (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v14,
    (struct SYSMM_IOMMU *)(a1 + 64));
  v11 = 0;
  if ( a5 || (dword_1401696C0 & 4) != 0 )
    v11 = 1;
  v12 = SmmMapContiguousRangeToIommu(v7, a2, v9, a4, v11, a6, a7);
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v14);
  return v12;
}
