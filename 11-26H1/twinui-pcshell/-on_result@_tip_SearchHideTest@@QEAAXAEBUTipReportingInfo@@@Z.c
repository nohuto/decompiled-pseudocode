/*
 * XREFs of ?on_result@_tip_SearchHideTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1803BD394
 * Callers:
 *     ?on_result@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXAEBUTipReportingInfo@@@Z @ 0x1803BD260 (-on_result@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXAEBUTipReportingInfo@@@Z.c)
 * Callees:
 *     ??$UndockedSearchExperienceManager_HideResult@AEA_NPEBGAEBG@UndockedSearchExperienceManagerTIPTelemetry@@SAXAEA_N$$QEAPEBGAEBG@Z @ 0x1803A8008 (--$UndockedSearchExperienceManager_HideResult@AEA_NPEBGAEBG@UndockedSearchExperienceManagerTIPTe.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52754209@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803BACE4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52754209@@@details@wil@@QEAA_NW4R.c)
 */

void __fastcall _tip_SearchHideTest::on_result(_tip_SearchHideTest *this, const struct TipReportingInfo *a2)
{
  char v3; // bl
  _QWORD *v4; // rax
  bool v5; // [rsp+38h] [rbp+10h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = *((_BYTE *)a2 + 40);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52754209>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52754209>::GetImpl'::`2'::impl)
    || (v3 & 0xFB) != 0 )
  {
    v5 = (unsigned __int8)(v3 - 1) <= 1u;
    v4 = (_QWORD *)((char *)this + 48);
    if ( *((_QWORD *)this + 9) > 7uLL )
      v4 = (_QWORD *)*v4;
    v6 = v4;
    UndockedSearchExperienceManagerTIPTelemetry::UndockedSearchExperienceManager_HideResult<bool &,unsigned short const *,unsigned short const &>(
      (char *)&v5,
      &v6);
  }
}
