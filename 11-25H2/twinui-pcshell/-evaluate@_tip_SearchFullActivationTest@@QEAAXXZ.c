/*
 * XREFs of ?evaluate@_tip_SearchFullActivationTest@@QEAAXXZ @ 0x1803B3284
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXXZ @ 0x1803B31F0 (-evaluate@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_SearchFullActivationTest_id@@@tip2@@IEBA_NXZ @ 0x1803B2218 (-__fail_if_complete_not_called@-$test_data_base@U_tip_SearchFullActivationTest_id@@@tip2@@IEBA_N.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55755684@@@details@wil@@QEAA_NXZ @ 0x1803B2620 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55755684@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall _tip_SearchFullActivationTest::evaluate(_tip_SearchFullActivationTest *this)
{
  const char *v2; // rdx
  int v3; // eax
  const char *v4; // rax
  __int64 v5; // rdx
  char v6; // r11
  char v7; // r11
  char v8; // r11
  char v9; // r11
  char v10; // r11
  const char *v11; // rax
  __int16 v12; // r10
  __int64 v13; // rcx
  char v14; // r11
  char v15; // r11
  char v16; // r11
  int v17; // eax
  char v18; // r11
  char v19; // r11
  char v20; // r9
  char v21; // r11
  char v22; // r11
  char v23; // r11
  char v24; // r11
  char v25; // r9
  char v26; // r11
  char v27; // r9
  char v28; // r11
  int v29; // ecx
  char v30; // r11
  char v31; // r11
  char v32; // r11
  const char *v33; // rax
  __int64 v34; // rdx
  char v35; // r11
  const char *v36; // rax
  char v37; // r11
  const char *v38; // rdx
  __int64 v39; // r11
  const char *v40; // rax
  char v41; // r10
  __int64 v42; // rcx
  char v43; // r11
  __int64 v44; // rax

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_55755684>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_55755684>::GetImpl'::`2'::impl) )
  {
    v3 = *((_DWORD *)this + 19);
    if ( v3 < 0 )
    {
      if ( v3 == -2144927148 || v3 == -2147009295 )
      {
        v4 = tip2::details::reason_string((tip2::details *)"Reason::activation_failure_package_not_registered", v2);
        v5 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v5 + 152) != v8 )
          return;
        *(_WORD *)(v5 + 154) = 19;
        goto LABEL_13;
      }
      goto LABEL_5;
    }
    if ( *((_BYTE *)this + 83) )
    {
      v4 = tip2::details::reason_string((tip2::details *)"Reason::view_destroyed_when_search_activates", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) == v9 )
      {
        *(_WORD *)(v5 + 154) = 18;
LABEL_13:
        *(_BYTE *)(v5 + 152) = 3;
LABEL_14:
        *(_QWORD *)(v5 + 160) = v4;
        return;
      }
      return;
    }
    if ( *((_BYTE *)this + 26) )
    {
      if ( *((_DWORD *)this + 4) == 2 )
        goto LABEL_20;
LABEL_22:
      v11 = tip2::details::reason_string((tip2::details *)"Reason::hidden", v2);
      v13 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v13 + 152) != v14 )
        return;
      *(_BYTE *)(v13 + 152) = 4;
      *(_WORD *)(v13 + 154) = v12;
      goto LABEL_24;
    }
    if ( *((_BYTE *)this + 27) )
      goto LABEL_26;
    if ( *((_BYTE *)this + 28) )
    {
LABEL_29:
      v11 = tip2::details::reason_string((tip2::details *)"Reason::dismissed", v2);
      v13 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v13 + 152) != v16 )
        return;
      *(_BYTE *)(v13 + 152) = 4;
      *(_WORD *)(v13 + 154) = 7;
      goto LABEL_24;
    }
    v17 = *((_DWORD *)this + 5);
    if ( *((_DWORD *)this + 4) == 4 )
    {
      if ( v17 == *((_DWORD *)this + 4) )
      {
        v4 = tip2::details::reason_string((tip2::details *)"Reason::activated_again_same_source", v2);
        v5 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v5 + 152) != v18 )
          return;
        *(_BYTE *)(v5 + 152) = 3;
        goto LABEL_35;
      }
      if ( v17 )
      {
        v4 = tip2::details::reason_string((tip2::details *)"Reason::activated_again", v2);
        v5 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v5 + 152) != v19 )
          return;
        *(_BYTE *)(v5 + 152) = 3;
        goto LABEL_39;
      }
      if ( *((_BYTE *)this + 33) )
      {
        v11 = tip2::details::reason_string((tip2::details *)"Reason::prelaunch_skipped", v2);
        v13 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v13 + 152) != v21 )
          return;
        *(_BYTE *)(v13 + 152) = v20;
        *(_WORD *)(v13 + 154) = 17;
LABEL_24:
        *(_QWORD *)(v13 + 160) = v11;
        return;
      }
      goto LABEL_73;
    }
    if ( v17 == *((_DWORD *)this + 4) )
    {
      v4 = tip2::details::reason_string((tip2::details *)"Reason::activated_again_same_source", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) != v26 )
        return;
      *(_BYTE *)(v5 + 152) = v25;
      goto LABEL_35;
    }
    if ( v17 )
    {
      v4 = tip2::details::reason_string((tip2::details *)"Reason::activated_again", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) != v28 )
        return;
      *(_BYTE *)(v5 + 152) = v27;
      goto LABEL_39;
    }
LABEL_75:
    if ( *((_BYTE *)this + 24) )
    {
      v33 = tip2::details::reason_string((tip2::details *)"Reason::activation_test_timeout", v2);
      v34 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v34 + 152) != v35 )
        return;
      *(_QWORD *)(v34 + 160) = v33;
      *(_WORD *)(v34 + 154) = 8;
    }
    else
    {
      if ( *((_BYTE *)this + 29) || *((_BYTE *)this + 34) )
        goto LABEL_83;
      v36 = tip2::details::reason_string((tip2::details *)"Reason::unexpected_navigation_state_during_launch", v2);
      v34 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v34 + 152) != v37 )
        return;
      *(_QWORD *)(v34 + 160) = v36;
      *(_WORD *)(v34 + 154) = 16;
    }
    *(_BYTE *)(v34 + 152) = 3;
    return;
  }
  if ( *((_BYTE *)this + 26) )
  {
    if ( *((_DWORD *)this + 4) == 2 )
    {
LABEL_20:
      v4 = tip2::details::reason_string((tip2::details *)"Reason::hidden_by_launcher_timeout", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) == v10 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 4;
        goto LABEL_14;
      }
      return;
    }
    goto LABEL_22;
  }
  if ( *((_BYTE *)this + 27) )
  {
LABEL_26:
    v4 = tip2::details::reason_string((tip2::details *)"Reason::consolidated", v2);
    v5 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v5 + 152) == v15 )
    {
      *(_BYTE *)(v5 + 152) = 4;
      *(_WORD *)(v5 + 154) = 3;
      goto LABEL_14;
    }
    return;
  }
  if ( *((_BYTE *)this + 28) )
    goto LABEL_29;
  v29 = *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 5) == v29 )
  {
    v4 = tip2::details::reason_string((tip2::details *)"Reason::activated_again_same_source", v2);
    v5 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v5 + 152) != v30 )
      return;
    *(_BYTE *)(v5 + 152) = 4;
LABEL_35:
    *(_WORD *)(v5 + 154) = 5;
    goto LABEL_14;
  }
  if ( *((_DWORD *)this + 5) )
  {
    v4 = tip2::details::reason_string((tip2::details *)"Reason::activated_again", v2);
    v5 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v5 + 152) != v31 )
      return;
    *(_BYTE *)(v5 + 152) = 4;
LABEL_39:
    *(_WORD *)(v5 + 154) = 1;
    goto LABEL_14;
  }
  v3 = *((_DWORD *)this + 19);
  if ( v3 < 0 )
  {
LABEL_5:
    if ( (v3 & 0x1FFF0000) == 0x70000 && (unsigned int)(unsigned __int16)v3 - 15600 <= 0x63 )
    {
      v4 = tip2::details::reason_string((tip2::details *)"Reason::activation_failure_package_error", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) != v6 )
        return;
      *(_WORD *)(v5 + 154) = 11;
    }
    else
    {
      v4 = tip2::details::reason_string((tip2::details *)"Reason::activation_failure", v2);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) != v7 )
        return;
      *(_WORD *)(v5 + 154) = 10;
    }
    goto LABEL_13;
  }
  if ( !*((_BYTE *)this + 31) )
  {
    if ( v29 == 4 )
    {
LABEL_73:
      if ( !*((_BYTE *)this + 81) )
      {
        v4 = tip2::details::reason_string((tip2::details *)"Reason::unexpected_navigation_state_during_prelaunch", v2);
        v5 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v5 + 152) == v22 )
        {
          *(_BYTE *)(v5 + 152) = 3;
          *(_WORD *)(v5 + 154) = 15;
          goto LABEL_14;
        }
        return;
      }
      if ( *((_BYTE *)this + 80) )
      {
        v4 = tip2::details::reason_string((tip2::details *)"Reason::view_visible_during_prelaunch", v2);
        v5 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v5 + 152) == v23 )
        {
          *(_BYTE *)(v5 + 152) = 3;
          *(_WORD *)(v5 + 154) = 14;
          goto LABEL_14;
        }
        return;
      }
      if ( *((_BYTE *)this + 82) )
      {
        v4 = tip2::details::reason_string((tip2::details *)"Reason::prelaunch_deferral_timeout", v2);
        v5 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v5 + 152) == v24 )
        {
          *(_BYTE *)(v5 + 152) = 3;
          *(_WORD *)(v5 + 154) = 9;
          goto LABEL_14;
        }
        return;
      }
LABEL_83:
      if ( !tip2::test_data_base<_tip_SearchFullActivationTest_id>::__fail_if_complete_not_called((__int64)this) )
      {
        if ( *((_BYTE *)this + 35) == (_BYTE)v39 )
        {
          v44 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v44 + 152) == (_BYTE)v39 )
          {
            *(_QWORD *)(v44 + 160) = v39;
            *(_WORD *)(v44 + 154) = 0x8000;
            *(_BYTE *)(v44 + 152) = 1;
          }
        }
        else
        {
          v40 = tip2::details::reason_string((tip2::details *)"Reason::invalid_hwnd", v38);
          v42 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v42 + 152) == v43 )
          {
            *(_QWORD *)(v42 + 160) = v40;
            *(_WORD *)(v42 + 154) = 6;
            *(_BYTE *)(v42 + 152) = v41;
          }
        }
      }
      return;
    }
    goto LABEL_75;
  }
  v4 = tip2::details::reason_string((tip2::details *)"Reason::view_destroyed", v2);
  v5 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v5 + 152) == v32 )
  {
    *(_WORD *)(v5 + 154) = 12;
    goto LABEL_13;
  }
}
