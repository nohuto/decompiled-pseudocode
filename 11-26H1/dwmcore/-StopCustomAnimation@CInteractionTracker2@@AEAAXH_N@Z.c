/*
 * XREFs of ?StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z @ 0x180277314
 * Callers:
 *     ?DemoteToBoundTracker@CInteractionTracker2@@EEAAX_N@Z @ 0x180272F40 (-DemoteToBoundTracker@CInteractionTracker2@@EEAAX_N@Z.c)
 *     ?OnChanged@CInteractionTracker2@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180274600 (-OnChanged@CInteractionTracker2@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180276224 (-SetCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker2@@AEAAX_N@Z @ 0x1802773C8 (-StopCustomAnimations@CInteractionTracker2@@AEAAX_N@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18027740C (-TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationT.c)
 * Callees:
 *     ?UnRegisterNotifierNoRelease@CResource@@QEAA_NPEAV1@@Z @ 0x1800222EC (-UnRegisterNotifierNoRelease@CResource@@QEAA_NPEAV1@@Z.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?ClearCustomAnimation@CInteractionTracker2@@AEAAXH@Z @ 0x180272D0C (-ClearCustomAnimation@CInteractionTracker2@@AEAAXH@Z.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTrackerBase@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x180278D64 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTrackerBas.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker2::StopCustomAnimation(CInteractionTracker2 *this, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  __int64 TargetResource; // rax
  struct CResource *v8; // rdi

  if ( a2 < 2 )
  {
    _mm_lfence();
    v6 = *((_QWORD *)this + (int)a2 + 84);
    if ( v6 )
    {
      TargetResource = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v6);
      v8 = (struct CResource *)TargetResource;
      if ( TargetResource )
      {
        if ( *((_QWORD *)this + 131) && a3 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)TargetResource + 64LL))(
                 TargetResource,
                 70LL) )
          {
            CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(*((_QWORD *)this + 131), this, v8, a2);
          }
        }
        *((_BYTE *)v8 + 216) &= ~1u;
        CResource::UnRegisterNotifierNoRelease(this, v8);
      }
      CInteractionTracker2::ClearCustomAnimation(this, a2);
    }
  }
}
