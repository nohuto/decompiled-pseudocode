/*
 * XREFs of ?OnWindowDestroy@CAnimationScheduler@@QEAAXPEBVCWindowData@@@Z @ 0x18001B7E8
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A2DC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimationScheduler::OnWindowDestroy(CAnimationScheduler *this, HWND *a2)
{
  CWindowPropertyTracker::StopTrackingWindowImmediately((CAnimationScheduler *)((char *)this + 48), a2[5]);
}
