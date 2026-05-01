/*
 * XREFs of ?evaluate@_tip_GuidedSnapAssistTest@@QEAAXXZ @ 0x1805A9404
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805A93D0 (-evaluate@-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_GuidedSnapAssistTest::evaluate(_tip_GuidedSnapAssistTest *this, __int64 a2, char a3)
{
  __int64 v3; // rax
  const char *v5; // rdx
  char v6; // al
  tip2::details *v7; // rax
  __int64 v8; // rdx
  tip2::details *v9; // rax
  __int64 v10; // rcx
  char v11; // cl
  int v12; // eax

  v3 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v3 + 80) )
  {
    if ( *(_BYTE *)(v3 + 152) )
      return;
    *(_WORD *)(v3 + 154) = 0x4000;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v3 + 56) & 0x200) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      1u,
      a3);
    v6 = *((_BYTE *)this + 35);
    if ( *((_BYTE *)this + 34) )
    {
      if ( v6 )
      {
        v7 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_invoked_with_no_empty_regions", v5);
        v8 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v8 + 152) )
          return;
        *(_BYTE *)(v8 + 152) = 3;
        *(_WORD *)(v8 + 154) = 10;
LABEL_41:
        *(_QWORD *)(v8 + 160) = v7;
        return;
      }
    }
    else if ( v6 )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_skipped_no_empty_regions", v5);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 9;
      goto LABEL_15;
    }
    if ( *((_BYTE *)this + 33) )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_dismissed_while_showing_new_view", v5);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 8;
    }
    else if ( *((_BYTE *)this + 30) )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::snapping_refused", v5);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 4;
    }
    else if ( *((_BYTE *)this + 28) )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_blocked", v5);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 1;
    }
    else if ( *((_BYTE *)this + 32) )
    {
      v9 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_occluded", v5);
      v10 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_WORD *)(v10 + 154) = 7;
    }
    else
    {
      v11 = *((_BYTE *)this + 31);
      if ( v11 || !*((_BYTE *)this + 29) )
      {
        v12 = *((_DWORD *)this + 6);
        if ( v12 == *((_DWORD *)this + 4) )
        {
          v9 = tip2::details::reason_string((tip2::details *)"reason::filled_all_regions", v5);
          v10 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v10 + 152) )
            return;
          *(_WORD *)(v10 + 154) = 5;
        }
        else
        {
          if ( *((_DWORD *)this + 4) != v12 + 1 || !v11 )
          {
            v7 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_incomplete", v5);
            v8 = *((_QWORD *)this + 1);
            if ( *(_BYTE *)(v8 + 152) )
              return;
            *(_BYTE *)(v8 + 152) = 3;
            *(_WORD *)(v8 + 154) = 3;
            goto LABEL_41;
          }
          v9 = tip2::details::reason_string((tip2::details *)"reason::last_region_pending", v5);
          v10 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v10 + 152) )
            return;
          *(_WORD *)(v10 + 154) = 6;
        }
      }
      else
      {
        v9 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_dismissed", v5);
        v10 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v10 + 152) )
          return;
        *(_WORD *)(v10 + 154) = 2;
      }
    }
LABEL_15:
    *(_BYTE *)(v10 + 152) = 1;
    *(_QWORD *)(v10 + 160) = v9;
    return;
  }
  if ( !*(_BYTE *)(v3 + 152) )
  {
    *(_WORD *)(v3 + 154) = 16385;
LABEL_4:
    *(_BYTE *)(v3 + 152) = 3;
    *(_QWORD *)(v3 + 160) = 0LL;
  }
}
