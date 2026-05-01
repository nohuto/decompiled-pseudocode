/*
 * XREFs of ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180042250
 * Callers:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x1800420E0 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x180042A44 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180137B50 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180138148 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1802C9114 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_::Invoke @ 0x180302A60 (CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__-_--Invoke.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x18030460C (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18030522C (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18004108C (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180041708 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180041730 (-IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ComputeAppFacingVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ViewVisibilityState@@XZ @ 0x18004236C (-ComputeAppFacingVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEBA-AW4ViewVisibilit.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180137444 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18017A670 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180182B20 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180182C4C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@W4GHOST_STATUS@@@Z @ 0x180304984 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rsi
  bool v5; // dl
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  if ( *((_QWORD *)this + 21) )
  {
    v2 = CImmersiveApp::CImmersiveWindowCollection::ComputeAppFacingVisibilityState();
    if ( v2 == 2 )
      goto LABEL_6;
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
      CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus((__int64)this, 16);
    else
      CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(this, 0LL, 16LL);
    if ( CImmersiveApp::CImmersiveWindowCollection::IsPresentationInProgress(this) )
    {
      CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(this);
    }
    else
    {
LABEL_6:
      (*(void (__fastcall **)(_QWORD, _QWORD))(***((_QWORD ***)this + 20) + 224LL))(**((_QWORD **)this + 20), v2);
      for ( i = 1LL; i < *((_QWORD *)this + 21); ++i )
      {
        v6 = *(_QWORD *)(*((_QWORD *)this + 20) + 8 * i);
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 216LL))(v6);
        v8 = *(_QWORD *)(*((_QWORD *)this + 20) + 8 * i);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 224LL))(v8, v7 != 0 ? v2 : 0);
      }
      if ( v2 == 2 && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
      {
        CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(this, 16LL);
        if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this) )
          CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this, v5);
      }
    }
  }
  return 0LL;
}
