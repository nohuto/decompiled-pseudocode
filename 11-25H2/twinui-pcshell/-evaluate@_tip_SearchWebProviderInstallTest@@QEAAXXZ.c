/*
 * XREFs of ?evaluate@_tip_SearchWebProviderInstallTest@@QEAAXXZ @ 0x1803B3A44
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXXZ @ 0x1803B3270 (-evaluate@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ @ 0x1803B25A4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall _tip_SearchWebProviderInstallTest::evaluate(_tip_SearchWebProviderInstallTest *this, const char *a2)
{
  const char *v3; // rax
  __int64 v4; // rdx
  const char *v5; // rdx
  __int64 v6; // r9
  const char *v7; // rax
  __int64 v8; // r9

  if ( *((_BYTE *)this + 20) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"Reason::install_package_regkeys_not_set", a2);
    v4 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_4;
  }
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370801>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_55370801>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 56) )
      goto LABEL_12;
    if ( !*((_BYTE *)this + 57) )
    {
LABEL_16:
      v3 = tip2::details::reason_string((tip2::details *)"Reason::app_not_registered", v5);
      v4 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v4 + 152) )
      {
        *(_BYTE *)(v4 + 152) = 3;
        *(_WORD *)(v4 + 154) = 3;
        goto LABEL_5;
      }
      return;
    }
LABEL_22:
    v6 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v6 + 56) & 0x200) != 0 )
    {
      if ( *((int *)this + 24) < 0 )
      {
        v7 = tip2::details::reason_string((tip2::details *)"Reason::app_installed_regkey_set_failed", v5);
        if ( !*(_BYTE *)(v8 + 152) )
        {
          *(_BYTE *)(v8 + 152) = 2;
          *(_WORD *)(v8 + 154) = 4;
          *(_QWORD *)(v8 + 160) = v7;
        }
        return;
      }
      if ( *(_BYTE *)(v6 + 152) )
        return;
      *(_BYTE *)(v6 + 152) = 1;
      *(_WORD *)(v6 + 154) = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v6 + 152) )
        return;
      *(_BYTE *)(v6 + 152) = 3;
      *(_WORD *)(v6 + 154) = 16385;
    }
    *(_QWORD *)(v6 + 160) = 0LL;
    return;
  }
  if ( !*((_BYTE *)this + 169) )
  {
    if ( *((_BYTE *)this + 56) && !*((_BYTE *)this + 168) )
    {
LABEL_12:
      v3 = tip2::details::reason_string((tip2::details *)"Reason::app_already_installed", v5);
      v4 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v4 + 152) )
      {
        *(_BYTE *)(v4 + 152) = 4;
        *(_WORD *)(v4 + 154) = 2;
        goto LABEL_5;
      }
      return;
    }
    if ( !*((_BYTE *)this + 57) )
    {
      if ( *((_BYTE *)this + 168) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::app_update_not_registered", v5);
        v4 = *((_QWORD *)this + 1);
        if ( !*(_BYTE *)(v4 + 152) )
        {
          *(_BYTE *)(v4 + 152) = 3;
          *(_WORD *)(v4 + 154) = 5;
          goto LABEL_5;
        }
        return;
      }
      goto LABEL_16;
    }
    goto LABEL_22;
  }
  v3 = tip2::details::reason_string((tip2::details *)"Reason::app_uninstalled_by_user", v5);
  v4 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v4 + 152) )
  {
    *(_WORD *)(v4 + 154) = 6;
LABEL_4:
    *(_BYTE *)(v4 + 152) = 4;
LABEL_5:
    *(_QWORD *)(v4 + 160) = v3;
  }
}
