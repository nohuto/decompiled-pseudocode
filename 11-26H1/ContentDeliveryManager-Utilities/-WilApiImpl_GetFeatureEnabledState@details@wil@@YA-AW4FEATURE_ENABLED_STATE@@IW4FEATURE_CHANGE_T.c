/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003CDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180033F8C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(
        wil::details *this,
        unsigned int a2,
        __int64 a3,
        int *a4)
{
  unsigned __int8 v5; // r8
  int v6; // r9d
  unsigned int v7; // edx
  bool IsFeatureConfigured; // al
  unsigned int v9; // ecx
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v5 = 1;
  v6 = (a2 >> 7) & 1;
  v7 = a2 & 0xFFFFFF7F;
  if ( v7 != 3 )
    v5 = v7 == 2;
  v12 = 0LL;
  v11 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured((wil::details *)&v11, (int)this, v5, v6, a3);
  v9 = 0;
  if ( IsFeatureConfigured )
    v9 = v11;
  if ( (_DWORD)v12 )
    v9 |= 0x80u;
  if ( HIDWORD(v12) )
    v9 |= 0x40u;
  return v9;
}
