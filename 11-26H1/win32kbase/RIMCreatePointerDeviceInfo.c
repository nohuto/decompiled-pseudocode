/*
 * XREFs of RIMCreatePointerDeviceInfo @ 0x14012EC08
 * Callers:
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x140001A60 (--$Write@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2I.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     RIMGetDeviceParent @ 0x1400EE228 (RIMGetDeviceParent.c)
 *     RIMApiSetValidateDeviceSignature @ 0x1400EE9C4 (RIMApiSetValidateDeviceSignature.c)
 *     RIMIsRunningOnDesktop @ 0x1400F0800 (RIMIsRunningOnDesktop.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x14012E834 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMGetProductString @ 0x14012FEDC (RIMGetProductString.c)
 *     RIMFreePointerDevice @ 0x140130280 (RIMFreePointerDevice.c)
 *     RIMGetDeviceLocationInfo @ 0x140130414 (RIMGetDeviceLocationInfo.c)
 *     RIMIsDeviceExcluded @ 0x140130454 (RIMIsDeviceExcluded.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x14015EB68 (RimDeviceTypeToRimInputTypeString.c)
 *     RIMGetPropertyCount @ 0x1401698B8 (RIMGetPropertyCount.c)
 *     RIMIsEssentialUsage @ 0x14016A53C (RIMIsEssentialUsage.c)
 *     RIMRetrieveNormalizationRange @ 0x14016A7E8 (RIMRetrieveNormalizationRange.c)
 *     RIMAssignTouchType @ 0x1401701F0 (RIMAssignTouchType.c)
 *     RIMInitializeDeadzone @ 0x14017F380 (RIMInitializeDeadzone.c)
 *     RIMComputeSpecificHighMetricValue @ 0x140192F2C (RIMComputeSpecificHighMetricValue.c)
 *     RIMIsInputUsagePresent @ 0x1401A5CA8 (RIMIsInputUsagePresent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCheckPressureUsageStatus @ 0x1401B4BE8 (RIMCheckPressureUsageStatus.c)
 *     ApiSetRetrieveCalibrationData @ 0x1401C0790 (ApiSetRetrieveCalibrationData.c)
 *     rimSetupPalmTelemetry @ 0x140204AFC (rimSetupPalmTelemetry.c)
 *     RIMGetDeviceButtons @ 0x140204BF4 (RIMGetDeviceButtons.c)
 *     RIMGetMaxCountFeatureDetails @ 0x140205008 (RIMGetMaxCountFeatureDetails.c)
 *     RIMPopulateExtendedPointerDeviceProperties @ 0x14020ADC0 (RIMPopulateExtendedPointerDeviceProperties.c)
 *     RIMValidatePTPProperties @ 0x140211240 (RIMValidatePTPProperties.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMCreatePointerDeviceInfo(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        struct _HIDP_CAPS *a4,
        struct _DEVICE_OBJECT *a5,
        const WCHAR *a6,
        const WCHAR *a7)
{
  PHIDP_PREPARSED_DATA v7; // rsi
  __int64 v9; // r14
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v14; // rax
  int v15; // eax
  CTouchProcessor **v16; // rdx
  _UNKNOWN **v17; // r8
  char v18; // si
  bool v19; // r14
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 Usage; // rcx
  int v28; // eax
  __int64 v29; // r8
  int v30; // eax
  BOOL v31; // r15d
  int v32; // ecx
  int v33; // edx
  int v34; // r8d
  int v35; // ecx
  char v36; // si
  bool v37; // r14
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  NTSTATUS v41; // eax
  BOOL v42; // r9d
  NTSTATUS v43; // r14d
  int v44; // esi
  __int64 v45; // r14
  int v46; // r8d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  struct _HIDP_PREPARSED_DATA *v51; // r14
  NTSTATUS SpecificValueCaps; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _DWORD *v61; // rax
  __int64 v62; // rcx
  struct _HIDP_PREPARSED_DATA *v63; // r13
  struct _HIDP_VALUE_CAPS *v64; // r15
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // edx
  int v69; // r8d
  char v70; // si
  bool v71; // r13
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  unsigned int v75; // r10d
  __int64 v76; // r8
  struct _HIDP_VALUE_CAPS *v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // xmm0_8
  unsigned int v80; // r13d
  USAGE v81; // cx
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // r8
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __m128i v87; // xmm1
  __m128i v88; // xmm5
  __int128 v89; // xmm2
  __int128 v90; // xmm3
  __int128 v91; // xmm4
  __m128i v92; // xmm5
  __int128 v93; // xmm2
  __int128 v94; // xmm3
  __int128 v95; // xmm4
  int v96; // eax
  struct _HIDP_CAPS *v97; // r13
  __int64 v98; // xmm0_8
  bool v99; // r12
  __int64 v100; // rax
  int v101; // r8d
  int v102; // edx
  __int64 v103; // rdx
  const WCHAR *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  void *v108; // rdx
  int v109; // eax
  struct _HIDP_PREPARSED_DATA *v110; // r12
  int v111; // eax
  bool v112; // r12
  __int64 v113; // rax
  int v114; // r8d
  int v115; // edx
  __int64 v116; // xmm0_8
  __int64 v117; // rdx
  __int64 v118; // rdx
  const WCHAR *v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  void *v123; // rdx
  __int64 v124; // rdx
  int v125; // eax
  int v126; // r8d
  __int64 v127; // rcx
  __int64 v128; // rdx
  _QWORD *v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rcx
  _QWORD *v132; // rdx
  struct _DEVICE_OBJECT *v133; // rcx
  int v134; // edx
  int v135; // r8d
  char v136; // bl
  bool v137; // di
  __int64 v138; // rax
  int v139; // r8d
  int v140; // edx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  USHORT v142; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v143; // [rsp+48h] [rbp-B8h]
  struct _FILE_OBJECT *v144; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v145; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v146; // [rsp+60h] [rbp-A0h]
  __int128 v147; // [rsp+70h] [rbp-90h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+80h] [rbp-80h]
  const WCHAR *v149; // [rsp+88h] [rbp-78h] BYREF
  __int64 v150; // [rsp+90h] [rbp-70h]
  const WCHAR *v151; // [rsp+98h] [rbp-68h] BYREF
  int v152; // [rsp+A0h] [rbp-60h]
  int v153; // [rsp+A4h] [rbp-5Ch]
  struct _HIDP_CAPS *v154; // [rsp+A8h] [rbp-58h]
  struct _DEVICE_OBJECT *v155; // [rsp+B0h] [rbp-50h]
  __int128 v156; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v157; // [rsp+D0h] [rbp-30h]
  __int128 v158; // [rsp+E0h] [rbp-20h]
  __m128i v159; // [rsp+F0h] [rbp-10h]
  __int64 v160; // [rsp+100h] [rbp+0h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+110h] [rbp+10h] BYREF
  struct _HIDP_VALUE_CAPS v162[2]; // [rsp+160h] [rbp+60h] BYREF

  v7 = a3;
  v9 = a1;
  PreparsedData = a3;
  v150 = a1;
  v155 = a5;
  v144 = (struct _FILE_OBJECT *)a6;
  v145 = a7;
  ValueCapsLength[0] = 0;
  v154 = a4;
  v152 = -1;
  v153 = -1;
  memset(v162, 0, sizeof(v162));
  v142 = 0;
  v143 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v11 = Win32AllocPoolZInitImpl(256LL, 0x510uLL, 0x63707352u);
  v12 = v11;
  if ( !v11 )
    return 3221225628LL;
  *(_DWORD *)(v11 + 776) = 1;
  v14 = (_QWORD *)(v11 + 920);
  v14[1] = v14;
  *v14 = v14;
  v15 = RIMGetProductString(v12, a5, a6, a2);
  v16 = &WPP_GLOBAL_Control;
  v17 = &WPP_RECORDER_INITIALIZED;
  if ( v15 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (LODWORD(v16) = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(
                           (_DWORD)WPP_GLOBAL_Control,
                           (_DWORD)v16,
                           (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 19368),
        3,
        1,
        14,
        (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
    }
    if ( (unsigned int)dword_1402A9E78 > 5 && tlgKeywordOn((__int64)&dword_1402A9E78, 0x400000000000LL) )
    {
      v23 = *(unsigned int *)(a2 + 48);
      v149 = L"Failed to retrieve productString";
      v151 = *(const WCHAR **)(a2 + 200);
      *(_QWORD *)&v147 = RimDeviceTypeToRimInputTypeString(a2, v23);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v24,
        (__int64)&unk_140285562,
        v25,
        v26,
        (const WCHAR **)&v147,
        &v151,
        &v149);
    }
    v7 = PreparsedData;
    v9 = v150;
  }
  if ( (int)RIMGetDeviceLocationInfo(a5, a2 + 2112, v17) < 0 )
  {
    LODWORD(v149) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 354LL);
  }
  Usage = a4->Usage;
  v147 = *(_OWORD *)(v12 + 376);
  v28 = RIMIsDeviceExcluded(Usage, &v147);
  v29 = 4LL;
  if ( !v28 )
  {
    v30 = *(_DWORD *)(v9 + 84);
    v31 = 1;
    if ( (v30 & 4) != 0 )
    {
      v32 = a4->Usage;
      if ( (_WORD)v32 == 2 )
      {
        *(_DWORD *)(v12 + 24) = 5;
        rimSetupPalmTelemetry(v9);
        if ( (int)RIMInitializeDeadzone() < 0 )
        {
          v35 = (int)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v36 = 0;
          }
          v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v38 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v33, v34);
            LOBYTE(v39) = v37;
            LOBYTE(v40) = v36;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v40,
              v39,
              *(_QWORD *)(v38 + 19368),
              3,
              1,
              15,
              (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
          }
          *(_DWORD *)(W32GetUserSessionState(v35, v33, v34) + 244) = 1;
        }
        goto LABEL_52;
      }
      if ( (_WORD)v32 == 1 )
      {
        *(_DWORD *)(v12 + 24) = 6;
        v31 = !RIMIsRunningOnDesktop(v32, 1, 2);
        goto LABEL_51;
      }
      v29 = 4LL;
    }
    if ( (v30 & 0x18) == 0 || a4->Usage != 4 && (v29 = 5LL, a4->Usage != 5) )
    {
      if ( (v30 & 0x20) != 0 && (*(_DWORD *)(a2 + 168) & 0x10000) != 0 )
        goto LABEL_52;
LABEL_64:
      v43 = -1073741808;
LABEL_65:
      if ( *(_QWORD *)(v12 + 792) )
      {
        v143 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 901LL);
      }
      RIMFreePointerDevice(v150, v12);
      return (unsigned int)v43;
    }
    *(_DWORD *)(v12 + 24) = 1;
    v41 = RIMAssignTouchType(v12, v7, v29);
    v42 = 0;
    v43 = v41;
    v44 = 0;
    if ( v41 == -1073741668 )
      goto LABEL_167;
    if ( a4->Usage == 5 )
    {
      v143 = *(_DWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 24) = 7;
    }
    v45 = v150;
    v46 = *(_DWORD *)(v150 + 84);
    if ( (v46 & 4) != 0 && (unsigned int)RIMIsPenPointerDevice(v12) )
      v31 = v42;
    if ( (v46 & 8) != 0 && *(_DWORD *)(v12 + 24) == 7 )
      v31 = v42;
    if ( ((v46 & 0x10) == 0 || !(unsigned int)RIMIsTouchPointerDevice(v12)) && v31 )
    {
LABEL_51:
      if ( !v31 )
        goto LABEL_52;
      goto LABEL_64;
    }
    v43 = RIMGetMaxCountFeatureDetails(a2, v45, v12, PreparsedData, a4, v155, v144);
    if ( v43 == -1073741668 )
    {
      if ( (unsigned int)dword_1402A9E78 > 5 && tlgKeywordOn((__int64)&dword_1402A9E78, 0x400000000000LL) )
      {
        v47 = *(unsigned int *)(a2 + 48);
        *(_QWORD *)&v147 = L"Failed to get max count feature details";
        v145 = *(const WCHAR **)(a2 + 200);
        v144 = (struct _FILE_OBJECT *)RimDeviceTypeToRimInputTypeString(a2, v47);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v48,
          (__int64)&unk_140285646,
          v49,
          v50,
          (const WCHAR **)&v144,
          &v145,
          (const WCHAR **)&v147);
      }
      goto LABEL_65;
    }
  }
LABEL_52:
  v51 = PreparsedData;
  ValueCapsLength[0] = 1;
  if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x56u, &ValueCaps, ValueCapsLength, PreparsedData) >= 0 )
  {
    if ( ValueCaps.LogicalMin >= ValueCaps.LogicalMax || ValueCaps.LogicalMin < 0 || ValueCaps.LogicalMax < 0xFFFF )
    {
      if ( (unsigned int)dword_1402A9E78 > 5 && tlgKeywordOn((__int64)&dword_1402A9E78, 0x400000000000LL) )
      {
        v57 = *(unsigned int *)(a2 + 48);
        *(_QWORD *)&v147 = L"Bad ScanTime minimum";
        v145 = *(const WCHAR **)(a2 + 200);
        v144 = (struct _FILE_OBJECT *)RimDeviceTypeToRimInputTypeString(a2, v57);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v58,
          (__int64)&unk_1402855FA,
          v59,
          v60,
          (const WCHAR **)&v144,
          &v145,
          (const WCHAR **)&v147);
      }
      v43 = -1073741668;
      goto LABEL_65;
    }
    *(_DWORD *)(v12 + 368) |= 0x80u;
    *(_DWORD *)(v12 + 896) = ValueCaps.LogicalMax;
  }
  ValueCapsLength[0] = 0;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v12 + 784), 0, 0LL, ValueCapsLength, v51);
  v43 = SpecificValueCaps;
  if ( !SpecificValueCaps || SpecificValueCaps == -1072627705 )
  {
    v61 = (_DWORD *)(v12 + 32);
    v62 = 6LL;
    do
    {
      *v61 = -1;
      v61 += 4;
      --v62;
    }
    while ( v62 );
    v44 = 0;
    if ( (int)RIMCmAllocPointerDeviceContacts(v12, 0x78707352u) < 0 )
      goto LABEL_167;
    if ( (*(_DWORD *)(v12 + 368) & 2) != 0 )
    {
      v63 = PreparsedData;
      if ( *(_WORD *)(*(_QWORD *)(v12 + 768) + 8LL) )
      {
        v142 = 2;
        v43 = HidP_GetSpecificValueCaps(
                HidP_Input,
                0,
                *(_WORD *)(*(_QWORD *)(v12 + 768) + 8LL),
                0,
                v162,
                &v142,
                PreparsedData);
        if ( v43 < 0 )
        {
          v43 = -1073741668;
          goto LABEL_65;
        }
      }
    }
    else
    {
      v63 = PreparsedData;
    }
    LODWORD(v149) = ValueCapsLength[0] + v142;
    v64 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * (unsigned int)v149, 0x78707352u);
    v44 = 0;
    if ( !v64 )
      goto LABEL_167;
    v43 = HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v12 + 784), 0, v64, ValueCapsLength, v63);
    if ( v43 < 0 )
      goto LABEL_166;
    if ( (*(_DWORD *)(v12 + 368) & 2) == 0
      && !(unsigned int)RIMGetPropertyCount(v12, *(unsigned __int16 *)(v12 + 784), ValueCapsLength[0], v63) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v68 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
        || (v70 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v70 = 0;
      }
      v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v70 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v72 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v68, v69);
        LOBYTE(v73) = v71;
        LOBYTE(v74) = v70;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v74,
          v73,
          *(_QWORD *)(v72 + 19368),
          3,
          1,
          16,
          (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
      }
    }
    v75 = (unsigned int)v149;
    if ( v142 )
    {
      v76 = ValueCapsLength[0];
      v77 = v162;
      v67 = 0LL;
      do
      {
        if ( (unsigned int)v76 >= v75 )
          break;
        v78 = v76;
        v67 = (unsigned int)(v67 + 1);
        v76 = (unsigned int)(v76 + 1);
        *(_OWORD *)&v64[v78].UsagePage = *(_OWORD *)&v77->UsagePage;
        *(_OWORD *)&v64[v78].HasNull = *(_OWORD *)&v77->HasNull;
        *(_OWORD *)&v64[v78].UnitsExp = *(_OWORD *)&v77->UnitsExp;
        *(_OWORD *)&v64[v78].PhysicalMin = *(_OWORD *)&v77->PhysicalMin;
        v79 = *(_QWORD *)&v77->NotRange.DesignatorIndex;
        ++v77;
        *(_QWORD *)&v64[v78].NotRange.DesignatorIndex = v79;
      }
      while ( (unsigned int)v67 < 2 );
    }
    v65 = 0LL;
    v80 = 0;
    LODWORD(v151) = 0;
    while ( 1 )
    {
      v66 = 4LL;
      if ( v80 >= v75 || (unsigned int)v65 >= 6 )
        break;
      if ( *(_DWORD *)(v12 + 24) == 4 && !v64[v80].HasNull )
      {
        v43 = -1073741668;
        break;
      }
      v81 = v154->Usage;
      v146 = v81;
      if ( v81 == 2 )
      {
        v81 = 1;
        v146 = 1;
      }
      if ( (unsigned int)RIMIsEssentialUsage(v64[v80].UsagePage, v64[v80].Range.UsageMin, v81) )
      {
        v82 = (unsigned int)v151;
        v83 = 60LL * (unsigned int)v151;
        v84 = 16LL * (unsigned int)v151;
        *(_WORD *)(v83 + v12 + 408) = v64[v80].UsagePage;
        *(_WORD *)(60 * (v82 + 7) + v12) = v64[v80].Range.UsageMin;
        *(_DWORD *)(v83 + v12 + 412) = v64[v80].ReportID;
        *(_WORD *)(v83 + v12 + 418) = v64[v80].LinkUsagePage;
        *(_DWORD *)(v83 + v12 + 424) = v64[v80].HasNull;
        *(_DWORD *)(v83 + v12 + 440) = v64[v80].LogicalMin;
        *(_DWORD *)(v83 + v12 + 444) = v64[v80].LogicalMax;
        *(_DWORD *)(v83 + v12 + 448) = v64[v80].PhysicalMin;
        *(_DWORD *)(v83 + v12 + 452) = v64[v80].PhysicalMax;
        *(_WORD *)(v83 + v12 + 464) = v64[v80].BitSize;
        *(_DWORD *)(v12 + 16 * (v82 + 2)) = v82;
        *(_WORD *)(v84 + v12 + 28) = v64[v80].UsagePage;
        *(_WORD *)(v84 + v12 + 30) = v64[v80].Range.UsageMin;
        v85 = *(_OWORD *)&v64[v80].HasNull;
        LODWORD(v83) = v64[v80].Range.UsageMin;
        v156 = *(_OWORD *)&v64[v80].UsagePage;
        v86 = *(_OWORD *)&v64[v80].UnitsExp;
        v157 = v85;
        v87 = *(__m128i *)&v64[v80].PhysicalMin;
        v158 = v86;
        v160 = *(_QWORD *)&v64[v80].NotRange.DesignatorIndex;
        v159 = v87;
        RIMRetrieveNormalizationRange((unsigned __int16)v156, v83, v146, (unsigned int)&v156, v12 + v84 + 36);
        LODWORD(v151) = (_DWORD)v151 + 1;
        if ( v64[v80].Range.UsageMin == 48 && v64[v80].UsagePage == 1 )
        {
          v88 = *(__m128i *)&v64[v80].PhysicalMin;
          v152 = v80;
          v89 = *(_OWORD *)&v64[v80].UsagePage;
          v90 = *(_OWORD *)&v64[v80].HasNull;
          v91 = *(_OWORD *)&v64[v80].UnitsExp;
          v160 = *(_QWORD *)&v64[v80].NotRange.DesignatorIndex;
          v156 = v89;
          v157 = v90;
          v158 = v91;
          v159 = v88;
          *(_DWORD *)(v12 + 148) = RIMComputeSpecificHighMetricValue(
                                     (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v88, 4)) - _mm_cvtsi128_si32(v88)),
                                     &v156)
                                 + 1;
          *(_DWORD *)(v12 + 124) = v64[v80].LogicalMin;
          *(_DWORD *)(v12 + 132) = v64[v80].LogicalMax + 1;
        }
        if ( v64[v80].Range.UsageMin == 49 && v64[v80].UsagePage == 1 )
        {
          v92 = *(__m128i *)&v64[v80].PhysicalMin;
          v153 = v80;
          v93 = *(_OWORD *)&v64[v80].UsagePage;
          v94 = *(_OWORD *)&v64[v80].HasNull;
          v95 = *(_OWORD *)&v64[v80].UnitsExp;
          v160 = *(_QWORD *)&v64[v80].NotRange.DesignatorIndex;
          v156 = v93;
          v157 = v94;
          v158 = v95;
          v159 = v92;
          *(_DWORD *)(v12 + 152) = RIMComputeSpecificHighMetricValue(
                                     (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v92, 4)) - _mm_cvtsi128_si32(v92)),
                                     &v156)
                                 + 1;
          *(_DWORD *)(v12 + 128) = v64[v80].LogicalMin;
          *(_DWORD *)(v12 + 136) = v64[v80].LogicalMax + 1;
        }
        RIMCheckPressureUsageStatus(v150, v12, v64[v80].UsagePage, v64[v80].Range.UsageMin, v146);
      }
      v65 = (unsigned int)v151;
      ++v80;
      v75 = (unsigned int)v149;
    }
    *(_DWORD *)(v12 + 780) = v65;
    v44 = 0;
    if ( v43 < 0 )
    {
LABEL_166:
      GreDeleteFastMutex((char *)v64, v65, v66, v67);
      goto LABEL_167;
    }
    if ( v152 == -1 || (v65 = v153, v153 == -1) )
    {
      if ( (unsigned int)dword_1402A9E78 <= 5 || !tlgKeywordOn((__int64)&dword_1402A9E78, 0x400000000000LL) )
        goto LABEL_162;
      v124 = *(unsigned int *)(a2 + 48);
      *(_QWORD *)&v147 = L"coordinate usage missing";
      v145 = *(const WCHAR **)(a2 + 200);
      v119 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, v124);
      v123 = &unk_140285516;
    }
    else
    {
      if ( v64[v152].LogicalMax != v64[v152].LogicalMin && v64[v153].LogicalMax != v64[v153].LogicalMin )
      {
        v96 = *(_DWORD *)(v12 + 24);
        v97 = v154;
        if ( v96 == 7 )
        {
          v116 = *(_QWORD *)v145;
          DWORD2(v147) = *((_DWORD *)v145 + 2);
          *(_QWORD *)&v147 = v116;
          if ( (int)RIMApiSetValidateDeviceSignature(v155, v144, PreparsedData, v154, v12, (__int64 *)&v147) < 0 )
          {
            v43 = -1073741668;
            if ( (unsigned int)dword_1402A9E78 <= 5 || !tlgKeywordOn((__int64)&dword_1402A9E78, 0x400000000000LL) )
              goto LABEL_155;
            v117 = *(unsigned int *)(a2 + 48);
            *(_QWORD *)&v147 = L"Failed to validate device signature";
            v145 = *(const WCHAR **)(a2 + 200);
            v104 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, v117);
            v108 = &unk_14028547E;
LABEL_154:
            v144 = (struct _FILE_OBJECT *)v104;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
              v105,
              (__int64)v108,
              v106,
              v107,
              (const WCHAR **)&v144,
              &v145,
              (const WCHAR **)&v147);
LABEL_155:
            v44 = 0;
            goto LABEL_166;
          }
        }
        else if ( v96 != 6 && v154->Usage == 4 )
        {
          v98 = *(_QWORD *)v145;
          DWORD2(v147) = *((_DWORD *)v145 + 2);
          *(_QWORD *)&v147 = v98;
          if ( (int)RIMApiSetValidateDeviceSignature(v155, v144, PreparsedData, v154, v12, (__int64 *)&v147) < 0 )
          {
            v43 = -1073741668;
            if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
            {
              v65 = 1LL;
              if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
                LOBYTE(v44) = 1;
            }
            v99 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v100 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v65, v66);
              LOBYTE(v101) = v99;
              LOBYTE(v102) = v44;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v102,
                v101,
                *(_QWORD *)(v100 + 19368),
                3,
                1,
                17,
                (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
            }
            if ( (unsigned int)dword_1402A9E78 <= 5 || !tlgKeywordOn((__int64)&dword_1402A9E78, 0x400000000000LL) )
              goto LABEL_155;
            v103 = *(unsigned int *)(a2 + 48);
            *(_QWORD *)&v147 = L"Failed to validate device signature";
            v145 = *(const WCHAR **)(a2 + 200);
            v104 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, v103);
            v108 = &unk_140285432;
            goto LABEL_154;
          }
          v109 = *(_DWORD *)(v12 + 368);
          if ( (v109 & 0x100) == 0 )
            *(_DWORD *)(v12 + 368) = v109 & 0xFFFFFF7F;
        }
        RIMPopulateExtendedPointerDeviceProperties(a2, v12, v66);
        v110 = PreparsedData;
        v111 = RIMGetDeviceButtons(v150, v12, PreparsedData, v97);
        v65 = 0LL;
        v43 = v111;
        if ( v111 >= 0 )
        {
          if ( *(_DWORD *)(v12 + 24) != 7 )
          {
            v147 = *(_OWORD *)(a2 + 192);
            ApiSetRetrieveCalibrationData(v12, &v147);
          }
        }
        else
        {
          if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
          {
            v66 = 1LL;
            if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
              LOBYTE(v44) = 1;
          }
          v112 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v113 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v66);
            LOBYTE(v114) = v112;
            LOBYTE(v115) = v44;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v115,
              v114,
              *(_QWORD *)(v113 + 19368),
              3,
              1,
              18,
              (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
          }
          v110 = PreparsedData;
        }
        v44 = 1;
        if ( v97->UsagePage == 13 )
        {
          v66 = 2LL;
          if ( v97->Usage == 2
            && (unsigned int)RIMIsInputUsagePresent(v110)
            && (unsigned int)RIMIsInputUsagePresent(v110) )
          {
            *(_DWORD *)(v12 + 368) |= 0x8000u;
          }
        }
        goto LABEL_166;
      }
      if ( (unsigned int)dword_1402A9E78 <= 5 || !tlgKeywordOn((__int64)&dword_1402A9E78, 0x400000000000LL) )
      {
LABEL_162:
        v43 = -1073741668;
        goto LABEL_166;
      }
      v118 = *(unsigned int *)(a2 + 48);
      *(_QWORD *)&v147 = L"coordinate range invalid";
      v145 = *(const WCHAR **)(a2 + 200);
      v119 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, v118);
      v123 = &unk_1402854CA;
    }
    v144 = (struct _FILE_OBJECT *)v119;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v120,
      (__int64)v123,
      v121,
      v122,
      (const WCHAR **)&v144,
      &v145,
      (const WCHAR **)&v147);
    goto LABEL_162;
  }
  v44 = 0;
  if ( (unsigned int)dword_1402A9E78 > 5 && tlgKeywordOn((__int64)&dword_1402A9E78, 0x400000000000LL) )
  {
    v53 = *(unsigned int *)(a2 + 48);
    *(_QWORD *)&v147 = L"Coordinate usage missing";
    v145 = *(const WCHAR **)(a2 + 200);
    v144 = (struct _FILE_OBJECT *)RimDeviceTypeToRimInputTypeString(a2, v53);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v54,
      (__int64)&unk_1402855AE,
      v55,
      v56,
      (const WCHAR **)&v144,
      &v145,
      (const WCHAR **)&v147);
  }
LABEL_167:
  if ( v43 < 0 )
    goto LABEL_65;
  if ( *(_DWORD *)(v12 + 24) == 7 )
  {
    v43 = RIMValidatePTPProperties(v143, v12);
    if ( v43 < 0 )
      goto LABEL_65;
  }
  v125 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 184) |= 0x80u;
  *(_DWORD *)(a2 + 80) = v125 ^ (v125 ^ v44) & 1;
  if ( (unsigned int)RIMIsTouchPointerDevice(v12) )
  {
    v127 = v150;
    *(_DWORD *)(v150 + 720) += *(_DWORD *)(v12 + 776);
    *(_DWORD *)(v12 + 368) |= 0x400u;
    if ( *(_DWORD *)(v127 + 720) > 0xA00u )
    {
      v143 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 882LL);
    }
  }
  *(_DWORD *)(v12 + 800) = 100;
  v128 = ((unsigned __int64)(100 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v129 = (_QWORD *)(v12 + 920);
  *(_QWORD *)(v12 + 808) = (v128 + ((unsigned __int64)(100 * gliQpcFreq.QuadPart - v128) >> 1)) >> 9;
  v130 = v150;
  *(_QWORD *)(a2 + 456) = v12;
  v131 = v130 + 432;
  *(_QWORD *)(v12 + 16) = a2;
  v132 = *(_QWORD **)(v131 + 8);
  if ( *v132 != v131 )
    __fastfail(3u);
  *v129 = v131;
  *(_QWORD *)(v12 + 928) = v132;
  *v132 = v129;
  *(_QWORD *)(v131 + 8) = v129;
  v133 = v155;
  *(_QWORD *)(v12 + 792) = -1LL;
  if ( !(unsigned int)RIMGetDeviceParent(v133, a2, v126) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v136 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v136 = 0;
    }
    v137 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v136 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v138 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v134, v135);
      LOBYTE(v139) = v137;
      LOBYTE(v140) = v136;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v140,
        v139,
        *(_QWORD *)(v138 + 19368),
        3,
        1,
        19,
        (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
    }
  }
  return (unsigned int)v43;
}
