/*
 * XREFs of ??1VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1400BC1D8
 * Callers:
 *     ??_GVIDMM_CPU_HOST_APERTURE@@QEAAPEAXI@Z @ 0x140050AC0 (--_GVIDMM_CPU_HOST_APERTURE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::~VIDMM_CPU_HOST_APERTURE(VIDMM_CPU_HOST_APERTURE *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
    operator delete(v2);
  operator delete(*((void **)this + 7));
}
