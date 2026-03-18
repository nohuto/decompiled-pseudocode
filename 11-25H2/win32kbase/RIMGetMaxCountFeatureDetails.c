/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x14017FBE8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140004894 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgW.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x14007ABAC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ??0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z @ 0x140129430 (--0RimTelemetryScopedIoctlObserver@@QEAA@PEBDQEAURIMDEV@@PEAJK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401493A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWrit.c)
 *     RIMGetFeatureReport @ 0x14015A0B4 (RIMGetFeatureReport.c)
 *     ?GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14019D24C (-GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimSleep @ 0x1401D5CEC (rimSleep.c)
 *     Feature_RIMMaxCountRetries__private_IsEnabledDeviceUsageNoInline @ 0x1401E20EC (Feature_RIMMaxCountRetries__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(
        struct RIMDEV *a1,
        __int64 a2,
        unsigned __int64 a3,
        struct _HIDP_PREPARSED_DATA *a4,
        _WORD *a5,
        const WCHAR *a6,
        struct _FILE_OBJECT *a7)
{
  struct RIMDEV *v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  union _LARGE_INTEGER *v14; // r14
  unsigned int i; // r13d
  __int64 v16; // rdx
  bool v17; // di
  bool v18; // si
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  LARGE_INTEGER v22; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v24; // rdx
  char v25; // di
  bool v26; // si
  __int64 v27; // rax
  int v28; // edx
  int v29; // r8d
  LARGE_INTEGER v30; // rbx
  int v31; // eax
  unsigned __int64 v32; // r14
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  char *v37; // r13
  unsigned int *v38; // rsi
  __int64 v39; // rdx
  unsigned int v40; // ecx
  _WORD *v41; // rdx
  bool v42; // si
  bool v43; // r15
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  bool v47; // di
  bool v48; // si
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  int SpecificValueCaps; // [rsp+60h] [rbp-A0h] BYREF
  ULONG UsageValue; // [rsp+64h] [rbp-9Ch] BYREF
  bool v55; // [rsp+68h] [rbp-98h]
  USHORT ValueCapsLength; // [rsp+6Ch] [rbp-94h] BYREF
  struct RIMDEV *v57; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER v58; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v59; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp-78h] BYREF
  _WORD *v61; // [rsp+90h] [rbp-70h]
  PCHAR Report; // [rsp+98h] [rbp-68h]
  __int64 v63; // [rsp+A0h] [rbp-60h] BYREF
  PHIDP_PREPARSED_DATA v64; // [rsp+A8h] [rbp-58h]
  __int64 v65; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-48h]
  _QWORD v67[3]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v68; // [rsp+D8h] [rbp-28h]
  int *v69; // [rsp+E0h] [rbp-20h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+F0h] [rbp-10h] BYREF

  v66 = a2;
  v9 = a1;
  v60 = a3;
  v57 = a1;
  v64 = a4;
  v61 = a5;
  v59 = (unsigned __int64)a6;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x55u, &ValueCaps, &ValueCapsLength, a4);
  v10 = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
    return v10;
  Report = (PCHAR)Win32AllocPoolZInitImpl(64LL, (unsigned __int16)a5[4], 0x69667352u);
  if ( Report )
  {
    v12 = 2;
    if ( *(_DWORD *)(a3 + 24) == 7 )
      v12 = 10;
    if ( !(unsigned int)Feature_RIMMaxCountRetries__private_IsEnabledDeviceUsageNoInline() )
    {
      v12 = 1;
      if ( *(_DWORD *)(a3 + 24) == 7 )
        v12 = 10;
    }
    UsageValue = 0;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = (union _LARGE_INTEGER *)Report;
    v58 = PerformanceCounter;
    for ( i = 0; i < v12; ++i )
    {
      InputTraceLogging::RIM::GetMaxCount(v9);
      v17 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v17;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(UserSessionState + 19336),
          4,
          1,
          31,
          (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids,
          (char)v57);
      }
      RimTelemetryScopedIoctlObserver::RimTelemetryScopedIoctlObserver(
        (RimTelemetryScopedIoctlObserver *)v67,
        "GetMaxCountFeature::GetFeatureReport",
        v57,
        &SpecificValueCaps,
        0);
      SpecificValueCaps = RIMGetFeatureReport(v14, v61[4], ValueCaps.ReportID, (struct _DEVICE_OBJECT *)v59, a7);
      v22 = KeQueryPerformanceCounter(0LL);
      RimTelemetry::LogBlockingIoControlRequest(
        (const char *)v67[2],
        (struct RIMDEV *const)v67[1],
        (unsigned __int64)(1000 * (v22.QuadPart - v67[0])) / gliQpcFreq.QuadPart,
        *v69,
        v68);
      IsEnabledDeviceUsageNoInline = Feature_RIMMaxCountRetries__private_IsEnabledDeviceUsageNoInline();
      v25 = SpecificValueCaps;
      if ( !SpecificValueCaps )
        break;
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( SpecificValueCaps == -1073741667
          || SpecificValueCaps == -1073741810
          || SpecificValueCaps == 1167
          || SpecificValueCaps == 433 )
        {
          break;
        }
        UsageValue = SpecificValueCaps;
      }
      v26 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v55 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v24);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v55;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v29,
          *(_QWORD *)(v27 + 19336),
          3,
          1,
          32,
          (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids,
          v25);
      }
      if ( i < v12 - 1 )
        rimSleep();
      v9 = v57;
    }
    v30 = KeQueryPerformanceCounter(0LL);
    v31 = Feature_RIMMaxCountRetries__private_IsEnabledDeviceUsageNoInline();
    v32 = v60;
    if ( v31 )
    {
      if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
      {
        LODWORD(v57) = SpecificValueCaps;
        v63 = i + 1;
        v60 = (unsigned __int64)(1000 * (v30.QuadPart - v58.QuadPart)) / gliQpcFreq.QuadPart;
        v59 = *(_QWORD *)(v32 + 384);
        v58.QuadPart = *(int *)(v32 + 964);
        v65 = *(int *)(v32 + 24);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v63,
          (__int64)&unk_14027B107,
          v35,
          v36,
          (__int64)&v65,
          (__int64)&v58,
          (const WCHAR **)&v59,
          (__int64)&v60,
          (__int64)&v63,
          (__int64)&v57,
          (__int64)&UsageValue);
      }
    }
    else if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
    {
      UsageValue = SpecificValueCaps;
      v60 = i + 1;
      v59 = (unsigned __int64)(1000 * (v30.QuadPart - v58.QuadPart)) / gliQpcFreq.QuadPart;
      v58 = *(LARGE_INTEGER *)(v32 + 384);
      v57 = (struct RIMDEV *)*(int *)(v32 + 964);
      v63 = *(int *)(v32 + 24);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v60,
        byte_14027B18B,
        v33,
        v34,
        (__int64)&v63,
        (__int64)&v57,
        (const WCHAR **)&v58,
        (__int64)&v59,
        (__int64)&v60,
        (__int64)&UsageValue);
    }
    v37 = Report;
    if ( SpecificValueCaps )
    {
      SpecificValueCaps = -1073741668;
LABEL_73:
      GreDeleteFastMutex(v37);
      return (unsigned int)SpecificValueCaps;
    }
    v38 = (unsigned int *)(v32 + 776);
    SpecificValueCaps = HidP_GetUsageValue(
                          HidP_Feature,
                          0xDu,
                          0,
                          0x55u,
                          (PULONG)(v32 + 776),
                          v64,
                          Report,
                          (unsigned __int16)v61[4]);
    v10 = SpecificValueCaps;
    if ( SpecificValueCaps >= 0 && (v40 = *v38) != 0 )
    {
      if ( v40 > 0x100 )
      {
LABEL_49:
        v10 = -1073741668;
        SpecificValueCaps = -1073741668;
        goto LABEL_72;
      }
      v41 = v61;
      if ( *v61 == 5 )
      {
        *v38 = v40 + 1;
      }
      else if ( *(_DWORD *)(v66 + 720) + v40 > 0xA00 )
      {
        goto LABEL_49;
      }
    }
    else
    {
      v42 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v44 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
        LOBYTE(v45) = v43;
        LOBYTE(v46) = v42;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v46,
          v45,
          *(_QWORD *)(v44 + 19336),
          3,
          1,
          33,
          (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids,
          v10);
      }
      v41 = v61;
      v10 = -1073741668;
      SpecificValueCaps = -1073741668;
    }
    if ( (v10 & 0x80000000) == 0 && *v41 == 5 )
    {
      UsageValue = 0;
      *(_DWORD *)(v32 + 964) = 3;
      SpecificValueCaps = HidP_GetUsageValue(
                            HidP_Feature,
                            0xDu,
                            0,
                            0x59u,
                            &UsageValue,
                            v64,
                            v37,
                            (unsigned __int16)v41[4]);
      v10 = SpecificValueCaps;
      if ( SpecificValueCaps >= 0 )
        *(_DWORD *)(v32 + 964) = ((UsageValue & 1) != 0) + 1;
    }
  }
  else
  {
    v10 = -1073741668;
    SpecificValueCaps = -1073741668;
    v47 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v47 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v10;
    v49 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
    LOBYTE(v50) = v48;
    LOBYTE(v51) = v47;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v51,
      v50,
      *(_QWORD *)(v49 + 19336),
      3,
      1,
      34,
      (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
    v10 = SpecificValueCaps;
    v37 = Report;
  }
LABEL_72:
  if ( v37 )
    goto LABEL_73;
  return v10;
}
