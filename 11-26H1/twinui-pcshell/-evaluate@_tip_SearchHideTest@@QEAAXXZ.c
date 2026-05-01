/*
 * XREFs of ?evaluate@_tip_SearchHideTest@@QEAAXXZ @ 0x18023FE58
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXXZ @ 0x1803BBF40 (-evaluate@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_46485871@@@details@wil@@QEAA_NXZ @ 0x1803BAC30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_46485871@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAA_NXZ @ 0x1803BAD9C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall _tip_SearchHideTest::evaluate(_tip_SearchHideTest *this, const char *a2)
{
  const char *v3; // rax
  __int64 v4; // rcx
  const char *v5; // rdx
  const char *v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // ecx
  __int64 v10; // r8
  const char *v11; // rax
  __int64 v12; // r8
  __int16 v13; // r9
  const char *v14; // rdx
  const char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax

  if ( *((_BYTE *)this + 21) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"Reason::activated_while_hiding", a2);
    v4 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 22) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"Reason::view_destroyed", a2);
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_WORD *)(v4 + 154) = 7;
LABEL_4:
      *(_BYTE *)(v4 + 152) = 4;
      *(_QWORD *)(v4 + 160) = v3;
      return;
    }
    return;
  }
  if ( !*((_BYTE *)this + 24) )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_54322664>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_54322664>::GetImpl'::`2'::impl)
      && !*((_BYTE *)this + 18) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"Reason::app_not_suspended", v5);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_WORD *)(v7 + 154) = 6;
LABEL_56:
      *(_QWORD *)(v7 + 160) = v6;
      *(_BYTE *)(v7 + 152) = 3;
      return;
    }
    if ( !*((_BYTE *)this + 17) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"Reason::view_not_cloaked", v5);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_WORD *)(v7 + 154) = 5;
      goto LABEL_56;
    }
    v8 = *((_DWORD *)this + 7);
    if ( !v8 || v8 <= 0xB && (v9 = 3664, _bittest(&v9, v8)) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"Reason::unexpected_initial_state", v5);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_WORD *)(v7 + 154) = 9;
      goto LABEL_56;
    }
    v10 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v10 + 56) & 0x200) == 0 )
    {
      if ( !*(_BYTE *)(v10 + 152) )
      {
        *(_BYTE *)(v10 + 152) = 3;
        *(_WORD *)(v10 + 154) = 16385;
        *(_QWORD *)(v10 + 160) = 0LL;
      }
      return;
    }
    if ( *((_DWORD *)this + 8) == 11 )
    {
      if ( *((_DWORD *)this + 9) == 10 )
      {
        if ( *((_DWORD *)this + 10) == 10 )
        {
          if ( *((_BYTE *)this + 44) )
          {
            v11 = tip2::details::reason_string((tip2::details *)"Reason::view_visible_during_suspension", v5);
            if ( *(_BYTE *)(v12 + 152) )
              return;
            *(_WORD *)(v12 + 154) = 13;
          }
          else
          {
            if ( !*((_BYTE *)this + 45) )
            {
              if ( !*((_BYTE *)this + 19) )
              {
                if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_46485871>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_46485871>::GetImpl'::`2'::impl)
                  && *((_BYTE *)this + 23) )
                {
                  v15 = tip2::details::reason_string((tip2::details *)"Reason::view_visibility_revoked", v14);
                  v16 = *((_QWORD *)this + 1);
                  if ( *(_BYTE *)(v16 + 152) )
                    return;
                  *(_WORD *)(v16 + 154) = 16;
                }
                else
                {
                  if ( !*((_BYTE *)this + 20) )
                  {
                    v17 = *((_QWORD *)this + 1);
                    if ( !*(_BYTE *)(v17 + 152) )
                    {
                      *(_BYTE *)(v17 + 152) = 1;
                      *(_WORD *)(v17 + 154) = 0x8000;
                      *(_QWORD *)(v17 + 160) = 0LL;
                    }
                    return;
                  }
                  v15 = tip2::details::reason_string((tip2::details *)"Reason::suspend_timer_expired", v14);
                  v16 = *((_QWORD *)this + 1);
                  if ( *(_BYTE *)(v16 + 152) )
                    return;
                  *(_WORD *)(v16 + 154) = 3;
                }
                *(_BYTE *)(v16 + 152) = 2;
                *(_QWORD *)(v16 + 160) = v15;
                return;
              }
              v11 = tip2::details::reason_string((tip2::details *)"Reason::hide_view_timer_expired", v5);
              if ( *(_BYTE *)(v12 + 152) )
                return;
              *(_BYTE *)(v12 + 152) = 2;
              *(_WORD *)(v12 + 154) = 2;
LABEL_28:
              *(_QWORD *)(v12 + 160) = v11;
              return;
            }
            v11 = tip2::details::reason_string((tip2::details *)"Reason::navigation_level_active_during_suspension", v5);
            if ( *(_BYTE *)(v12 + 152) )
              return;
            *(_WORD *)(v12 + 154) = 14;
          }
        }
        else
        {
          v11 = tip2::details::reason_string(
                  (tip2::details *)"Reason::unexpected_state_during_last_resort_suspension_timer",
                  v5);
          if ( *(_BYTE *)(v12 + 152) )
            return;
          *(_WORD *)(v12 + 154) = 12;
        }
      }
      else
      {
        v11 = tip2::details::reason_string((tip2::details *)"Reason::unexpected_state_during_view_consolidation", v5);
        if ( *(_BYTE *)(v12 + 152) )
          return;
        *(_WORD *)(v12 + 154) = v13;
      }
    }
    else
    {
      v11 = tip2::details::reason_string((tip2::details *)"Reason::unexpected_state_during_hide_request_timer", v5);
      if ( *(_BYTE *)(v12 + 152) )
        return;
      *(_WORD *)(v12 + 154) = 10;
    }
    *(_BYTE *)(v12 + 152) = 2;
    goto LABEL_28;
  }
  v3 = tip2::details::reason_string((tip2::details *)"Reason::already_hidden", a2);
  v4 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v4 + 152) )
  {
    *(_WORD *)(v4 + 154) = 8;
    goto LABEL_4;
  }
}
