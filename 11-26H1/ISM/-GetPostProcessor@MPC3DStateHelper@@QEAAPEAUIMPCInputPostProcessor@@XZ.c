/*
 * XREFs of ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180057000
 * Callers:
 *     ?Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z @ 0x180056EA0 (-Set3DHitData@DWMCursor@@UEAAJAEAUCursor3DHitData@@@Z.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800BB190 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x1800D15D0 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FF2C4 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800FFDA0 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1801004F4 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801CD170 (-MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     <none>
 */

struct IMPCInputPostProcessor *__fastcall MPC3DStateHelper::GetPostProcessor(PSRWLOCK SRWLock)
{
  PVOID Ptr; // rbx

  AcquireSRWLockShared(SRWLock);
  Ptr = SRWLock[3].Ptr;
  ReleaseSRWLockShared(SRWLock);
  return (struct IMPCInputPostProcessor *)Ptr;
}
