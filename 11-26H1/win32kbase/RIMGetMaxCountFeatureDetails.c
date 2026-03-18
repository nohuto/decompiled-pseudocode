/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x140205008
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140005A3C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgW.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x140162F3C (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     RIMGetFeatureReport @ 0x14018AD44 (RIMGetFeatureReport.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     ?GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401B986C (-GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimSleep @ 0x1401FDBE0 (rimSleep.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(
        struct RIMDEV *a1,
        __int64 a2,
        __int64 a3,
        struct _HIDP_PREPARSED_DATA *a4,
        _WORD *a5,
        struct _DEVICE_OBJECT *a6,
        struct _FILE_OBJECT *a7)
{
  char v9; // di
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // r8d
  char *v13; // r14
  int v14; // edi
  int v15; // edx
  int v16; // r8d
  bool v17; // bl
  bool v18; // di
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  int v23; // edx
  int v24; // r8d
  char v25; // bl
  bool v26; // di
  bool v27; // r12
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  ULONG v31; // edi
  int v32; // ebx
  ULONG v33; // ebx
  LARGE_INTEGER v34; // rdx
  LARGE_INTEGER v35; // r8
  LARGE_INTEGER v36; // r9
  __int64 v37; // r8
  const WCHAR *v38; // r12
  unsigned int *v39; // rdi
  unsigned int v40; // ecx
  bool v41; // di
  bool v42; // si
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  bool v46; // si
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  ULONG ReportLength; // [rsp+38h] [rbp-C8h]
  int SpecificValueCaps; // [rsp+60h] [rbp-A0h] BYREF
  ULONG UsageValue; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  USHORT ValueCapsLength[2]; // [rsp+70h] [rbp-90h] BYREF
  ULONG v56; // [rsp+74h] [rbp-8Ch] BYREF
  struct RIMDEV *v57; // [rsp+78h] [rbp-88h] BYREF
  const WCHAR *v58; // [rsp+80h] [rbp-80h] BYREF
  __int64 v59; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 QuadPart; // [rsp+90h] [rbp-70h] BYREF
  PHIDP_PREPARSED_DATA v61; // [rsp+98h] [rbp-68h]
  __int64 v62; // [rsp+A0h] [rbp-60h]
  _QWORD v63[3]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v64; // [rsp+C0h] [rbp-40h]
  int *v65; // [rsp+C8h] [rbp-38h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+D0h] [rbp-30h] BYREF

  v62 = a2;
  v58 = (const WCHAR *)a3;
  v57 = a1;
  v61 = a4;
  v59 = (__int64)a6;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v9 = 1;
  ValueCapsLength[0] = 1;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x55u, &ValueCaps, ValueCapsLength, a4);
  v10 = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
    return v10;
  v13 = (char *)Win32AllocPoolZInitImpl(64LL, (unsigned __int16)a5[4], 0x69667352u);
  if ( v13 )
  {
    v14 = 2;
    if ( *(_DWORD *)(a3 + 24) == 7 )
      v14 = 10;
    UsageValue = 0;
    v56 = v14;
    LODWORD(v54) = 0;
    QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
    while ( 1 )
    {
      InputTraceLogging::RIM::GetMaxCount(v57);
      v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v17;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(UserSessionState + 19368),
          4,
          1,
          31,
          (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids,
          (char)v57);
      }
      RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
        (RimTelemetryScopedIoctlObserver *)v63,
        "GetMaxCountFeature::GetFeatureReport",
        v57,
        &SpecificValueCaps,
        0);
      SpecificValueCaps = RIMGetFeatureReport(v13, a5[4], ValueCaps.ReportID, (struct _DEVICE_OBJECT *)v59, a7);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      RimTelemetry::LogBlockingIoControlRequest(
        (const char *)v63[2],
        (struct RIMDEV *const)v63[1],
        (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - v63[0])) / gliQpcFreq.QuadPart,
        *v65,
        v64);
      v25 = SpecificValueCaps;
      if ( !SpecificValueCaps
        || SpecificValueCaps == -1073741667
        || SpecificValueCaps == -1073741810
        || SpecificValueCaps == 1167
        || SpecificValueCaps == 433 )
      {
        break;
      }
      UsageValue = SpecificValueCaps;
      v26 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v23, v24);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v26;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(v28 + 19368),
          3,
          1,
          32,
          (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids,
          v25);
      }
      v31 = v56;
      v32 = v54;
      if ( (unsigned int)v54 < v56 - 1 )
        rimSleep();
      v33 = v32 + 1;
      LODWORD(v54) = v33;
      if ( v33 >= v31 )
        goto LABEL_32;
    }
    v33 = v54;
