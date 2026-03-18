/*
 * XREFs of ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140049E14
 * Callers:
 *     ?Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x140049D3C (-Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_P.c)
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14006D9D8 (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403CC240 (-_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1)
{
  D3DDDI_RATIONAL *p_VSyncFreq; // r11
  unsigned __int64 Numerator; // r10
  __int64 Denominator; // rdx
  unsigned __int64 v5; // rdx
  UINT *p_Denominator; // rdi
  __int64 v7; // rax
  SIZE_T PixelRate; // rax
  UINT *p_cy; // rax
  UINT *v10; // rax
  __int64 result; // rax
  unsigned int v12; // eax
  unsigned int v13; // eax

  p_VSyncFreq = &a1->VSyncFreq;
  Numerator = a1->VSyncFreq.Numerator;
  if ( *(_QWORD *)&a1->VSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    Denominator = a1->VSyncFreq.Denominator;
    if ( !(_DWORD)Denominator
      || Numerator < 5 * Denominator
      || Numerator > (DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates ? 5000LL : 1000LL)
                   * (unsigned __int64)(unsigned int)Denominator )
    {
      WdLogSingleEntry5(2LL, Numerator, Denominator, a1, a1->ActiveSize.cx, a1->ActiveSize.cy);
      WdLogGlobalForLineNumber = 436;
      return 3223192330LL;
    }
    p_VSyncFreq = &a1->VSyncFreq;
  }
  v5 = a1->HSyncFreq.Numerator;
  p_Denominator = &a1->HSyncFreq.Denominator;
  if ( *(_QWORD *)&a1->HSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    v7 = *p_Denominator;
    if ( !(_DWORD)v7
      || v5 < 1000 * v7
      || v5 > (DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates ? 25000000LL : 2000000LL)
            * (unsigned __int64)(unsigned int)v7 )
    {
      v13 = DmmMapVSyncFromRationalToInteger(
              p_VSyncFreq,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
              0LL);
      WdLogSingleEntry5(2LL, a1->HSyncFreq.Numerator, *p_Denominator, a1->ActiveSize.cx, a1->ActiveSize.cy, v13);
      WdLogGlobalForLineNumber = 457;
      return 3223192330LL;
    }
  }
  PixelRate = a1->PixelRate;
  if ( PixelRate != 4294967294
    && (PixelRate < 0xF4240
     || PixelRate > (-(__int64)DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates & 0x2540BE400uLL) + 10000000000LL) )
  {
    v12 = DmmMapVSyncFromRationalToInteger(
            &a1->VSyncFreq,
            (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
            0LL);
    WdLogSingleEntry4(2LL, a1->PixelRate, a1->ActiveSize.cx, a1->ActiveSize.cy, v12);
    WdLogGlobalForLineNumber = 475;
    return 3223192330LL;
  }
  p_cy = &a1->ActiveSize.cy;
  if ( a1->ActiveSize.cx < 0x64 || *p_cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, a1->ActiveSize.cx, *p_cy, a1);
    result = 3223192331LL;
    WdLogGlobalForLineNumber = 486;
  }
  else
  {
    v10 = &a1->TotalSize.cy;
    if ( a1->TotalSize.cx < 0x64 || *v10 < 0x64 )
    {
      WdLogSingleEntry3(2LL, a1->TotalSize.cx, *v10, a1);
      result = 3223192332LL;
      WdLogGlobalForLineNumber = 497;
    }
    else if ( (int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29 == 1
           || (unsigned int)(((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29) - 2) <= 1 )
    {
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, (int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29, a1);
      result = 3223192402LL;
      WdLogGlobalForLineNumber = 506;
    }
  }
  return result;
}
