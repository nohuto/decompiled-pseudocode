/*
 * XREFs of ?evaluate@_tip_CallDashboardExtensionTIP@@QEAAXXZ @ 0x18027A934
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXXZ @ 0x1805DB630 (-evaluate@-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58379993@@@details@wil@@QEAA_NXZ @ 0x1805DAD0C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_58379993@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@QEAA_NXZ @ 0x1805DAD48 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall _tip_CallDashboardExtensionTIP::evaluate(_tip_CallDashboardExtensionTIP *this, const char *a2)
{
  const char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  char IsEnabled; // al
  const char *v7; // rdx
  char v8; // cl

  if ( *((_BYTE *)this + 17) && *((_BYTE *)this + 16) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::extension_creation_failed", a2);
    v4 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_5;
  }
  v5 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v5 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v5 + 152) )
      return;
    *(_BYTE *)(v5 + 152) = 3;
    *(_WORD *)(v5 + 154) = 16385;
LABEL_21:
    *(_QWORD *)(v5 + 160) = 0LL;
    return;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_58379993>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_58379993>::GetImpl'::`2'::impl);
  v8 = *((_BYTE *)this + 18);
  if ( !IsEnabled )
  {
    if ( !v8 )
    {
LABEL_15:
      v3 = tip2::details::reason_string((tip2::details *)"reason::call_failed", v7);
      v4 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v4 + 152) )
      {
        *(_BYTE *)(v4 + 152) = 2;
        *(_WORD *)(v4 + 154) = 2;
        goto LABEL_6;
      }
      return;
    }
LABEL_17:
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59874629>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59874629>::GetImpl'::`2'::impl)
      || *((_DWORD *)this + 5) != -2147418110 )
    {
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) )
        return;
      *(_BYTE *)(v5 + 152) = 1;
      *(_WORD *)(v5 + 154) = 0x8000;
      goto LABEL_21;
    }
    goto LABEL_15;
  }
  if ( v8 )
    goto LABEL_17;
  v3 = tip2::details::reason_string((tip2::details *)"reason::call_failed", v7);
  v4 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v4 + 152) )
  {
    *(_WORD *)(v4 + 154) = 2;
LABEL_5:
    *(_BYTE *)(v4 + 152) = 3;
LABEL_6:
    *(_QWORD *)(v4 + 160) = v3;
  }
}
