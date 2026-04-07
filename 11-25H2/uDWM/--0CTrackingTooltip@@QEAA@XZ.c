/*
 * XREFs of ??0CTrackingTooltip@@QEAA@XZ @ 0x1800D14AC
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800935A8 (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800AA810 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     <none>
 */

CTrackingTooltip *__fastcall CTrackingTooltip::CTrackingTooltip(CTrackingTooltip *this)
{
  *(_BYTE *)this = 0;
  return this;
}
