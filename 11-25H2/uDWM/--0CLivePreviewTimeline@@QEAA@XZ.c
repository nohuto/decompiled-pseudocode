/*
 * XREFs of ??0CLivePreviewTimeline@@QEAA@XZ @ 0x1800490A4
 * Callers:
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x180049148 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x1800856C0 (-Initialize@CLivePreview@@MEAAJXZ.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004958C (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 */

CLivePreviewTimeline *__fastcall CLivePreviewTimeline::CLivePreviewTimeline(
        CLivePreviewTimeline *this,
        __int64 a2,
        __int64 a3)
{
  CLivePreviewTimeline *v3; // r9
  CLivePreviewTimeline *result; // rax

  CTimelineBase::CTimelineBase(this, a2, a3, this, 0);
  result = v3;
  *(_QWORD *)v3 = &CLivePreviewTimeline::`vftable';
  return result;
}
