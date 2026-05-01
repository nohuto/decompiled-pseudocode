/*
 * XREFs of ?Destroy@CSnapAssistControllerBase@@UEAAJXZ @ 0x1802D14A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSnapAssistControllerBase::Destroy(CSnapAssistControllerBase *this)
{
  int v1; // edx
  std::_Ref_count_base *v3; // rcx

  v1 = *((_DWORD *)this + 74);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 32LL))(*((_QWORD *)this + 14));
    *((_DWORD *)this + 74) = 0;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    v1);
  *((_QWORD *)this + 35) = 0LL;
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = 0LL;
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return 0LL;
}
