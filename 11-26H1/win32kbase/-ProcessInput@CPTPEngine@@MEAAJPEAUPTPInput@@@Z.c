/*
 * XREFs of ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1401031F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleButtonSuppression@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x14010325C (-HandleButtonSuppression@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103630 (-DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401039F8 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103D7C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401044F8 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401047BC (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140104E48 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessInput(CPTPEngine *this, struct PTPInput *a2)
{
  CPTPEngine::HandleButtonSuppression(this, a2);
  CPTPEngine::ProcessInputFrame(this, a2);
  CPTPEngine::DoTPButtonAndDragProcessing(this, a2);
  CPTPEngine::DoTPDiscreteButtonProcessing(this, a2);
  CPTPEngine::DoTPGestureProcessing(this, a2);
  CPTPEngine::DoTPMouseProcessing(this, a2);
  CPTPEngine::DoFinalProcessing(this, a2);
  return 0LL;
}
