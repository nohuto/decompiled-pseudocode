/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x140138F20 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     PowerDimUndimResend @ 0x14000AD94 (PowerDimUndimResend.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 *     DispBrokerGetCurrentMode @ 0x14007D610 (DispBrokerGetCurrentMode.c)
 *     xxxResetDisplayDevice @ 0x14007F460 (xxxResetDisplayDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PopAndFreeW32ThreadLock @ 0x1400D0920 (PopAndFreeW32ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14011DB50 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     SafeEnableMDEV @ 0x14013AF00 (SafeEnableMDEV.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvQueryMDEVPowerState @ 0x14013DBA0 (DrvQueryMDEVPowerState.c)
 *     DrvGetAdapterInfoFromGraphicsDevice @ 0x140148E9C (DrvGetAdapterInfoFromGraphicsDevice.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14014C2AC (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     LogDiagCDS @ 0x14014FA84 (LogDiagCDS.c)
 *     zzzUpdateCursorImage @ 0x140167748 (zzzUpdateCursorImage.c)
 *     DrvChangeDisplaySettings @ 0x140175A14 (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x140177758 (DrvChangeDisplaySettingsPreValidate.c)
 *     SetPointer @ 0x1401853CC (SetPointer.c)
 *     DrvSetPruneFlag @ 0x14018A874 (DrvSetPruneFlag.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x14018DB74 (-TrackFullscreenMode@@YAXH@Z.c)
 *     xxxInternalInvalidate @ 0x1401936D4 (xxxInternalInvalidate.c)
 *     bSetDevDragRect @ 0x1401947E4 (bSetDevDragRect.c)
 *     ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x1401981C0 (-DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONT.c)
 *     SafeDisableMDEV @ 0x14019B620 (SafeDisableMDEV.c)
 *     IszzzUpdateCursorImageSupported @ 0x1401A3D7C (IszzzUpdateCursorImageSupported.c)
 *     DrvSetVideoParameters @ 0x1401A5280 (DrvSetVideoParameters.c)
 *     xxxUserResetDisplayDevice @ 0x1401C4F6C (xxxUserResetDisplayDevice.c)
 *     Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledDeviceUsageNoInline @ 0x1401D1DF4 (Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledDeviceUsageNoInline.c)
 *     IsxxxBroadcastDisplaySettingsChangeSupported @ 0x140249328 (IsxxxBroadcastDisplaySettingsChangeSupported.c)
 *     StopFade @ 0x1402494D8 (StopFade.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x14024955C (xxxBroadcastDisplaySettingsChange.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        int a4,
        _OWORD *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  CTouchProcessor **v8; // rdx
  char v9; // si
  bool v10; // bl
  _UNKNOWN **v11; // r8
  bool v12; // di
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  CTouchProcessor *v16; // rcx
  bool v17; // bl
  bool v18; // di
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // bl
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // bl
  bool v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  bool v32; // bl
  bool v33; // di
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  bool v37; // bl
  bool v38; // di
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  bool v42; // bl
  bool v43; // di
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  bool v47; // bl
  bool v48; // di
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  bool v52; // bl
  bool v53; // di
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  bool v57; // bl
  bool v58; // di
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  bool v62; // bl
  bool v63; // di
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  bool v67; // bl
  bool v68; // di
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  bool v72; // bl
  bool v73; // di
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  bool v77; // bl
  bool v78; // di
  __int64 v79; // rax
  int v80; // r8d
  int v81; // edx
  __int64 v82; // rax
  int v83; // edx
  int v84; // r8d
  __int64 v85; // rax
  int v86; // ebx
  __int64 v88; // rdx
  int v89; // r8d
  __int64 v90; // rax
  int v91; // eax
  int v92; // edi
  __int64 v93; // rbx
  __int64 v94; // rcx
  int v95; // edx
  int v96; // ecx
  int v97; // r8d
  unsigned __int8 v98; // dl
  __int64 v99; // rax
  int v100; // ecx
  unsigned int v101; // ebx
  int CurrentMode; // eax
  int v103; // edx
  int v104; // ecx
  int v105; // r8d
  enum _MODE v106; // r13d
  __int64 v107; // rax
  int v108; // edx
  int v109; // edi
  int v110; // r8d
  __int64 v111; // rdi
  ULONG TimeIncrement; // eax
  __int64 v113; // r14
  struct _LUID v114; // rcx
  int v115; // edx
  __int64 v116; // r15
  __int64 v117; // rdx
  int v118; // r8d
  int IsEnabledDeviceUsageNoInline; // eax
  int v120; // r12d
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // rdx
  __int64 v124; // rcx
  int v125; // r8d
  const UNICODE_STRING *v126; // rbx
  __int64 v127; // rax
  int v128; // r14d
  __int64 v129; // rcx
  int (*v130)(void); // rax
  __int64 v131; // rcx
  int v132; // r8d
  int (*v133)(void); // rax
  int v134; // edx
  __int64 v135; // rax
  unsigned int v136; // edi
  int v137; // edx
  __int64 *v138; // rcx
  int v139; // r8d
  __int64 **v140; // rax
  __int64 v141; // r15
  __int64 v142; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v143; // r12
  int v144; // edx
  int v145; // r8d
  int v146; // edx
  __int64 v147; // rcx
  int v148; // r8d
  unsigned int v149; // r14d
  struct _MDEV *v150; // rbx
  int v151; // edx
  int v152; // ecx
  int v153; // r8d
  __int64 v154; // rcx
  int v155; // edx
  int v156; // ecx
  int v157; // r8d
  struct _MDEV *v158; // rdx
  void *v159; // rax
  __int64 v160; // rdx
  int v161; // r8d
  int v162; // edx
  int v163; // ecx
  int v164; // r8d
  struct _MDEV *v165; // rbx
  __int64 v166; // rcx
  __int64 *v167; // rcx
  __int64 v168; // rcx
  __int64 v169; // rax
  bool v170; // bl
  __int64 v171; // rax
  int v172; // r8d
  int v173; // edx
  int v174; // [rsp+28h] [rbp-C1h]
  char v175; // [rsp+28h] [rbp-C1h]
  unsigned int v176; // [rsp+48h] [rbp-A1h]
  unsigned int v177[2]; // [rsp+98h] [rbp-51h] BYREF
  unsigned int v178; // [rsp+A0h] [rbp-49h]
  int v179; // [rsp+A4h] [rbp-45h]
  int v180; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v181; // [rsp+B0h] [rbp-39h] BYREF
  struct _LUID v182; // [rsp+B8h] [rbp-31h] BYREF
  struct _MDEV *v183; // [rsp+C0h] [rbp-29h] BYREF
  _QWORD v184[12]; // [rsp+C8h] [rbp-21h] BYREF
  char v188; // [rsp+150h] [rbp+67h] BYREF

  v188 = 0;
  v183 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)a1, &ChangeDisplayModeStart, 0LL);
  v8 = &WPP_GLOBAL_Control;
  v9 = 1;
  v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = &WPP_RECORDER_INITIALIZED;
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(
                         (_DWORD)WPP_GLOBAL_Control,
                         (unsigned int)&WPP_GLOBAL_Control,
                         (unsigned int)&WPP_RECORDER_INITIALIZED);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      12,
      (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
    v8 = &WPP_GLOBAL_Control;
    v11 = &WPP_RECORDER_INITIALIZED;
  }
  v16 = WPP_GLOBAL_Control;
  v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState(
            (_DWORD)WPP_GLOBAL_Control,
            (unsigned int)&WPP_GLOBAL_Control,
            (unsigned int)&WPP_RECORDER_INITIALIZED);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(v19 + 69136),
      4,
      14,
      13,
      (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
    v8 = &WPP_GLOBAL_Control;
    v11 = &WPP_RECORDER_INITIALIZED;
  }
  v177[1] = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v22 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(v24 + 69136),
        4,
        14,
        14,
        (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
      v8 = &WPP_GLOBAL_Control;
      v11 = &WPP_RECORDER_INITIALIZED;
    }
  }
  if ( (a4 & 2) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v27 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 69136),
        4,
        14,
        15,
        (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
      v8 = &WPP_GLOBAL_Control;
      v11 = &WPP_RECORDER_INITIALIZED;
    }
  }
  v178 = a4 & 4;
  if ( (a4 & 4) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v32 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v32;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 69136),
        4,
        14,
        16,
        (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
      v8 = &WPP_GLOBAL_Control;
      v11 = &WPP_RECORDER_INITIALIZED;
    }
  }
  if ( (a4 & 8) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v37 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v37;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v40,
        *(_QWORD *)(v39 + 69136),
        4,
        14,
        17,
        (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
      v8 = &WPP_GLOBAL_Control;
      v11 = &WPP_RECORDER_INITIALIZED;
    }
  }
  if ( (a4 & 0x10) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v42 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v44 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v45) = v43;
      LOBYTE(v46) = v42;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v46,
        v45,
        *(_QWORD *)(v44 + 69136),
        4,
        14,
        18,
        (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
      v8 = &WPP_GLOBAL_Control;
      v11 = &WPP_RECORDER_INITIALIZED;
    }
  }
  v182.LowPart = a4 & 0x40000000;
  if ( (a4 & 0x40000000) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v47 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v49 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v50) = v48;
      LOBYTE(v51) = v47;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v51,
        v50,
        *(_QWORD *)(v49 + 69136),
        4,
        14,
        19,
        (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
      v8 = &WPP_GLOBAL_Control;
      v11 = &WPP_RECORDER_INITIALIZED;
    }
  }
  v180 = a4 & 0x20000000;
  if ( (a4 & 0x20000000) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v52 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v54 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v55) = v53;
      LOBYTE(v56) = v52;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v56,
        v55,
        *(_QWORD *)(v54 + 69136),
        4,
        14,
        20,
        (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
      v8 = &WPP_GLOBAL_Control;
      v11 = &WPP_RECORDER_INITIALIZED;
    }
  }
  LODWORD(v181) = a4 & 0x10000000;
  if ( (a4 & 0x10000000) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v57 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v59 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v60) = v58;
      LOBYTE(v61) = v57;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v61,
        v60,
        *(_QWORD *)(v59 + 69136),
        4,
        14,
        21,
        (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
      v8 = &WPP_GLOBAL_Control;
      v11 = &WPP_RECORDER_INITIALIZED;
    }
  }
  v179 = a4 & 0x20;
  if ( (a4 & 0x20) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v62 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v64 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v65) = v63;
      LOBYTE(v66) = v62;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v66,
        v65,
        *(_QWORD *)(v64 + 69136),
        4,
        14,
        22,
        (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
      v8 = &WPP_GLOBAL_Control;
      v11 = &WPP_RECORDER_INITIALIZED;
    }
  }
  if ( (a4 & 0x100) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v67 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v68 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v67 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v69 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v70) = v68;
      LOBYTE(v71) = v67;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v71,
        v70,
        *(_QWORD *)(v69 + 69136),
        4,
        14,
        23,
        (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
      v8 = &WPP_GLOBAL_Control;
      v11 = &WPP_RECORDER_INITIALIZED;
    }
  }
  if ( (a4 & 0x200) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v72 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v73 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v72 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v74 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v75) = v73;
      LOBYTE(v76) = v72;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v76,
        v75,
        *(_QWORD *)(v74 + 69136),
        4,
        14,
        24,
        (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
      v8 = &WPP_GLOBAL_Control;
      v11 = &WPP_RECORDER_INITIALIZED;
    }
  }
  if ( (a4 & 0x4000000) != 0 )
  {
    v16 = WPP_GLOBAL_Control;
    v77 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v78 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v77 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v79 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v80) = v78;
      LOBYTE(v81) = v77;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v81,
        v80,
        *(_QWORD *)(v79 + 69136),
        4,
        14,
        25,
        (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids);
    }
  }
  if ( (a4 & 0x3FFF800) != 0 )
    goto LABEL_160;
  v82 = W32GetUserSessionState((_DWORD)v16, (_DWORD)v8, (_DWORD)v11);
  if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v82 + 56968) + 16LL)) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState((_DWORD)v16, v83, v84) + 43276) )
    {
      if ( v179 )
      {
        v90 = W32GetUserSessionState((_DWORD)v16, v88, v89);
        v174 = 1;
LABEL_140:
        v91 = DrvSetVideoParameters(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v90 + 56968) + 96LL) + 80LL), a5, 1, v174);
        goto LABEL_141;
      }
      goto LABEL_196;
    }
    if ( (a4 & 0x10000008) == 0 || v177[1] )
    {
      if ( (_DWORD)v181 )
      {
        if ( v182.LowPart )
          goto LABEL_160;
        v92 = v180;
        if ( v180 )
          goto LABEL_160;
      }
      else
      {
        v92 = v180;
      }
      if ( a4 >= 0 || !v178 )
      {
        if ( !v182.LowPart )
          goto LABEL_156;
        goto LABEL_153;
      }
      if ( !v182.LowPart )
      {
LABEL_153:
        if ( v92 )
          goto LABEL_160;
LABEL_156:
        if ( (a4 & 0x100) != 0 && a4 != 256 || (a4 & 0x200) != 0 && a4 != 512 )
          goto LABEL_160;
        if ( !a3 || (*((_DWORD *)a3 + 12) & 8) != 0 )
          a3 = (struct tagDESKTOP *)*((_QWORD *)PtiCurrent((__int64)v16, v88) + 61);
        v93 = *(_QWORD *)(W32GetUserGdiSessionState(v16) + 40);
        if ( PsGetCurrentProcess(v94) == v93 )
        {
          if ( !a3 )
            a3 = *(struct tagDESKTOP **)(W32GetUserSessionState(v96, v95, v97) + 19176);
        }
        else
        {
          v99 = W32GetUserSessionState(v96, v95, v97);
          v16 = a3;
          if ( a3 != *(struct tagDESKTOP **)(v99 + 19176) )
          {
            if ( v179 )
            {
              v90 = W32GetUserSessionState((_DWORD)a3, v95, v97);
              v174 = 0;
              goto LABEL_140;
            }
LABEL_196:
            if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
              McTemplateK0_EtwWriteTransfer((__int64)v16, &ChangeDisplayModeEnd, 0LL);
            return 0xFFFFFFFFLL;
          }
        }
        if ( (a4 & 0x100) != 0 )
        {
          v98 = 0;
LABEL_171:
          v86 = DrvSetPruneFlag(a1, v98, a6);
          goto LABEL_131;
        }
        if ( (a4 & 0x200) != 0 )
        {
          v98 = 1;
          goto LABEL_171;
        }
        v100 = v178 != 0 ? 0x10 : 0;
        v101 = v177[1] | (v92 != 0 ? 8 : 0) | v100 | ((a4 & 0x4000000) != 0 ? 0x20 : 0) | ((unsigned int)a4 >> 5) & 4 | ((a4 & 0x10000002) == 0 ? 2 : 0);
        CurrentMode = DispBrokerGetCurrentMode(v100, v95, v97);
        v106 = a6;
        if ( CurrentMode == 3 )
        {
          v181 = 0LL;
          v177[1] = 1;
          v107 = W32GetUserSessionState(v104, v103, v105);
          v109 = DrvChangeDisplaySettingsPreValidate(
                   a1,
                   *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v107 + 56968) + 96LL) + 80LL),
                   (__int64)a2,
                   (unsigned int)v106,
                   -(v101 & 1),
                   &v181,
                   (int *)&v177[1]);
          if ( v109 )
          {
LABEL_246:
            if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
              McTemplateK0_EtwWriteTransfer((__int64)v16, &ChangeDisplayModeEnd, 0LL);
            return (unsigned int)v109;
          }
          if ( v177[1] )
          {
            v111 = MEMORY[0xFFFFF78000000320];
            TimeIncrement = KeQueryTimeIncrement();
            v113 = v181;
            v114 = 0LL;
            v115 = -1;
            v116 = v111 * TimeIncrement;
            v180 = 0;
            v182 = 0LL;
            v177[1] = -1;
            if ( v181 )
            {
              DrvGetAdapterInfoFromGraphicsDevice(v181, &v182, &v177[1]);
              v114 = v182;
              v115 = v177[1];
            }
            v109 = DispBrokerChangeDisplaySettings(
                     v114,
                     v115,
                     a2,
                     a4,
                     a7,
                     v106 == UserMode,
                     (enum _DXGK_DIAG_CDS_STAGE *)&v180);
            if ( v109 >= 0 )
              TrackFullscreenMode(v178, v117, v118);
            IsEnabledDeviceUsageNoInline = Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledDeviceUsageNoInline();
            v120 = v180;
            if ( IsEnabledDeviceUsageNoInline )
              LogDiagCDS((__int64)a1, a2, v113, (unsigned int)v106, v101, v116, v109, v109, v180, 0, 0LL);
            if ( v178 && (int)IsxxxBroadcastDisplaySettingsChangeSupported() >= 0 )
              xxxBroadcastDisplaySettingsChange(a3, v121, v122, 0LL);
            if ( (unsigned int)Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledDeviceUsageNoInline() )
            {
              v126 = a1;
            }
            else
            {
              v175 = v101;
              v126 = a1;
              LogDiagCDS((__int64)a1, a2, v113, (unsigned int)v106, v175, v116, v109, v109, v120, 0, 0LL);
            }
LABEL_236:
            if ( v109 >= 0 && v179 )
            {
              v169 = W32GetUserSessionState(v124, v123, v125);
              v109 = DrvSetVideoParameters(
                       v126,
                       *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v169 + 56968) + 96LL) + 80LL),
                       a5,
                       0,
                       0);
            }
            v16 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v9 = 0;
            }
            v170 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v171 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v123, v125);
              LOBYTE(v172) = v170;
              LOBYTE(v173) = v9;
              WPP_RECORDER_AND_TRACE_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v173,
                v172,
                *(_QWORD *)(v171 + 69136),
                4,
                14,
                26,
                (__int64)&WPP_cb50f5fd8fe636fb138c3de25eb0190d_Traceguids,
                v109);
            }
            goto LABEL_246;
          }
        }
        else if ( (unsigned int)DispBrokerGetCurrentMode(v104, v103, v105) == 2 )
        {
          if ( v179 )
          {
            v127 = W32GetUserSessionState((_DWORD)v16, v108, v110);
            v91 = DrvSetVideoParameters(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v127 + 56968) + 96LL) + 80LL), a5, 0, 0);
