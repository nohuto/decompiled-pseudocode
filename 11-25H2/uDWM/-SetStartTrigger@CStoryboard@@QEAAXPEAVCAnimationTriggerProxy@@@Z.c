/*
 * XREFs of ?SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z @ 0x18009A60C
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180050DE8 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x18008A230 (-SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z.c)
 */

void __fastcall CStoryboard::SetStartTrigger(CStoryboard *this, struct CAnimationTriggerProxy *a2)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 30); i = (unsigned int)(i + 1) )
    CAnimatedTransitionVisual::SetStartTrigger(
      *(CAnimatedTransitionVisual **)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 40LL),
      a2);
}
