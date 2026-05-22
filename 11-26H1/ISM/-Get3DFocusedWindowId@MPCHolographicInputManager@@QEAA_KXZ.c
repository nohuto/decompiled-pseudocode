/*
 * XREFs of ?Get3DFocusedWindowId@MPCHolographicInputManager@@QEAA_KXZ @ 0x1800BA0CC
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800BB490 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     ?OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x180101BE0 (-OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@Applicat.c)
 * Callees:
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x1800BA100 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCHolographicInputManager::Get3DFocusedWindowId(MPCHolographicInputManager *this)
{
  __int64 v1; // rbx
  struct IMPCFocusTarget *FocusedTarget; // rax

  v1 = 0LL;
  FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(this);
  if ( FocusedTarget )
    return (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 56LL))(FocusedTarget);
  return v1;
}
