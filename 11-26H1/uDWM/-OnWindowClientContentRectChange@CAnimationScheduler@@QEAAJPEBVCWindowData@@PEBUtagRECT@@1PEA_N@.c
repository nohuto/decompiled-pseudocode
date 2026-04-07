/*
 * XREFs of ?OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@Z @ 0x180017690
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180059204 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800BEFF8 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationScheduler::OnWindowClientContentRectChange(
        CAnimationScheduler *this,
        const struct CWindowData *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        bool *a5)
{
  unsigned int v9; // ebx
  unsigned int i; // ebp
  const struct CStoryboard *v12; // r13

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0;
  *a5 = 0;
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    v12 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8LL * i);
    if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)i, a2, v12, 0) )
    {
      v9 = CWindowPropertyTracker::OnWindowClientContentRectChange(
             (CAnimationScheduler *)((char *)this + 48),
             v12,
             a2,
             a3,
             a4);
      *a5 |= (v9 & 0x80000000) == 0;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
