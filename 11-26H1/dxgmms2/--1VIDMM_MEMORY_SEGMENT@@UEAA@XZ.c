/*
 * XREFs of ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1400BE0F8
 * Callers:
 *     ??_EVIDMM_MEMORY_SEGMENT@@UEAAPEAXI@Z @ 0x140050EC0 (--_EVIDMM_MEMORY_SEGMENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004CB04 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ??_GVIDMM_CPU_HOST_APERTURE@@QEAAPEAXI@Z @ 0x140050AC0 (--_GVIDMM_CPU_HOST_APERTURE@@QEAAPEAXI@Z.c)
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1400B5AD8 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 *     ?VidMmReleaseUpdatePageTableChaData@@YAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_UPDATEPAGETABLE_CHA_DATA@@@Z @ 0x1400BC5CC (-VidMmReleaseUpdatePageTableChaData@@YAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_UPDATEPAGETABLE_C.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::~VIDMM_MEMORY_SEGMENT(struct VIDMM_CPU_HOST_APERTURE **this)
{
  VIDMM_CPU_HOST_APERTURE *v2; // rcx
  struct VIDMM_CPU_HOST_APERTURE *v3; // rdx

  *this = (struct VIDMM_CPU_HOST_APERTURE *)&VIDMM_MEMORY_SEGMENT::`vftable';
  VidMmReleaseUpdatePageTableChaData(this[64], (struct VIDMM_UPDATEPAGETABLE_CHA_DATA *)(this + 66));
  v2 = this[64];
  if ( v2 )
    VIDMM_CPU_HOST_APERTURE::`scalar deleting destructor'(v2);
  v3 = this[61];
  if ( v3 )
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this[1] + 3) + 224LL), v3);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v2) + 24) = this;
    WdLogGlobalForLineNumber = 329;
  }
  VIDMM_SEGMENT::~VIDMM_SEGMENT((PVOID *)this);
}
