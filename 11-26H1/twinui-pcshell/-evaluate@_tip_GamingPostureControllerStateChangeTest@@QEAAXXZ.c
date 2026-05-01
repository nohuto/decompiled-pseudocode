/*
 * XREFs of ?evaluate@_tip_GamingPostureControllerStateChangeTest@@QEAAXXZ @ 0x180330FC4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@EEAAXXZ @ 0x180330FB0 (-evaluate@-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x1803306B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59783520@@@details@wil@@QEAA_NXZ @ 0x180330770 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59783520@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall _tip_GamingPostureControllerStateChangeTest::evaluate(
        _tip_GamingPostureControllerStateChangeTest *this)
{
  __int64 v2; // rcx
  char v3; // r15
  char v4; // r14
  bool v5; // zf
  char v6; // si
  char v7; // bp
  const char *v8; // rdx
  tip2::details *v9; // rax
  __int64 v10; // rcx
  tip2::details *v11; // rax
  __int64 v12; // rdx
  tip2::details *v13; // rax
  __int64 v14; // rcx
  const char *v15; // rdx
  char v16; // al
  char v17; // al
  const char *v18; // rdx
  const char *v19; // rdx
  __int64 v20; // rax

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
  if ( *((_BYTE *)this + 18) && !*((_BYTE *)this + 19) )
  {
    v3 = 1;
LABEL_9:
    v4 = 0;
    goto LABEL_10;
  }
  v3 = 0;
  if ( !*((_BYTE *)this + 18) )
    goto LABEL_9;
  v4 = 1;
  if ( !*((_BYTE *)this + 19) )
    goto LABEL_9;
LABEL_10:
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 22) || *((_BYTE *)this + 23) || *((_BYTE *)this + 24) )
      goto LABEL_20;
    v5 = *((_BYTE *)this + 27) == 0;
  }
  else
  {
    if ( *((_BYTE *)this + 22) || *((_BYTE *)this + 23) || *((_BYTE *)this + 24) )
      goto LABEL_20;
    v5 = *((_BYTE *)this + 25) == 0;
  }
  v6 = 0;
  if ( !v5 )
LABEL_20:
    v6 = 1;
  v7 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
  {
    v7 = v6;
    v6 |= *((_BYTE *)this + 26);
  }
  if ( !*((_BYTE *)this + 17) )
  {
    if ( !*((_BYTE *)this + 16) )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::prerequisites_not_met_for_exit", v8);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 12;
LABEL_27:
      *(_BYTE *)(v10 + 152) = 3;
      goto LABEL_28;
    }
    if ( !*((_BYTE *)this + 17) && *((_BYTE *)this + 16) )
    {
      if ( v6 )
      {
        v9 = tip2::details::reason_string((tip2::details *)"reason::acted_on_request_with_unmet_prerequisites", v8);
        v10 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v10 + 152) )
          return;
        *(_WORD *)(v10 + 154) = 13;
        goto LABEL_27;
      }
      if ( *((_BYTE *)this + 16) )
      {
        v11 = tip2::details::reason_string((tip2::details *)"reason::prerequisites_not_met", v8);
        v12 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v12 + 152) )
          return;
        *(_WORD *)(v12 + 154) = 11;
LABEL_37:
        *(_BYTE *)(v12 + 152) = 4;
        goto LABEL_38;
      }
    }
  }
  if ( v3 )
  {
    if ( v6 )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::acted_on_an_invalid_transition", v8);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 1;
      goto LABEL_27;
    }
    v11 = tip2::details::reason_string((tip2::details *)"reason::invalid_transition", v8);
    v12 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v12 + 152) )
      return;
    *(_BYTE *)(v12 + 152) = 4;
    *(_WORD *)(v12 + 154) = 4;
LABEL_38:
    *(_QWORD *)(v12 + 160) = v11;
    return;
  }
  if ( v4 )
  {
    if ( v6 )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::acted_on_repeat_request", v8);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 2;
      goto LABEL_27;
    }
    if ( !*((_BYTE *)this + 21) )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::didnt_wait_on_in_progress_change", v8);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 6;
      goto LABEL_27;
    }
    goto LABEL_98;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
    {
      if ( *((_DWORD *)this + 7) == -2147467260 )
      {
        v16 = 1;
        if ( v7 )
        {
          v9 = tip2::details::reason_string((tip2::details *)"reason::acted_on_canceled_request", v15);
          v10 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v10 + 152) )
            return;
          *(_WORD *)(v10 + 154) = 18;
          goto LABEL_27;
        }
      }
      else
      {
        v16 = 0;
      }
      if ( v16 )
      {
        v11 = tip2::details::reason_string((tip2::details *)"reason::canceled_by_user", v15);
        v12 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v12 + 152) )
          return;
        *(_WORD *)(v12 + 154) = 15;
        goto LABEL_37;
      }
      if ( *((_DWORD *)this + 7) == -2147024546 )
      {
        v17 = 1;
        if ( v7 )
        {
          v9 = tip2::details::reason_string((tip2::details *)"reason::acted_when_restart_was_required", v15);
          v10 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v10 + 152) )
            return;
          *(_WORD *)(v10 + 154) = 19;
          goto LABEL_27;
        }
      }
      else
      {
        v17 = 0;
      }
      if ( v17 )
      {
        v11 = tip2::details::reason_string((tip2::details *)"reason::restart_required", v15);
        v12 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v12 + 152) )
          return;
        *(_WORD *)(v12 + 154) = 16;
        goto LABEL_37;
      }
    }
    if ( !v6 )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::didnt_act_on_state_change", v15);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 7;
      goto LABEL_27;
    }
    if ( !*((_BYTE *)this + 23) )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::didnt_publish_wnf", v15);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 8;
      goto LABEL_27;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
      && !*((_BYTE *)this + 16) )
    {
      if ( (!wil::details::FeatureImpl<__WilFeatureTraits_Feature_59783520>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_59783520>::GetImpl'::`2'::impl)
         || !*((_BYTE *)this + 32))
        && !*((_BYTE *)this + 27) )
      {
        v9 = tip2::details::reason_string((tip2::details *)"reason::didnt_raise_desktop", v18);
        v10 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v10 + 152) )
          return;
        *(_BYTE *)(v10 + 152) = 3;
        *(_WORD *)(v10 + 154) = 14;
LABEL_28:
        *(_QWORD *)(v10 + 160) = v9;
        return;
      }
    }
    else if ( !*((_BYTE *)this + 24) )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::didnt_launch_gaming_app", v18);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_BYTE *)(v10 + 152) = 3;
      *(_WORD *)(v10 + 154) = 9;
      goto LABEL_28;
    }
    if ( !*((_BYTE *)this + 25) )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::didnt_signal_in_progress_state_change_event", v18);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 10;
      goto LABEL_27;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
      && *((int *)this + 7) < 0 )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::unexpected_exception", v19);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 17;
      goto LABEL_27;
    }
LABEL_98:
    v20 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v20 + 152) )
    {
      *(_BYTE *)(v20 + 152) = 1;
      *(_WORD *)(v20 + 154) = 0x8000;
      *(_QWORD *)(v20 + 160) = 0LL;
    }
    return;
  }
  if ( !v6 )
  {
    v11 = tip2::details::reason_string((tip2::details *)"reason::noop_state_change", v8);
    v12 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v12 + 152) )
      return;
    *(_WORD *)(v12 + 154) = 5;
    goto LABEL_37;
  }
  v13 = tip2::details::reason_string((tip2::details *)"reason::acted_on_noop_state_change", v8);
  v14 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v14 + 152) )
  {
    *(_QWORD *)(v14 + 160) = v13;
    *(_BYTE *)(v14 + 152) = 3;
    *(_WORD *)(v14 + 154) = 3;
  }
}
