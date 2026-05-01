/*
 * XREFs of ?Destroy@CSnapAssistControllerBase@@UEAAJXZ @ 0x1802C8410
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSnapAssistControllerBase::Destroy(CSnapAssistControllerBase *this, __int64 a2, char a3)
{
  std::_Ref_count_base *v4; // rcx

  if ( *((_DWORD *)this + 74) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 32LL))(*((_QWORD *)this + 14));
    *((_DWORD *)this + 74) = 0;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    a3);
  *((_QWORD *)this + 35) = 0LL;
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = 0LL;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return 0LL;
}
