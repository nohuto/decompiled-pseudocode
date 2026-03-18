/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x1401E2528
 * Callers:
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x140001A28 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     RIMGetDeviceLocationInfo @ 0x1400AFCDC (RIMGetDeviceLocationInfo.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1400B25A8 (RIMApiSetValidateDeviceSignature.c)
 *     RIMIsRunningOnDesktop @ 0x1400B29E8 (RIMIsRunningOnDesktop.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x140114428 (RimDeviceTypeToRimInputTypeString.c)
 *     RIMInitializeDeadzone @ 0x140127470 (RIMInitializeDeadzone.c)
 *     RIMGetDeviceParent @ 0x14012AB40 (RIMGetDeviceParent.c)
 *     RIMGetPropertyCount @ 0x14012D940 (RIMGetPropertyCount.c)
 *     RIMAssignTouchType @ 0x14013F638 (RIMAssignTouchType.c)
 *     RIMGetProductString @ 0x14013FD8C (RIMGetProductString.c)
 *     RIMIsDeviceExcluded @ 0x140151270 (RIMIsDeviceExcluded.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1401555B0 (RIMComputeSpecificHighMetricValue.c)
 *     ApiSetRetrieveCalibrationData @ 0x14015A934 (ApiSetRetrieveCalibrationData.c)
 *     RIMIsInputUsagePresent @ 0x140160C3C (RIMIsInputUsagePresent.c)
 *     RIMCheckPressureUsageStatus @ 0x14017FB54 (RIMCheckPressureUsageStatus.c)
 *     RIMGetMaxCountFeatureDetails @ 0x14017FBE8 (RIMGetMaxCountFeatureDetails.c)
 *     RIMIsEssentialUsage @ 0x140180360 (RIMIsEssentialUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimSetupPalmTelemetry @ 0x1401E1FF8 (rimSetupPalmTelemetry.c)
 *     RIMFreePointerDevice @ 0x1401E3C1C (RIMFreePointerDevice.c)
 *     RIMGetDeviceButtons @ 0x1401E3DF8 (RIMGetDeviceButtons.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x1401EC44C (RIMPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1401F5464 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMRetrieveNormalizationRange @ 0x1401F5964 (RIMRetrieveNormalizationRange.c)
 *     RIMValidatePTPProperties @ 0x1401F6234 (RIMValidatePTPProperties.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        const WCHAR *a4,
        struct _DEVICE_OBJECT *a5,
        struct _FILE_OBJECT *a6,
        __int64 a7)
{
  struct _HIDP_PREPARSED_DATA *v7; // rsi
  __int64 v9; // r14
  struct _HIDP_CAPS *v10; // r13
  __int64 v11; // rbx
  int v13; // eax
  __int64 v14; // rdx
  char v15; // si
  bool v16; // r14
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int16 Usage; // cx
  __int64 v25; // rcx
  BOOL v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  void *v30; // rcx
  char v31; // si
  bool v32; // r14
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  int v36; // esi
  __int64 v37; // r8
  int v38; // r14d
  int v39; // ecx
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  bool v44; // zf
  struct _HIDP_PREPARSED_DATA *v45; // rsi
  NTSTATUS SpecificValueCaps; // eax
  int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  _DWORD *v55; // rax
  __int64 v56; // rcx
  struct _HIDP_VALUE_CAPS *v57; // r15
  NTSTATUS v58; // eax
  int v59; // r10d
  BOOL v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rax
  int v63; // edx
  int v64; // r8d
  __int64 v65; // r8
  struct _HIDP_VALUE_CAPS *v66; // rdx
  unsigned int v67; // r13d
  unsigned int v68; // r9d
  __int64 v69; // rcx
  __int64 v70; // xmm0_8
  unsigned int v71; // eax
  __m128i *p_HasNull; // r14
  __int64 v73; // r8
  unsigned __int16 v74; // r13
  int v75; // eax
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __m128i v79; // xmm1
  __m128i v80; // xmm0
  __m128i v81; // xmm1
  __m128i v82; // xmm5
  __int64 v83; // xmm0_8
  __m128i v84; // xmm2
  __m128i v85; // xmm3
  __m128i v86; // xmm4
  __m128i v87; // xmm5
  __int64 v88; // xmm0_8
  __m128i v89; // xmm2
  __m128i v90; // xmm3
  __m128i v91; // xmm4
  bool v92; // cf
  int v93; // eax
  __int64 v94; // xmm0_8
  int v95; // eax
  __int64 v96; // rdx
  char v97; // r14
  bool v98; // r12
  __int64 v99; // rax
  int v100; // r8d
  int v101; // edx
  int v102; // edx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  int v106; // eax
  struct _HIDP_PREPARSED_DATA *v107; // r12
  char v108; // r14
  bool v109; // r12
  __int64 v110; // rax
  int v111; // r8d
  int v112; // edx
  __int64 v113; // rdx
  __int64 v114; // xmm0_8
  int v115; // edx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  int v119; // edx
  const wchar_t *v120; // rax
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  int v124; // edx
  int v125; // eax
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 *v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 **v131; // rdx
  struct _DEVICE_OBJECT *v132; // rcx
  __int64 v133; // rdx
  char v134; // bl
  bool v135; // di
  __int64 v136; // rax
  int v137; // r8d
  int v138; // edx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  USHORT v140; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v141; // [rsp+48h] [rbp-B8h]
  struct _HIDP_CAPS *v142; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v143; // [rsp+58h] [rbp-A8h] BYREF
  bool v144; // [rsp+60h] [rbp-A0h]
  __int128 v145; // [rsp+70h] [rbp-90h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+80h] [rbp-80h]
  const WCHAR *v147; // [rsp+88h] [rbp-78h] BYREF
  __int64 v148; // [rsp+90h] [rbp-70h]
  const WCHAR *v149; // [rsp+98h] [rbp-68h] BYREF
  int v150; // [rsp+A0h] [rbp-60h]
  int v151; // [rsp+A4h] [rbp-5Ch]
  struct _UNICODE_STRING v152; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v153; // [rsp+C0h] [rbp-40h]
  __m128i v154; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v155; // [rsp+E0h] [rbp-20h]
  __m128i v156; // [rsp+F0h] [rbp-10h]
  __m128i v157; // [rsp+100h] [rbp+0h]
  __int64 v158; // [rsp+110h] [rbp+10h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+120h] [rbp+20h] BYREF
  struct _HIDP_VALUE_CAPS v160[2]; // [rsp+170h] [rbp+70h] BYREF

  v7 = a3;
  v9 = a1;
  v150 = -1;
  v151 = -1;
  PreparsedData = a3;
  v10 = (struct _HIDP_CAPS *)a4;
  v148 = a1;
  v153 = (__int64)a5;
  v143 = (__int64)a6;
  *(_QWORD *)&v145 = a7;
  ValueCapsLength[0] = 0;
  v142 = (struct _HIDP_CAPS *)a4;
  memset(v160, 0, sizeof(v160));
  v140 = 0;
  v141 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v11 = Win32AllocPoolZInitImpl(256LL, 0x510uLL, 0x63707352u);
  if ( !v11 )
    return 3221225628LL;
  *(_DWORD *)(v11 + 776) = 1;
  *(_QWORD *)(v11 + 928) = v11 + 920;
  *(_QWORD *)(v11 + 920) = v11 + 920;
  v13 = RIMGetProductString(v11, a5, a6, (struct RIMDEV *)a2);
  v14 = (__int64)&WPP_GLOBAL_Control;
  if ( v13 < 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v14 = 1LL, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(UserSessionState + 19336),
        3,
        1,
        14,
        (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
    }
    if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
    {
      v20 = *(_DWORD *)(a2 + 48);
      *(_QWORD *)&v152.Length = L"Failed to retrieve productString";
      v149 = *(const WCHAR **)(a2 + 200);
      v147 = RimDeviceTypeToRimInputTypeString(a2, v20);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v21,
        (__int64)&unk_14027B1FE,
        v22,
        v23,
        &v147,
        &v149,
        (const WCHAR **)&v152);
    }
    v7 = PreparsedData;
    v9 = v148;
  }
  if ( (int)RIMGetDeviceLocationInfo((__int64)a5, a2 + 2120) < 0 )
  {
    *(_DWORD *)&v152.Length = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 354);
  }
  Usage = v10->Usage;
  v152 = *(struct _UNICODE_STRING *)(v11 + 376);
  if ( !RIMIsDeviceExcluded(Usage, &v152) )
  {
    v25 = *(unsigned int *)(v9 + 84);
    v26 = 1;
    if ( (v25 & 4) != 0 )
    {
      if ( v10->Usage == 2 )
      {
        *(_DWORD *)(v11 + 24) = 5;
        rimSetupPalmTelemetry(v9);
        if ( (int)RIMInitializeDeadzone(v28, v27) < 0 )
        {
          v30 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (v29 = 1LL, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
            || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v31 = 0;
          }
          v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v29);
            LOBYTE(v34) = v32;
            LOBYTE(v35) = v31;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v35,
              v34,
              *(_QWORD *)(v33 + 19336),
              3,
              1,
              15,
              (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
          }
          *(_DWORD *)(W32GetUserSessionState(v30, v29) + 244) = 1;
        }
        goto LABEL_58;
      }
      if ( v10->Usage == 1 )
      {
        *(_DWORD *)(v11 + 24) = 6;
        v26 = !RIMIsRunningOnDesktop(v25, 2LL);
        goto LABEL_49;
      }
    }
    if ( (v25 & 0x18) == 0 || (unsigned __int16)(v10->Usage - 4) > 1u )
    {
      if ( (v25 & 0x20) == 0 )
        goto LABEL_53;
      v44 = (*(_DWORD *)(a2 + 168) & 0x10000) == 0;
LABEL_52:
      if ( !v44 )
        goto LABEL_58;
LABEL_53:
      v36 = -1073741808;
LABEL_54:
      if ( *(_QWORD *)(v11 + 792) )
      {
        v141 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 901);
      }
      RIMFreePointerDevice(v148);
      return (unsigned int)v36;
    }
    *(_DWORD *)(v11 + 24) = 1;
    v36 = RIMAssignTouchType(v11, v7);
    v38 = 0;
    if ( v36 == -1073741668 )
      goto LABEL_164;
    if ( v10->Usage == 5 )
    {
      v141 = *(_DWORD *)(v11 + 24);
      *(_DWORD *)(v11 + 24) = 7;
    }
    v39 = *(_DWORD *)(v148 + 84);
    if ( (v39 & 4) != 0 && (unsigned int)(*(_DWORD *)(v11 + 24) - 5) <= 1 )
      v26 = 0;
    if ( (v39 & 8) != 0 && *(_DWORD *)(v11 + 24) == 7 )
      v26 = 0;
    if ( ((v39 & 0x10) == 0 || (unsigned int)(*(_DWORD *)(v11 + 24) - 1) > 3) && v26 )
    {
LABEL_49:
      v44 = v26;
      goto LABEL_52;
    }
    v36 = RIMGetMaxCountFeatureDetails(
            (struct RIMDEV *)a2,
            v148,
            v11,
            PreparsedData,
            v10,
            (const WCHAR *)v153,
            (struct _FILE_OBJECT *)v143);
    if ( v36 == -1073741668 )
    {
      if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
      {
        v40 = *(_DWORD *)(a2 + 48);
        *(_QWORD *)&v145 = L"Failed to get max count feature details";
        v143 = *(_QWORD *)(a2 + 200);
        v142 = (struct _HIDP_CAPS *)RimDeviceTypeToRimInputTypeString(a2, v40);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v41,
          (__int64)&unk_14027B1FE,
          v42,
          v43,
          (const WCHAR **)&v142,
          (const WCHAR **)&v143,
          (const WCHAR **)&v145);
      }
      goto LABEL_54;
    }
  }
LABEL_58:
  v45 = PreparsedData;
  ValueCapsLength[0] = 1;
  if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x56u, &ValueCaps, ValueCapsLength, PreparsedData) >= 0 )
  {
    if ( ValueCaps.LogicalMin >= ValueCaps.LogicalMax || ValueCaps.LogicalMin < 0 || ValueCaps.LogicalMax < 0xFFFF )
    {
      if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
      {
        v51 = *(_DWORD *)(a2 + 48);
        *(_QWORD *)&v145 = L"Bad ScanTime minimum";
        v143 = *(_QWORD *)(a2 + 200);
        v142 = (struct _HIDP_CAPS *)RimDeviceTypeToRimInputTypeString(a2, v51);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v52,
          (__int64)&unk_14027B1FE,
          v53,
          v54,
          (const WCHAR **)&v142,
          (const WCHAR **)&v143,
          (const WCHAR **)&v145);
      }
LABEL_71:
      v36 = -1073741668;
      goto LABEL_54;
    }
    *(_DWORD *)(v11 + 368) |= 0x80u;
    *(_DWORD *)(v11 + 896) = ValueCaps.LogicalMax;
  }
  ValueCapsLength[0] = 0;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v11 + 784), 0, 0LL, ValueCapsLength, v45);
  v36 = SpecificValueCaps;
  if ( !SpecificValueCaps || SpecificValueCaps == -1072627705 )
  {
    v55 = (_DWORD *)(v11 + 32);
    v56 = 6LL;
    do
    {
      *v55 = -1;
      v55 += 4;
      --v56;
    }
    while ( v56 );
    v38 = 0;
    if ( (int)RIMCmAllocPointerDeviceContacts(v11, 2020635474LL) < 0 )
      goto LABEL_164;
    if ( (*(_DWORD *)(v11 + 368) & 2) == 0
      || !*(_WORD *)(*(_QWORD *)(v11 + 768) + 8LL)
      || (v140 = 2,
          v36 = HidP_GetSpecificValueCaps(
                  HidP_Input,
                  0,
                  *(_WORD *)(*(_QWORD *)(v11 + 768) + 8LL),
                  0,
                  v160,
                  &v140,
                  PreparsedData),
          v36 >= 0) )
    {
      *(_DWORD *)&v152.Length = ValueCapsLength[0] + v140;
      v57 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * *(unsigned int *)&v152.Length, 0x78707352u);
      v38 = 0;
      if ( !v57 )
        goto LABEL_164;
      v58 = HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v11 + 784), 0, v57, ValueCapsLength, PreparsedData);
      v59 = 0;
      v36 = v58;
      if ( v58 < 0 )
        goto LABEL_163;
      if ( (*(_DWORD *)(v11 + 368) & 2) == 0 )
      {
        v60 = RIMGetPropertyCount(v11, *(_WORD *)(v11 + 784), ValueCapsLength[0], PreparsedData);
        v59 = 0;
        if ( !v60 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
          {
            v61 = 1LL;
            if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
              LOBYTE(v38) = 1;
          }
          v144 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v62 = W32GetUserSessionState(WPP_GLOBAL_Control, v61);
            LOBYTE(v63) = v38;
            LOBYTE(v64) = v144;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v63,
              v64,
              *(_QWORD *)(v62 + 19336),
              3,
              1,
              16,
              (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
            v59 = 0;
          }
        }
      }
      if ( v140 )
      {
        v65 = ValueCapsLength[0];
        v66 = v160;
        v67 = *(_DWORD *)&v152.Length;
        v68 = 0;
        do
        {
          if ( (unsigned int)v65 >= v67 )
            break;
          v69 = v65;
          ++v68;
          v65 = (unsigned int)(v65 + 1);
          *(_OWORD *)&v57[v69].UsagePage = *(_OWORD *)&v66->UsagePage;
          *(_OWORD *)&v57[v69].HasNull = *(_OWORD *)&v66->HasNull;
          *(_OWORD *)&v57[v69].UnitsExp = *(_OWORD *)&v66->UnitsExp;
          *(_OWORD *)&v57[v69].PhysicalMin = *(_OWORD *)&v66->PhysicalMin;
          v70 = *(_QWORD *)&v66->NotRange.DesignatorIndex;
          ++v66;
          *(_QWORD *)&v57[v69].NotRange.DesignatorIndex = v70;
        }
        while ( v68 < 2 );
        v10 = v142;
      }
      v71 = 0;
      LODWORD(v149) = 0;
      LODWORD(v147) = 0;
      if ( *(_DWORD *)&v152.Length )
      {
        p_HasNull = (__m128i *)&v57->HasNull;
        while ( 1 )
        {
          v73 = 4LL;
          if ( v71 >= 6 )
            break;
          if ( *(_DWORD *)(v11 + 24) == 4 && !p_HasNull->m128i_i8[0] )
          {
            v36 = -1073741668;
            break;
          }
          v74 = v10->Usage;
          if ( v74 == 2 )
            v74 = 1;
          v75 = RIMIsEssentialUsage(p_HasNull[-1].m128i_u16[0], p_HasNull[2].m128i_u16[4], v74);
          v59 = 0;
          if ( v75 )
          {
            v76 = (unsigned int)v147;
            v77 = 60LL * (unsigned int)v147;
            v78 = 16LL * (unsigned int)v147;
            *(_WORD *)(v77 + v11 + 408) = p_HasNull[-1].m128i_i16[0];
            *(_WORD *)(60 * (v76 + 7) + v11) = p_HasNull[2].m128i_i16[4];
            *(_DWORD *)(v77 + v11 + 412) = p_HasNull[-1].m128i_u8[2];
            *(_WORD *)(v77 + v11 + 418) = p_HasNull[-1].m128i_i16[5];
            *(_DWORD *)(v77 + v11 + 424) = p_HasNull->m128i_u8[0];
            *(_DWORD *)(v77 + v11 + 440) = p_HasNull[1].m128i_i32[2];
            *(_DWORD *)(v77 + v11 + 444) = p_HasNull[1].m128i_i32[3];
            *(_DWORD *)(v77 + v11 + 448) = p_HasNull[2].m128i_i32[0];
            *(_DWORD *)(v77 + v11 + 452) = p_HasNull[2].m128i_i32[1];
            *(_WORD *)(v77 + v11 + 464) = p_HasNull->m128i_i16[1];
            *(_DWORD *)(v11 + 16 * (v76 + 2)) = v76;
            *(_WORD *)(v78 + v11 + 28) = p_HasNull[-1].m128i_i16[0];
            *(_WORD *)(v78 + v11 + 30) = p_HasNull[2].m128i_i16[4];
            LODWORD(v77) = p_HasNull[2].m128i_u16[4];
            v79 = *p_HasNull;
            v154 = p_HasNull[-1];
            v80 = p_HasNull[1];
            v155 = v79;
            v81 = p_HasNull[2];
            v156 = v80;
            v158 = p_HasNull[3].m128i_i64[0];
            v157 = v81;
            RIMRetrieveNormalizationRange(v154.m128i_u16[0], v77, v74, (unsigned int)&v154, v11 + v78 + 36);
            LODWORD(v147) = (_DWORD)v147 + 1;
            if ( p_HasNull[2].m128i_i16[4] == 48 && p_HasNull[-1].m128i_i16[0] == 1 )
            {
              v82 = p_HasNull[2];
              v83 = p_HasNull[3].m128i_i64[0];
              v84 = p_HasNull[-1];
              v150 = (int)v149;
              v85 = *p_HasNull;
              v86 = p_HasNull[1];
              v158 = v83;
              v154 = v84;
              v155 = v85;
              v156 = v86;
              v157 = v82;
              *(_DWORD *)(v11 + 148) = RIMComputeSpecificHighMetricValue(
                                         _mm_cvtsi128_si32(_mm_srli_si128(v82, 4)) - _mm_cvtsi128_si32(v82),
                                         (__int64)&v154)
                                     + 1;
              *(_DWORD *)(v11 + 124) = p_HasNull[1].m128i_i32[2];
              *(_DWORD *)(v11 + 132) = p_HasNull[1].m128i_i32[3] + 1;
            }
            if ( p_HasNull[2].m128i_i16[4] == 49 && p_HasNull[-1].m128i_i16[0] == 1 )
            {
              v87 = p_HasNull[2];
              v88 = p_HasNull[3].m128i_i64[0];
              v89 = p_HasNull[-1];
              v151 = (int)v149;
              v90 = *p_HasNull;
              v91 = p_HasNull[1];
              v158 = v88;
              v154 = v89;
              v155 = v90;
              v156 = v91;
              v157 = v87;
              *(_DWORD *)(v11 + 152) = RIMComputeSpecificHighMetricValue(
                                         _mm_cvtsi128_si32(_mm_srli_si128(v87, 4)) - _mm_cvtsi128_si32(v87),
                                         (__int64)&v154)
                                     + 1;
              *(_DWORD *)(v11 + 128) = p_HasNull[1].m128i_i32[2];
              *(_DWORD *)(v11 + 136) = p_HasNull[1].m128i_i32[3] + 1;
            }
            RIMCheckPressureUsageStatus(v148, v11, p_HasNull[-1].m128i_i16[0], p_HasNull[2].m128i_i16[4], v74);
            v59 = 0;
          }
          p_HasNull = (__m128i *)((char *)p_HasNull + 72);
          v10 = v142;
          v92 = (unsigned int)((_DWORD)v149 + 1) < *(_DWORD *)&v152.Length;
          LODWORD(v149) = (_DWORD)v149 + 1;
          v71 = (unsigned int)v147;
          if ( !v92 )
            goto LABEL_112;
        }
      }
      else
      {
LABEL_112:
        v73 = 4LL;
      }
      *(_DWORD *)(v11 + 780) = v71;
      v38 = 0;
      if ( v36 < 0 )
      {
LABEL_163:
        GreDeleteFastMutex((char *)v57);
        goto LABEL_164;
      }
      if ( v150 == -1 || v151 == -1 )
      {
        if ( (unsigned int)dword_14029EE58 <= 5 || !tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
          goto LABEL_162;
        v124 = *(_DWORD *)(a2 + 48);
        *(_QWORD *)&v145 = L"coordinate usage missing";
        v143 = *(_QWORD *)(a2 + 200);
        v120 = RimDeviceTypeToRimInputTypeString(a2, v124);
      }
      else
      {
        if ( v57[v150].LogicalMax != v57[v150].LogicalMin && v57[v151].LogicalMax != v57[v151].LogicalMin )
        {
          v93 = *(_DWORD *)(v11 + 24);
          if ( v93 == 7 )
          {
            v114 = *(_QWORD *)v145;
            DWORD2(v145) = *(_DWORD *)(v145 + 8);
            *(_QWORD *)&v145 = v114;
            v38 = 0;
            if ( (int)RIMApiSetValidateDeviceSignature(
                        (struct _DEVICE_OBJECT *)v153,
                        (struct _FILE_OBJECT *)v143,
                        PreparsedData,
                        v10,
                        v11,
                        (__int64 *)&v145) < 0 )
            {
              v36 = -1073741668;
              if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
              {
                v115 = *(_DWORD *)(a2 + 48);
                *(_QWORD *)&v145 = L"Failed to validate device signature";
                v143 = *(_QWORD *)(a2 + 200);
                v142 = (struct _HIDP_CAPS *)RimDeviceTypeToRimInputTypeString(a2, v115);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                  v116,
                  (__int64)&unk_14027B1FE,
                  v117,
                  v118,
                  (const WCHAR **)&v142,
                  (const WCHAR **)&v143,
                  (const WCHAR **)&v145);
              }
              goto LABEL_163;
            }
          }
          else if ( v93 != 6 && v10->Usage == 4 )
          {
            v94 = *(_QWORD *)v145;
            DWORD2(v145) = *(_DWORD *)(v145 + 8);
            *(_QWORD *)&v145 = v94;
            v95 = RIMApiSetValidateDeviceSignature(
                    (struct _DEVICE_OBJECT *)v153,
                    (struct _FILE_OBJECT *)v143,
                    PreparsedData,
                    v10,
                    v11,
                    (__int64 *)&v145);
            v73 = 0LL;
            if ( v95 < 0 )
            {
              v36 = -1073741668;
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v97 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v97 = 0;
              }
              v98 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v97 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v99 = W32GetUserSessionState(WPP_GLOBAL_Control, v96);
                LOBYTE(v100) = v98;
                LOBYTE(v101) = v97;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v101,
                  v100,
                  *(_QWORD *)(v99 + 19336),
                  3,
                  1,
                  17,
                  (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
              }
              if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
              {
                v102 = *(_DWORD *)(a2 + 48);
                *(_QWORD *)&v145 = L"Failed to validate device signature";
                v143 = *(_QWORD *)(a2 + 200);
                v142 = (struct _HIDP_CAPS *)RimDeviceTypeToRimInputTypeString(a2, v102);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                  v103,
                  (__int64)&unk_14027B1FE,
                  v104,
                  v105,
                  (const WCHAR **)&v142,
                  (const WCHAR **)&v143,
                  (const WCHAR **)&v145);
              }
              v38 = 0;
              goto LABEL_163;
            }
            v106 = *(_DWORD *)(v11 + 368);
            if ( (v106 & 0x100) == 0 )
              *(_DWORD *)(v11 + 368) = v106 & 0xFFFFFF7F;
          }
          RIMPopulateExtendedPointerDeviceProperties(a2, v11, v73);
          v107 = PreparsedData;
          v36 = RIMGetDeviceButtons(v148, v11, PreparsedData, v10);
          if ( v36 >= 0 )
          {
            if ( *(_DWORD *)(v11 + 24) != 7 )
            {
              v145 = *(_OWORD *)(a2 + 192);
              ApiSetRetrieveCalibrationData(v11, &v145);
            }
          }
          else
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v108 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v108 = 0;
            }
            v109 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v108 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v110 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
              LOBYTE(v111) = v109;
              LOBYTE(v112) = v108;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v112,
                v111,
                *(_QWORD *)(v110 + 19336),
                3,
                1,
                18,
                (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
            }
            v107 = PreparsedData;
          }
          v38 = 1;
          if ( v10->UsagePage == 13
            && v10->Usage == 2
            && RIMIsInputUsagePresent(v107, 2LL, 0x5Bu)
            && RIMIsInputUsagePresent(v107, v113, 0x91u) )
          {
            *(_DWORD *)(v11 + 368) |= 0x8000u;
          }
          goto LABEL_163;
        }
        if ( (unsigned int)dword_14029EE58 <= 5 || !tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
          goto LABEL_162;
        v119 = *(_DWORD *)(a2 + 48);
        *(_QWORD *)&v145 = L"coordinate range invalid";
        v143 = *(_QWORD *)(a2 + 200);
        v120 = RimDeviceTypeToRimInputTypeString(a2, v119);
      }
      v142 = (struct _HIDP_CAPS *)v120;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v121,
        (__int64)&unk_14027B1FE,
        v122,
        v123,
        (const WCHAR **)&v142,
        (const WCHAR **)&v143,
        (const WCHAR **)&v145);
      v59 = 0;
