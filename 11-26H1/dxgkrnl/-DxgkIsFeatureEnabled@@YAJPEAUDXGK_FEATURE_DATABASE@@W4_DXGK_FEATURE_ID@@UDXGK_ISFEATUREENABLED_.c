/*
 * XREFs of ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x1403EC9D0
 * Callers:
 *     CheckFeatureDependencies @ 0x140288A54 (CheckFeatureDependencies.c)
 *     DpiIsFeatureEnabled @ 0x1403EC964 (DpiIsFeatureEnabled.c)
 * Callees:
 *     ClearFeatureCache @ 0x140288BD4 (ClearFeatureCache.c)
 *     IsFeatureEnabledUncached @ 0x140289AE4 (IsFeatureEnabledUncached.c)
 *     RecordCachedFeatureState @ 0x14028A068 (RecordCachedFeatureState.c)
 *     QueryCachedFeatureState @ 0x1403ECA5C (QueryCachedFeatureState.c)
 */

__int64 __fastcall DxgkIsFeatureEnabled(__int64 a1, unsigned int a2, char a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (a3 & 1) != 0 )
    ClearFeatureCache(a1, a2 >> 28);
  if ( (unsigned __int8)QueryCachedFeatureState(a1, a2, &v8) )
    goto LABEL_4;
  result = IsFeatureEnabledUncached(a1, a2, (__int64)&v8);
  if ( (int)result >= 0 )
  {
    if ( (v8 & 0x20000) != 0 )
      RecordCachedFeatureState(a1, a2, &v8);
LABEL_4:
    *a4 = v8;
    return 0LL;
  }
  return result;
}
