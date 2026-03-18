/*
 * XREFs of ??1VIDMM_SEGMENT_PBMM@@UEAA@XZ @ 0x140050A84
 * Callers:
 *     ??_GVIDMM_SEGMENT_PBMM@@UEAAPEAXI@Z @ 0x140050AF0 (--_GVIDMM_SEGMENT_PBMM@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GVIDMM_CPU_HOST_APERTURE@@QEAAPEAXI@Z @ 0x140050AC0 (--_GVIDMM_CPU_HOST_APERTURE@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_SEGMENT_PBMM::~VIDMM_SEGMENT_PBMM(VIDMM_SEGMENT_PBMM *this, unsigned int a2)
{
  VIDMM_CPU_HOST_APERTURE *v3; // rcx

  *(_QWORD *)this = &VIDMM_SEGMENT_PBMM::`vftable';
  v3 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 17);
  if ( v3 )
  {
    VIDMM_CPU_HOST_APERTURE::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 17) = 0LL;
  }
}
