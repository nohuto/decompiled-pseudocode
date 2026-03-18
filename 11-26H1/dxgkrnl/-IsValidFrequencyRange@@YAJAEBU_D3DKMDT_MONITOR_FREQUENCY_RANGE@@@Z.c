/*
 * XREFs of ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x140098D1C
 * Callers:
 *     ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x140060984 (-ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@.c)
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1403E398C (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidFrequencyRange(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  __int64 Denominator; // rax
  unsigned __int64 Numerator; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  SIZE_T MaxPixelRate; // rax

  v2 = DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates ? 5000LL : 1000LL;
  v3 = DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates ? 25000000LL : 2000000LL;
  v4 = (-(__int64)DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates & 0x2540BE400LL) + 10000000000LL;
  Denominator = a1->RangeLimits.MinVSyncFreq.Denominator;
  if ( !(_DWORD)Denominator )
    return 3223192330LL;
  Numerator = a1->RangeLimits.MinVSyncFreq.Numerator;
  if ( Numerator > v2 * Denominator )
    return 3223192330LL;
  if ( Numerator < 5 * (unsigned __int64)(unsigned int)Denominator )
  {
    if ( a1->Origin != D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE )
      return 3223192330LL;
    WdLogSingleEntry3(3LL, Numerator, (unsigned int)Denominator, 5LL);
    WdLogGlobalForLineNumber = 678;
  }
  v7 = a1->RangeLimits.MinHSyncFreq.Denominator;
  if ( !(_DWORD)v7 )
    return 3223192330LL;
  v8 = a1->RangeLimits.MinHSyncFreq.Numerator;
  if ( v8 > v3 * (unsigned __int64)a1->RangeLimits.MinHSyncFreq.Denominator )
    return 3223192330LL;
  if ( v8 < 1000 * (unsigned __int64)a1->RangeLimits.MinHSyncFreq.Denominator )
  {
    if ( a1->Origin == D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE )
    {
      WdLogSingleEntry3(3LL, v8, v7, 1000LL);
      WdLogGlobalForLineNumber = 711;
      goto LABEL_11;
    }
    return 3223192330LL;
  }
LABEL_11:
  if ( !a1->RangeLimits.MaxVSyncFreq.Denominator )
    return 3223192330LL;
  v9 = a1->RangeLimits.MaxVSyncFreq.Denominator;
  v10 = a1->RangeLimits.MaxVSyncFreq.Numerator;
  if ( v10 < 5 * v9 )
    return 3223192330LL;
  if ( v10 > v9 * v2 )
    return 3223192330LL;
  if ( !a1->RangeLimits.MaxHSyncFreq.Denominator )
    return 3223192330LL;
  v11 = a1->RangeLimits.MaxHSyncFreq.Denominator;
  v12 = a1->RangeLimits.MaxHSyncFreq.Numerator;
  if ( v12 < 1000 * v11 || v12 > v11 * v3 )
    return 3223192330LL;
  if ( a1->ConstraintType != D3DKMDT_MFRC_ACTIVESIZE )
  {
    if ( a1->ConstraintType != D3DKMDT_MFRC_MAXPIXELRATE )
      return 3223192408LL;
    MaxPixelRate = a1->Constraint.MaxPixelRate;
    if ( MaxPixelRate && MaxPixelRate <= v4 )
      return 0LL;
    return 3223192330LL;
  }
  if ( a1->Constraint.ActiveSize.cx < 0x64 )
    return 3223192331LL;
  else
    return a1->Constraint.ActiveSize.cy < 0x64 ? 0xC01E030B : 0;
}
