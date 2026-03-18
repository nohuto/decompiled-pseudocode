/*
 * XREFs of ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1400B5AD8
 * Callers:
 *     ??_EVIDMM_SEGMENT@@UEAAPEAXI@Z @ 0x14004F860 (--_EVIDMM_SEGMENT@@UEAAPEAXI@Z.c)
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1400BC67C (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1400BD030 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1400BE0F8 (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x14004F82C (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEBAXXZ @ 0x1401252CC (-ReportSegment@VIDMM_SEGMENT@@QEBAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::~VIDMM_SEGMENT(PVOID *this)
{
  struct _MDL *v2; // rcx
  VIDMM_LINEAR_POOL *v3; // rcx

  *this = &VIDMM_SEGMENT::`vftable';
  VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this);
  if ( this[14] != this + 14 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 12LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  v2 = (struct _MDL *)this[38];
  if ( v2 )
  {
    MmFreePagesFromMdl(v2);
    ExFreePoolWithTag(this[38], 0);
    this[38] = 0LL;
  }
  v3 = (VIDMM_LINEAR_POOL *)this[32];
  if ( v3 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v3);
}
