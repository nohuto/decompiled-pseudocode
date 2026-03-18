/*
 * XREFs of ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x14010565C
 * Callers:
 *     ?DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103630 (-DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401039F8 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103D7C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z @ 0x140105728 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@_N@Z.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x14010581C (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140105A98 (-HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x1401B1764 (-HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140226DF4 (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     ?SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z @ 0x14010568C (-SendMouseUpAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@@Z.c)
 */

void __fastcall CPTPEngine::SendMouseUpIfPending(struct tagPOINT *this, unsigned int *a2)
{
  unsigned int v3; // edx

  v3 = *a2;
  if ( v3 )
  {
    CPTPEngine::SendMouseUpAtPoint((CPTPEngine *)this, v3, this[383]);
    *a2 = 0;
  }
}
