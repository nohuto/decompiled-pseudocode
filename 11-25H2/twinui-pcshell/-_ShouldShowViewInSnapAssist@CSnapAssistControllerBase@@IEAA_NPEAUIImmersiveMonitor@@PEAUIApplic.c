/*
 * XREFs of ?_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@@Z @ 0x1802B889C
 * Callers:
 *     ?_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@PEAPEAUIObjectCollection@@@Z @ 0x1800F3458 (-_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV-$vector@.c)
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1800DACD0 (-IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVi.c)
 *     ?_IsTabletMode@CSnapAssistControllerBase@@IEAA_NXZ @ 0x1802B03B8 (-_IsTabletMode@CSnapAssistControllerBase@@IEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CSnapAssistControllerBase::_ShouldShowViewInSnapAssist(
        CSnapAssistControllerBase *this,
        char a2,
        SnapLayoutHelpers *a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  __int64 *v10; // rbx
  struct IImmersiveMonitor *v11; // r8
  struct IApplicationView *v12; // rdx

  v8 = *(_QWORD **)a4;
  v9 = *(_QWORD **)(a4 + 8);
  while ( v8 != v9 && !(*(unsigned __int8 (__fastcall **)(_QWORD, SnapLayoutHelpers *))(*(_QWORD *)*v8 + 88LL))(*v8, a3) )
    ++v8;
  if ( v8 != *(_QWORD **)(a4 + 8) )
    return 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    a2);
  if ( a5 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64, SnapLayoutHelpers *))(*(_QWORD *)a5 + 184LL))(a5, a3) )
      return 0;
  }
  v10 = (__int64 *)*((_QWORD *)this + 13);
  LOBYTE(v11) = CSnapAssistControllerBase::_IsTabletMode(this);
  return SnapLayoutHelpers::IsSnappableWindow(a3, v12, v11, v10);
}