LABEL_162:
      v38 = v59;
      v36 = -1073741668;
      goto LABEL_163;
    }
    goto LABEL_71;
  }
  v38 = 0;
  if ( (unsigned int)dword_14029EE58 > 5 && tlgKeywordOn((__int64)&dword_14029EE58, 0x400000000000LL) )
  {
    v47 = *(_DWORD *)(a2 + 48);
    *(_QWORD *)&v145 = L"Coordinate usage missing";
    v143 = *(_QWORD *)(a2 + 200);
    v142 = (struct _HIDP_CAPS *)RimDeviceTypeToRimInputTypeString(a2, v47);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v48,
      (__int64)&unk_14027B1FE,
      v49,
      v50,
      (const WCHAR **)&v142,
      (const WCHAR **)&v143,
      (const WCHAR **)&v145);
  }
LABEL_164:
  if ( v36 < 0 )
    goto LABEL_54;
  if ( *(_DWORD *)(v11 + 24) == 7 )
  {
    v36 = RIMValidatePTPProperties(v141, v11);
    if ( v36 < 0 )
      goto LABEL_54;
  }
  v125 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 184) |= 0x80u;
  *(_DWORD *)(a2 + 80) = v125 ^ (v38 ^ v125) & 1;
  if ( (unsigned int)(*(_DWORD *)(v11 + 24) - 1) <= 3 )
  {
    v126 = v148;
    *(_DWORD *)(v148 + 720) += *(_DWORD *)(v11 + 776);
    *(_DWORD *)(v11 + 368) |= 0x400u;
    if ( *(_DWORD *)(v126 + 720) > 0xA00u )
    {
      v141 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 882);
    }
  }
  *(_DWORD *)(v11 + 800) = 100;
  v127 = ((unsigned __int64)(100 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v128 = (__int64 *)(v11 + 920);
  *(_QWORD *)(v11 + 808) = (v127 + ((unsigned __int64)(100 * gliQpcFreq.QuadPart - v127) >> 1)) >> 9;
  v129 = v148;
  *(_QWORD *)(a2 + 456) = v11;
  v130 = v129 + 432;
  *(_QWORD *)(v11 + 16) = a2;
  v131 = *(__int64 ***)(v130 + 8);
  if ( *v131 != (__int64 *)v130 )
    __fastfail(3u);
  *v128 = v130;
  *(_QWORD *)(v11 + 928) = v131;
  *v131 = v128;
  *(_QWORD *)(v130 + 8) = v128;
  v132 = (struct _DEVICE_OBJECT *)v153;
  *(_QWORD *)(v11 + 792) = -1LL;
  if ( !(unsigned int)RIMGetDeviceParent(v132, a2, v37) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v134 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v134 = 0;
    }
    v135 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v134 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v136 = W32GetUserSessionState(WPP_GLOBAL_Control, v133);
      LOBYTE(v137) = v135;
      LOBYTE(v138) = v134;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v138,
        v137,
        *(_QWORD *)(v136 + 19336),
        3,
        1,
        19,
        (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
    }
  }
  return (unsigned int)v36;
}
