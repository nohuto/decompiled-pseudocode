/*
 * XREFs of ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x1800A85BC
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180084BAC (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800A8A10 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1CTrackingTooltip@@QEAA@XZ @ 0x1800CDD4C (--1CTrackingTooltip@@QEAA@XZ.c)
 */

CTrackingTooltip *__fastcall CTrackingTooltip::`scalar deleting destructor'(CTrackingTooltip *this)
{
  CTrackingTooltip::~CTrackingTooltip(this);
  operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
