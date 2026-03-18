/*
 * XREFs of ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x18013D238
 * Callers:
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18013D1F4 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18013D8D0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B578 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B5C8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@EEAAX_N@Z @ 0x18021FE70 (-DemoteToBoundTracker@CInteractionTracker@@EEAAX_N@Z.c)
 * Callees:
 *     ?UnRegisterNotifierNoRelease@CResource@@QEAA_NPEAV1@@Z @ 0x1800222EC (-UnRegisterNotifierNoRelease@CResource@@QEAA_NPEAV1@@Z.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18013D2F0 (-ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTrackerBase@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x180278D64 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTrackerBas.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimation(CInteractionTracker *this, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  __int64 TargetResource; // rax
  struct CResource *v8; // rdi

  if ( a2 < 2 )
  {
    _mm_lfence();
    v6 = *((_QWORD *)this + (int)a2 + 55);
    if ( v6 )
    {
      TargetResource = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v6);
      v8 = (struct CResource *)TargetResource;
      if ( TargetResource )
      {
        if ( *((_QWORD *)this + 75) && a3 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)TargetResource + 64LL))(
                 TargetResource,
                 70LL) )
          {
            CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(*((_QWORD *)this + 75), this, v8, a2);
          }
        }
        *((_BYTE *)v8 + 216) &= ~1u;
        CResource::UnRegisterNotifierNoRelease(this, v8);
      }
      CInteractionTracker::ClearCustomAnimation(this, a2);
    }
  }
}
