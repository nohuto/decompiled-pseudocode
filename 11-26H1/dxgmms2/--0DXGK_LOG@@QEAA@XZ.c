/*
 * XREFs of ??0DXGK_LOG@@QEAA@XZ @ 0x14005B5B4
 * Callers:
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x14009C438 (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

DXGK_LOG *__fastcall DXGK_LOG::DXGK_LOG(DXGK_LOG *this)
{
  DXGK_LOG *result; // rax

  *(_QWORD *)this = 0LL;
  result = this;
  *((_QWORD *)this + 3) = 0LL;
  return result;
}
