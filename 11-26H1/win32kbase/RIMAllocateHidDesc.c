/*
 * XREFs of RIMAllocateHidDesc @ 0x1401AE930
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x140092208 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400F074C (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMConfigurePointerDevice @ 0x1400F0E9C (RIMConfigurePointerDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RIMFreeHidDesc @ 0x1401323EC (RIMFreeHidDesc.c)
 *     rimIsHidInputDevice @ 0x1401426DC (rimIsHidInputDevice.c)
 *     InkProcessorIsInkDevice @ 0x140174748 (InkProcessorIsInkDevice.c)
 *     RIMIsInteractiveCtrl @ 0x140190358 (RIMIsInteractiveCtrl.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x140194640 (EtwTracePointerDeviceArrivalStop.c)
 *     EtwTracePointerDeviceArrivalStart @ 0x140196300 (EtwTracePointerDeviceArrivalStart.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1401A0814 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     RIMGetButtonsSupported @ 0x1401AF1FC (RIMGetButtonsSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMGetTouhpadClickForceSensitivityCaps @ 0x1401B8AE4 (RIMGetTouhpadClickForceSensitivityCaps.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        unsigned __int16 *a4,
        __int64 a5,
        struct _DEVICE_OBJECT *a6,
        const WCHAR *a7)
{
  bool v7; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // r14
  bool v15; // r12
  __int16 v16; // bx
  unsigned __int16 v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // r14
  char v25; // di
  char v26; // r14
  const wchar_t *v27; // rbx
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // r9
  CTouchProcessor *v31; // rdx
  char v32; // al
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  char v37; // r15
  bool v38; // r12
  __int16 v39; // bx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // xmm0_8
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // ecx
  char v51; // al
  unsigned __int16 v52; // bx
  __int16 v53; // di
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  int v57; // ecx
  char v58; // al
  __int16 v59; // bx
  unsigned __int16 v60; // di
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  int v64; // edx
  int v65; // r8d
  bool v66; // r14
  int v67; // eax
  int v68; // eax
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  int v72; // eax
  __int64 v73; // rcx
  int (__fastcall *v74)(__int64, __int64, _QWORD); // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  unsigned int v77; // eax
  char v78; // r15
  bool v79; // bl
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  bool v84; // bl
  __int64 v85; // rax
  int v86; // r8d
  int v87; // edx
  bool v88; // [rsp+58h] [rbp-51h]
  unsigned __int16 v89; // [rsp+58h] [rbp-51h]
  bool v90; // [rsp+58h] [rbp-51h]
  bool v91; // [rsp+58h] [rbp-51h]
  char v92; // [rsp+5Ch] [rbp-4Dh]
  __int64 v93; // [rsp+68h] [rbp-41h] BYREF
  int v94; // [rsp+70h] [rbp-39h]
  _OWORD v95[7]; // [rsp+78h] [rbp-31h] BYREF
  char PreparsedDataa; // [rsp+108h] [rbp+5Fh]
  char PreparsedDatab; // [rsp+108h] [rbp+5Fh]
  unsigned __int16 PreparsedDatac; // [rsp+108h] [rbp+5Fh]

  v7 = 0;
  if ( !a3 )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
      v7 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, 0);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19368),
        3,
        1,
        54,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
    }
    return 0LL;
  }
  if ( !a4[2] && (*(_DWORD *)(a2 + 168) & 0x10000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
      v18 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, (_DWORD)a3);
      LOBYTE(v19) = v15;
      LOBYTE(v20) = v14;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 19368),
        3,
        1,
        55,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v17,
        v16);
    }
    return 0LL;
  }
  v21 = Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x44687352u);
  v24 = v21;
  if ( !v21 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v25 = 0;
    }
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = *(const wchar_t **)(a2 + 200);
      v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23);
      WPP_RECORDER_AND_TRACE_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v26,
        *(_QWORD *)(v28 + 19368),
        3u,
        1u,
        0x38u,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v27);
    }
    return 0LL;
  }
  *(_OWORD *)(v21 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v21 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v21 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v21 + 88) = *((_OWORD *)a4 + 3);
  if ( (unsigned int)rimIsHidInputDevice(a2, v21) )
  {
    v93 = Win32AllocPoolZInitImpl(64LL, 10LL * *(unsigned __int16 *)(v24 + 44), 0x70707352u);
    *(_QWORD *)(v24 + 24) = v93;
    v31 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v29 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v29 & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v33 = 0LL;
      v32 = 0;
    }
    else
    {
      v32 = 1;
      v33 = 0LL;
    }
    v92 = v32;
    v88 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      v34 = W32GetUserSessionState(v29, (_DWORD)WPP_GLOBAL_Control, 0);
      LOBYTE(v35) = v88;
      LOBYTE(v36) = v92;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 19368),
        4,
        1,
        57,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v93);
      v33 = 0LL;
    }
    if ( !*(_QWORD *)(v24 + 24) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v37 = 0;
      }
      v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v39 = *(_WORD *)(v24 + 44);
        v40 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v31, 0);
        LOBYTE(v41) = v38;
        LOBYTE(v42) = v37;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v42,
          v41,
          *(_QWORD *)(v40 + 19368),
          3,
          1,
          58,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          v39);
      }
      RIMFreeHidDesc((_WORD *)v24, (__int64)v31, v33, v30);
      return 0LL;
    }
  }
  *(_QWORD *)(v24 + 16) = a3;
  *(_QWORD *)(v24 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(v24 + 112) = *(_DWORD *)(a5 + 8);
  v89 = a4[1];
  if ( v89 == 13 && ((v43 = *a4, (_WORD)v43 == 2) || (unsigned __int16)(v43 - 4) <= 1u || (_WORD)v43 == 1) )
  {
    EtwTracePointerDeviceArrivalStart(v43);
    v44 = *(_QWORD *)(v24 + 104);
    v94 = *(_DWORD *)(v24 + 112);
    v93 = v44;
    v45 = RIMCreatePointerDeviceInfo(a1, a2, a3, (struct _HIDP_CAPS *)a4, a6, a7, (const WCHAR *)&v93);
    v48 = *a4;
    v49 = 0LL;
    if ( v45 >= 0 )
    {
      LOWORD(v48) = v48 - 4;
      if ( (unsigned __int16)v48 <= 1u )
      {
        RIMConfigurePointerDevice(a1, a2, v24);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(a2 + 456) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1282LL);
          RIMApiSetSetUserPTPEnabledPreference(a2, v24, a1);
          v67 = RIMGetDeviceFeedbackGlobalIntensityCaps(a3, 0LL);
          *(_DWORD *)(a2 + 184) = (v67 << 10) ^ (*(_DWORD *)(a2 + 184) ^ (v67 << 10)) & 0xFFFFFBFF;
          v68 = RIMGetTouhpadClickForceSensitivityCaps(a3);
          *(_DWORD *)(a2 + 184) = (v68 << 11) ^ (*(_DWORD *)(a2 + 184) ^ (v68 << 11)) & 0xFFFFF7FF;
          LODWORD(v93) = 0;
          RIMGetButtonsSupported(a3);
          v48 = *(_DWORD *)(a2 + 184) & 0xFFFF8FFF | ((v93 & 1) << 12);
          *(_DWORD *)(a2 + 184) = v48;
        }
      }
    }
    else if ( (_WORD)v48 != 5 || v45 == -1073741808 )
    {
LABEL_50:
      v50 = (int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v51 = v49;
      }
      PreparsedDataa = v51;
      v90 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v52 = a4[1];
        v53 = *a4;
        LOBYTE(v50) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v54 = W32GetUserSessionState(v50, v46, v49);
        LOBYTE(v55) = v90;
        LOBYTE(v56) = PreparsedDataa;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v56,
          v55,
          *(_QWORD *)(v54 + 19368),
          3,
          1,
          60,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          v53,
          v52);
        v49 = 0LL;
      }
      v57 = (int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v58 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v58 = v49;
      }
      PreparsedDatab = v58;
      v91 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v58 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v59 = *a4;
        v60 = a4[1];
        LOBYTE(v57) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v61 = W32GetUserSessionState(v57, v46, v49);
        LOBYTE(v62) = v91;
        LOBYTE(v63) = PreparsedDatab;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v63,
          v62,
          *(_QWORD *)(v61 + 19368),
          4,
          1,
          61,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          v60,
          v59);
        v49 = 0LL;
      }
      *(_QWORD *)(v24 + 16) = v49;
      *(_QWORD *)(a2 + 440) = v49;
      RIMFreeHidDesc((_WORD *)v24, v46, v49, v47);
      v66 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v84 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v85 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v64, v65);
        LOBYTE(v86) = v84;
        LOBYTE(v87) = v66;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v87,
          v86,
          *(_QWORD *)(v85 + 19368),
          4,
          1,
          62,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          0);
      }
      return 0LL;
    }
    EtwTracePointerDeviceArrivalStop(v48);
    LODWORD(v49) = 0;
  }
  else
  {
    v69 = *((_OWORD *)a4 + 1);
    v95[0] = *(_OWORD *)a4;
    v70 = *((_OWORD *)a4 + 2);
    v95[1] = v69;
    v71 = *((_OWORD *)a4 + 3);
    v95[2] = v70;
    v95[3] = v71;
    LOBYTE(v72) = RIMIsInteractiveCtrl(v95);
    if ( v72 )
    {
      *(_DWORD *)(a2 + 184) |= 0x100u;
    }
    else
    {
      PreparsedDatac = *a4;
      v74 = *(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v73) + 48) + 4240LL);
      if ( v74
        && v74(v76, v75, 0LL) >= 0
        && (v77 = (unsigned int)InkProcessorIsInkDevice(v89, PreparsedDatac, a5 + 6), LODWORD(v49) = 0, v77) )
      {
        *(_DWORD *)(a2 + 184) |= 0x200u;
      }
      else if ( ((unsigned int)RimDeviceTypeToRimInputType(a2, *(_DWORD *)(a2 + 48)) & *(_DWORD *)(a1 + 84)) == 0
             || *(_DWORD *)(a1 + 88) != (_DWORD)v49 && (*(_DWORD *)(a2 + 168) & 0x10000) == 0 )
      {
        goto LABEL_50;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v78 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v78 = v49;
  }
  v79 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v78 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v80 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v46, v49);
    LOBYTE(v81) = v79;
    LOBYTE(v82) = v78;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v82,
      v81,
      *(_QWORD *)(v80 + 19368),
      4,
      1,
      59,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      v24);
  }
  return v24;
}
