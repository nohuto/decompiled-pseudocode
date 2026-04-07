/*
 * XREFs of ??1CLivePreviewTimeline@@UEAA@XZ @ 0x180060D9C
 * Callers:
 *     ??_ECLivePreviewTimeline@@UEAAPEAXI@Z @ 0x180060D50 (--_ECLivePreviewTimeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLivePreviewTimeline::~CLivePreviewTimeline(CLivePreviewTimeline *this)
{
  *(_QWORD *)this = &CLivePreviewTimeline::`vftable';
  CTimelineBase::~CTimelineBase(this);
}
