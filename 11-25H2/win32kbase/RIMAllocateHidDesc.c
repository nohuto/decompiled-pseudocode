/*
 * XREFs of RIMAllocateHidDesc @ 0x1401DE298
 * Callers:
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400B2938 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400B2DEC (RIMConfigurePointerDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F14BC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     InkProcessorIsInkDevice @ 0x14013F548 (InkProcessorIsInkDevice.c)
 *     RIMIsInteractiveCtrl @ 0x140156990 (RIMIsInteractiveCtrl.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x140157130 (EtwTracePointerDeviceArrivalStop.c)
 *     EtwTracePointerDeviceArrivalStart @ 0x140157BC0 (EtwTracePointerDeviceArrivalStart.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x14015DB74 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     rimIsHidInputDevice @ 0x14017F8BC (rimIsHidInputDevice.c)
 *     RIMGetTouhpadClickForceSensitivityCaps @ 0x14019CD14 (RIMGetTouhpadClickForceSensitivityCaps.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline @ 0x1401B4F18 (Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     RIMFreeHidDesc @ 0x1401E0854 (RIMFreeHidDesc.c)
 *     RIMGetButtonsSupported @ 0x1401E0990 (RIMGetButtonsSupported.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  bool v7; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // r14
  bool v15; // r15
  __int16 v16; // bx
  unsigned __int16 v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  char v24; // di
  bool v25; // r14
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rcx
  void *v31; // rdx
  bool v32; // al
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  char v36; // r15
  bool v37; // r12
  __int16 v38; // bx
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // xmm0_8
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  void *v48; // rcx
  char v49; // al
  unsigned __int16 v50; // bx
  __int16 v51; // di
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  void *v55; // rcx
  char v56; // al
  __int16 v57; // bx
  unsigned __int16 v58; // di
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  __int64 v62; // rdx
  bool v63; // r14
  int v64; // eax
  int v65; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  int v70; // eax
  __int64 v71; // rcx
  int (__fastcall *v72)(__int64, __int64, _QWORD); // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  unsigned int v75; // eax
  char v76; // r15
  bool v77; // bl
  __int64 v78; // rax
  int v79; // r8d
  int v80; // edx
  bool v82; // bl
  __int64 v83; // rax
  int v84; // r8d
  int v85; // edx
  bool v86; // [rsp+58h] [rbp-51h]
  unsigned __int16 v87; // [rsp+58h] [rbp-51h]
  bool v88; // [rsp+58h] [rbp-51h]
  bool v89; // [rsp+58h] [rbp-51h]
  bool v90; // [rsp+5Ch] [rbp-4Dh]
  __int64 v91; // [rsp+68h] [rbp-41h] BYREF
  int v92; // [rsp+70h] [rbp-39h]
  _OWORD v93[7]; // [rsp+78h] [rbp-31h] BYREF
  char PreparsedDataa; // [rsp+108h] [rbp+5Fh]
  char PreparsedDatab; // [rsp+108h] [rbp+5Fh]
  unsigned __int16 PreparsedDatac; // [rsp+108h] [rbp+5Fh]

  v7 = 0;
  if ( !a3 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
      v7 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19336),
        3,
        1,
        54,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
    }
    return 0LL;
  }
  if ( !a4[2] && (*(_DWORD *)(a2 + 168) & 0x10000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *a4;
      v17 = a4[1];
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v19) = v15;
      LOBYTE(v20) = v14;
      WPP_RECORDER_AND_TRACE_SF_dD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 19336),
        3,
        1,
        55,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
        v17,
        v16);
    }
    return 0LL;
  }
  v21 = Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x44687352u);
  v23 = v21;
  if ( !v21 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = *(_QWORD *)(a2 + 200);
      v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
      LOBYTE(v28) = v25;
      LOBYTE(v29) = v24;
      WPP_RECORDER_AND_TRACE_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 19336),
        3,
        1,
        56,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
        v26);
    }
    return 0LL;
  }
  *(_OWORD *)(v21 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v21 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v21 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v21 + 88) = *((_OWORD *)a4 + 3);
  if ( (unsigned int)rimIsHidInputDevice(a2, v21) )
  {
    v91 = Win32AllocPoolZInitImpl(64LL, 10LL * *(unsigned __int16 *)(v23 + 44), 0x70707352u);
    *(_QWORD *)(v23 + 24) = v91;
    v31 = WPP_GLOBAL_Control;
    v32 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v30 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v30 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
        v32 = 1;
    }
    v90 = v32;
    v86 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      v33 = W32GetUserSessionState(v30, WPP_GLOBAL_Control);
      LOBYTE(v34) = v86;
      LOBYTE(v35) = v90;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v34,
        *(_QWORD *)(v33 + 19336),
        4,
        1,
        57,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
        v91);
    }
    if ( !*(_QWORD *)(v23 + 24) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v36 = 0;
      }
      v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v38 = *(_WORD *)(v23 + 44);
        v39 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
        LOBYTE(v40) = v37;
        LOBYTE(v41) = v36;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v41,
          v40,
          *(_QWORD *)(v39 + 19336),
          3,
          1,
          58,
          (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
          v38);
      }
      RIMFreeHidDesc((PVOID)v23);
      return 0LL;
    }
  }
  *(_QWORD *)(v23 + 16) = a3;
  *(_QWORD *)(v23 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(v23 + 112) = *(_DWORD *)(a5 + 8);
  v87 = a4[1];
  if ( v87 == 13
    && ((v42 = *a4, (unsigned __int16)(v42 - 1) <= 1u) || (LOWORD(v42) = v42 - 4, (unsigned __int16)v42 <= 1u)) )
  {
    EtwTracePointerDeviceArrivalStart(v42);
    v43 = *(_QWORD *)(v23 + 104);
    v92 = *(_DWORD *)(v23 + 112);
    v91 = v43;
    v44 = RIMCreatePointerDeviceInfo(a1, a2, a3, a4, a6, a7, &v91);
    v46 = *a4;
    v47 = 0LL;
    if ( v44 >= 0 )
    {
      LOWORD(v46) = v46 - 4;
      if ( (unsigned __int16)v46 <= 1u )
      {
        RIMConfigurePointerDevice(a1, a2, v23);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(a2 + 456) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1282);
          RIMApiSetSetUserPTPEnabledPreference(a2, v23, a1);
          v64 = RIMGetDeviceFeedbackGlobalIntensityCaps(a3, 0LL);
          *(_DWORD *)(a2 + 184) = (v64 << 10) ^ (*(_DWORD *)(a2 + 184) ^ (v64 << 10)) & 0xFFFFFBFF;
          v65 = RIMGetTouhpadClickForceSensitivityCaps(a3, 0LL);
          *(_DWORD *)(a2 + 184) = (v65 << 11) ^ (*(_DWORD *)(a2 + 184) ^ (v65 << 11)) & 0xFFFFF7FF;
          IsEnabledDeviceUsageNoInline = Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline();
          v46 = 0LL;
          if ( IsEnabledDeviceUsageNoInline )
          {
            LODWORD(v91) = 0;
            RIMGetButtonsSupported(a3);
            v46 = *(_DWORD *)(a2 + 184) & 0xFFFF8FFF | ((v91 & 1) << 12);
            *(_DWORD *)(a2 + 184) = v46;
          }
        }
      }
    }
    else if ( (_WORD)v46 != 5 || v44 == -1073741808 )
    {
LABEL_49:
      v48 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v49 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v49 = v47;
      }
      PreparsedDataa = v49;
      v88 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v50 = a4[1];
        v51 = *a4;
        LOBYTE(v48) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v52 = W32GetUserSessionState(v48, v45);
        LOBYTE(v53) = v88;
        LOBYTE(v54) = PreparsedDataa;
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v54,
          v53,
          *(_QWORD *)(v52 + 19336),
          3,
          1,
          60,
          (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
          v51,
          v50);
        v47 = 0LL;
      }
      v55 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v56 = v47;
      }
      PreparsedDatab = v56;
      v89 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v57 = *a4;
        v58 = a4[1];
        LOBYTE(v55) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v59 = W32GetUserSessionState(v55, v45);
        LOBYTE(v60) = v89;
        LOBYTE(v61) = PreparsedDatab;
        WPP_RECORDER_AND_TRACE_SF_dD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v61,
          v60,
          *(_QWORD *)(v59 + 19336),
          4,
          1,
          61,
          (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
          v58,
          v57);
        v47 = 0LL;
      }
      *(_QWORD *)(v23 + 16) = v47;
      *(_QWORD *)(a2 + 440) = v47;
      RIMFreeHidDesc((PVOID)v23);
      v63 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v82 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v63 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v83 = W32GetUserSessionState(WPP_GLOBAL_Control, v62);
        LOBYTE(v84) = v82;
        LOBYTE(v85) = v63;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v85,
          v84,
          *(_QWORD *)(v83 + 19336),
          4,
          1,
          62,
          (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
          0);
      }
      return 0LL;
    }
    EtwTracePointerDeviceArrivalStop(v46);
    LOBYTE(v47) = 0;
  }
  else
  {
    v67 = *((_OWORD *)a4 + 1);
    v93[0] = *(_OWORD *)a4;
    v68 = *((_OWORD *)a4 + 2);
    v93[1] = v67;
    v69 = *((_OWORD *)a4 + 3);
    v93[2] = v68;
    v93[3] = v69;
    LOBYTE(v70) = RIMIsInteractiveCtrl(v93);
    if ( v70 )
    {
      *(_DWORD *)(a2 + 184) |= 0x100u;
    }
    else
    {
      PreparsedDatac = *a4;
      v72 = *(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v71, v45) + 48)
                                                           + 4688LL);
      if ( v72
        && v72(v74, v73, 0LL) >= 0
        && (v75 = (unsigned int)InkProcessorIsInkDevice(v87, PreparsedDatac, a5 + 6), LOBYTE(v47) = 0, v75) )
      {
        *(_DWORD *)(a2 + 184) |= 0x200u;
      }
      else if ( ((unsigned int)RimDeviceTypeToRimInputType(a2, *(_DWORD *)(a2 + 48)) & *(_DWORD *)(a1 + 84)) == 0
             || *(_DWORD *)(a1 + 88) != (_DWORD)v47 && (*(_DWORD *)(a2 + 168) & 0x10000) == 0 )
      {
        goto LABEL_49;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v76 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v76 = v47;
  }
  v77 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v76 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v78 = W32GetUserSessionState(WPP_GLOBAL_Control, v45);
    LOBYTE(v79) = v77;
    LOBYTE(v80) = v76;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v80,
      v79,
      *(_QWORD *)(v78 + 19336),
      4,
      1,
      59,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      v23);
  }
  return v23;
}
