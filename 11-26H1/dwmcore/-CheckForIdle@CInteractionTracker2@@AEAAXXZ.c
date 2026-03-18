/*
 * XREFs of ?CheckForIdle@CInteractionTracker2@@AEAAXXZ @ 0x180272600
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker2@@UEAAXXZ @ 0x1802744C0 (-NotifyExpressionProcessingComplete@CInteractionTracker2@@UEAAXXZ.c)
 *     ?OnChanged@CInteractionTracker2@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180274600 (-OnChanged@CInteractionTracker2@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180276224 (-SetCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker2@@QEBA_NXZ @ 0x1801D40CC (-HasRunningDefaultPositionAnimation@CInteractionTracker2@@QEBA_NXZ.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker2@@QEBA_NXZ @ 0x180273E70 (-HasRunningDefaultScaleAnimation@CInteractionTracker2@@QEBA_NXZ.c)
 *     ?TransitionToIdle@CInteractionTracker2@@AEAAXXZ @ 0x180277528 (-TransitionToIdle@CInteractionTracker2@@AEAAXXZ.c)
 *     ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTrackerBase@@@Z @ 0x1802785CC (-BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteracti.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::CheckForIdle(CInteractionTracker2 *this)
{
  int v2; // ecx
  int v3; // ecx
  CInteractionTrackerBindingManager *v4; // rcx
  CInteractionTracker2 *v5; // rcx

  v2 = *((_DWORD *)this + 22) - 1;
  if ( !v2 )
    return;
  v3 = v2 - 1;
  if ( !v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CInteractionTracker2 *))(*(_QWORD *)this + 272LL))(this)
      && ((*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 81) + 248LL))(*((_QWORD *)this + 81))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 82) + 248LL))(*((_QWORD *)this + 82))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 83) + 248LL))(*((_QWORD *)this + 83)))
      || CInteractionTracker2::HasRunningDefaultPositionAnimation(this)
      || CInteractionTracker2::HasRunningDefaultScaleAnimation(v5) )
    {
      return;
    }
    if ( (*(unsigned __int8 (**)(void))(*(_QWORD *)this + 592LL))() )
    {
LABEL_17:
      CInteractionTracker2::TransitionToInertia(this, 0LL);
      return;
    }
LABEL_8:
    CInteractionTracker2::TransitionToIdle(this);
    return;
  }
  if ( v3 != 1 )
    goto LABEL_8;
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionTracker2 *))(*(_QWORD *)this + 504LL))(this) )
    return;
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionTracker2 *))(*(_QWORD *)this + 592LL))(this) )
    goto LABEL_17;
  v4 = (CInteractionTrackerBindingManager *)*((_QWORD *)this + 131);
  if ( !v4 || !CInteractionTrackerBindingManager::BoundTrackersHaveActiveCustomAnimations(v4, this) )
    goto LABEL_8;
}
