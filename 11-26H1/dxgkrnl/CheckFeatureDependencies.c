/*
 * XREFs of CheckFeatureDependencies @ 0x140288A54
 * Callers:
 *     IsFeatureEnabledUncached @ 0x140289AE4 (IsFeatureEnabledUncached.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x1403EC9D0 (-DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_.c)
 */

__int64 __fastcall CheckFeatureDependencies(__int64 a1, int a2, __int64 a3, char *a4, char *a5)
{
  char v5; // si
  __int64 v6; // rbx
  char v7; // bp
  __int64 i; // rdi
  __int64 v12; // r13
  __int64 v13; // rdx
  char *v15; // rax
  int IsFeatureEnabled; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+A0h] [rbp+18h] BYREF

  v5 = 1;
  v6 = a2;
  v7 = 1;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a3 + 8); i = (unsigned int)(i + 1) )
  {
    v12 = *(int *)(*(_QWORD *)a3 + 4 * i);
    v13 = *(unsigned int *)(*(_QWORD *)a3 + 4 * i);
    v17 = 0;
    IsFeatureEnabled = DxgkIsFeatureEnabled(a1, v13, 0LL, &v17);
    if ( IsFeatureEnabled < 0 )
    {
      WdLogSingleEntry3(2LL, v12, v6, a1);
      WdLogGlobalForLineNumber = 771;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to query dependency %u for feature %u. Database=0x%.16x",
        v12,
        v6,
        a1,
        0LL,
        0LL);
      return (unsigned int)IsFeatureEnabled;
    }
    v7 &= HIWORD(v17) >> 4;
    v5 &= BYTE2(v17) & 1;
  }
  v15 = a5;
  *a4 = v5;
  *v15 = v7;
  return 0LL;
}
