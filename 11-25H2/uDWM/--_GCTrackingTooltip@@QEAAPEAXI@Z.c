/*
 * XREFs of ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x1800AA480
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800935A8 (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800AA810 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CTrackingTooltip@@QEAA@XZ @ 0x1800D14BC (--1CTrackingTooltip@@QEAA@XZ.c)
 */

CTrackingTooltip *__fastcall CTrackingTooltip::`scalar deleting destructor'(CTrackingTooltip *this)
{
  const struct std::nothrow_t *v2; // rdx

  CTrackingTooltip::~CTrackingTooltip(this);
  CDisplayBlackCurtainAnimatedVisual::operator delete(this, v2);
  return this;
}
