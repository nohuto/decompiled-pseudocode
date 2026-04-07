/*
 * XREFs of ??1CLivePreviewTimeline@@UEAA@XZ @ 0x18007E67C
 * Callers:
 *     ??_ECLivePreviewTimeline@@UEAAPEAXI@Z @ 0x18007E630 (--_ECLivePreviewTimeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLivePreviewTimeline::~CLivePreviewTimeline(CLivePreviewTimeline *this)
{
  *(_QWORD *)this = &CLivePreviewTimeline::`vftable';
  CTimelineBase::~CTimelineBase(this);
}
