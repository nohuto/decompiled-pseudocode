/*
 * XREFs of RtlpEtcGetDwordFromRegistry @ 0x180148684
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x180148410 (RtlIsFeatureEnabledForEnterprise.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x1801485C4 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x180148708 (RtlpEtcIsValidFeatureId.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1800440A0 (RtlpQueryRegistryValues.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromRegistry(const wchar_t *a1, __int64 a2, __int64 a3)
{
  _BYTE v7[8]; // [rsp+30h] [rbp-78h] BYREF
  int v8; // [rsp+38h] [rbp-70h]
  __int64 v9; // [rsp+40h] [rbp-68h]
  __int64 v10; // [rsp+48h] [rbp-60h]
  int v11; // [rsp+50h] [rbp-58h]

  memset_thunk_772440563353939046(v7, 0, 0x70uLL);
  v8 = 308;
  v9 = a2;
  v11 = 0x4000000;
  v10 = a3;
  return RtlpQueryRegistryValues(0LL, a1, (__int64)v7, 0LL, 0LL, 1);
}
