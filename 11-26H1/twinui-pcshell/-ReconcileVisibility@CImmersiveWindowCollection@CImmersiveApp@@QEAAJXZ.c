/*
 * XREFs of ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005E4C8
 * Callers:
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x18005997C (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C548 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18005D718 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005E1E4 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1802C09F4 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_::Invoke @ 0x1802FE1C0 (CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__-_--Invoke.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1802FFF3C (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180300B7C (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800585E4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CA0C (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005CB4C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005D1D0 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005E7B8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005E7E0 (-IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005E8DC (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?ComputeAppFacingVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ViewVisibilityState@@XZ @ 0x18005EBF0 (-ComputeAppFacingVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEBA-AW4ViewVisibilit.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@W4GHOST_STATUS@@@Z @ 0x1803002B4 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rsi
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  if ( *((_QWORD *)this + 21) )
  {
    v2 = CImmersiveApp::CImmersiveWindowCollection::ComputeAppFacingVisibilityState();
    if ( v2 == 2 )
      goto LABEL_6;
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
      CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(this, 16LL);
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
        v7 = *(_QWORD *)(*((_QWORD *)this + 20) + 8 * i);
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7);
        v9 = *(_QWORD *)(*((_QWORD *)this + 20) + 8 * i);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 224LL))(v9, v8 != 0 ? v2 : 0);
      }
      if ( v2 == 2 && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
      {
        CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)this, 16);
        if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this, v5, v6) )
          CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this);
      }
    }
  }
  return 0LL;
}