LABEL_141:
            v86 = v91;
            if ( v91 >= 0 )
              goto LABEL_131;
            goto LABEL_196;
          }
          goto LABEL_196;
        }
        v128 = -__CFSHR__(v101, 2);
        if ( __CFSHR__(v101, 2) )
        {
          if ( !(unsigned int)PreAllocateForPrimaryMonitorChange((int)v16, v108, v110) )
            goto LABEL_196;
          SetPointer(0LL);
        }
        if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)v16, v108, v110) + 43024) )
        {
          v129 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v129) + 48);
          v130 = *(int (**)(void))(v129 + 3424);
          if ( v130 )
          {
            if ( v130() >= 0 )
              StopFade();
          }
        }
        v131 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v129) + 24);
        v133 = *(int (**)(void))(v131 + 2592);
        if ( v133 && v133() >= 0 )
        {
          v135 = W32GetUserSessionState(v131, v134, v132);
          bSetDevDragRect(*(_QWORD *)(*(_QWORD *)(v135 + 56968) + 40LL));
        }
        v136 = -((a4 & 0x40) == 0);
        v138 = *(__int64 **)(W32GetUserSessionState(v131, -1, v132) + 56968);
        v181 = v138[2];
        if ( a3 )
        {
          v140 = (__int64 **)*((_QWORD *)a3 + 1);
          v138 = *v140;
          v141 = **v140;
        }
        else
        {
          v141 = 0LL;
        }
        v142 = W32GetUserSessionState((_DWORD)v138, v137, v139);
        v143 = a7;
        v176 = v101;
        v126 = a1;
        v109 = DrvChangeDisplaySettings(
                 a1,
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v142 + 56968) + 96LL) + 80LL),
                 a2,
                 v141,
                 v106,
                 (struct _MDEV *)v181,
                 &v183,
                 v136,
                 v176,
                 &v188,
                 a7);
        Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v184, a3);
        if ( !v128 )
        {
LABEL_233:
          if ( v184[2] != -1LL )
            PopAndFreeW32ThreadLock((__int64)v184, v123);
          goto LABEL_236;
        }
        if ( v109 == 2 )
        {
          TrackFullscreenMode(v178, v123, v125);
          if ( v182.LowPart )
          {
            if ( (unsigned int)SafeDisableMDEV(1u, v144, v145) )
              SafeEnableMDEV(1u, v146, v148);
            xxxUserResetDisplayDevice(v147);
          }
          v109 = 0;
          goto LABEL_228;
        }
        if ( v109 )
        {
          if ( v109 >= 0 )
            goto LABEL_228;
          xxxUserResetDisplayDevice(v124);
          if ( !v188 )
            goto LABEL_228;
          LOBYTE(v177[0]) = 0;
          v158 = *(struct _MDEV **)(*(_QWORD *)(W32GetUserSessionState(v156, v155, v157) + 56968) + 16LL);
          v159 = a3 ? (void *)***((_QWORD ***)a3 + 1) : 0LL;
          if ( (int)DrvSetDisplayConfig(
                      0,
                      0LL,
                      0x98Fu,
                      2u,
                      v159,
                      0,
                      0LL,
                      0LL,
                      v158,
                      &v183,
                      0LL,
                      0LL,
                      (char *)v177,
                      0LL,
                      0LL,
                      (__int64)v143,
                      0LL) < 0 )
            goto LABEL_228;
          TrackFullscreenMode(0LL, v160, v161);
          if ( LOBYTE(v177[0]) )
            goto LABEL_228;
          v165 = v183;
          v166 = *(_QWORD *)(W32GetUserSessionState(v163, v162, v164) + 56968);
          *(_QWORD *)(v166 + 16) = v165;
          LOBYTE(v166) = 1;
          GreIncrementDisplaySettingsUniqueness(v166);
          LODWORD(v181) = 0;
        }
        else
        {
          v149 = v178;
          TrackFullscreenMode(v178, v123, v125);
          v150 = v183;
          v154 = *(_QWORD *)(W32GetUserSessionState(v152, v151, v153) + 56968);
          *(_QWORD *)(v154 + 16) = v150;
          LOBYTE(v154) = 1;
          GreIncrementDisplaySettingsUniqueness(v154);
          PowerDimUndimResend();
          LODWORD(v181) = v149 != 0;
        }
        xxxResetDisplayDevice((__int64)a3, &v181, 0LL);
        v126 = a1;
LABEL_228:
        if ( a3 )
        {
          v167 = (__int64 *)*((_QWORD *)a3 + 1);
          if ( (*(_DWORD *)(*v167 + 64) & 1) == 0 )
            xxxInternalInvalidate(v167[3]);
        }
        SetPointer(1LL);
        if ( (int)IszzzUpdateCursorImageSupported(v168) >= 0 )
          zzzUpdateCursorImage(v124);
        goto LABEL_233;
      }
    }
LABEL_160:
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      McTemplateK0_EtwWriteTransfer((__int64)v16, &ChangeDisplayModeEnd, 0LL);
    return 4294967292LL;
  }
  if ( v179 )
  {
    v85 = W32GetUserSessionState((_DWORD)v16, v83, v84);
    v86 = DrvSetVideoParameters(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v85 + 56968) + 96LL) + 80LL), a5, 1, 1);
    if ( v86 >= 0 )
    {
LABEL_131:
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        McTemplateK0_EtwWriteTransfer((__int64)v16, &ChangeDisplayModeEnd, 0LL);
      return (unsigned int)v86;
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)v16, &ChangeDisplayModeEnd, 0LL);
  return 4294967291LL;
}
