/*
 * XREFs of ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z @ 0x18004952C
 * Callers:
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x18003859C (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpolationParameters@@@Z @ 0x18004939C (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpol.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004958C (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 */

_QWORD *__fastcall CTimelineBase::CTimelineBase(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _QWORD *v6; // r9
  _QWORD *v7; // r10
  _QWORD *result; // rax

  CTimelineBase::CTimelineBase(a1, a2, a3, a5, *a5);
  v7[11] = v6[1];
  v7[12] = v6[2];
  v7[13] = v6[3];
  v7[14] = v6[4];
  result = v7;
  v7[10] = a6;
  *v7 = &CTimelineBase::`vftable';
  return result;
}
