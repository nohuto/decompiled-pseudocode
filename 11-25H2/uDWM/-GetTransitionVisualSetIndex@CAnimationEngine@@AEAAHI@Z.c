/*
 * XREFs of ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x1800469C8
 * Callers:
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180044FEC (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?NotifyAnimationCompleteAndCleanup@CAnimationEngine@@AEAAJI@Z @ 0x18004618C (-NotifyAnimationCompleteAndCleanup@CAnimationEngine@@AEAAJI@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180046334 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationEngine::GetTransitionVisualSetIndex(CAnimationEngine *this, int a2)
{
  unsigned int v2; // r9d
  __int64 i; // r8

  v2 = -1;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) + 16LL) == a2 )
      return (unsigned int)i;
  }
  return v2;
}
