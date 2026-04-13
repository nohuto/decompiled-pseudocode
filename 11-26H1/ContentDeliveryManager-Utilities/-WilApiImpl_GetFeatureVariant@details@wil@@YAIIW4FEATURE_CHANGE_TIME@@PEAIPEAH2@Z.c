/*
 * XREFs of ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18003CE50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180033F8C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 */

int __fastcall wil::details::WilApiImpl_GetFeatureVariant(
        wil::details *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int *a4,
        int *a5)
{
  unsigned __int8 v7; // r8
  unsigned int v8; // r9d
  unsigned int v9; // edx
  int v10; // r9d
  bool IsFeatureConfigured; // al
  bool v12; // zf
  int result; // eax
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v7 = 1;
  v8 = a2 >> 7;
  v9 = a2 & 0xFFFFFF7F;
  v10 = v8 & 1;
  if ( v9 != 3 )
    v7 = v9 == 2;
  v15 = 0LL;
  v14 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured((wil::details *)&v14, (int)this, v7, v10, (__int64)a5);
  *a4 = v15;
  if ( IsFeatureConfigured )
  {
    v12 = DWORD2(v14) == 0;
    *a3 = HIDWORD(v14);
    result = BYTE4(v14);
    if ( !v12 )
      result = BYTE4(v14) | 0x100;
    if ( HIDWORD(v15) )
      return result | 0x80;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
  return result;
}
