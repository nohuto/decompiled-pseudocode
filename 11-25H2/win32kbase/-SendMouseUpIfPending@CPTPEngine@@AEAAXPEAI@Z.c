/*
 * XREFs of ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400C9380
 * Callers:
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x1400C911C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1400C92CC (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400C9534 (-HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA09C (-DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA388 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA76C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140193AB4 (-HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140193DFC (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     ?SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z @ 0x1400C93B0 (-SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z.c)
 */

void __fastcall CPTPEngine::SendMouseUpIfPending(struct tagPOINT *this, unsigned int *a2)
{
  unsigned int v3; // edx

  v3 = *a2;
  if ( v3 )
  {
    CPTPEngine::SendMouseUpAtPoint((CPTPEngine *)this, v3, this[384]);
    *a2 = 0;
  }
}
