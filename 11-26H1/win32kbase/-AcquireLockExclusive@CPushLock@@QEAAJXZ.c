/*
 * XREFs of ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x14006E9A0 (NtUpdateInputSinkTransforms.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x14006ED00 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z @ 0x14006ED8C (-ArmOrRearmRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@AEAAXI@Z.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x14008AAB0 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x14008AB10 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x14008AE3C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x14008F210 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x1400A0314 (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1401297B8 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x140129C98 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     ?HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ @ 0x14014CCC4 (-HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ.c)
 *     ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x1401572E0 (-MarkInvalid@CInputSink@@UEAAXXZ.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x14018DCD0 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x140192190 (-EnableSpeedBump@CCursorClip@@QEAAX_N@Z.c)
 *     ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x140217920 (-BoundPoint@CCursorClip@@QEAA-AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mouse.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x140217EA8 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x140217F8C (-OverrideClip@CCursorClip@@QEAAX_N@Z.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x14021B1D0 (ChildProcessRootSynthesizedMouseInput.c)
 *     ChildSubmitRootSynthesizedMouseInput @ 0x14021B35C (ChildSubmitRootSynthesizedMouseInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPushLock::AcquireLockExclusive(CPushLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  *((_QWORD *)this + 1) = PsGetCurrentThreadId();
  return 0LL;
}
