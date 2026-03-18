/*
 * XREFs of ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C68C
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@UEAAXXZ @ 0x18013B8B0 (-NotifyExpressionProcessingComplete@CInteractionTracker@@UEAAXXZ.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18013D8D0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B578 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18013C7BC (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x18013DF1C (-HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x180270D00 (-HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTrackerBase@@@Z @ 0x1802785CC (-BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteracti.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::CheckForIdle(CInteractionTracker *this)
{
  int v2; // ecx
  int v3; // ecx
  CInteractionTrackerBindingManager *v4; // rcx
  CInteractionTracker *v5; // rcx

  v2 = *((_DWORD *)this + 22) - 1;
  if ( !v2 )
    return;
  v3 = v2 - 1;
  if ( !v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CInteractionTracker *))(*(_QWORD *)this + 272LL))(this)
      && ((*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 248LL))(*((_QWORD *)this + 52))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 53) + 248LL))(*((_QWORD *)this + 53))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 248LL))(*((_QWORD *)this + 54)))
      || CInteractionTracker::HasRunningDefaultPositionAnimation(this)
      || CInteractionTracker::HasRunningDefaultScaleAnimation(v5) )
    {
      return;
    }
    if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)this + 592LL))() )
      goto LABEL_4;
    goto LABEL_18;
  }
  if ( v3 != 1 )
  {
LABEL_4:
    CInteractionTracker::TransitionToIdle(this);
    return;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CInteractionTracker *))(*(_QWORD *)this + 504LL))(this) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CInteractionTracker *))(*(_QWORD *)this + 592LL))(this) )
    {
      v4 = (CInteractionTrackerBindingManager *)*((_QWORD *)this + 75);
      if ( !v4 || !CInteractionTrackerBindingManager::BoundTrackersHaveActiveCustomAnimations(v4, this) )
        goto LABEL_4;
      return;
    }
LABEL_18:
    CInteractionTracker::TransitionToInertia(this, 0LL);
  }
}
