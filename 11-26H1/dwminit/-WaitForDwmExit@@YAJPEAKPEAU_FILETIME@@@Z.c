/*
 * XREFs of ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000C780
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180007EC8 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     DwmpTerminateSessionProcess @ 0x18000E330 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001350 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800021F0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@details@wil@@QEAA_NXZ @ 0x18000CFB4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@det.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000ED7C (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000F4C8 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 */

__int64 __fastcall WaitForDwmExit(LPDWORD lpExitCode, LPFILETIME lpExitTime)
{
  signed int v3; // ebx
  char IsEnabled; // di
  signed int v6; // eax
  signed int v7; // eax
  unsigned int v8; // edx
  signed int LastError; // eax
  char v11; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-81h] BYREF
  int v13; // [rsp+40h] [rbp-79h] BYREF
  signed int v14; // [rsp+44h] [rbp-75h] BYREF
  struct _FILETIME CreationTime; // [rsp+48h] [rbp-71h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp-69h] BYREF
  struct _FILETIME v17; // [rsp+58h] [rbp-61h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-59h] BYREF
  __int64 v19; // [rsp+68h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+70h] [rbp-49h] BYREF
  __int64 *v21; // [rsp+90h] [rbp-29h]
  __int64 v22; // [rsp+98h] [rbp-21h]
  GUID *v23; // [rsp+A0h] [rbp-19h]
  __int64 v24; // [rsp+A8h] [rbp-11h]
  unsigned __int64 *v25; // [rsp+B0h] [rbp-9h]
  __int64 v26; // [rsp+B8h] [rbp-1h]
  signed int *v27; // [rsp+C0h] [rbp+7h]
  __int64 v28; // [rsp+C8h] [rbp+Fh]
  char *v29; // [rsp+D0h] [rbp+17h]
  __int64 v30; // [rsp+D8h] [rbp+1Fh]

  v3 = 0;
  EnterCriticalSection(&stru_18001AD70);
  if ( qword_18001AD68 && *((_QWORD *)qword_18001AD68 + 2) )
    CApiPortClient::Disconnect((CApiPortClient *)&g_PortClient);
  LeaveCriticalSection(&stru_18001AD70);
  SystemTimeAsFileTime = 0LL;
  IsEnabled = 0;
  v17 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  if ( !WaitForSingleObject(ghDwmProcess, 0x12Cu)
    || (IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl),
        TerminateProcess(ghDwmProcess, 0x42Bu))
    || (v6 = GetLastError(), v6 == 5) )
  {
    if ( WaitForSingleObject(ghDwmProcess, 0xFFFFFFFF) )
    {
      v3 = -2147467259;
      v8 = 945;
    }
    else
    {
      SetLastError(0);
      if ( GetExitCodeProcess(ghDwmProcess, lpExitCode) )
      {
        if ( !lpExitTime
          || (CreationTime = 0LL,
              SetLastError(0),
              GetProcessTimes(ghDwmProcess, &CreationTime, lpExitTime, &CreationTime, &CreationTime)) )
        {
          v12 = 0xFFFFFFFF00000001uLL;
          RtlPublishWnfStateData(WNF_SEB_MIXED_REALITY, 0LL, &v12, 8LL, 0LL);
          v13 = 0;
          RtlPublishWnfStateData(WNF_DWM_RUNNING, 0LL, &v13, 4LL, 0LL);
          goto LABEL_29;
        }
        LastError = GetLastError();
        v3 = LastError;
        if ( LastError > 0 )
          v3 = (unsigned __int16)LastError | 0x80070000;
        v8 = 940;
        if ( v3 >= 0 )
          v3 = -2003304445;
      }
      else
      {
        v7 = GetLastError();
        v3 = v7;
        if ( v7 > 0 )
          v3 = (unsigned __int16)v7 | 0x80070000;
        v8 = 930;
        if ( v3 >= 0 )
          v3 = -2003304445;
      }
    }
    DoStackCaptureDirect(v3, v8);
    goto LABEL_29;
  }
  if ( v6 > 0 )
    v3 = (unsigned __int16)v6 | 0x80070000;
  else
    v3 = v6;
LABEL_29:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
  {
    GetSystemTimeAsFileTime(&v17);
    if ( (unsigned int)dword_18001A000 > 5
      && (qword_18001A010 & 0x400000000000LL) != 0
      && (qword_18001A018 & 0x400000000000LL) == qword_18001A018 )
    {
      v18 = (v17.dwLowDateTime
           + ((v17.dwHighDateTime - (unsigned __int64)SystemTimeAsFileTime.dwHighDateTime) << 32)
           - SystemTimeAsFileTime.dwLowDateTime)
          / 0x2710;
      v29 = &v11;
      v11 = IsEnabled;
      v27 = &v14;
      v14 = v3;
      v25 = &v18;
      v19 = 0x1000000LL;
      v23 = &gDwmInitTelemetryActivityId;
      v30 = 1LL;
      v21 = &v19;
      v28 = 4LL;
      v26 = 8LL;
      v24 = 16LL;
      v22 = 8LL;
      tlgWriteTransfer_EventWriteTransfer((__int64)&dword_18001A000, byte_1800158DF, 0LL, 0LL, 7u, &v20);
    }
  }
  if ( ghDwmProcess )
  {
    CloseHandle(ghDwmProcess);
    ghDwmProcess = 0LL;
  }
  return (unsigned int)v3;
}
