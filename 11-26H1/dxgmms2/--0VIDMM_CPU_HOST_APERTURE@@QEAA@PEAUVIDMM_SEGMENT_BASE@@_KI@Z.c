/*
 * XREFs of ??0VIDMM_CPU_HOST_APERTURE@@QEAA@PEAUVIDMM_SEGMENT_BASE@@_KI@Z @ 0x1400BC1A0
 * Callers:
 *     ?VidMmInitializePbmmSegment@@YAJPEAUVIDMM_SEGMENT_PBMM@@@Z @ 0x140050B28 (-VidMmInitializePbmmSegment@@YAJPEAUVIDMM_SEGMENT_PBMM@@@Z.c)
 * Callees:
 *     <none>
 */

VIDMM_CPU_HOST_APERTURE *__fastcall VIDMM_CPU_HOST_APERTURE::VIDMM_CPU_HOST_APERTURE(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_SEGMENT_BASE *a2,
        __int64 a3,
        int a4)
{
  VIDMM_CPU_HOST_APERTURE *result; // rax

  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  result = this;
  *((_QWORD *)this + 6) = a2;
  *((_DWORD *)this + 17) = a4;
  *((_DWORD *)this + 18) = a4;
  *((_QWORD *)this + 4) = a3;
  return result;
}
