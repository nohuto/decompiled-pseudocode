/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1400E1A50 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x140029D18 (-DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONT.c)
 *     IsRemoteConnection @ 0x14002AFE4 (IsRemoteConnection.c)
 *     DispBrokerGetCurrentMode @ 0x14002C1E0 (DispBrokerGetCurrentMode.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1400736E0 (GreIncrementDisplaySettingsUniqueness.c)
 *     SafeDisableMDEV @ 0x140075040 (SafeDisableMDEV.c)
 *     PopAndFreeW32ThreadLock @ 0x1400A1AFC (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxInternalInvalidate @ 0x1400AB274 (xxxInternalInvalidate.c)
 *     xxxResetDisplayDevice @ 0x1400AB7F0 (xxxResetDisplayDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x1400CEB20 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     DrvQueryMDEVPowerState @ 0x1400F7AD0 (DrvQueryMDEVPowerState.c)
 *     DrvGetAdapterInfoFromGraphicsDevice @ 0x140108A6C (DrvGetAdapterInfoFromGraphicsDevice.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x1401100D0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     zzzUpdateCursorImage @ 0x14012D0F4 (zzzUpdateCursorImage.c)
 *     DrvChangeDisplaySettings @ 0x14013C570 (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x14013E318 (DrvChangeDisplaySettingsPreValidate.c)
 *     PowerDimUndimResend @ 0x140142374 (PowerDimUndimResend.c)
 *     SetPointer @ 0x14014A2C0 (SetPointer.c)
 *     SafeEnableMDEV @ 0x14014C4A0 (SafeEnableMDEV.c)
 *     DrvSetPruneFlag @ 0x14014D2F0 (DrvSetPruneFlag.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x140151F78 (-TrackFullscreenMode@@YAXH@Z.c)
 *     FreeAllSpbs @ 0x1401536C4 (FreeAllSpbs.c)
 *     bSetDevDragRect @ 0x140157194 (bSetDevDragRect.c)
 *     IszzzUpdateCursorImageSupported @ 0x14015FA5C (IszzzUpdateCursorImageSupported.c)
 *     DrvSetVideoParameters @ 0x140160354 (DrvSetVideoParameters.c)
 *     LogDiagCDS @ 0x14019C390 (LogDiagCDS.c)
 *     xxxUserResetDisplayDevice @ 0x1401A13BC (xxxUserResetDisplayDevice.c)
 *     IsxxxBroadcastDisplaySettingsChangeSupported @ 0x14023F070 (IsxxxBroadcastDisplaySettingsChangeSupported.c)
 *     StopFade @ 0x14023F2EC (StopFade.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x14023F418 (xxxBroadcastDisplaySettingsChange.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  _UNKNOWN **v8; // rdx
  char v9; // si
  bool v10; // bl
  bool v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rcx
  bool v16; // bl
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  bool v21; // bl
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  bool v26; // bl
  bool v27; // di
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  bool v31; // bl
  bool v32; // di
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  bool v36; // bl
  bool v37; // di
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  bool v41; // bl
  bool v42; // di
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  bool v46; // bl
  bool v47; // di
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  bool v51; // bl
  bool v52; // di
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  bool v56; // bl
  bool v57; // di
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  bool v61; // bl
  bool v62; // di
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  bool v66; // bl
  bool v67; // di
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  bool v71; // bl
  bool v72; // di
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  bool v76; // bl
  bool v77; // di
  __int64 v78; // rax
  int v79; // r8d
  int v80; // edx
  __int64 v81; // rax
  __int64 v82; // rdx
  int v83; // ebx
  __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rbx
  struct tagDESKTOP *v88; // rdi
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rcx
  bool v93; // cf
  int v94; // ebx
  __int64 v95; // rdx
  __int64 v96; // rcx
  enum _MODE v97; // r13d
  int v98; // edi
  __int64 v99; // rdi
  ULONG TimeIncrement; // eax
  struct _LUID v101; // rcx
  __int64 v102; // r14
  int v103; // edx
  __int64 v104; // r15
  __int64 v105; // rdx
  __int64 v106; // r8
  const UNICODE_STRING *v107; // rbx
  __int64 v108; // rdx
  __int64 v109; // rcx
  int v110; // r14d
  __int64 v111; // rdx
  __int64 v112; // rcx
  int (*v113)(void); // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  int (*v116)(void); // rax
  __int64 v117; // rcx
  int (*v118)(void); // rax
  __int64 v119; // rdx
  __int64 v120; // rax
  int v121; // edi
  __int64 v122; // rdx
  __int64 *v123; // rcx
  __int64 v124; // r13
  __int64 **v125; // rax
  __int64 v126; // r15
  __int64 v127; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v128; // r12
  __int64 v129; // rdx
  unsigned int v130; // r14d
  __int64 v131; // rbx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // rcx
  struct _MDEV *v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rbx
  __int64 v142; // rcx
  __int64 *v143; // rcx
  __int64 v144; // rdx
  bool v145; // bl
  __int64 v146; // rax
  int v147; // r8d
  int v148; // edx
  int v149; // [rsp+28h] [rbp-C1h]
  int v150; // [rsp+48h] [rbp-A1h]
  _BYTE v151[4]; // [rsp+98h] [rbp-51h] BYREF
  unsigned int v152[2]; // [rsp+9Ch] [rbp-4Dh] BYREF
  int v153; // [rsp+A4h] [rbp-45h]
  int v154; // [rsp+A8h] [rbp-41h] BYREF
  struct _LUID v155; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v156; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v157; // [rsp+C0h] [rbp-29h] BYREF
  _BYTE v158[16]; // [rsp+C8h] [rbp-21h] BYREF
  __int64 v159; // [rsp+D8h] [rbp-11h]
  char v163; // [rsp+150h] [rbp+67h] BYREF

  v157 = 0LL;
  v163 = 0;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)a1, &ChangeDisplayModeStart, 0LL);
  v8 = &WPP_GLOBAL_Control;
  v9 = 1;
  v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      12,
      (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
    v8 = &WPP_GLOBAL_Control;
  }
  v15 = (__int64)WPP_GLOBAL_Control;
  v16 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v19) = v17;
    LOBYTE(v20) = v16;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v19,
      *(_QWORD *)(v18 + 69144),
      4,
      14,
      13,
      (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
    v8 = &WPP_GLOBAL_Control;
  }
  v152[0] = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v15 = (__int64)WPP_GLOBAL_Control;
    v21 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69144),
        4,
        14,
        14,
        (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
      v8 = &WPP_GLOBAL_Control;
    }
  }
  if ( (a4 & 2) != 0 )
  {
    v15 = (__int64)WPP_GLOBAL_Control;
    v26 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v29) = v27;
      LOBYTE(v30) = v26;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(v28 + 69144),
        4,
        14,
        15,
        (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
      v8 = &WPP_GLOBAL_Control;
    }
  }
  v152[1] = a4 & 4;
  if ( (a4 & 4) != 0 )
  {
    v15 = (__int64)WPP_GLOBAL_Control;
    v31 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v33 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v34) = v32;
      LOBYTE(v35) = v31;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v34,
        *(_QWORD *)(v33 + 69144),
        4,
        14,
        16,
        (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
      v8 = &WPP_GLOBAL_Control;
    }
  }
  if ( (a4 & 8) != 0 )
  {
    v15 = (__int64)WPP_GLOBAL_Control;
    v36 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v39) = v37;
      LOBYTE(v40) = v36;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v40,
        v39,
        *(_QWORD *)(v38 + 69144),
        4,
        14,
        17,
        (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
      v8 = &WPP_GLOBAL_Control;
    }
  }
  if ( (a4 & 0x10) != 0 )
  {
    v15 = (__int64)WPP_GLOBAL_Control;
    v41 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v44) = v42;
      LOBYTE(v45) = v41;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v45,
        v44,
        *(_QWORD *)(v43 + 69144),
        4,
        14,
        18,
        (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
      v8 = &WPP_GLOBAL_Control;
    }
  }
  v155.LowPart = a4 & 0x40000000;
  if ( (a4 & 0x40000000) != 0 )
  {
    v15 = (__int64)WPP_GLOBAL_Control;
    v46 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v48 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v49) = v47;
      LOBYTE(v50) = v46;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v50,
        v49,
        *(_QWORD *)(v48 + 69144),
        4,
        14,
        19,
        (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
      v8 = &WPP_GLOBAL_Control;
    }
  }
  v154 = a4 & 0x20000000;
  if ( (a4 & 0x20000000) != 0 )
  {
    v15 = (__int64)WPP_GLOBAL_Control;
    v51 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v53 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v54) = v52;
      LOBYTE(v55) = v51;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v55,
        v54,
        *(_QWORD *)(v53 + 69144),
        4,
        14,
        20,
        (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
      v8 = &WPP_GLOBAL_Control;
    }
  }
  LODWORD(v156) = a4 & 0x10000000;
  if ( (a4 & 0x10000000) != 0 )
  {
    v15 = (__int64)WPP_GLOBAL_Control;
    v56 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v58 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v59) = v57;
      LOBYTE(v60) = v56;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v60,
        v59,
        *(_QWORD *)(v58 + 69144),
        4,
        14,
        21,
        (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
      v8 = &WPP_GLOBAL_Control;
    }
  }
  v153 = a4 & 0x20;
  if ( (a4 & 0x20) != 0 )
  {
    v15 = (__int64)WPP_GLOBAL_Control;
    v61 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v63 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v64) = v62;
      LOBYTE(v65) = v61;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v65,
        v64,
        *(_QWORD *)(v63 + 69144),
        4,
        14,
        22,
        (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
      v8 = &WPP_GLOBAL_Control;
    }
  }
  if ( (a4 & 0x100) != 0 )
  {
    v15 = (__int64)WPP_GLOBAL_Control;
    v66 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v68 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v69) = v67;
      LOBYTE(v70) = v66;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v70,
        v69,
        *(_QWORD *)(v68 + 69144),
        4,
        14,
        23,
        (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
      v8 = &WPP_GLOBAL_Control;
    }
  }
  if ( (a4 & 0x200) != 0 )
  {
    v15 = (__int64)WPP_GLOBAL_Control;
    v71 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v72 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v71 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v73 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v74) = v72;
      LOBYTE(v75) = v71;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v75,
        v74,
        *(_QWORD *)(v73 + 69144),
        4,
        14,
        24,
        (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
      v8 = &WPP_GLOBAL_Control;
    }
  }
  if ( (a4 & 0x4000000) != 0 )
  {
    v15 = (__int64)WPP_GLOBAL_Control;
    v76 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v77 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v76 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v78 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v79) = v77;
      LOBYTE(v80) = v76;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v80,
        v79,
        *(_QWORD *)(v78 + 69144),
        4,
        14,
        25,
        (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids);
    }
  }
  if ( (a4 & 0x3FFF800) != 0 )
    goto LABEL_154;
  v81 = W32GetUserSessionState(v15, v8);
  if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v81 + 56968) + 16LL)) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v15, v82) + 43276) )
    {
      if ( v153 )
      {
        W32GetUserSessionState(v15, v85);
        v86 = DrvSetVideoParameters(a1, 1);
        goto LABEL_140;
      }
LABEL_190:
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        McTemplateK0_EtwWriteTransfer(v15, &ChangeDisplayModeEnd, 0LL);
      return 0xFFFFFFFFLL;
    }
    if ( (a4 & 0x10000008) == 0 || v152[0] )
    {
      v15 = a4 & 0x60000000;
      if ( !(_DWORD)v156 || !(_DWORD)v15 )
      {
        if ( (a4 & 0x80000004) == 0x80000004 )
        {
          if ( (_DWORD)v15 )
            goto LABEL_154;
LABEL_150:
          if ( (a4 & 0x100) != 0 && a4 != 256 || (a4 & 0x200) != 0 && a4 != 512 )
            goto LABEL_154;
          if ( (*(_DWORD *)(W32GetUserSessionState(v15, 2147483652LL) + 66800) & 0x20000000) != 0 )
          {
            v87 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
            if ( PsGetCurrentProcess() != v87 || !(unsigned int)IsRemoteConnection() )
              goto LABEL_190;
          }
          v88 = a3;
          if ( !a3 || (*((_DWORD *)a3 + 12) & 8) != 0 )
          {
            v88 = (struct tagDESKTOP *)*((_QWORD *)PtiCurrent() + 62);
            a3 = v88;
          }
          v89 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
          if ( PsGetCurrentProcess() == v89 )
          {
            if ( !v88 )
              a3 = *(struct tagDESKTOP **)(W32GetUserSessionState(v91, v90) + 19144);
          }
          else if ( v88 != *(struct tagDESKTOP **)(W32GetUserSessionState(v91, v90) + 19144) )
          {
            if ( !v153 )
              goto LABEL_190;
            goto LABEL_171;
          }
          if ( (a4 & 0x100) != 0 )
          {
            v90 = 0LL;
LABEL_168:
            v83 = DrvSetPruneFlag(a1, v90, (unsigned int)a6);
            goto LABEL_131;
          }
          if ( (a4 & 0x200) != 0 )
          {
            LOBYTE(v90) = 1;
            goto LABEL_168;
          }
          v92 = v152[1] != 0 ? 0x10 : 0;
          v93 = v154 != 0;
          v154 = -v154;
          v94 = v152[0] | (v93 ? 8 : 0) | ((a4 & 0x4000000) != 0 ? 0x20 : 0) | v92 | (a4 >> 5) & 4 | ((a4 & 0x10000002) == 0 ? 2 : 0);
          if ( (unsigned int)DispBrokerGetCurrentMode(v92, v90) == 3 )
          {
            v156 = 0LL;
            v152[0] = 1;
            W32GetUserSessionState(v96, v95);
            v97 = a6;
            v98 = DrvChangeDisplaySettingsPreValidate(a1, -(v94 & 1), (__int64)&v156, (__int64)v152);
            if ( v98 )
            {
LABEL_241:
              if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                McTemplateK0_EtwWriteTransfer(v15, &ChangeDisplayModeEnd, 0LL);
              return (unsigned int)v98;
            }
            if ( v152[0] )
            {
              v99 = MEMORY[0xFFFFF78000000320];
              TimeIncrement = KeQueryTimeIncrement();
              v154 = 0;
              v101 = 0LL;
              v102 = v156;
              v103 = -1;
              v104 = v99 * TimeIncrement;
              v155 = 0LL;
              v152[0] = -1;
              if ( v156 )
              {
                DrvGetAdapterInfoFromGraphicsDevice(v156, &v155, v152);
                v101 = v155;
                v103 = v152[0];
              }
              v98 = DispBrokerChangeDisplaySettings(
                      v101,
                      v103,
                      a2,
                      a4,
                      a7,
                      v97 == UserMode,
                      (enum _DXGK_DIAG_CDS_STAGE *)&v154);
              if ( v98 >= 0 )
                TrackFullscreenMode(v152[1]);
              if ( v152[1] && (int)IsxxxBroadcastDisplaySettingsChangeSupported() >= 0 )
                xxxBroadcastDisplaySettingsChange(a3, v105, v106, 0LL);
              v149 = v94;
              v107 = a1;
              LogDiagCDS(a1, a2, v102, (unsigned int)v97, v149, v104, v98, v98, v154, 0, 0LL);
LABEL_231:
              if ( v98 >= 0 && v153 )
              {
                W32GetUserSessionState(v109, v108);
                v98 = DrvSetVideoParameters(v107, 0);
              }
              v15 = (__int64)WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
                || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
              {
                v9 = 0;
              }
              v145 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v146 = W32GetUserSessionState(WPP_GLOBAL_Control, v108);
                LOBYTE(v147) = v145;
                LOBYTE(v148) = v9;
                WPP_RECORDER_AND_TRACE_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v148,
                  v147,
                  *(_QWORD *)(v146 + 69144),
                  4,
                  14,
                  26,
                  (__int64)&WPP_3ac1f7affe4a3f88c6e17464bfc301ff_Traceguids,
                  v98);
              }
              goto LABEL_241;
            }
LABEL_188:
            v110 = -__CFSHR__(v94, 2);
            if ( __CFSHR__(v94, 2) )
            {
              if ( !(unsigned int)PreAllocateForPrimaryMonitorChange(v15, v90) )
                goto LABEL_190;
              SetPointer(0LL);
              v15 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v112, v111) + 48);
              v113 = *(int (**)(void))(v15 + 3856);
              if ( v113 && v113() >= 0 )
                FreeAllSpbs();
            }
            if ( *(_QWORD *)(W32GetUserSessionState(v15, v90) + 43000) )
            {
              v115 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v115, v114) + 48);
              v116 = *(int (**)(void))(v115 + 3872);
              if ( v116 )
              {
                if ( v116() >= 0 )
                  StopFade();
              }
            }
            v117 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v115, v114) + 24);
            v118 = *(int (**)(void))(v117 + 2568);
            if ( v118 && v118() >= 0 )
            {
              v120 = W32GetUserSessionState(v117, v119);
              bSetDevDragRect(*(_QWORD *)(*(_QWORD *)(v120 + 56968) + 48LL));
            }
            v121 = -((a4 & 0x40) == 0);
            v123 = *(__int64 **)(W32GetUserSessionState(v117, 0xFFFFFFFFLL) + 56968);
            v124 = v123[2];
            if ( a3 )
            {
              v125 = (__int64 **)*((_QWORD *)a3 + 1);
              v123 = *v125;
              v126 = **v125;
            }
            else
            {
              LODWORD(v126) = 0;
            }
            v127 = W32GetUserSessionState(v123, v122);
            v128 = a7;
            v150 = v94;
            v107 = a1;
            v98 = DrvChangeDisplaySettings(
                    (_DWORD)a1,
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v127 + 56968) + 104LL) + 80LL),
                    (_DWORD)a2,
                    v126,
                    a6,
                    v124,
                    (__int64)&v157,
                    v121,
                    v150,
                    (__int64)&v163,
                    (__int64)a7);
            Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v158, a3);
            if ( !v110 )
              goto LABEL_229;
            if ( v98 == 2 )
            {
              TrackFullscreenMode(v152[1]);
              if ( v155.LowPart )
              {
                if ( (unsigned int)SafeDisableMDEV(1LL, v129) )
                  SafeEnableMDEV(1LL);
                xxxUserResetDisplayDevice();
              }
              v98 = 0;
              goto LABEL_224;
            }
            if ( v98 )
            {
              if ( v98 >= 0 )
                goto LABEL_224;
              xxxUserResetDisplayDevice();
              if ( !v163 )
                goto LABEL_224;
              v151[0] = 0;
              v137 = *(struct _MDEV **)(*(_QWORD *)(W32GetUserSessionState(v136, v135) + 56968) + 16LL);
              v138 = a3 ? ***((_QWORD ***)a3 + 1) : 0LL;
              if ( (int)DrvSetDisplayConfig(
                          0,
                          0,
                          2447,
                          2,
                          v138,
                          0,
                          0LL,
                          0LL,
                          v137,
                          (__int64)&v157,
                          0LL,
                          0LL,
                          (__int64)v151,
                          0LL,
                          0LL,
                          (__int64)v128,
                          0LL) < 0 )
                goto LABEL_224;
              TrackFullscreenMode(0);
              if ( v151[0] )
                goto LABEL_224;
              v141 = v157;
              v142 = *(_QWORD *)(W32GetUserSessionState(v140, v139) + 56968);
              *(_QWORD *)(v142 + 16) = v141;
              GreIncrementDisplaySettingsUniqueness(v142);
              v155.LowPart = 0;
            }
            else
            {
              v130 = v152[1];
              TrackFullscreenMode(v152[1]);
              v131 = v157;
              v134 = *(_QWORD *)(W32GetUserSessionState(v133, v132) + 56968);
              *(_QWORD *)(v134 + 16) = v131;
              GreIncrementDisplaySettingsUniqueness(v134);
              PowerDimUndimResend();
              v155.LowPart = v130 != 0;
            }
            xxxResetDisplayDevice((__int64)a3, (int *)&v155, 0LL);
            v107 = a1;
