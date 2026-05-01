/*
 * XREFs of ?evaluate@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXXZ @ 0x1805DBA30
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805DB670 (-evaluate@-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@EEAAX.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAA_NXZ @ 0x1805DAAA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@QEAA_NXZ @ 0x1805DAB5C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55707948@@@details@wil@@QEAA_NXZ @ 0x1805DABD8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55707948@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall _tip_LockWidgetCanvasDelayedInitializationTest::evaluate(
        _tip_LockWidgetCanvasDelayedInitializationTest *this)
{
  __int64 v2; // rcx
  const char *v3; // rdx
  tip2::details *v4; // rax
  __int64 v5; // rdx
  tip2::details *v6; // rax
  __int64 v7; // rcx
  tip2::details *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_BYTE *)(v2 + 152) = 3;
      *(_WORD *)(v2 + 154) = 16385;
      *(_QWORD *)(v2 + 160) = 0LL;
    }
    return;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_55707948>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_55707948>::GetImpl'::`2'::impl)
    && (*((_BYTE *)this + 18) || *((_BYTE *)this + 19)) )
  {
    v4 = tip2::details::reason_string((tip2::details *)"reason::lock_widget_canvas_disabled", v3);
    v5 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v5 + 152) )
      return;
    *(_BYTE *)(v5 + 152) = 4;
    *(_WORD *)(v5 + 154) = 6;
    goto LABEL_9;
  }
  if ( !*((_BYTE *)this + 25) )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::WEP_not_installed", v3);
    v7 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v7 + 152) )
      return;
    *(_WORD *)(v7 + 154) = 1;
    goto LABEL_13;
  }
  if ( !*((_BYTE *)this + 26) )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::WPR_not_installed", v3);
    v7 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v7 + 152) )
      return;
    *(_WORD *)(v7 + 154) = 2;
    goto LABEL_13;
  }
  if ( *((_DWORD *)this + 8) != -1 && *((_DWORD *)this + 8) != 6 )
  {
LABEL_19:
    v4 = tip2::details::reason_string((tip2::details *)"reason::package_install_failed", v3);
    v5 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v5 + 152) )
      return;
    *(_BYTE *)(v5 + 152) = 3;
    *(_WORD *)(v5 + 154) = 4;
LABEL_9:
    *(_QWORD *)(v5 + 160) = v4;
    return;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_55116415>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_55116415>::GetImpl'::`2'::impl) )
  {
    if ( *((_DWORD *)this + 10) != -1 && *((_DWORD *)this + 10) != 6 )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::fallback_package_install_failed", v3);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_WORD *)(v7 + 154) = 5;
LABEL_13:
      *(_BYTE *)(v7 + 152) = 3;
      *(_QWORD *)(v7 + 160) = v6;
      return;
    }
  }
  else if ( *((_DWORD *)this + 9) != -1 && *((_DWORD *)this + 9) != 6 )
  {
    goto LABEL_19;
  }
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_55480066>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_55480066>::GetImpl'::`2'::impl)
    || *((_BYTE *)this + 29) )
  {
    goto LABEL_36;
  }
  if ( *((_DWORD *)this + 11) != -1 && *((_DWORD *)this + 11) != 6 )
    goto LABEL_19;
  if ( *((_BYTE *)this + 27) || *((_BYTE *)this + 28) )
  {
LABEL_36:
    v10 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v10 + 152) )
    {
      *(_BYTE *)(v10 + 152) = 1;
      *(_WORD *)(v10 + 154) = 0x8000;
      *(_QWORD *)(v10 + 160) = 0LL;
    }
  }
  else
  {
    v8 = tip2::details::reason_string((tip2::details *)"reason::SEA_not_installed", v3);
    v9 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v9 + 152) )
    {
      *(_QWORD *)(v9 + 160) = v8;
      *(_BYTE *)(v9 + 152) = 3;
      *(_WORD *)(v9 + 154) = 3;
    }
  }
}
