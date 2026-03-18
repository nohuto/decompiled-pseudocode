/*
 * XREFs of rimDispatchCompleteFrame @ 0x140096810
 * Callers:
 *     rimProcessCompleteFrame @ 0x140074484 (rimProcessCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x140097328 (rimProcessAnyQueuedCompleteFrames.c)
 * Callees:
 *     rimDispatchCompleteFrames @ 0x140096874 (rimDispatchCompleteFrames.c)
 *     rimValidateFrameTransition @ 0x140096B5C (rimValidateFrameTransition.c)
 */

__int64 __fastcall rimDispatchCompleteFrame(struct RawInputManagerObject *a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rcx

  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 456) + 1072LL);
  if ( v6 )
    rimValidateFrameTransition(v6, a3);
  return rimDispatchCompleteFrames(a1, (struct RIMDEV *)a2, *a3);
}
