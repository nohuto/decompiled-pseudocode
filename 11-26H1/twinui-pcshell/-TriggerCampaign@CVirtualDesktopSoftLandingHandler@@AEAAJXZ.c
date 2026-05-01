/*
 * XREFs of ?TriggerCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x18056887C
 * Callers:
 *     ?AddWindow@CVirtualDesktopSoftLandingHandler@@AEAAJPEAUHWND__@@@Z @ 0x1801F3E88 (-AddWindow@CVirtualDesktopSoftLandingHandler@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18021C264 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::TriggerCampaign(CVirtualDesktopSoftLandingHandler *this)
{
  int *v2; // rdx
  int v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = 1;
  v2 = &v4;
  LOBYTE(v2) = 1;
  (*(void (__fastcall **)(_QWORD, int *, _QWORD, const wchar_t *, int, int *, __int64))(**((_QWORD **)this + 4) + 32LL))(
    *((_QWORD *)this + 4),
    v2,
    0LL,
    L"VDSoftLandingCampaignDone",
    4,
    &v4,
    4LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VDSLTest>::GetImpl'::`2'::impl,
    1u,
    0);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VDSLTest>::GetImpl'::`2'::impl,
    1u,
    1u);
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8);
  return 0LL;
}
