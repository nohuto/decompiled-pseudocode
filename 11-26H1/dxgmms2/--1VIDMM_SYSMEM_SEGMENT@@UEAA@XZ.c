/*
 * XREFs of ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1400BC67C
 * Callers:
 *     ??_GVIDMM_SYSMEM_SEGMENT@@UEAAPEAXI@Z @ 0x140050C90 (--_GVIDMM_SYSMEM_SEGMENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1400B5AD8 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::~VIDMM_SYSMEM_SEGMENT(PVOID *this)
{
  *this = &VIDMM_SYSMEM_SEGMENT::`vftable';
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 89;
  }
  VIDMM_SEGMENT::~VIDMM_SEGMENT(this);
}
