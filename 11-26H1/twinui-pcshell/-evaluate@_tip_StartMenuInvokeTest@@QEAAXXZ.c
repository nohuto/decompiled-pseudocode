/*
 * XREFs of ?evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ @ 0x180245DB8
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@EEAAXXZ @ 0x18045DC40 (-evaluate@-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802E79F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18038B330 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NW4R.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57784674@@@details@wil@@QEAA_NXZ @ 0x18045D9C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57784674@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall _tip_StartMenuInvokeTest::evaluate(_tip_StartMenuInvokeTest *this)
{
  const char *v2; // rdx
  int v3; // eax
  const char *v4; // rax
  __int64 v5; // rdx
  const char *v6; // rax
  __int64 v7; // rdx
  char v8; // cl
  _BYTE *v9; // rax
  char IsEnabled; // al
  const char *v11; // rdx
  char v12; // cl
  __int64 v13; // rax
  char v14; // cl

  if ( *((_BYTE *)this + 56) )
    *(_DWORD *)(*((_QWORD *)this + 1) + 172LL) = 38522498;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustStartMenu>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FullTrustStartMenu>::GetImpl'::`2'::impl) )
    *((_BYTE *)this + 64) = 1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49402389>::GetImpl'::`2'::impl) )
    *((_BYTE *)this + 67) = 1;
  v3 = *((_DWORD *)this + 8);
  if ( v3 != -2144927148 && v3 != -2147009295 )
  {
    if ( *((int *)this + 10) < 0 )
    {
      v4 = tip2::details::reason_string((tip2::details *)"reason::utm_initialization_failure", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) )
        return;
      *(_WORD *)(v5 + 154) = 10;
      goto LABEL_107;
    }
    if ( *((int *)this + 11) < 0 )
    {
      v4 = tip2::details::reason_string((tip2::details *)"reason::root_frame_initialization_failure", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) )
        return;
      *(_WORD *)(v5 + 154) = 11;
      goto LABEL_107;
    }
    if ( *((_BYTE *)this + 57) )
    {
      v4 = tip2::details::reason_string((tip2::details *)"reason::undocked_content_missing", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) )
        return;
      *(_WORD *)(v5 + 154) = 22;
      goto LABEL_107;
    }
    if ( *((_DWORD *)this + 15) != -1 )
    {
      v4 = tip2::details::reason_string((tip2::details *)"reason::undocked_content_error", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) )
        return;
      *(_WORD *)(v5 + 154) = 23;
      goto LABEL_107;
    }
    if ( v3 < 0 )
    {
      if ( (v3 & 0x1FFF0000) == 0x70000 && (unsigned int)(unsigned __int16)v3 - 15600 <= 0x63 )
      {
        v4 = tip2::details::reason_string((tip2::details *)"reason::activation_failure_package_error", v2);
        v5 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v5 + 152) )
          return;
        *(_WORD *)(v5 + 154) = 24;
      }
      else
      {
        v4 = tip2::details::reason_string((tip2::details *)"reason::activation_failure", v2);
        v5 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v5 + 152) )
          return;
        *(_WORD *)(v5 + 154) = 8;
      }
      goto LABEL_107;
    }
    if ( *((_BYTE *)this + 21) )
    {
      v4 = tip2::details::reason_string((tip2::details *)"reason::start_crashed_during_invoke", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) )
        return;
      *(_WORD *)(v5 + 154) = 4;
      goto LABEL_107;
    }
    if ( *((_BYTE *)this + 25) )
    {
      v4 = tip2::details::reason_string((tip2::details *)"reason::invalid_state_transition_during_show", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) )
        return;
      *(_WORD *)(v5 + 154) = 12;
      goto LABEL_107;
    }
    if ( *((_BYTE *)this + 19) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::canceled_device_locked", v2);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_BYTE *)(v7 + 152) = 4;
      *(_WORD *)(v7 + 154) = 2;
      goto LABEL_37;
    }
    if ( *((_BYTE *)this + 20) )
    {
      if ( !*((_BYTE *)this + 22) && !*((_BYTE *)this + 23) )
      {
        if ( *((_BYTE *)this + 56) )
        {
          v4 = tip2::details::reason_string((tip2::details *)"reason::autoinvoke_timed_out_after_five_seconds", v2);
          v5 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v5 + 152) )
            return;
          *(_WORD *)(v5 + 154) = 21;
          goto LABEL_107;
        }
        v6 = tip2::details::reason_string((tip2::details *)"reason::timed_out_after_five_seconds", v2);
        v7 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v7 + 152) )
          return;
        *(_BYTE *)(v7 + 152) = 3;
        *(_WORD *)(v7 + 154) = 3;
LABEL_37:
        *(_QWORD *)(v7 + 160) = v6;
        return;
      }
LABEL_40:
      v4 = tip2::details::reason_string((tip2::details *)"reason::search_failed_unable_to_recover", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) )
        return;
      *(_WORD *)(v5 + 154) = 13;
      goto LABEL_107;
    }
    v8 = *((_BYTE *)this + 17);
    if ( v8 )
    {
      if ( *((_DWORD *)this + 12) == -2147467261 )
      {
        v4 = tip2::details::reason_string((tip2::details *)"reason::search_null_hwnd_foreground_error", v2);
        v5 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v5 + 152) )
          return;
        *(_WORD *)(v5 + 154) = 19;
        goto LABEL_107;
      }
      if ( *((_DWORD *)this + 12) == -2147023496 )
      {
        v4 = tip2::details::reason_string((tip2::details *)"reason::search_invalid_hwnd_foreground_error", v2);
        v5 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v5 + 152) )
          return;
        *(_WORD *)(v5 + 154) = 20;
        goto LABEL_107;
      }
      v9 = (char *)this + 18;
    }
    else
    {
      v9 = (char *)this + 18;
      if ( !*((_BYTE *)this + 18) )
        goto LABEL_58;
    }
    if ( *((_BYTE *)this + 22) )
      goto LABEL_40;
LABEL_58:
    if ( (v8 || *v9) && (*((_BYTE *)this + 23) || (v8 || *v9) && *((_BYTE *)this + 24)) )
      goto LABEL_40;
    if ( *((_BYTE *)this + 17) )
    {
      v4 = tip2::details::reason_string((tip2::details *)"reason::foreground_could_not_be_claimed", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) )
        return;
      *(_WORD *)(v5 + 154) = 17;
      goto LABEL_107;
    }
    if ( *((_BYTE *)this + 18) )
    {
      v4 = tip2::details::reason_string((tip2::details *)"reason::foreground_lost_invoke_abort", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) )
        return;
      *(_WORD *)(v5 + 154) = 18;
      goto LABEL_107;
    }
    if ( *((_BYTE *)this + 22) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::search_crashed_during_invoke", v2);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_BYTE *)(v7 + 152) = 2;
      *(_WORD *)(v7 + 154) = 5;
      goto LABEL_37;
    }
    if ( *((_BYTE *)this + 23) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::search_activation_failed", v2);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_BYTE *)(v7 + 152) = 2;
      *(_WORD *)(v7 + 154) = 6;
      goto LABEL_37;
    }
    if ( *((_BYTE *)this + 24) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::start_shown_without_search_after_cutoff_timer", v2);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_BYTE *)(v7 + 152) = 2;
      *(_WORD *)(v7 + 154) = 7;
      goto LABEL_37;
    }
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_57784674>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57784674>::GetImpl'::`2'::impl);
    v12 = *((_BYTE *)this + 26);
    if ( IsEnabled )
    {
      if ( v12 )
      {
        if ( *((_BYTE *)this + 27) )
        {
          v6 = tip2::details::reason_string((tip2::details *)"reason::start_and_search_launched_during_invoke", v11);
          v7 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v7 + 152) )
            return;
          *(_BYTE *)(v7 + 152) = 2;
LABEL_84:
          *(_WORD *)(v7 + 154) = 16;
          goto LABEL_37;
        }
        goto LABEL_85;
      }
      if ( *((_BYTE *)this + 27) )
      {
        v6 = tip2::details::reason_string((tip2::details *)"reason::search_launched_during_invoke", v11);
        v7 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v7 + 152) )
          return;
        *(_BYTE *)(v7 + 152) = 2;
LABEL_90:
        *(_WORD *)(v7 + 154) = 15;
        goto LABEL_37;
      }
    }
    else
    {
      if ( v12 )
      {
        if ( *((_BYTE *)this + 27) )
        {
          v6 = tip2::details::reason_string((tip2::details *)"reason::start_and_search_launched_during_invoke", v11);
          v7 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v7 + 152) )
            return;
          *(_BYTE *)(v7 + 152) = 1;
          goto LABEL_84;
        }
LABEL_85:
        v6 = tip2::details::reason_string((tip2::details *)"reason::start_launched_during_invoke", v11);
        v7 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v7 + 152) )
          return;
        *(_BYTE *)(v7 + 152) = 1;
        *(_WORD *)(v7 + 154) = 14;
        goto LABEL_37;
      }
      if ( *((_BYTE *)this + 27) )
      {
        v6 = tip2::details::reason_string((tip2::details *)"reason::search_launched_during_invoke", v11);
        v7 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v7 + 152) )
          return;
        *(_BYTE *)(v7 + 152) = 1;
        goto LABEL_90;
      }
    }
    v13 = *((_QWORD *)this + 1);
    v14 = *(_BYTE *)(v13 + 152);
    if ( (*(_DWORD *)(v13 + 56) & 0x200) != 0 )
    {
      if ( v14 )
        return;
      *(_BYTE *)(v13 + 152) = 1;
      *(_WORD *)(v13 + 154) = 0x8000;
    }
    else
    {
      if ( v14 )
        return;
      *(_BYTE *)(v13 + 152) = 3;
      *(_WORD *)(v13 + 154) = 16385;
    }
    *(_QWORD *)(v13 + 160) = 0LL;
    return;
  }
  v4 = tip2::details::reason_string((tip2::details *)"reason::critical_start_dialog", v2);
  v5 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v5 + 152) )
    return;
  *(_WORD *)(v5 + 154) = 9;
LABEL_107:
  *(_QWORD *)(v5 + 160) = v4;
  *(_BYTE *)(v5 + 152) = 3;
}
