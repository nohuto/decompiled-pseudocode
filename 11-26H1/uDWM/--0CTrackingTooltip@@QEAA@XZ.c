/*
 * XREFs of ??0CTrackingTooltip@@QEAA@XZ @ 0x1800CDD3C
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180084BAC (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800A8A10 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     <none>
 */

CTrackingTooltip *__fastcall CTrackingTooltip::CTrackingTooltip(CTrackingTooltip *this)
{
  *(_BYTE *)this = 0;
  return this;
}
