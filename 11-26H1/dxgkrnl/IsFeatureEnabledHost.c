/*
 * XREFs of IsFeatureEnabledHost @ 0x1402898F4
 * Callers:
 *     IsFeatureEnabledUncached @ 0x140289AE4 (IsFeatureEnabledUncached.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkIsFeatureEnabledVmBus@@YAJPEAXW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x140070FBC (-DxgkIsFeatureEnabledVmBus@@YAJPEAXW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUR.c)
 */

__int64 __fastcall IsFeatureEnabledHost(__int64 a1, int a2, __int64 a3, _WORD *a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v9; // rcx
  int IsFeatureEnabledVmBus; // ebp
  unsigned __int64 v12; // rax
  _DWORD *v13; // rdx
  __int16 v14; // cx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // ax
  int v18; // [rsp+50h] [rbp-28h] BYREF
  __int16 v19; // [rsp+54h] [rbp-24h]
  int v20; // [rsp+80h] [rbp+8h] BYREF

  v5 = a2;
  v9 = 0LL;
  if ( (*(_DWORD *)(a1 + 936) & 1) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 928);
    if ( !v9 )
    {
      WdLogSingleEntry1(1LL);
      WdLogGlobalForLineNumber = 337;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Failed to query feature ID '%u'. vGPU is not yet initialized.",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
  }
  v20 = 0;
  v18 = 0;
  v19 = 0;
  IsFeatureEnabledVmBus = DxgkIsFeatureEnabledVmBus(v9, v5, (__int64)&v18, (__int64)&v20);
  if ( IsFeatureEnabledVmBus < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 353;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to query host about feature %u",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)IsFeatureEnabledVmBus;
  }
  v12 = (unsigned __int64)&v18 & -(__int64)(HIWORD(v18) != 0);
  if ( a3 || v12 )
  {
    v13 = (_DWORD *)a5;
    *(_WORD *)(a5 + 2) |= 2u;
    if ( v12 )
    {
      if ( a3 )
      {
        v14 = *(_WORD *)(a3 + 4);
        if ( (v14 & 0x1C) == 0xC )
        {
          if ( (v14 & 1) != 0 && (v20 & 0x10000) != 0 )
          {
            v15 = v20;
            if ( (unsigned __int16)v20 >= *a4 )
            {
              v16 = a4[1];
              *v13 = v20;
              if ( v15 < v16 )
                v16 = v15;
              *(_WORD *)v13 = v16;
            }
          }
          return 0LL;
        }
        goto LABEL_21;
      }
      v17 = *(_WORD *)(v12 + 4);
    }
    else
    {
      v17 = *(_WORD *)(a3 + 4);
    }
    if ( ((v17 >> 2) & 7) != 4 )
      return 0LL;
LABEL_21:
    *v13 = v20;
    return 0LL;
  }
  WdLogSingleEntry1(4LL);
  WdLogGlobalForLineNumber = 369;
  return 0LL;
}
