/*
 * XREFs of ?evaluate@_tip_EyeControllerAppLaunchTest@@QEAAXXZ @ 0x18047E294
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@EEAAXXZ @ 0x18047E280 (-evaluate@-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@wil@@QEAA_NXZ @ 0x18047E108 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2508@@@details@w.c)
 */

void __fastcall _tip_EyeControllerAppLaunchTest::evaluate(_tip_EyeControllerAppLaunchTest *this, const char *a2)
{
  __int64 v2; // r9
  const char *v4; // rax
  __int64 v5; // r9
  const char *v6; // rdx
  const char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
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
  if ( *((_BYTE *)this + 25) )
  {
    v4 = tip2::details::reason_string((tip2::details *)"reason::no_test_running_on_view_creation", a2);
    if ( !*(_BYTE *)(v5 + 152) )
    {
      *(_BYTE *)(v5 + 152) = 3;
      *(_WORD *)(v5 + 154) = 5;
      *(_QWORD *)(v5 + 160) = v4;
    }
    return;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2508>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2508>::GetImpl'::`2'::impl) )
  {
    if ( !*((_BYTE *)this + 16) )
    {
      v7 = tip2::details::reason_string((tip2::details *)"reason::not_initialized", v6);
      v8 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v8 + 152) )
        return;
      *(_BYTE *)(v8 + 152) = 1;
      *(_WORD *)(v8 + 154) = 6;
      goto LABEL_11;
    }
    v9 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v9 + 80) )
    {
      if ( !*(_BYTE *)(v9 + 152) )
      {
        *(_BYTE *)(v9 + 152) = 3;
        *(_WORD *)(v9 + 154) = 0x4000;
        *(_QWORD *)(v9 + 160) = 0LL;
      }
      return;
    }
  }
  if ( *((_BYTE *)this + 17) )
  {
    v7 = tip2::details::reason_string((tip2::details *)"reason::failed_before_activation", v6);
    v8 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v8 + 152) )
      return;
    *(_BYTE *)(v8 + 152) = 3;
    *(_WORD *)(v8 + 154) = 1;
LABEL_11:
    *(_QWORD *)(v8 + 160) = v7;
    return;
  }
  if ( *((int *)this + 5) < 0 )
  {
    v10 = tip2::details::reason_string((tip2::details *)"reason::activation_failed", v6);
    v11 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v11 + 152) )
      return;
    *(_WORD *)(v11 + 154) = 2;
    goto LABEL_21;
  }
  if ( !*((_BYTE *)this + 24) )
  {
    v10 = tip2::details::reason_string((tip2::details *)"reason::view_not_created", v6);
    v11 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v11 + 152) )
      return;
    *(_WORD *)(v11 + 154) = 4;
LABEL_21:
    *(_BYTE *)(v11 + 152) = 3;
    *(_QWORD *)(v11 + 160) = v10;
    return;
  }
  if ( *((_BYTE *)this + 18) )
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
    v12 = tip2::details::reason_string((tip2::details *)"reason::activation_not_called", v6);
    v13 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v13 + 152) )
    {
      *(_QWORD *)(v13 + 160) = v12;
      *(_BYTE *)(v13 + 152) = 3;
      *(_WORD *)(v13 + 154) = 3;
    }
  }
}
