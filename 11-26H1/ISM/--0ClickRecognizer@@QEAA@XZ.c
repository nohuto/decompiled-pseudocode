/*
 * XREFs of ??0ClickRecognizer@@QEAA@XZ @ 0x1801B9190
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x1801B7960 (--0GestureSession@@AEAA@XZ.c)
 * Callees:
 *     ?Initialize@ClickRecognizer@@AEAAXXZ @ 0x1801B971C (-Initialize@ClickRecognizer@@AEAAXXZ.c)
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1801BA9C4 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 */

ClickRecognizer *__fastcall ClickRecognizer::ClickRecognizer(ClickRecognizer *this)
{
  *((_DWORD *)this + 2) = 527;
  *(_QWORD *)this = &ClickRecognizer::`vftable';
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 13) = ClickRecognizer::s_doubleTapTimeThreshold;
  *((_WORD *)this + 12) = ClickRecognizer::s_doubleTapDistanceThreshold;
  *((_WORD *)this + 14) = ClickRecognizer::s_tapAndShortHoldTimeThreshold;
  *((_WORD *)this + 17) = ClickRecognizer::s_tapAndLongHoldTimeThreshold;
  *((_WORD *)this + 15) = ClickRecognizer::s_tapAndHoldStartTimeThreshold;
  *((_WORD *)this + 16) = ClickRecognizer::s_tapAndHoldDurationThreshold;
  *((_WORD *)this + 18) = ClickRecognizer::s_tapAndHoldDistanceThreshold;
  ClickRecognizer::Initialize(this);
  return this;
}
