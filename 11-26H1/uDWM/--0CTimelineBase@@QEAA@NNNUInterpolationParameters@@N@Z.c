/*
 * XREFs of ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z @ 0x1800233AC
 * Callers:
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpolationParameters@@@Z @ 0x180023224 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpol.c)
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x18004282C (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180023144 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 */

_QWORD *__fastcall CTimelineBase::CTimelineBase(CBaseObject *a1, double a2, double a3, double a4, int *a5, __int64 a6)
{
  _QWORD *v6; // r9
  _QWORD *v7; // r10
  _QWORD *result; // rax

  CTimelineBase::CTimelineBase(a1, a2, a3, a4, *a5);
  v7[11] = v6[1];
  v7[12] = v6[2];
  v7[13] = v6[3];
  v7[14] = v6[4];
  result = v7;
  v7[10] = a6;
  *v7 = &CTimelineBase::`vftable';
  return result;
}
