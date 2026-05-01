/*
 * XREFs of ?evaluate@_tip_SettingsStoreAppInstallerTest@@QEAAXXZ @ 0x1805B826C
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805B7C90 (-evaluate@-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ComparePackageVersions @ 0x1805AA780 (ComparePackageVersions.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ @ 0x1805B72C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall _tip_SettingsStoreAppInstallerTest::evaluate(_tip_SettingsStoreAppInstallerTest *this, const char *a2)
{
  __int64 v2; // r9
  const char *v4; // rax
  __int64 v5; // r9
  const char *v6; // rdx
  const char *v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  const char *v10; // rax
  __int64 v11; // rcx
  const char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax

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
  if ( !*((_BYTE *)this + 131) )
  {
    v4 = tip2::details::reason_string((tip2::details *)"reason::power_inadequate", a2);
    if ( *(_BYTE *)(v5 + 152) )
      return;
    *(_WORD *)(v5 + 154) = 7;
    goto LABEL_7;
  }
  if ( !*((_BYTE *)this + 133) )
  {
    v4 = tip2::details::reason_string((tip2::details *)"reason::no_network", a2);
    if ( *(_BYTE *)(v5 + 152) )
      return;
    *(_WORD *)(v5 + 154) = 8;
    goto LABEL_7;
  }
  if ( !*((_BYTE *)this + 129) )
  {
    v4 = tip2::details::reason_string((tip2::details *)"reason::store_install_not_allowed", a2);
    if ( *(_BYTE *)(v5 + 152) )
      return;
    *(_WORD *)(v5 + 154) = 9;
LABEL_7:
    *(_BYTE *)(v5 + 152) = 4;
    *(_QWORD *)(v5 + 160) = v4;
    return;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_55740385>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_55740385>::GetImpl'::`2'::impl)
    && !*((_BYTE *)this + 17) )
  {
    v7 = tip2::details::reason_string((tip2::details *)"reason::automatic_install_not_allowed", v6);
    v8 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v8 + 152) )
      return;
    *(_WORD *)(v8 + 154) = 10;
LABEL_18:
    *(_BYTE *)(v8 + 152) = 4;
    goto LABEL_19;
  }
  v9 = *((_DWORD *)this + 8);
  switch ( v9 )
  {
    case -2145124322:
    case 1312:
      v7 = tip2::details::reason_string((tip2::details *)"reason::system_or_service_shutdown", v6);
      v8 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v8 + 152) )
        return;
      *(_BYTE *)(v8 + 152) = 4;
      *(_WORD *)(v8 + 154) = 4;
      goto LABEL_19;
    case 1618:
      v7 = tip2::details::reason_string((tip2::details *)"reason::install_already_running", v6);
      v8 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v8 + 152) )
        return;
      *(_WORD *)(v8 + 154) = 5;
      goto LABEL_18;
    case -2147024891:
      v7 = tip2::details::reason_string((tip2::details *)"reason::access_denied", v6);
      v8 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v8 + 152) )
        return;
      *(_BYTE *)(v8 + 152) = 3;
      *(_WORD *)(v8 + 154) = 6;
LABEL_19:
      *(_QWORD *)(v8 + 160) = v7;
      return;
  }
  if ( v9 < 0 )
  {
    v10 = tip2::details::reason_string((tip2::details *)"reason::install_status_hr_failure", v6);
    v11 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v11 + 152) )
      return;
    *(_WORD *)(v11 + 154) = 0;
    goto LABEL_33;
  }
  if ( *((_DWORD *)this + 10) != 6 )
  {
    v10 = tip2::details::reason_string((tip2::details *)"reason::install_not_completed", v6);
    v11 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v11 + 152) )
      return;
    *(_WORD *)(v11 + 154) = 1;
    goto LABEL_33;
  }
  if ( *((_WORD *)this + 22)
    && *((_WORD *)this + 23)
    && (int)ComparePackageVersions(*(_QWORD *)((char *)this + 44), *(_QWORD *)((char *)this + 52)) < 0 )
  {
    v10 = tip2::details::reason_string((tip2::details *)"reason::installed_outdated_version", v6);
    v11 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v11 + 152) )
      return;
    *(_WORD *)(v11 + 154) = 2;
LABEL_33:
    *(_BYTE *)(v11 + 152) = 3;
    *(_QWORD *)(v11 + 160) = v10;
    return;
  }
  if ( *((_BYTE *)this + 16) )
  {
    v14 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v14 + 152) )
    {
      *(_BYTE *)(v14 + 152) = 1;
      *(_WORD *)(v14 + 154) = 0x8000;
      *(_QWORD *)(v14 + 160) = 0LL;
    }
  }
  else
  {
    v12 = tip2::details::reason_string((tip2::details *)"reason::not_installed", v6);
    v13 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v13 + 152) )
    {
      *(_QWORD *)(v13 + 160) = v12;
      *(_BYTE *)(v13 + 152) = 3;
      *(_WORD *)(v13 + 154) = 3;
    }
  }
}
