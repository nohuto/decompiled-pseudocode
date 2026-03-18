/*
 * XREFs of DpQueryFeatureSupport @ 0x140237CF0
 * Callers:
 *     DpIsFeatureEnabled @ 0x140237C50 (DpIsFeatureEnabled.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     DpiIsFeatureEnabled @ 0x1403EC964 (DpiIsFeatureEnabled.c)
 */

__int64 __fastcall DpQueryFeatureSupport(__int64 *a1)
{
  __int64 v1; // rsi
  _DWORD *v3; // rbx
  int v4; // edx
  unsigned int IsFeatureEnabled; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // ecx
  bool v13; // zf
  int v14; // ecx
  unsigned int v15; // edx
  bool v16; // zf
  int v17; // edx
  unsigned int v18; // ecx
  bool v19; // zf
  int v21; // [rsp+30h] [rbp+8h] BYREF
  __int64 v22; // [rsp+38h] [rbp+10h]

  v1 = *a1;
  v21 = 0;
  v3 = *(_DWORD **)(v1 + 64);
  *((_BYTE *)a1 + 16) = 0;
  if ( !v3 || v3[4] != 1953656900 || v3[5] != 2 )
  {
    IsFeatureEnabled = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 959;
    return IsFeatureEnabled;
  }
  v4 = *((_DWORD *)a1 + 3);
  if ( v4 )
  {
    v6 = *((_DWORD *)a1 + 2);
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
        {
          v3[1462] |= 0x1000000u;
          goto LABEL_50;
        }
        v9 = v8 - 1;
        if ( !v9 )
        {
LABEL_50:
          IsFeatureEnabled = DpiIsFeatureEnabled(v1, *((unsigned int *)a1 + 2), 0LL, &v21);
          *((_BYTE *)a1 + 16) = BYTE2(v21) & 1;
          return IsFeatureEnabled;
        }
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 != 1 )
          {
            IsFeatureEnabled = -1073741811;
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1156;
            return IsFeatureEnabled;
          }
          goto LABEL_50;
        }
        v11 = v3[1462] ^ (v3[1462] ^ (v4 << 25)) & 0x6000000;
        v3[1462] = v11;
        v12 = v11;
        if ( byte_140168DFD && (v11 & 0x6000000) == 0x2000000 )
        {
          v12 = v11 & 0xF9FFFFFF | 0x4000000;
          v3[1462] = v12;
        }
        if ( ((v12 >> 25) & 3) == 1 )
          goto LABEL_50;
        if ( ((v12 >> 25) & 3) == 2 )
        {
          if ( dword_140168DF8 == 2 )
          {
LABEL_20:
            v14 = v12 | 0x8000000;
LABEL_49:
            v3[1462] = v14;
            goto LABEL_50;
          }
          v13 = dword_140168DF8 == 0;
        }
        else
        {
          v13 = ((v12 >> 25) & 3) == 3;
        }
        if ( !v13 )
          goto LABEL_50;
        goto LABEL_20;
      }
      v3[1462] ^= (v3[1462] ^ (v4 << 18)) & 0xC0000;
      v22 = (unsigned int)Feature_EnableNonCriticalAsserts__private_featureState;
      if ( (Feature_EnableNonCriticalAsserts__private_featureState & 0x10) == 0 )
      {
        LODWORD(v22) = Feature_EnableNonCriticalAsserts__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_EnableNonCriticalAsserts__private_descriptor,
          v22,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v22,
          3,
          (__int64)&Feature_EnableNonCriticalAsserts__private_descriptor);
      }
      if ( byte_140168DFD && (v3[1462] & 0xC0000) == 0x40000 )
        v3[1462] = v3[1462] & 0xFFF3FFFF | 0x80000;
      v15 = v3[1462];
      if ( ((v15 >> 18) & 3) != 1 )
      {
        if ( ((v3[1462] >> 18) & 3) == 2 )
        {
          if ( dword_140168DF8 == 2 )
          {
LABEL_35:
            v15 |= 0x100000u;
            v3[1462] = v15;
            goto LABEL_36;
          }
          v16 = dword_140168DF8 == 0;
        }
        else
        {
          v16 = ((v3[1462] >> 18) & 3) == 3;
        }
        if ( v16 )
          goto LABEL_35;
      }
LABEL_36:
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 64) + 40LL) + 28LL) < 0x10000u && *((_DWORD *)a1 + 3) != 1 )
        v3[1462] = v15 & 0xFFEFFFFF;
      goto LABEL_50;
    }
    v17 = v3[1462] ^ (v3[1462] ^ (v4 << 15)) & 0x18000;
    v3[1462] = v17;
    v18 = v17;
    if ( byte_140168DFD && (v17 & 0x18000) == 0x8000 )
    {
      v18 = v17 & 0xFFFE7FFF | 0x10000;
      v3[1462] = v18;
    }
    if ( ((v18 >> 15) & 3) == 1 )
      goto LABEL_50;
    if ( ((v18 >> 15) & 3) == 2 )
    {
      if ( dword_140168DF8 == 2 )
      {
LABEL_48:
        v14 = v18 | 0x20000;
        goto LABEL_49;
      }
      v19 = dword_140168DF8 == 0;
    }
    else
    {
      v19 = ((v18 >> 15) & 3) == 3;
    }
    if ( !v19 )
      goto LABEL_50;
    goto LABEL_48;
  }
  IsFeatureEnabled = -1073741811;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 971;
  return IsFeatureEnabled;
}