LABEL_32:
    v35 = KeQueryPerformanceCounter(0LL);
    if ( (unsigned int)dword_1402A9E78 > 5 && tlgKeywordOn((__int64)&dword_1402A9E78, 0x400000000000LL) )
    {
      v37 = v35.QuadPart - QuadPart;
      v38 = v58;
      v56 = UsageValue;
      UsageValue = SpecificValueCaps;
      v59 = v33 + 1;
      QuadPart = (unsigned __int64)(1000 * v37) / gliQpcFreq.QuadPart;
      v58 = (const WCHAR *)*((_QWORD *)v58 + 48);
      v57 = (struct RIMDEV *)*((int *)v38 + 241);
      v54 = *((int *)v38 + 6);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v59,
        (__int64)&unk_140285386,
        v37,
        v36.QuadPart,
        (__int64)&v54,
        (__int64)&v57,
        &v58,
        (__int64)&QuadPart,
        (__int64)&v59,
        (__int64)&UsageValue,
        (__int64)&v56);
    }
    else
    {
      v38 = v58;
    }
    if ( SpecificValueCaps )
    {
      SpecificValueCaps = -1073741668;
LABEL_66:
      GreDeleteFastMutex(v13, v34.QuadPart, v35.QuadPart, v36.QuadPart);
      return (unsigned int)SpecificValueCaps;
    }
    v39 = (unsigned int *)(v38 + 388);
    SpecificValueCaps = HidP_GetUsageValue(
                          HidP_Feature,
                          0xDu,
                          0,
                          0x55u,
                          (PULONG)v38 + 194,
                          v61,
                          v13,
                          (unsigned __int16)a5[4]);
    v10 = SpecificValueCaps;
    if ( SpecificValueCaps >= 0 && (v40 = *v39) != 0 )
    {
      if ( v40 > 0x100 )
      {
LABEL_43:
        v10 = -1073741668;
        SpecificValueCaps = -1073741668;
        goto LABEL_65;
      }
      v34.QuadPart = 5LL;
      if ( *a5 == 5 )
      {
        *v39 = v40 + 1;
      }
      else if ( *(_DWORD *)(v62 + 720) + v40 > 0xA00 )
      {
        goto LABEL_43;
      }
    }
    else
    {
      v41 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v43 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v34.LowPart, v35.LowPart);
        LOBYTE(v44) = v42;
        LOBYTE(v45) = v41;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v45,
          v44,
          *(_QWORD *)(v43 + 19368),
          3,
          1,
          33,
          (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids,
          v10);
      }
      v10 = -1073741668;
      v34.QuadPart = 5LL;
      SpecificValueCaps = -1073741668;
    }
    if ( (v10 & 0x80000000) == 0 && *a5 == 5 )
    {
      *((_DWORD *)v38 + 241) = 3;
      ReportLength = (unsigned __int16)a5[4];
      UsageValue = 0;
      SpecificValueCaps = HidP_GetUsageValue(HidP_Feature, 0xDu, 0, 0x59u, &UsageValue, v61, v13, ReportLength);
      v10 = SpecificValueCaps;
      if ( SpecificValueCaps >= 0 )
        *((_DWORD *)v38 + 241) = ((UsageValue & 1) != 0) + 1;
    }
  }
  else
  {
    v10 = -1073741668;
    SpecificValueCaps = -1073741668;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v9 = 0;
    }
    v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v10;
    v47 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
    LOBYTE(v48) = v46;
    LOBYTE(v49) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v49,
      v48,
      *(_QWORD *)(v47 + 19368),
      3,
      1,
      34,
      (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
    v10 = SpecificValueCaps;
  }
LABEL_65:
  if ( v13 )
    goto LABEL_66;
  return v10;
}
