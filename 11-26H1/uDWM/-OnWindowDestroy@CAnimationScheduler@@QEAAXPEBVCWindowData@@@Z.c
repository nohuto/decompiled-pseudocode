/*
 * XREFs of ?OnWindowDestroy@CAnimationScheduler@@QEAAXPEBVCWindowData@@@Z @ 0x180019D3C
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimationScheduler::OnWindowDestroy(CAnimationScheduler *this, HWND *a2)
{
  CWindowPropertyTracker::StopTrackingWindowImmediately((CAnimationScheduler *)((char *)this + 48), a2[5]);
}
