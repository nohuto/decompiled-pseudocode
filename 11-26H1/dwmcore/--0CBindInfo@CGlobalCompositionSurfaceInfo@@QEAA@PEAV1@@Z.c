/*
 * XREFs of ??0CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@PEAV1@@Z @ 0x1800F7D8C
 * Callers:
 *     ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x1800F66D8 (--0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z.c)
 * Callees:
 *     <none>
 */

CGlobalCompositionSurfaceInfo::CBindInfo *__fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CBindInfo(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct CGlobalCompositionSurfaceInfo *a2)
{
  CGlobalCompositionSurfaceInfo::CBindInfo *result; // rax

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *((_DWORD *)this + 11) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *(_QWORD *)((char *)this + 180) = 256LL;
  *((_WORD *)this + 94) = 1;
  *((_BYTE *)this + 190) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  result = this;
  *((_DWORD *)this + 52) = -1;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_DWORD *)this + 55) = 0;
  return result;
}
