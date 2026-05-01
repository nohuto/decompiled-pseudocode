/*
 * XREFs of ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18031633C
 * Callers:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1802C6078 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@.c)
 * Callees:
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180318B48 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

int *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGamePowerProfile>::GetCurrentVariantState(
        __int64 a1,
        int *a2,
        int *a3)
{
  unsigned int FeatureVariant; // eax
  int v5; // r8d
  int v6; // ecx
  unsigned int v7; // eax
  int *result; // rax
  int *v9; // [rsp+28h] [rbp-10h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v11 = HIDWORD(a1);
  v10 = 0;
  v12 = 0;
  FeatureVariant = wil::details::WilApi_GetFeatureVariant(
                     (wil::details *)0xDA0F72,
                     0,
                     (enum FEATURE_CHANGE_TIME)&v12,
                     &v10,
                     a3,
                     v9);
  v5 = FeatureVariant & 0x100;
  v6 = (v10 != 0 ? 0x400 : 0) | (16 * (FeatureVariant & 0x80));
  *a2 = v6;
  v7 = FeatureVariant & 0xFFFFFE7F;
  if ( v7 && (v6 ^= (v7 & 0x3F) << 12, v5) )
    a2[1] = v12;
  else
    a2[1] = 0;
  result = a2;
  *a2 = v6;
  return result;
}
