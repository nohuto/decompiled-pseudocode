/*
 * XREFs of ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_K0@Z @ 0x140019D80
 * Callers:
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14003B7E0 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14001B930 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 */

__int64 __fastcall VIDSCH_VSYNC_SMOOTHER::GetSmoothenedFrameTimeQpc(
        VIDSCH_VSYNC_SMOOTHER *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 a5)
{
  unsigned int v7; // esi
  __int64 v8; // rdx
  unsigned int v9; // r9d
  double v10; // xmm1_8
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  double v15; // xmm0_8
  __int64 result; // rax

  v7 = _mm_getcsr();
  v8 = a2 - *((_QWORD *)this + 5);
  v9 = 0;
  _mm_setcsr(v7 | 1);
  v10 = (double)(int)v8 * *((double *)this + 3) + (double)(int)*((_QWORD *)this + 6) + *((double *)this + 2) + 0.5;
  v11 = (int)v10;
  if ( v10 < 0.0 )
    v11 = (int)((double)(1 - v11) + v10) - (1 - v11);
  v12 = (unsigned int)(int)(double)v11;
  v13 = a3 - v12;
  *a4 = v12;
  v14 = -v13;
  if ( v13 > 0 )
    v14 = v13;
  if ( v14 > a5 >> 1 )
  {
    if ( (byte_14008A204 & 0x20) != 0 )
      McTemplateK0pp_EtwWriteTransfer(v14, &EventResetSmoother, v13, a5, a5);
    if ( (a5 & 0x8000000000000000uLL) != 0LL )
      v15 = (double)(int)(a5 & 1 | (a5 >> 1)) + (double)(int)(a5 & 1 | (a5 >> 1));
    else
      v15 = (double)(int)a5;
    *((double *)this + 4) = v15;
    LinearFitT<256>::Reset(this, v8);
    v9 = -1073741823;
    *a4 = 0LL;
  }
  result = v9;
  _mm_setcsr(v7);
  return result;
}
