/*
 * XREFs of ??0VIDSCH_VSYNC_SMOOTHER@@QEAA@XZ @ 0x140055C98
 * Callers:
 *     VidSchInitializeAdapter @ 0x1400C2230 (VidSchInitializeAdapter.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14001B930 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 */

VIDSCH_VSYNC_SMOOTHER *__fastcall VIDSCH_VSYNC_SMOOTHER::VIDSCH_VSYNC_SMOOTHER(VIDSCH_VSYNC_SMOOTHER *this)
{
  *((_QWORD *)this + 11) = 0LL;
  *(_QWORD *)this = &LinearFitT<256>::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 4) = 0x3FF0000000000000LL;
  LinearFitT<256>::Reset((__int64)this);
  *((_QWORD *)this + 11) = 1LL;
  *(_QWORD *)this = &VIDSCH_VSYNC_SMOOTHER::`vftable';
  return this;
}
