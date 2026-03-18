/*
 * XREFs of ?CommitRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAJXZ @ 0x1801B8D90
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x180032E10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CommitRecordedStatistics(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  CGlobalCompositionSurfaceInfo::CBindInfo *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx

  v4 = (CGlobalCompositionSurfaceInfo *)((char *)this + 112);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(
                          (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl,
                          a2,
                          a3,
                          a4) )
    return CGlobalCompositionSurfaceInfo::CBindInfo::CommitRecordedStatistics(v4);
  v5 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(**((_QWORD **)v4 + 2) + 56LL))(*((_QWORD **)v4 + 2), 0LL);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x121u, 0LL);
  return v6;
}
