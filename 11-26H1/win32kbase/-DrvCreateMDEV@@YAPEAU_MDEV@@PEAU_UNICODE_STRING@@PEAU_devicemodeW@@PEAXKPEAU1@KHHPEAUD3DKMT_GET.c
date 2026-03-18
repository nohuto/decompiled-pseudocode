/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0
 * Callers:
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     DrvGetDisplayDriverNames @ 0x14000DD90 (DrvGetDisplayDriverNames.c)
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140024C10 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x140027740 (UserRemoteConnectedSessionUsingXddm.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028120 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028174 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DrvGetDeviceFromName @ 0x140028550 (DrvGetDeviceFromName.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x140028DC0 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140028F20 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     UserIsDisconnectConnection @ 0x14002A9D0 (UserIsDisconnectConnection.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x14002C914 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140047270 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C5E40 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1400C640C (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400C6748 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C7164 (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1400C76CC (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1400C7720 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     AlignRects @ 0x14011CB98 (AlignRects.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1401349AC (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z @ 0x14013B3D4 (-DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x14014FF40 (DrvDxgkLogCodePointPacket.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x140150004 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline @ 0x140152324 (Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1401583D8 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x14016EFEC (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140173AF8 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?CalculateUniformSpaceMapping@@YAXPEAU_MDEV@@@Z @ 0x1401791B0 (-CalculateUniformSpaceMapping@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14017BA40 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140185690 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x140187784 (UserSetScaleFactorsFromRemoteMetric.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14018C9B0 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x140190458 (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     SetDpiSetting @ 0x140194F08 (SetDpiSetting.c)
 *     GetDpiSetting @ 0x140196928 (GetDpiSetting.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019F8AC (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     wcsncmp @ 0x1401C754C (wcsncmp.c)
 *     UserGetDpiInfoFromPrimaryMonitor @ 0x1401D2864 (UserGetDpiInfoFromPrimaryMonitor.c)
 *     ?AdjustForOrientation@@YA?AUtagSIZE@@II_N@Z @ 0x1401F4968 (-AdjustForOrientation@@YA-AUtagSIZE@@II_N@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401F5CC0 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

struct _MDEV *__fastcall DrvCreateMDEV(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        void *a3,
        unsigned int a4,
        struct _MDEV *a5,
        unsigned int a6,
        int a7,
        int a8,
        struct D3DKMT_GETPATHSMODALITY *a9)
{
  int v10; // ebx
  int v13; // r13d
  __int64 v14; // r9
  struct _MDEV *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  HDEV v19; // rsi
  struct _devicemodeW *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r9
  struct D3DKMT_GETPATHSMODALITY *v23; // r12
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r14d
  __int64 DeviceFromName; // rax
  unsigned int v28; // r15d
  bool v29; // sf
  HDEV v30; // r13
  __int64 v31; // rdi
  __int64 v32; // rax
  int v33; // eax
  struct _ERESOURCE **v34; // rbx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v35; // r8
  int v36; // r8d
  int v37; // edx
  int v38; // r8d
  unsigned int v39; // eax
  struct _ERESOURCE *v40; // rbx
  struct _GRETHREAD *v41; // rax
  bool v42; // zf
  struct _ERESOURCE *v43; // rbx
  struct _GRETHREAD *v44; // rax
  struct _ERESOURCE *v45; // rbx
  struct _GRETHREAD *v46; // rax
  struct _ERESOURCE *v47; // rbx
  struct _GRETHREAD *v48; // rax
  HDEV v49; // rbx
  int v50; // r13d
  __int64 v51; // r12
  unsigned int *DisplayDriverNames; // rax
  struct _DRV_NAMES *v53; // r15
  __int64 v54; // rbx
  __int64 v55; // r14
  __int64 v56; // rbx
  bool v57; // al
  int v58; // eax
  struct _ERESOURCE **v59; // rbx
  __int16 v60; // cx
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  bool v66; // al
  unsigned int v67; // edx
  __int64 v68; // r8
  __int64 v69; // rdx
  int v70; // edx
  int v71; // ecx
  int v72; // r8d
  __int64 v73; // r13
  __int16 v74; // dx
  int PrimaryAttachFlags; // eax
  int *v76; // rbx
  BOOL IsDisconnectConnection; // eax
  int v78; // r14d
  int v79; // eax
  unsigned int *v80; // rax
  int v81; // ecx
  unsigned int v82; // r15d
  unsigned int v83; // r12d
  struct _devicemodeW *Src; // rcx
  struct _devicemodeW *v85; // rbx
  int v86; // eax
  __int64 v87; // r8
  __int64 v88; // r9
  char *v89; // r14
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  HDEV v94; // rbx
  struct _devicemodeW *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  char *v99; // rcx
  struct _devicemodeW *v100; // r13
  struct _devicemodeW *v101; // rbx
  int v102; // eax
  _DWORD *v103; // r8
  int v104; // ebx
  HDEV v105; // rax
  __int64 v106; // rdx
  __int64 v107; // r9
  struct _devicemodeW *v108; // rax
  struct _devicemodeW *v109; // rdx
  int v110; // eax
  int dmPelsHeight; // r9d
  int dmPelsWidth; // r8d
  __int64 v113; // rdx
  int v114; // eax
  unsigned int v115; // eax
  unsigned int v116; // eax
  HDEV *v117; // rdx
  __int64 v118; // r8
  HDEV v119; // rcx
  HDEV v120; // rax
  _DWORD *v121; // rbx
  unsigned int v122; // eax
  HDEV v123; // rdi
  HDEV v124; // rax
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // r9
  HDEV v128; // r15
  struct D3DKMT_GETPATHSMODALITY *v129; // r13
  MULTIDEVLOCKOBJ *v130; // rax
  MULTIDEVLOCKOBJ *v131; // rbx
  MULTIDEVLOCKOBJ *v132; // rdi
  int v133; // r14d
  unsigned int v134; // edi
  unsigned int v135; // edx
  __int64 v136; // rcx
  int v137; // eax
  unsigned int v138; // edi
  _DWORD *v139; // rbx
  void *v140; // rax
  __int64 v141; // rdx
  __int64 v142; // r8
  __int64 v143; // r9
  void *v144; // r12
  unsigned int v145; // r10d
  unsigned int v146; // r9d
  __int64 v147; // rdx
  __int64 v148; // rcx
  _DWORD *v149; // r8
  __int64 v150; // rdx
  __int64 v151; // rcx
  unsigned int v152; // r12d
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  HSEMAPHORE v157; // r14
  int v158; // eax
  unsigned int v159; // eax
  HSEMAPHORE v160; // rdi
  unsigned int v161; // edi
  __int64 v162; // rbx
  int v163; // ecx
  __int64 v164; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v166; // eax
  unsigned int v167; // eax
  int DpiInfoFromPrimaryMonitor; // eax
  int v169; // r12d
  __int64 v170; // rcx
  int v171; // eax
  unsigned int v172; // eax
  _WORD *v173; // r8
  int v174; // eax
  unsigned int j; // r9d
  int v176; // eax
  __int64 v177; // rcx
  unsigned int v178; // eax
  unsigned int v179; // eax
  unsigned int i; // edx
  __int64 v181; // rax
  __int64 v182; // rcx
  __int64 v183; // rcx
  int v184; // eax
  int v185; // edx
  int v186; // r8d
  HDEV v187; // r13
  unsigned int v188; // edi
  __int64 v189; // rbx
  int v190; // ecx
  bool v191; // r8
  HSEMAPHORE v192; // rax
  unsigned int v193; // edx
  unsigned int v194; // ecx
  bool v195; // r8
  struct tagSIZE v196; // rax
  unsigned int v197; // r12d
  unsigned int v198; // r10d
  unsigned int v199; // r9d
  __int64 v200; // rdx
  unsigned int v201; // eax
  int v202; // ecx
  unsigned int v203; // edi
  unsigned int v204; // r8d
  int v205; // edx
  struct tagRECT *v206; // rcx
  unsigned int v207; // esi
  __int64 v208; // r14
  __int64 v209; // rbx
  void (__fastcall *v210)(__int64, __int64); // rax
  __int128 v211; // xmm0
  __int64 v212; // rcx
  __int64 v213; // rdx
  __int64 v214; // r8
  __int64 v215; // r9
  char *v216; // rcx
  struct _MDEV *result; // rax
  int v218; // [rsp+38h] [rbp-D0h]
  int v219; // [rsp+38h] [rbp-D0h]
  int v220; // [rsp+40h] [rbp-C8h]
  struct _DPI_INFORMATION *v221; // [rsp+40h] [rbp-C8h]
  unsigned int v222; // [rsp+48h] [rbp-C0h]
  int v223; // [rsp+58h] [rbp-B0h]
  __int64 v224; // [rsp+60h] [rbp-A8h]
  PVOID Buffer; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v226; // [rsp+70h] [rbp-98h]
  int v227; // [rsp+74h] [rbp-94h]
  unsigned int v228[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _devicemodeW *v229; // [rsp+80h] [rbp-88h]
  HDEV v230; // [rsp+88h] [rbp-80h] BYREF
  int v231; // [rsp+90h] [rbp-78h]
  int v232; // [rsp+94h] [rbp-74h]
  HDEV v233; // [rsp+98h] [rbp-70h]
  int PruneFlag; // [rsp+A0h] [rbp-68h]
  int v235; // [rsp+A4h] [rbp-64h]
  int v236; // [rsp+A8h] [rbp-60h]
  unsigned int v237; // [rsp+ACh] [rbp-5Ch] BYREF
  PVOID v238; // [rsp+B0h] [rbp-58h]
  struct tagSIZE v239; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v240; // [rsp+C0h] [rbp-48h] BYREF
  HSEMAPHORE v241; // [rsp+C8h] [rbp-40h] BYREF
  int v242; // [rsp+D0h] [rbp-38h]
  struct _ERESOURCE **v243; // [rsp+D8h] [rbp-30h]
  HSEMAPHORE v244; // [rsp+E0h] [rbp-28h] BYREF
  void *Buf1; // [rsp+E8h] [rbp-20h] BYREF
  HSEMAPHORE v246; // [rsp+F0h] [rbp-18h] BYREF
  struct _ERESOURCE *v247[2]; // [rsp+F8h] [rbp-10h] BYREF
  struct tagSIZE v248[2]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v249; // [rsp+118h] [rbp+10h]
  unsigned int CurrentWin32kSessionId; // [rsp+190h] [rbp+88h] BYREF

  CurrentWin32kSessionId = a4;
  v223 = 0;
  v236 = 0;
  v10 = 0;
  v228[1] = a4 & 1;
  v227 = 0;
  v242 = 0;
  v13 = 0;
  v243 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v14 = a4;
  v15 = a5;
  WdLogSingleEntry4(4LL, a1, a3, v14, a5);
  WdLogGlobalForLineNumber = 20988;
  v18 = PALLOCMEM(96LL, 1936876615LL, v16, v17);
  v19 = (HDEV)v18;
  if ( !v18 )
    goto LABEL_341;
  *(_DWORD *)(v18 + 20) = 0;
  *(_QWORD *)(v18 + 24) = a3;
  v20 = (struct _devicemodeW *)PALLOCNOZ(0xDCu, 0x76656447u);
  v22 = 0LL;
  v229 = v20;
  if ( !v20 )
    goto LABEL_337;
  v23 = a9;
  v24 = -(__int64)a9;
  PruneFlag = a6 != 0;
  v25 = 1LL;
  v26 = a9 != 0LL ? 4 : 1;
  while ( 2 )
  {
    v231 = v26;
    while ( 2 )
    {
      while ( 2 )
      {
        DeviceFromName = 0LL;
        v235 = 1;
        v21 = 0LL;
        v224 = 0LL;
        v226 = 0;
        v28 = 0;
        v232 = 0;
        v237 = 0;
        v240 = 0;
        while ( 1 )
        {
          v29 = v13 < 0;
          if ( v13 )
            goto LABEL_119;
          v24 = (unsigned __int64)a1;
          v30 = 0LL;
          v233 = 0LL;
          v230 = 0LL;
          if ( a1 )
          {
            if ( !DeviceFromName )
            {
              DeviceFromName = DrvGetDeviceFromName(a1);
              v22 = 0LL;
              v224 = DeviceFromName;
              v31 = DeviceFromName;
              v25 = 1LL;
              if ( !a5 )
                v235 = 0;
LABEL_46:
              v49 = v30;
              v50 = v235;
              v51 = DeviceFromName;
              if ( v231 == 4 )
              {
                v224 = DeviceFromName;
                v232 = v28;
                if ( v49 )
                {
                  WdLogSingleEntry0(1LL);
                  v22 = 0LL;
                  WdLogGlobalForLineNumber = 21239;
                  v235 = v50;
                  v224 = v51;
                  v232 = v28;
                }
                v23 = a9;
                v30 = v49;
                goto LABEL_50;
              }
              v30 = v233;
              v23 = a9;
              v26 = v231;
              v10 = v227;
              goto LABEL_99;
            }
          }
          else if ( !DeviceFromName )
          {
            goto LABEL_57;
          }
          if ( v15 )
          {
            if ( v28 >= *((_DWORD *)v15 + 5) )
              goto LABEL_203;
            v32 = v28++;
            v24 = 56 * v32;
            DeviceFromName = v224;
            v232 = v28;
            v30 = *(HDEV *)((char *)v15 + v24 + 40);
            v233 = v30;
            Buffer = v30;
            v31 = *((_QWORD *)v30 + 321);
            if ( v31 == v224 )
              goto LABEL_115;
            v33 = v10;
            if ( (*(_DWORD *)(v31 + 160) & 8) != 0 )
              v33 = v10 ^ 1;
            if ( v33 )
              goto LABEL_114;
            v34 = v243;
            SEMOBJ<1>::SEMOBJ<1>((__int64 *)&v239, v243);
            SEMOBJ<4>::SEMOBJ<4>((struct _ERESOURCE **)&v241, (__int64)&Buffer);
            SEMOBJ<6>::SEMOBJ<6>((struct _ERESOURCE **)&v246, v34);
            SEMOBJ<8>::SEMOBJ<8>((struct _ERESOURCE **)&Buf1, (__int64)&Buffer);
            SEMOBJ<10>::SEMOBJ<10>((struct _ERESOURCE **)&v244, v34);
            SEMOBJ<19>::SEMOBJ<19>(v247, v34);
            ++*((_DWORD *)v30 + 3);
            v35 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v30 + 442);
            ++*((_DWORD *)v30 + 2);
            TrackObjectReferenceIncrement((__int64)v34, 1u, v35);
            if ( ((_DWORD)v30[10] & 0x400) != 0 )
            {
              GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
                (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                (__int64)*v34,
                v36);
              DrvEnableDisplay((struct PDEVOBJ *)&Buffer);
              GreAcquireSemaphore<19,>(v34, v37, v38);
            }
            v22 = 0LL;
            v39 = (*(_DWORD *)(v31 + 160) >> 2) & 1;
            v237 = 1;
            v240 = v39;
            if ( v247[0] )
            {
              GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
                (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                (__int64)v247[0],
                v36);
              v22 = 0LL;
              v247[0] = 0LL;
            }
            v40 = (struct _ERESOURCE *)v244;
            if ( v244 )
            {
              EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v244, v36);
              v41 = GreGetCurrentThreadCrossSessionCheck();
              if ( v41 )
              {
                v42 = (*((_BYTE *)v41 + 18))-- == 1;
                if ( v42 )
                  *(_QWORD *)v41 &= ~0x400uLL;
              }
              GreReleaseSemaphoreSharedInternal(v40);
              v22 = 0LL;
              v244 = 0LL;
            }
            v43 = (struct _ERESOURCE *)Buf1;
            if ( Buf1 )
            {
              EtwTraceGreLockReleaseSemaphore((__int64)L"DevLock", (int)Buf1, v36);
              v44 = GreGetCurrentThreadCrossSessionCheck();
              if ( v44 )
              {
                v42 = (*((_BYTE *)v44 + 16))-- == 1;
                if ( v42 )
                  *(_QWORD *)v44 &= ~0x100uLL;
              }
              GreReleaseSemaphoreSharedInternal(v43);
              v22 = 0LL;
              Buf1 = 0LL;
            }
            v45 = (struct _ERESOURCE *)v246;
            if ( v246 )
            {
              EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v246, v36);
              v46 = GreGetCurrentThreadCrossSessionCheck();
              if ( v46 )
              {
                v42 = (*((_BYTE *)v46 + 14))-- == 1;
                if ( v42 )
                  *(_QWORD *)v46 &= ~0x40uLL;
              }
              GreReleaseSemaphoreSharedInternal(v45);
              v22 = 0LL;
              v246 = 0LL;
            }
            v47 = (struct _ERESOURCE *)v241;
            if ( v241 )
            {
              EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v241, v36);
              v48 = GreGetCurrentThreadCrossSessionCheck();
              if ( v48 )
              {
                v42 = (*((_BYTE *)v48 + 12))-- == 1;
                if ( v42 )
                  *(_QWORD *)v48 &= ~0x10uLL;
              }
              GreReleaseSemaphoreSharedInternal(v47);
              v22 = 0LL;
              v241 = 0LL;
            }
            v21 = (__int64)v239;
            if ( v239 )
            {
              GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
                (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                *(_QWORD *)&v239,
                v36);
              v22 = 0LL;
              v239 = 0LL;
            }
            DeviceFromName = v224;
            v25 = 1LL;
            goto LABEL_46;
          }
LABEL_57:
          if ( v26 == 4 )
          {
            if ( (unsigned int)v21 >= *((unsigned __int16 *)v23 + 10) )
              goto LABEL_203;
            v56 = 296LL * (unsigned int)v21;
            if ( (*(_QWORD *)((_BYTE *)v23 + v56 + 56) & 0x1000000000LL) != 0 )
              goto LABEL_70;
            v57 = IsPrimaryPathInCloneGroup(v23, v21);
            v22 = 0LL;
            if ( !v57 || *(int *)((char *)v23 + v56 + 248) < 0 )
            {
              v25 = 1LL;
LABEL_70:
              DeviceFromName = v224;
              v226 = v21 + 1;
              goto LABEL_116;
            }
            v24 = (unsigned __int64)v243;
            v31 = (__int64)v243[148];
            if ( v31 )
            {
              while ( (*(_DWORD *)(v31 + 160) & 0x800000) == 0
                   || *(_DWORD *)(v31 + 240) != *(_DWORD *)((char *)v23 + v56 + 72)
                   || *(_DWORD *)(v31 + 244) != *(_DWORD *)((char *)v23 + v56 + 76)
                   || *(_DWORD *)(v31 + 248) != *(_DWORD *)((char *)v23 + v56 + 80) )
              {
                v31 = *(_QWORD *)(v31 + 128);
                if ( !v31 )
                  goto LABEL_89;
              }
            }
LABEL_50:
            if ( !v31 || (*(_DWORD *)(v31 + 164) & 1) != 0 )
            {
              if ( v30 )
                goto LABEL_97;
            }
            else
            {
              DisplayDriverNames = DrvGetDisplayDriverNames(v31);
              v22 = 0LL;
              v53 = (struct _DRV_NAMES *)DisplayDriverNames;
              if ( DisplayDriverNames )
              {
                v54 = v226;
                if ( v226 >= *((unsigned __int16 *)v23 + 10) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 21250;
                }
                v55 = 296 * v54;
                if ( _bittest64((const signed __int64 *)v23 + 37 * v54 + 7, 0x24u) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 21251;
                }
                if ( !*(_QWORD *)((char *)v23 + v55 + 304) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 21253;
                }
                v59 = v243;
                v60 = *((_WORD *)v243 + 584);
                if ( !v60 )
                {
                  v228[0] = 0;
                  GetDpiSetting(1LL, (__int64)v228);
                  v60 = v228[0];
                  *((_WORD *)v59 + 584) = v228[0];
                }
                *(_WORD *)(*(_QWORD *)((char *)v23 + v55 + 304) + 166LL) = v60;
                DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)v31);
                DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)v31);
                v30 = hCreateHDEV(
                        (struct tagGRAPHICS_DEVICE *)v31,
                        v53,
                        *(struct _devicemodeW **)((char *)v23 + v55 + 304),
                        a3,
                        DriverCapableOverRide,
                        DriverAccelerationsLevel,
                        v228[1],
                        (CurrentWin32kSessionId >> 2) & 1,
                        1u,
                        &v230);
                GreDeleteFastMutex((char *)v53, v63, v64, v65);
                v22 = 0LL;
                if ( v30 )
                {
                  v24 = *(unsigned int *)((char *)v23 + v55 + 276);
                  *((_DWORD *)v30 + 634) = v24;
LABEL_97:
                  v25 = 1LL;
                  ++v226;
                  goto LABEL_186;
                }
              }
              else if ( v30 )
              {
                goto LABEL_97;
              }
              v243[157] = (struct _ERESOURCE *)v31;
              DrvLogDisplayDriverEvent(2LL);
            }
            LODWORD(v21) = v226;
LABEL_89:
            v66 = IsPrimaryPathInCloneGroup(v23, v21);
            v22 = 0LL;
            if ( !v66 || *((int *)v23 + 74 * v67 + 62) < 0 )
            {
              WdLogSingleEntry0(1LL);
              v67 = v226;
              v22 = 0LL;
              WdLogGlobalForLineNumber = 21298;
            }
            v24 = 0LL;
            if ( *((_WORD *)v23 + 10) )
            {
              v68 = 296LL * v67;
              do
              {
                v69 = 296LL * (unsigned __int16)v24;
                if ( *(_DWORD *)((char *)v23 + v69 + 240) == *(_DWORD *)((char *)v23 + v68 + 240) )
                  *(_DWORD *)((char *)v23 + v69 + 248) = -1073741823;
                LOWORD(v24) = v24 + 1;
              }
              while ( (unsigned __int16)v24 < *((_WORD *)v23 + 10) );
            }
            goto LABEL_97;
          }
          v24 = (unsigned __int64)v243;
          v58 = 0;
          v31 = (__int64)v243[148];
          while ( v31 && v58 != v28 )
          {
            v31 = *(_QWORD *)(v31 + 128);
            ++v58;
          }
          v232 = ++v28;
          if ( *((_DWORD *)v243 + 287) )
          {
            if ( !v31 )
              goto LABEL_203;
            DeviceFromName = v224;
            if ( (*(_DWORD *)(v31 + 160) & 0x2800000) == 0 )
              goto LABEL_115;
            goto LABEL_46;
          }
LABEL_99:
          if ( !v31 )
            goto LABEL_203;
          if ( (*(_DWORD *)(v31 + 164) & 1) != 0 )
            goto LABEL_114;
          if ( a6 == -1 )
            PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v31);
          if ( !v30 )
          {
            v73 = *(_QWORD *)(W32GetSessionState(v24) + 88);
            if ( *(_DWORD *)(v73 + 1216) || v26 == 3 )
              v74 = -1;
            else
              v74 = *(_WORD *)(W32GetUserSessionState(v71, v70, v72) + 68744);
            PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)v31, v74, &v240, &v237);
            v22 = 0LL;
            if ( !PrimaryAttachFlags )
            {
LABEL_203:
              v13 = v223;
              goto LABEL_204;
            }
            if ( ((v26 - 1) & 0xFFFFFFFD) != 0 )
            {
              v76 = (int *)(v31 + 160);
              if ( v26 != 2 )
              {
                v78 = 1;
                WdLogSingleEntry0(1LL);
                v79 = *v76;
                v22 = 0LL;
                WdLogGlobalForLineNumber = 21406;
                if ( (v79 & 8) != 0 || v236 )
                {
                  v25 = 1LL;
                  goto LABEL_114;
                }
LABEL_134:
                v80 = DrvGetDisplayDriverNames(v31);
                v22 = 0LL;
                v238 = v80;
                if ( !v80 )
                  goto LABEL_113;
                v81 = *v76;
                Buffer = 0LL;
                v228[0] = 0;
                if ( (v81 & 8) != 0 )
                {
                  v78 = 4;
                  v82 = 0;
                  v83 = 0;
                }
                else
                {
                  v82 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)v31);
                  v83 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)v31);
                }
                if ( a2 )
                {
                  Src = a2;
                }
                else
                {
                  v85 = v229;
                  memset(v229, 0, sizeof(struct _devicemodeW));
                  Src = v85;
                  v85->dmSize = 220;
                }
                v86 = DrvProbeAndCaptureDevmode(
                        (struct tagGRAPHICS_DEVICE *)v31,
                        (struct _devicemodeW **)&Buffer,
                        (int *)v228,
                        0LL,
                        Src,
                        0,
                        PruneFlag,
                        a7,
                        a8,
                        0LL);
                if ( v86 == 1073741839 )
                {
                  DrvLogDisplayDriverEvent(4LL);
                }
                else
                {
                  if ( v86 == -1073741776 )
                  {
                    v101 = *(struct _devicemodeW **)(*((_QWORD *)v19 + 5) + 2584LL);
                    if ( Buffer && Buffer != v229 )
                    {
                      GreDeleteFastMutex((char *)Buffer, 0LL, v87, v88);
                      Buffer = 0LL;
                    }
                    v86 = DrvProbeAndCaptureDevmode(
                            (struct tagGRAPHICS_DEVICE *)v31,
                            (struct _devicemodeW **)&Buffer,
                            (int *)v228,
                            0LL,
                            v101,
                            0,
                            PruneFlag,
                            a7,
                            a8,
                            0LL);
                  }
                  if ( v86 < 0 )
                  {
                    DrvDxgkLogCodePointPacket(58LL, 2LL, 0, 0);
                    v89 = (char *)v238;
                    v94 = v233;
                    if ( (*(_DWORD *)(v31 + 160) & 0x2000000) != 0 )
                      *(_DWORD *)(v73 + 1144) = 4;
LABEL_146:
                    v95 = a2;
                    if ( (*(_DWORD *)(v31 + 160) & 8) != 0 || a2 )
                      goto LABEL_179;
                    if ( v94 )
                    {
LABEL_182:
                      if ( Buffer && Buffer != v229 )
                        GreDeleteFastMutex((char *)Buffer, v90, v92, v93);
                      GreDeleteFastMutex(v89, v90, v92, v93);
                      v30 = v233;
                      v22 = 0LL;
                      v25 = 1LL;
LABEL_186:
                      if ( !v30 )
                        goto LABEL_114;
                      goto LABEL_187;
                    }
                    DrvLogDisplayDriverEvent(4LL);
                    v99 = (char *)Buffer;
                    if ( Buffer )
                    {
                      if ( *((_DWORD *)Buffer + 42) == 4 )
                      {
                        DrvLogDisplayDriverEvent(5LL);
                        v99 = (char *)Buffer;
                      }
                      v100 = v229;
                      if ( v99 != (char *)v229 )
                      {
                        GreDeleteFastMutex(v99, v96, v97, v98);
                        Buffer = 0LL;
                      }
                    }
                    else
                    {
                      v100 = v229;
                    }
                    memset(v100, 0, sizeof(struct _devicemodeW));
                    v100->dmSize = 220;
                    v102 = DrvProbeAndCaptureDevmode(
                             (struct tagGRAPHICS_DEVICE *)v31,
                             (struct _devicemodeW **)&Buffer,
                             (int *)v228,
                             0LL,
                             v100,
                             1,
                             PruneFlag,
                             a7,
                             a8,
                             0LL);
                    v103 = Buffer;
                    if ( v102 < 0 )
                    {
LABEL_174:
                      if ( v103 )
                      {
                        dmPelsHeight = v103[44];
                        dmPelsWidth = v103[43];
                        v113 = v94 != 0LL;
                      }
                      else
                      {
                        dmPelsHeight = v100->dmPelsHeight;
                        v113 = 2LL;
                        dmPelsWidth = v100->dmPelsWidth;
                      }
                      DrvDxgkLogCodePointPacket(26LL, v113, dmPelsWidth, dmPelsHeight);
                      v95 = 0LL;
LABEL_179:
                      if ( !v94 && !v95 )
                      {
                        *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v91) + 88) + 1256LL) = v31;
                        DrvLogDisplayDriverEvent(2LL);
                      }
                      goto LABEL_182;
                    }
                    v104 = (CurrentWin32kSessionId >> 2) & 1;
                    v105 = hCreateHDEV(
                             (struct tagGRAPHICS_DEVICE *)v31,
                             (struct _DRV_NAMES *)v89,
                             (struct _devicemodeW *)Buffer,
                             a3,
                             v82,
                             v83,
                             v228[1],
                             v104,
                             1u,
                             &v230);
                    v233 = v105;
                    if ( !v105 )
                    {
                      v103 = Buffer;
                      if ( *((_DWORD *)Buffer + 43) == 640
                        && *((_DWORD *)Buffer + 44) == 480
                        && *((_DWORD *)Buffer + 42) == 4 )
                      {
                        goto LABEL_172;
                      }
                      v108 = v229;
                      if ( Buffer != v229 )
                      {
                        GreDeleteFastMutex((char *)Buffer, v106, (__int64)Buffer, v107);
                        Buffer = 0LL;
                        v108 = v229;
                      }
                      memset(v108, 0, sizeof(struct _devicemodeW));
                      v109 = v229;
                      v229->dmSize = 220;
                      v110 = a8;
                      v109->dmBitsPerPel = (*(_DWORD *)(v31 + 160) & 0x800000) != 0 ? 32 : 4;
                      v220 = a7;
                      v219 = PruneFlag;
                      v109->dmPelsWidth = 640;
                      v109->dmPelsHeight = 480;
                      v109->dmFields = 1835008;
                      if ( (int)DrvProbeAndCaptureDevmode(
                                  (struct tagGRAPHICS_DEVICE *)v31,
                                  (struct _devicemodeW **)&Buffer,
                                  (int *)v228,
                                  0LL,
                                  v109,
                                  0,
                                  v219,
                                  v220,
                                  v110,
                                  0LL) >= 0 )
                      {
                        v105 = hCreateHDEV(
                                 (struct tagGRAPHICS_DEVICE *)v31,
                                 (struct _DRV_NAMES *)v89,
                                 (struct _devicemodeW *)Buffer,
                                 a3,
                                 v82,
                                 v83,
                                 v228[1],
                                 v104,
                                 1u,
                                 &v230);
                        v103 = Buffer;
                        v233 = v105;
LABEL_172:
                        v94 = v105;
LABEL_173:
                        v100 = v229;
                        goto LABEL_174;
                      }
                    }
                    v103 = Buffer;
                    v94 = v233;
                    goto LABEL_173;
                  }
                }
                v222 = v78;
                v89 = (char *)v238;
                v233 = hCreateHDEV(
                         (struct tagGRAPHICS_DEVICE *)v31,
                         (struct _DRV_NAMES *)v238,
                         (struct _devicemodeW *)Buffer,
                         a3,
                         v82,
                         v83,
                         v228[1],
                         (CurrentWin32kSessionId >> 2) & 1,
                         v222,
                         &v230);
                v94 = v233;
                if ( !v233 && (*(_DWORD *)(v31 + 160) & 0x2000000) != 0 )
                  *(_DWORD *)(v73 + 1144) = 5;
                goto LABEL_146;
              }
              if ( (*v76 & 8) == 0 )
              {
                if ( (*v76 & 0x2000000) != 0 )
                  goto LABEL_113;
                if ( v236 )
                  goto LABEL_113;
                IsDisconnectConnection = UserIsDisconnectConnection(v24, v21, v25, 0LL);
                v22 = 0LL;
                if ( IsDisconnectConnection )
                  goto LABEL_113;
                goto LABEL_133;
              }
              if ( !v237 )
                goto LABEL_113;
            }
            else
            {
              if ( !v237 )
                goto LABEL_113;
              v76 = (int *)(v31 + 160);
              if ( (*(_DWORD *)(v31 + 160) & 8) == 0 )
              {
                if ( v227 )
                  goto LABEL_113;
                goto LABEL_133;
              }
            }
            if ( !v227 )
              goto LABEL_113;
LABEL_133:
            v78 = 1;
            goto LABEL_134;
          }
LABEL_187:
          WdLogSingleEntry0(5LL);
          v114 = *(_DWORD *)(v31 + 160);
          v22 = 0LL;
          v25 = 1LL;
          WdLogGlobalForLineNumber = 21740;
          v236 = 1;
          if ( v240 )
            v115 = v114 | 4;
          else
            v115 = v114 & 0xFFFFFFFB;
          *(_DWORD *)(v31 + 160) = v115;
          if ( !v230 )
          {
            if ( a5 )
            {
              v116 = *((_DWORD *)a5 + 5);
              if ( v116 )
              {
                v117 = (HDEV *)((char *)a5 + 40);
                v118 = v116;
                do
                {
                  v119 = *v117;
                  v117 += 7;
                  v120 = v230;
                  if ( v31 == *((_QWORD *)v119 + 321) )
                    v120 = v119;
                  v230 = v120;
                  --v118;
                }
                while ( v118 );
                v22 = 0LL;
                v25 = 1LL;
              }
            }
          }
          v121 = v19 + 5;
          *((_QWORD *)v19 + 7 * *((unsigned int *)v19 + 5) + 5) = v30;
          *((_QWORD *)v19 + 7 * *((unsigned int *)v19 + 5) + 6) = v230;
          v122 = *((_DWORD *)v19 + 5);
          v24 = v122 + 2;
          if ( (unsigned int)v24 < v122 )
            goto LABEL_114;
          *v121 = v122 + 1;
          v123 = v19;
          v24 *= 96LL;
          if ( v24 <= 0xFFFFFFFF )
          {
            v124 = (HDEV)PALLOCMEM(v24, 1936876615LL, 1LL, 0LL);
            v22 = 0LL;
            v19 = v124;
            if ( v124 )
            {
              memmove(v124, v123, 96LL * (unsigned int)*v121);
              GreDeleteFastMutex((char *)v123, v125, v126, v127);
              v22 = 0LL;
LABEL_113:
              v25 = 1LL;
LABEL_114:
              DeviceFromName = v224;
LABEL_115:
              v15 = a5;
LABEL_116:
              v13 = v223;
              goto LABEL_117;
            }
          }
          DeviceFromName = v224;
          v13 = -1073741670;
          v19 = v123;
          v223 = -1073741670;
          v15 = a5;
          v25 = 1LL;
LABEL_117:
          v23 = a9;
          v26 = v231;
          v21 = v226;
          v10 = v227;
          if ( !v235 )
            break;
          v28 = v232;
        }
        v29 = v13 < 0;
LABEL_119:
        if ( v29 )
          goto LABEL_336;
LABEL_204:
        v128 = v19;
        if ( v26 == 4 )
        {
          if ( !v236 )
          {
            WdLogSingleEntry1(2LL, -1073741823LL);
            WdLogGlobalForLineNumber = 21866;
            goto LABEL_336;
          }
          WdLogSingleEntry0(5LL);
          v25 = 1LL;
          WdLogGlobalForLineNumber = 21856;
          v26 = 1;
          v231 = 1;
LABEL_207:
          v15 = a5;
          v10 = 1;
          v227 = 1;
          v22 = 0LL;
          continue;
        }
        break;
      }
      if ( v236 )
      {
        if ( !v10 )
        {
          WdLogSingleEntry0(5LL);
          v25 = 1LL;
          WdLogGlobalForLineNumber = 21924;
          goto LABEL_207;
        }
        if ( (CurrentWin32kSessionId & 2) != 0 )
          goto LABEL_339;
        a6 = 0;
        a9 = 0LL;
        v129 = 0LL;
        v130 = (MULTIDEVLOCKOBJ *)Win32AllocPoolImpl(256LL, 0x60uLL, 0x6C6D6847u);
        v22 = 0LL;
        v131 = v130;
        if ( !v130 )
          goto LABEL_336;
        *(_QWORD *)v130 = 1LL;
        *((_QWORD *)v130 + 1) = 0LL;
        MULTIDEVLOCKOBJ::vInit(v130, (struct _MDEV *)v19);
        v132 = v131;
        v133 = 0;
        if ( (*(_DWORD *)v131 & 1) == 0 )
          goto LABEL_335;
        MULTIDEVLOCKOBJ::vLock(v131);
        v134 = *((_DWORD *)v19 + 5);
        v135 = 0;
        v244 = (HSEMAPHORE)v131;
        LODWORD(a5) = 0;
        v230 = v19;
        if ( !v134 )
          goto LABEL_237;
        v244 = (HSEMAPHORE)v131;
        LODWORD(a5) = 0;
        v230 = v19;
        while ( 1 )
        {
          v136 = *(_QWORD *)(*((_QWORD *)v19 + 7 * v135 + 5) + 2568LL);
          v137 = *(_DWORD *)(v136 + 160);
          if ( (v137 & 8) == 0 )
            break;
          if ( (v137 & 4) != 0 )
          {
            v137 &= ~4u;
            *(_DWORD *)(v136 + 160) = v137;
LABEL_231:
            if ( (v137 & 4) != 0 )
            {
              if ( v129 )
              {
                LODWORD(a5) = -1073741438;
                *(_DWORD *)(v136 + 160) = v137 & 0xFFFFFFFB;
              }
              else
              {
                v129 = (struct D3DKMT_GETPATHSMODALITY *)v136;
                a6 = v135;
              }
            }
          }
          v134 = *((_DWORD *)v19 + 5);
          if ( ++v135 >= v134 )
          {
            a9 = v129;
LABEL_237:
            v138 = 16 * v134;
            v238 = (PVOID)PALLOCNOZ(v138, 0x73726447u);
            v139 = v238;
            v140 = (void *)PALLOCNOZ(v138, 0x73726447u);
            Buf1 = v140;
            v144 = v140;
            if ( v139 )
            {
              if ( v140 )
              {
                v145 = 0;
                v228[1] = 0;
                v146 = 0;
                if ( *((_DWORD *)v19 + 5) )
                {
                  do
                  {
                    v147 = 2LL * v146;
                    v148 = *((_QWORD *)v19 + 7 * v146 + 5);
                    v149 = *(_DWORD **)(v148 + 2584);
                    v139[2 * v147] = v149[19];
                    v139[2 * v147 + 1] = v149[20];
                    v139[2 * v147 + 2] = v149[19] + v149[43];
                    v139[2 * v147 + 3] = v149[20] + v149[44];
                    v150 = *(_QWORD *)(v148 + 2568);
                    if ( (*(_DWORD *)(v150 + 160) & 8) == 0 )
                    {
                      if ( !v129 && !v149[19] && !v149[20] )
                      {
                        a6 = v146;
                        v129 = (struct D3DKMT_GETPATHSMODALITY *)v150;
                      }
                      ++v145;
                    }
                    ++v146;
                  }
                  while ( v146 < *((_DWORD *)v19 + 5) );
                  v144 = Buf1;
                  v228[1] = v145;
                  a9 = v129;
                }
                memmove(v144, v139, v138);
                v152 = 0;
                v157 = *(HSEMAPHORE *)(W32GetSessionState(v151) + 88);
                v241 = v157;
                if ( !*((_DWORD *)v157 + 300) )
                {
                  v158 = (unsigned int)UserIsRemoteAndNotDisconnectConnection(v154, v153, v155, v156)
                       ? 0
                       : *((_DWORD *)v157 + 302);
                  *((_DWORD *)v157 + 303) = v158;
                  if ( v158 )
                  {
                    v159 = *((_DWORD *)v157 + 306);
                    if ( v159 > 0x60 )
                    {
                      if ( v159 >= 0x1E0 )
                        LOWORD(v159) = 480;
                    }
                    else
                    {
                      LOWORD(v159) = 96;
                    }
                    *((_WORD *)v157 + 584) = v159;
                  }
                }
                v160 = (HSEMAPHORE)*((_QWORD *)v19 + 7 * a6 + 5);
                v246 = v160;
                *(_DWORD *)(*((_QWORD *)v160 + 321) + 160LL) |= 4u;
                if ( *((_DWORD *)v19 + 5) )
                {
                  v161 = a6;
                  while ( 1 )
                  {
                    v239 = (struct tagSIZE)(56LL * v152);
                    v162 = *(_QWORD *)((char *)v128 + *(_QWORD *)&v239 + 40);
                    if ( (*(_DWORD *)(*(_QWORD *)(v162 + 2568) + 160LL) & 0x800000) != 0 )
                    {
                      v163 = 0;
                      if ( v152 == v161 )
                        v163 = 32;
                      v164 = *(_DWORD *)(v162 + 2532) & 0xFFFFFFDF | v163;
                      *(_DWORD *)(v162 + 2532) = v164;
                      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v164, 32LL);
                      v166 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(DxgkWin32kInterface
                                                                                                 + 520))(
                               *(_QWORD *)(*(_QWORD *)(v162 + 2568) + 232LL),
                               *(unsigned int *)(*(_QWORD *)(v162 + 2568) + 248LL),
                               0LL,
                               v162 + 2120,
                               v162 + 2440);
                      if ( v166 < 0 )
                      {
                        WdLogSingleEntry3(2LL, v166);
                        WdLogGlobalForLineNumber = 22172;
                      }
                      v167 = *(_DWORD *)(v162 + 2536);
                      v19 = v230;
                    }
                    else
                    {
                      if ( !(unsigned int)Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline()
                        || (*(_DWORD *)(*(_QWORD *)(v162 + 2568) + 160LL) & 0x2000000) == 0 )
                      {
                        goto LABEL_274;
                      }
                      CurrentWin32kSessionId = 0;
                      DpiInfoFromPrimaryMonitor = UserGetDpiInfoFromPrimaryMonitor(v162 + 2440, &CurrentWin32kSessionId);
                      if ( DpiInfoFromPrimaryMonitor < 0 )
                      {
                        if ( DpiInfoFromPrimaryMonitor == -1073741275 )
                        {
                          WdLogSingleEntry0(4LL);
                          WdLogGlobalForLineNumber = 22195;
                        }
                        else
                        {
                          WdLogSingleEntry1(2LL, DpiInfoFromPrimaryMonitor);
                          WdLogGlobalForLineNumber = 22200;
                        }
                        goto LABEL_274;
                      }
                      v167 = CurrentWin32kSessionId;
                    }
                    *(_DWORD *)((char *)v128 + *(_QWORD *)&v239 + 92) = v167;
LABEL_274:
                    if ( ++v152 >= *((_DWORD *)v19 + 5) )
                    {
                      v160 = v246;
                      v157 = v241;
                      v129 = a9;
                      v139 = v238;
                      break;
                    }
                  }
                }
                v169 = 0;
                if ( !*((_DWORD *)v157 + 300) )
                {
                  *((_DWORD *)v157 + 303) = 0;
                  CurrentWin32kSessionId = 0;
                  if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
                  {
                    v178 = *((_DWORD *)v160 + 886);
                    if ( v178 )
                    {
                      *((_WORD *)v157 + 584) = (96 * HIWORD(v178) + 50) / 0x64u;
                    }
                    else
                    {
                      if ( wcsncmp(*((const wchar_t **)v129 + 25), L"WORKERDD", *((unsigned int *)v129 + 64))
                        && wcsncmp(*((const wchar_t **)v129 + 25), L"TSDDD", *((unsigned int *)v129 + 64)) )
                      {
                        *((_DWORD *)v157 + 302) = 1;
                        *((_DWORD *)v157 + 303) = 1;
                      }
                      GetDpiSetting(2LL, (__int64)&CurrentWin32kSessionId);
                      v179 = CurrentWin32kSessionId;
                      *((_DWORD *)v157 + 306) = CurrentWin32kSessionId;
                      if ( v179 <= 0x60 )
                      {
                        v179 = 96;
                        CurrentWin32kSessionId = 96;
                      }
                      if ( v179 >= 0x1E0 )
                      {
                        LOWORD(v179) = 480;
                        CurrentWin32kSessionId = 480;
                      }
                      *((_WORD *)v157 + 584) = v179;
                    }
                    for ( i = 0;
                          i < *((_DWORD *)v19 + 5);
                          *(_WORD *)(*(_QWORD *)(v183 + 2584) + 166LL) = *((_WORD *)v157 + 584) )
                    {
                      v181 = i++;
                      v182 = 56 * v181;
                      LODWORD(v181) = *((unsigned __int16 *)v157 + 584);
                      v183 = *(_QWORD *)((char *)v128 + v182 + 40);
                      *(_DWORD *)(v183 + 2164) = v181;
                      *(_DWORD *)(v183 + 2160) = v181;
                    }
                  }
                  else
                  {
                    v170 = (unsigned int)(96 * *((_DWORD *)v160 + 613) + 50);
                    if ( (unsigned __int16)((unsigned int)v170 / 0x64) )
                      SetDpiSetting(v170, (unsigned __int16)((unsigned int)v170 / 0x64));
                    v171 = *((_DWORD *)v157 + 302);
                    *((_DWORD *)v157 + 303) = v171;
                    if ( v171 )
                    {
                      v172 = *((_DWORD *)v157 + 306);
                      CurrentWin32kSessionId = v172;
                      if ( v172 <= 0x60 )
                      {
                        v172 = 96;
                        CurrentWin32kSessionId = 96;
                      }
                      if ( v172 >= 0x1E0 )
                      {
                        LOWORD(v172) = 480;
                        CurrentWin32kSessionId = 480;
                      }
                      v173 = v157 + 292;
                      *((_WORD *)v157 + 584) = v172;
                    }
                    else
                    {
                      v174 = *((_DWORD *)v160 + 612);
                      v173 = v157 + 292;
                      if ( v174 )
                        *v173 = (96 * v174 + 50) / 0x64u;
                      else
                        *v173 = 96;
                    }
                    for ( j = 0; j < *((_DWORD *)v19 + 5); ++j )
                    {
                      v176 = (unsigned __int16)*v173;
                      v177 = *((_QWORD *)v128 + 7 * j + 5);
                      *(_DWORD *)(v177 + 2164) = v176;
                      *(_DWORD *)(v177 + 2160) = v176;
                      *(_WORD *)(*(_QWORD *)(v177 + 2584) + 166LL) = *v173;
                      if ( *((_DWORD *)v157 + 303) )
                      {
                        *(_DWORD *)(v177 + 2448) = (100 * (unsigned int)(unsigned __int16)*v173 + 48) / 0x60;
                        *(_DWORD *)(v177 + 2524) = 1234568;
                      }
                    }
                  }
                  *((_DWORD *)v157 + 300) = 1;
                }
                v184 = UserRemoteConnectedSessionUsingXddm();
                v187 = v230;
                if ( v184 )
                {
                  v185 = 0;
                  v169 = 1;
                  LODWORD(a9) = 1;
                  if ( *((_DWORD *)v19 + 5) )
                  {
                    v188 = 0;
                    do
                    {
                      v189 = *((_QWORD *)v128 + 7 * v188 + 5);
                      v190 = *(_DWORD *)(*(_QWORD *)(v189 + 2584) + 84LL);
                      if ( v190 == 1 || (v191 = 0, v190 == 3) )
                        v191 = 1;
                      LOBYTE(CurrentWin32kSessionId) = v191;
                      v192 = (HSEMAPHORE)AdjustForOrientation(
                                           *(_DWORD *)(v189 + 2128) / 0x3E8u,
                                           *(_DWORD *)(v189 + 2132) / 0x3E8u,
                                           v191);
                      v193 = *(_DWORD *)(v189 + 2140);
                      v194 = *(_DWORD *)(v189 + 2136);
                      v241 = v192;
                      v196 = AdjustForOrientation(v194, v193, v195);
                      v197 = *(_DWORD *)(v189 + 3544);
                      v239 = v196;
                      v247[0] = (struct _ERESOURCE *)(v198 | 0x2000000000LL);
                      v247[1] = (struct _ERESOURCE *)v248;
                      *(_OWORD *)&v248[0].cx = 0LL;
                      v249 = 0LL;
                      if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v247) < 0 )
                      {
                        WdLogSingleEntry0(1LL);
                        WdLogGlobalForLineNumber = 22389;
                      }
                      v221 = (struct _DPI_INFORMATION *)(v189 + 2440);
                      if ( v197 )
                      {
                        FillDpiInfo(
                          (const struct tagSIZE *)&v241,
                          &v239,
                          (struct tagSIZE)v248,
                          v199,
                          0,
                          HIWORD(v197),
                          v218,
                          v221);
                        *(_DWORD *)(v189 + 2532) |= 0x200u;
                        v169 = (int)a9;
                      }
                      else
                      {
                        *(_DWORD *)(v189 + 2532) &= ~0x200u;
                        v169 = 0;
                        v201 = *((unsigned __int16 *)v157 + 584);
                        LODWORD(a9) = 0;
                        FillDpiInfo(
                          (const struct tagSIZE *)&v241,
                          &v239,
                          (struct tagSIZE)v248,
                          v199,
                          v201,
                          0,
                          v218,
                          v221);
                      }
                      GetRemoteScaleOverrideTestHook(
                        (const unsigned __int16 *)(*(_QWORD *)(v189 + 2568) + 64LL),
                        v200,
                        (struct _DPI_INFORMATION *)(v189 + 2440));
                      ++v188;
                      *(_DWORD *)(v189 + 2532) = *(_DWORD *)(v189 + 2532) & 0xFFFFFF7F | ((unsigned __int8)CurrentWin32kSessionId << 7);
                      v185 = 0;
                    }
                    while ( v188 < *((_DWORD *)v187 + 5) );
                    v160 = v246;
                  }
                  v139 = v238;
                  v242 = 1;
                }
                UserSetScaleFactorsFromRemoteMetric(v169, v185, v186);
                v202 = *((_DWORD *)v160 + 613);
                v203 = v228[1];
                v144 = Buf1;
                v204 = a6;
                v205 = 3 * v202;
                v206 = (struct tagRECT *)Buf1;
                *((_WORD *)v157 + 585) = (32 * v205 + 50) / 0x64u;
                AlignRects(v206, v203, v204);
                if ( memcmp(v144, v139, 16LL * v203) )
                {
                  WdLogSingleEntry0(3LL);
                  WdLogGlobalForLineNumber = 22470;
                }
                v207 = 0;
                if ( *((_DWORD *)v187 + 5) )
                {
                  do
                  {
                    v208 = 56LL * v207;
                    v209 = *(_QWORD *)((char *)v128 + v208 + 40);
                    *(_QWORD *)(v209 + 2576) = *((_QWORD *)v144 + 2 * v207);
                    v210 = *(void (__fastcall **)(__int64, __int64))(v209 + 3376);
                    if ( v210 )
                      v210((*(_QWORD *)(v209 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v209 + 2544) != 0LL), 2LL);
                    v211 = *((_OWORD *)v144 + v207++);
                    *(_OWORD *)((char *)v128 + v208 + 56) = v211;
                    *(_DWORD *)((char *)v128 + v208 + 72) = *(_DWORD *)(HDEV)(v209 + 2448);
                  }
                  while ( v207 < *((_DWORD *)v187 + 5) );
                  v139 = v238;
                }
                v19 = v230;
                CalculateUniformSpaceMapping((struct _MDEV *)v230);
              }
              GreDeleteFastMutex((char *)v139, v141, v142, v143);
            }
            if ( v144 )
              GreDeleteFastMutex((char *)v144, v141, v142, v143);
            v132 = (MULTIDEVLOCKOBJ *)v244;
            MULTIDEVLOCKOBJ::vUnlock((MULTIDEVLOCKOBJ *)v244);
            if ( v242 )
            {
              CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v212);
              ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &CurrentWin32kSessionId, 0, 0);
            }
            v133 = (int)a5;
LABEL_335:
            MULTIDEVLOCKOBJ::`scalar deleting destructor'(v132);
            if ( v133 < 0 )
              goto LABEL_336;
LABEL_339:
            v216 = (char *)v229;
            goto LABEL_340;
          }
        }
        if ( !v129 )
          a6 = v135;
        goto LABEL_231;
      }
      if ( v26 == 1 )
      {
        WdLogSingleEntry0(5LL);
        v15 = a5;
        v26 = 2;
        v22 = 0LL;
        WdLogGlobalForLineNumber = 21882;
        v231 = 2;
        v25 = 1LL;
        if ( a8 )
          a8 = 0;
        continue;
      }
      break;
    }
    if ( v26 == 2 && (unsigned int)UserIsWddmConnectedSession(v24, v21, v25, 0LL) )
    {
      WdLogSingleEntry0(5LL);
      v15 = a5;
      v26 = 3;
      WdLogGlobalForLineNumber = 21910;
      v22 = 0LL;
      v25 = 1LL;
      continue;
    }
    break;
  }
  if ( v232 )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 21967;
  }
  else
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 21953;
  }
LABEL_336:
  if ( !v19 )
    goto LABEL_339;
LABEL_337:
  DrvBackoutMDEV((struct _MDEV *)v19, v21);
  GreDeleteFastMutex((char *)v19, v213, v214, v215);
  v216 = (char *)v229;
  v19 = 0LL;
  if ( !v229 )
    goto LABEL_341;
LABEL_340:
  GreDeleteFastMutex(v216, v21, v25, v22);
LABEL_341:
  WdLogSingleEntry1(5LL, v19);
  result = (struct _MDEV *)v19;
  WdLogGlobalForLineNumber = 22646;
  return result;
}