LABEL_224:
            if ( a3 )
            {
              v143 = (__int64 *)*((_QWORD *)a3 + 1);
              v144 = *(unsigned int *)(*v143 + 64);
              if ( (v144 & 1) == 0 )
                xxxInternalInvalidate(v143[3], v144);
            }
            SetPointer(1LL);
            if ( (int)IszzzUpdateCursorImageSupported() >= 0 )
              zzzUpdateCursorImage();
LABEL_229:
            if ( v159 != -1 )
              PopAndFreeW32ThreadLock((__int64)v158);
            goto LABEL_231;
          }
          if ( (unsigned int)DispBrokerGetCurrentMode(v96, v95) != 2 )
            goto LABEL_188;
          if ( !v153 )
            goto LABEL_190;
LABEL_171:
          W32GetUserSessionState(v15, v90);
          v86 = DrvSetVideoParameters(a1, 0);
LABEL_140:
          v83 = v86;
          if ( v86 >= 0 )
            goto LABEL_131;
          goto LABEL_190;
        }
        if ( (_DWORD)v15 != 1610612736 )
          goto LABEL_150;
      }
    }
LABEL_154:
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      McTemplateK0_EtwWriteTransfer(v15, &ChangeDisplayModeEnd, 0LL);
    return 4294967292LL;
  }
  if ( v153 )
  {
    W32GetUserSessionState(v15, v82);
    v83 = DrvSetVideoParameters(a1, 1);
    if ( v83 >= 0 )
    {
LABEL_131:
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        McTemplateK0_EtwWriteTransfer(v15, &ChangeDisplayModeEnd, 0LL);
      return (unsigned int)v83;
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v15, &ChangeDisplayModeEnd, 0LL);
  return 4294967291LL;
}
