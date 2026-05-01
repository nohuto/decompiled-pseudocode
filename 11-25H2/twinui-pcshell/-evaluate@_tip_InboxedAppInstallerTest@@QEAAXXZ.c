/*
 * XREFs of ?evaluate@_tip_InboxedAppInstallerTest@@QEAAXXZ @ 0x1805B7D9C
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805B7C50 (-evaluate@-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_InboxedAppInstallerTest::evaluate(_tip_InboxedAppInstallerTest *this, const char *a2)
{
  __int64 v2; // r9
  const char *v3; // rax
  __int64 v4; // r9
  char v5; // r10
  int v6; // eax
  char v7; // r10
  char v8; // r10
  char v9; // r10
  char v10; // r10
  char v11; // r10
  char v12; // r10
  __int16 v13; // r10
  char v14; // r10
  char v15; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 16385;
    goto LABEL_38;
  }
  if ( !*((_BYTE *)this + 145) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::power_inadequate", a2);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_BYTE *)(v4 + 152) = 4;
    *(_WORD *)(v4 + 154) = 6;
    goto LABEL_7;
  }
  v6 = *((_DWORD *)this + 5);
  switch ( v6 )
  {
    case -2145124322:
    case 1312:
      v3 = tip2::details::reason_string((tip2::details *)"reason::system_or_service_shutdown", a2);
      if ( *(_BYTE *)(v4 + 152) != v7 )
        return;
      *(_BYTE *)(v4 + 152) = 4;
      *(_WORD *)(v4 + 154) = 3;
      goto LABEL_7;
    case 1618:
      v3 = tip2::details::reason_string((tip2::details *)"reason::install_already_running", a2);
      if ( *(_BYTE *)(v4 + 152) != v8 )
        return;
      *(_BYTE *)(v4 + 152) = 4;
      *(_WORD *)(v4 + 154) = 4;
      goto LABEL_7;
    case -2147024891:
      v3 = tip2::details::reason_string((tip2::details *)"reason::access_denied", a2);
      if ( *(_BYTE *)(v4 + 152) != v9 )
        return;
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 5;
      goto LABEL_7;
  }
  if ( !*((_QWORD *)this + 16) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::local_package_path_not_set", a2);
    if ( *(_BYTE *)(v4 + 152) != v10 )
      return;
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 10;
    goto LABEL_7;
  }
  if ( *((int *)this + 6) < 0 )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::install_failed_with_exception", a2);
    if ( *(_BYTE *)(v4 + 152) != v11 )
      return;
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 9;
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::invalid_package_volume", a2);
    if ( *(_BYTE *)(v4 + 152) != v12 )
      return;
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 8;
    goto LABEL_7;
  }
  if ( v6 < 0 )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::install_status_hr_failure", a2);
    if ( *(_BYTE *)(v4 + 152) != (_BYTE)v13 )
      return;
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = v13;
    goto LABEL_7;
  }
  if ( *((_DWORD *)this + 7) != 6 )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::install_not_completed", (const char *)6);
    if ( *(_BYTE *)(v4 + 152) != v14 )
      return;
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_7;
  }
  if ( !*((_BYTE *)this + 16) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::not_installed", (const char *)6);
    if ( *(_BYTE *)(v4 + 152) != v15 )
      return;
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 2;
LABEL_7:
    *(_QWORD *)(v4 + 160) = v3;
    return;
  }
  if ( *(_BYTE *)(v2 + 152) )
    return;
  *(_BYTE *)(v2 + 152) = 1;
  *(_WORD *)(v2 + 154) = 0x8000;
LABEL_38:
  *(_QWORD *)(v2 + 160) = 0LL;
}
