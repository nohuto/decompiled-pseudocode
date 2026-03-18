/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x180165F70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180165FEC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(
        wil::details *this,
        unsigned int a2,
        __int64 a3,
        int *a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edx
  char IsFeatureConfigured; // al
  unsigned int v9; // ecx
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v5 = 1LL;
  v6 = (a2 >> 7) & 1;
  v7 = a2 & 0xFFFFFF7F;
  if ( v7 != 3 && v7 != 2 )
    LOBYTE(v5) = 0;
  v12 = 0LL;
  v11 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(&v11, (unsigned int)this, v5, v6, a3);
  v9 = 0;
  if ( IsFeatureConfigured )
    v9 = v11;
  if ( (_DWORD)v12 )
    v9 |= 0x80u;
  if ( HIDWORD(v12) )
    v9 |= 0x40u;
  return v9;
}
