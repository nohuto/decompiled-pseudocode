/*
 * XREFs of ?evaluate@_tip_SearchFullActivationTest@@QEAAXXZ @ 0x1803BBFD4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXXZ @ 0x1803BBF20 (-evaluate@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SearchFullActivationTest::evaluate(_tip_SearchFullActivationTest *this, const char *a2)
{
  int v2; // eax
  tip2::details *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  char v6; // r10
  __int64 v7; // r8
  char v8; // r10
  __int64 v9; // r8
  char v10; // r10
  __int64 v11; // r8
  char v12; // r10
  __int64 v13; // r8
  char v14; // r10
  tip2::details *v15; // rax
  __int16 v16; // r11
  __int64 v17; // r8
  __int64 v18; // rcx
  char v19; // r10
  __int64 v20; // r8
  char v21; // r10
  __int64 v22; // r8
  char v23; // r10
  int v24; // eax
  __int64 v25; // r8
  char v26; // r10
  __int64 v27; // r8
  char v28; // r10
  char v29; // r9
  __int64 v30; // r8
  char v31; // r10
  __int64 v32; // r8
  char v33; // r10
  __int64 v34; // r8
  char v35; // r10
  __int64 v36; // r8
  char v37; // r10
  char v38; // r9
  __int64 v39; // r8
  char v40; // r10
  char v41; // r9
  __int64 v42; // r8
  char v43; // r10
  __int64 v44; // r8
  char v45; // r10
  __int64 v46; // r8
  char v47; // r10
  __int64 v48; // r9
  tip2::details *v49; // rax
  __int64 v50; // r9
  char v51; // r11
  char v52; // r10

  v2 = *((_DWORD *)this + 19);
  if ( v2 < 0 )
  {
    if ( v2 == -2144927148 || v2 == -2147009295 )
    {
      v3 = tip2::details::reason_string((tip2::details *)"Reason::activation_failure_package_not_registered", a2);
      v5 = *(_QWORD *)(v9 + 8);
      if ( *(_BYTE *)(v5 + 152) != v10 )
        return;
      *(_WORD *)(v5 + 154) = 19;
    }
    else if ( (v2 & 0x1FFF0000) == 0x70000 && (unsigned int)(unsigned __int16)v2 - 15600 <= 0x63 )
    {
      v3 = tip2::details::reason_string((tip2::details *)"Reason::activation_failure_package_error", a2);
      v5 = *(_QWORD *)(v4 + 8);
      if ( *(_BYTE *)(v5 + 152) != v6 )
        return;
      *(_WORD *)(v5 + 154) = 11;
    }
    else
    {
      v3 = tip2::details::reason_string((tip2::details *)"Reason::activation_failure", a2);
      v5 = *(_QWORD *)(v7 + 8);
      if ( *(_BYTE *)(v5 + 152) != v8 )
        return;
      *(_WORD *)(v5 + 154) = 10;
    }
    goto LABEL_12;
  }
  if ( *((_BYTE *)this + 83) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"Reason::view_destroyed_when_search_activates", a2);
    v5 = *(_QWORD *)(v11 + 8);
    if ( *(_BYTE *)(v5 + 152) == v12 )
    {
      *(_WORD *)(v5 + 154) = 18;
LABEL_12:
      *(_BYTE *)(v5 + 152) = 3;
LABEL_13:
      *(_QWORD *)(v5 + 160) = v3;
      return;
    }
    return;
  }
  if ( !*((_BYTE *)this + 26) )
  {
    if ( *((_BYTE *)this + 27) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"Reason::consolidated", a2);
      v5 = *(_QWORD *)(v20 + 8);
      if ( *(_BYTE *)(v5 + 152) == v21 )
      {
        *(_BYTE *)(v5 + 152) = 4;
        *(_WORD *)(v5 + 154) = 3;
        goto LABEL_13;
      }
      return;
    }
    if ( *((_BYTE *)this + 28) )
    {
      v15 = tip2::details::reason_string((tip2::details *)"Reason::dismissed", a2);
      v18 = *(_QWORD *)(v22 + 8);
      if ( *(_BYTE *)(v18 + 152) != v23 )
        return;
      *(_WORD *)(v18 + 154) = 7;
      goto LABEL_23;
    }
    v24 = *((_DWORD *)this + 5);
    if ( *((_DWORD *)this + 4) == 4 )
    {
      if ( v24 == 4 )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::activated_again_same_source", a2);
        v5 = *(_QWORD *)(v25 + 8);
        if ( *(_BYTE *)(v5 + 152) != v26 )
          return;
        *(_BYTE *)(v5 + 152) = 3;
        goto LABEL_35;
      }
      if ( v24 )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::activated_again", a2);
        v5 = *(_QWORD *)(v27 + 8);
        if ( *(_BYTE *)(v5 + 152) != v28 )
          return;
        *(_BYTE *)(v5 + 152) = 3;
        goto LABEL_39;
      }
      if ( *((_BYTE *)this + 33) )
      {
        v15 = tip2::details::reason_string((tip2::details *)"Reason::prelaunch_skipped", a2);
        v18 = *(_QWORD *)(v30 + 8);
        if ( *(_BYTE *)(v18 + 152) != v31 )
          return;
        *(_BYTE *)(v18 + 152) = v29;
        *(_WORD *)(v18 + 154) = 17;
LABEL_24:
        *(_QWORD *)(v18 + 160) = v15;
        return;
      }
      if ( !*((_BYTE *)this + 81) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::unexpected_navigation_state_during_prelaunch", a2);
        v5 = *(_QWORD *)(v32 + 8);
        if ( *(_BYTE *)(v5 + 152) == v33 )
        {
          *(_WORD *)(v5 + 154) = 15;
          goto LABEL_12;
        }
        return;
      }
      if ( *((_BYTE *)this + 80) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::view_visible_during_prelaunch", a2);
        v5 = *(_QWORD *)(v34 + 8);
        if ( *(_BYTE *)(v5 + 152) == v35 )
        {
          *(_WORD *)(v5 + 154) = 14;
          goto LABEL_12;
        }
        return;
      }
      if ( *((_BYTE *)this + 82) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::prelaunch_deferral_timeout", a2);
        v5 = *(_QWORD *)(v36 + 8);
        if ( *(_BYTE *)(v5 + 152) == v37 )
        {
          *(_WORD *)(v5 + 154) = 9;
          goto LABEL_12;
        }
        return;
      }
    }
    else
    {
      if ( v24 == *((_DWORD *)this + 4) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::activated_again_same_source", a2);
        v5 = *(_QWORD *)(v39 + 8);
        if ( *(_BYTE *)(v5 + 152) != v40 )
          return;
        *(_BYTE *)(v5 + 152) = v38;
LABEL_35:
        *(_WORD *)(v5 + 154) = 5;
        goto LABEL_13;
      }
      if ( v24 )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::activated_again", a2);
        v5 = *(_QWORD *)(v42 + 8);
        if ( *(_BYTE *)(v5 + 152) != v43 )
          return;
        *(_BYTE *)(v5 + 152) = v41;
LABEL_39:
        *(_WORD *)(v5 + 154) = 1;
        goto LABEL_13;
      }
      if ( *((_BYTE *)this + 24) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::activation_test_timeout", a2);
        v5 = *(_QWORD *)(v44 + 8);
        if ( *(_BYTE *)(v5 + 152) == v45 )
        {
          *(_WORD *)(v5 + 154) = 8;
          goto LABEL_12;
        }
        return;
      }
      if ( !*((_BYTE *)this + 29) && !*((_BYTE *)this + 34) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::unexpected_navigation_state_during_launch", a2);
        v5 = *(_QWORD *)(v46 + 8);
        if ( *(_BYTE *)(v5 + 152) == v47 )
        {
          *(_WORD *)(v5 + 154) = 16;
          goto LABEL_12;
        }
        return;
      }
    }
    v48 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v48 + 56) & 0x200) != 0 )
    {
      if ( *((_BYTE *)this + 35) )
      {
        v49 = tip2::details::reason_string((tip2::details *)"Reason::invalid_hwnd", a2);
        if ( *(_BYTE *)(v50 + 152) == v52 )
        {
          *(_BYTE *)(v50 + 152) = v51;
          *(_WORD *)(v50 + 154) = 6;
          *(_QWORD *)(v50 + 160) = v49;
        }
        return;
      }
      if ( *(_BYTE *)(v48 + 152) )
        return;
      *(_BYTE *)(v48 + 152) = 1;
      *(_WORD *)(v48 + 154) = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v48 + 152) )
        return;
      *(_BYTE *)(v48 + 152) = 3;
      *(_WORD *)(v48 + 154) = 16385;
    }
    *(_QWORD *)(v48 + 160) = 0LL;
    return;
  }
  if ( *((_DWORD *)this + 4) != 2 )
  {
    v15 = tip2::details::reason_string((tip2::details *)"Reason::hidden", a2);
    v18 = *(_QWORD *)(v17 + 8);
    if ( *(_BYTE *)(v18 + 152) != v19 )
      return;
    *(_WORD *)(v18 + 154) = v16;
LABEL_23:
    *(_BYTE *)(v18 + 152) = 4;
    goto LABEL_24;
  }
  v3 = tip2::details::reason_string((tip2::details *)"Reason::hidden_by_launcher_timeout", a2);
  v5 = *(_QWORD *)(v13 + 8);
  if ( *(_BYTE *)(v5 + 152) == v14 )
  {
    *(_WORD *)(v5 + 154) = 4;
    goto LABEL_12;
  }
}
