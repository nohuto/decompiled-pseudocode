/*
 * XREFs of ??0CInteractionTrackerBaseMarshaler@DirectComposition@@QEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1401C5864
 * Callers:
 *     ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x140189BEC (--0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionTracker2Marshaler@DirectComposition@@QEAA@XZ @ 0x14022A704 (--0CInteractionTracker2Marshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400562EC (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CInteractionTrackerBaseMarshaler::CInteractionTrackerBaseMarshaler(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(a1, a2);
  result = v2;
  *v2 = &DirectComposition::CInteractionTrackerBaseMarshaler::`vftable';
  return result;
}
