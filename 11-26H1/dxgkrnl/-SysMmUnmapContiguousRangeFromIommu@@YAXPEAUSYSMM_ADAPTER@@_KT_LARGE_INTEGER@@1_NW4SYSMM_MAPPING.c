/*
 * XREFs of ?SysMmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_NW4SYSMM_MAPPING_OBJECT_TYPE@@PEBX@Z @ 0x14009C7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z @ 0x1400531E0 (--0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z.c)
 *     ??1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ @ 0x140055278 (--1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ.c)
 *     SmmUnmapContiguousRangeFromIommu @ 0x14009C4B4 (SmmUnmapContiguousRangeFromIommu.c)
 */

void __fastcall SysMmUnmapContiguousRangeFromIommu(
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
  unsigned __int8 v11; // cl
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF

  v7 = a1 + 64;
  v9 = a3 >> 12;
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
    (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v12,
    (struct SYSMM_IOMMU *)(a1 + 64));
  v11 = 0;
  if ( a5 || (dword_1401696C0 & 4) != 0 )
    v11 = 1;
  SmmUnmapContiguousRangeFromIommu(v7, a2, v9, a4, v11, a6, a7);
  SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v12);
}
