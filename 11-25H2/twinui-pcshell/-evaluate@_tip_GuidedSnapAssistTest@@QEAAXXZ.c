/*
 * XREFs of ?evaluate@_tip_GuidedSnapAssistTest@@QEAAXXZ @ 0x180585534
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@EEAAXXZ @ 0x180585500 (-evaluate@-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_GuidedSnapAssistTest::evaluate(_tip_GuidedSnapAssistTest *this, char a2)
{
  __int64 v2; // rax
  const char *v4; // rdx
  char v5; // al
  const char *v6; // rax
  __int64 v7; // rdx
  __int16 v8; // cx
  char v9; // cl
  int v10; // eax

  v2 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_WORD *)(v2 + 154) = 0x4000;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x200) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
      `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      a2);
    v5 = *((_BYTE *)this + 35);
    if ( *((_BYTE *)this + 34) )
    {
      if ( v5 )
      {
        v6 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_invoked_with_no_empty_regions", v4);
        v7 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v7 + 152) )
          return;
        *(_BYTE *)(v7 + 152) = 3;
        *(_WORD *)(v7 + 154) = 10;
        goto LABEL_41;
      }
    }
    else if ( v5 )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_skipped_no_empty_regions", v4);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_BYTE *)(v7 + 152) = 1;
      *(_WORD *)(v7 + 154) = 9;
      goto LABEL_41;
    }
    if ( *((_BYTE *)this + 33) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_dismissed_while_showing_new_view", v4);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_BYTE *)(v7 + 152) = 1;
      *(_WORD *)(v7 + 154) = 8;
    }
    else if ( *((_BYTE *)this + 30) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::snapping_refused", v4);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_BYTE *)(v7 + 152) = 1;
      *(_WORD *)(v7 + 154) = 4;
    }
    else
    {
      if ( *((_BYTE *)this + 28) )
      {
        v6 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_blocked", v4);
        v7 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v7 + 152) )
          return;
        v8 = 1;
      }
      else
      {
        if ( *((_BYTE *)this + 32) )
        {
          v6 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_occluded", v4);
          v7 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v7 + 152) )
            return;
          *(_BYTE *)(v7 + 152) = 1;
          *(_WORD *)(v7 + 154) = 7;
          goto LABEL_41;
        }
        v9 = *((_BYTE *)this + 31);
        if ( !v9 && *((_BYTE *)this + 29) )
        {
          v6 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_dismissed", v4);
          v7 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v7 + 152) )
            return;
          *(_BYTE *)(v7 + 152) = 1;
          *(_WORD *)(v7 + 154) = 2;
          goto LABEL_41;
        }
        v10 = *((_DWORD *)this + 6);
        if ( v10 == *((_DWORD *)this + 4) )
        {
          v6 = tip2::details::reason_string((tip2::details *)"reason::filled_all_regions", v4);
          v7 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v7 + 152) )
            return;
          *(_BYTE *)(v7 + 152) = 1;
          *(_WORD *)(v7 + 154) = 5;
          goto LABEL_41;
        }
        if ( *((_DWORD *)this + 4) == v10 + 1 && v9 )
        {
          v6 = tip2::details::reason_string((tip2::details *)"reason::last_region_pending", v4);
          v7 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v7 + 152) )
            return;
          *(_BYTE *)(v7 + 152) = 1;
          *(_WORD *)(v7 + 154) = 6;
          goto LABEL_41;
        }
        v6 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_incomplete", v4);
        v7 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v7 + 152) )
          return;
        v8 = 3;
      }
      *(_WORD *)(v7 + 154) = v8;
      *(_BYTE *)(v7 + 152) = v8;
    }
LABEL_41:
    *(_QWORD *)(v7 + 160) = v6;
    return;
  }
  if ( !*(_BYTE *)(v2 + 152) )
  {
    *(_WORD *)(v2 + 154) = 16385;
LABEL_4:
    *(_BYTE *)(v2 + 152) = 3;
    *(_QWORD *)(v2 + 160) = 0LL;
  }
}
