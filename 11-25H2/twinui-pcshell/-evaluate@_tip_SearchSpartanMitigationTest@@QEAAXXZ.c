/*
 * XREFs of ?evaluate@_tip_SearchSpartanMitigationTest@@QEAAXXZ @ 0x1803B38E8
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXXZ @ 0x1803B3250 (-evaluate@-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_51473953@@@details@wil@@QEAA_NXZ @ 0x1803B23F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_51473953@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall _tip_SearchSpartanMitigationTest::evaluate(_tip_SearchSpartanMitigationTest *this)
{
  __int64 v1; // rax
  const char *v3; // rdx
  const char *v4; // rax
  __int16 v5; // r9
  __int64 v6; // rcx
  const char *v7; // rax
  __int64 v8; // rdx
  char v9; // r9
  char v10; // r9
  __int16 v11; // r9
  char v12; // r9

  v1 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v1 + 56) & 0x200) != 0 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_51473953>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_51473953>::GetImpl'::`2'::impl)
      && *((_BYTE *)this + 19) )
    {
      v4 = tip2::details::reason_string((tip2::details *)"Reason::NotImpactedBySubdomainIssue", v3);
      v6 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v6 + 152) == (_BYTE)v5 )
      {
        *(_QWORD *)(v6 + 160) = v4;
        *(_BYTE *)(v6 + 152) = v5 + 4;
        *(_WORD *)(v6 + 154) = v5 + 4;
      }
    }
    else
    {
      if ( *((_BYTE *)this + 16) )
      {
        v7 = tip2::details::reason_string((tip2::details *)"Reason::ReAppliedMitigation", v3);
        v8 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v8 + 152) != v9 )
          return;
        *(_BYTE *)(v8 + 152) = 3;
        *(_WORD *)(v8 + 154) = 1;
      }
      else
      {
        if ( *((_BYTE *)this + 17) )
        {
          v7 = tip2::details::reason_string((tip2::details *)"Reason::MitigationWorked", v3);
          v8 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v8 + 152) != v10 )
            return;
          *(_WORD *)(v8 + 154) = 2;
        }
        else if ( *((_BYTE *)this + 18) )
        {
          v7 = tip2::details::reason_string((tip2::details *)"Reason::AppliedMitigation", v3);
          v8 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v8 + 152) != (_BYTE)v11 )
            return;
          *(_WORD *)(v8 + 154) = v11;
        }
        else
        {
          v7 = tip2::details::reason_string((tip2::details *)"Reason::NoMitigationApplied", v3);
          v8 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v8 + 152) != v12 )
            return;
          *(_WORD *)(v8 + 154) = 3;
        }
        *(_BYTE *)(v8 + 152) = 1;
      }
      *(_QWORD *)(v8 + 160) = v7;
    }
  }
  else if ( !*(_BYTE *)(v1 + 152) )
  {
    *(_BYTE *)(v1 + 152) = 3;
    *(_WORD *)(v1 + 154) = 16385;
    *(_QWORD *)(v1 + 160) = 0LL;
  }
}
