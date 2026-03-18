/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198
 * Callers:
 *     DrvChangeDisplaySettings @ 0x14013C570 (DrvChangeDisplaySettings.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x140156E18 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ApplyPathsModality @ 0x1401C9D0C (ApplyPathsModality.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x14001A530 (GreAcquireHmgrSemaphore.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 *     GreReleaseHmgrSemaphore @ 0x140045580 (GreReleaseHmgrSemaphore.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140047938 (--$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400479D0 (--$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140048BFC (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E29C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14004E2F4 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x14004E400 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     UserIsDisconnectConnection @ 0x14006BBA0 (UserIsDisconnectConnection.c)
 *     DrvDestroyMDEV @ 0x14006E2AC (DrvDestroyMDEV.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x140070EB0 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140071620 (bDynamicProcessAllDriverRealizations.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140071E64 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1400725DC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1400736E0 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1400747F4 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x140074A98 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     DrvDisableMDEV @ 0x140074C10 (DrvDisableMDEV.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008638C (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400864A4 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14008675C (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140086CA8 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DrvEnableMDEV @ 0x1400879E0 (DrvEnableMDEV.c)
 *     GreHideSprites @ 0x1400940D8 (GreHideSprites.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1400C3120 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     DrvLogDrvChangeDisplaySettingsFailures @ 0x1400E1094 (DrvLogDrvChangeDisplaySettingsFailures.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1401189AC (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401190B8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     GreUpdateSharedDevCaps @ 0x1401216C0 (GreUpdateSharedDevCaps.c)
 *     DrvUpdateDisplayDriverParameters @ 0x14012292C (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1401272A0 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x14012DDC0 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x14012DE38 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14012DECC (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x140134164 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140134208 (--$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x14013EED4 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1401417B0 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x14014B8F4 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x14014BD44 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014D960 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140152808 (--$GreReleaseSemaphoreExclusive@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     IsGrepReleasePublicPFTSemaphoreExSupported @ 0x14015322C (IsGrepReleasePublicPFTSemaphoreExSupported.c)
 *     IsGrepAcquirePublicPFTSemaphoreExSupported @ 0x140154018 (IsGrepAcquirePublicPFTSemaphoreExSupported.c)
 *     IsGrepReleaseRFONTListSemaphoreExSupported @ 0x1401569AC (IsGrepReleaseRFONTListSemaphoreExSupported.c)
 *     IsGreHideSpritesSupported @ 0x140157240 (IsGreHideSpritesSupported.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14015CBF0 (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x14015E998 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     bDynamicModeChange @ 0x1401793D8 (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x14017A4B0 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ??$GreAcquireSemaphore@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14019A870 (--$GreAcquireSemaphore@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x14019B544 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019CA20 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     IsGrepAcquireRFONTListSemaphoreExSupported @ 0x1401A1030 (IsGrepAcquireRFONTListSemaphoreExSupported.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401ABE78 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401CBA50 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x14023E54C (IsDrvRealizeHalftonePaletteSupported.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsInternal(
        __int64 a1,
        struct _ERESOURCE *a2,
        struct D3DKMT_GETPATHSMODALITY *a3,
        void *a4,
        HDEV *a5,
        char **a6,
        unsigned int a7,
        unsigned int a8,
        bool *a9)
{
  struct _devicemodeW *Src; // r15
  int PruneFlag; // r14d
  __int64 v12; // rcx
  unsigned int v13; // edi
  int v14; // ebx
  int v15; // esi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rcx
  __int64 dmDisplayOrientation; // rbx
  __int64 dmBitsPerPel; // rsi
  DWORD dmPelsHeight; // r14d
  DWORD dmPelsWidth; // r15d
  __int64 CurrentProcess; // rax
  int updated; // eax
  unsigned int v29; // r13d
  int v30; // ecx
  struct _MDEV *MDEV; // rsi
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r14
  int v37; // ebx
  char **v38; // rsi
  int v39; // ebx
  __int64 v40; // rcx
  __int16 v41; // r14
  struct _MDEV *v42; // rax
  int v43; // eax
  bool *v44; // rbx
  unsigned int v45; // r15d
  bool v46; // r14
  __int64 v47; // rbx
  int v48; // eax
  int v49; // r15d
  HDEV v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // rcx
  MULTIDEVLOCKOBJ *v53; // r14
  MULTIDEVLOCKOBJ *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned int v57; // r14d
  __int64 v58; // rcx
  MULTIDEVLOCKOBJ *v59; // r13
  MULTIDEVLOCKOBJ *v60; // r14
  void *v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned int v64; // edx
  unsigned int v65; // ecx
  unsigned int v66; // edx
  __int64 v67; // r14
  __int64 v68; // r14
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  void (*v73)(void); // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  void (*v76)(void); // rax
  __int64 v77; // rcx
  int v78; // eax
  int v79; // r9d
  struct D3DKMT_GETPATHSMODALITY *v80; // r10
  int v81; // r11d
  __int64 CloneHDEV; // rax
  unsigned int v83; // ecx
  __int64 v84; // r14
  __int64 v85; // rax
  HDEV v86; // rcx
  int v87; // eax
  HDEV v88; // rdx
  __int64 v89; // rcx
  unsigned int v90; // r14d
  unsigned int v91; // r9d
  unsigned int v92; // r8d
  __int64 v93; // r13
  HDEV v94; // rdx
  __int64 v95; // r15
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rcx
  void (*v100)(void); // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  void (*v103)(void); // rax
  BOOL v104; // r8d
  void *v105; // r9
  HDEV v106; // rax
  HDEV v107; // r14
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rcx
  void (*v112)(void); // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  void (*v115)(void); // rax
  __int64 v116; // rcx
  HDEV v117; // rdx
  HDEV v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rcx
  void (*v124)(void); // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  void (*v127)(void); // rax
  __int64 v128; // rax
  signed __int32 v129; // ett
  signed __int32 v130; // ett
  __int64 *v131; // rcx
  __int64 v132; // rbx
  __int64 v133; // rax
  __int64 v134; // r14
  __int64 v135; // rdx
  void (__fastcall *v136)(__int64, __int64); // rax
  __int64 v137; // r14
  char *v138; // rbx
  __int64 v139; // rcx
  unsigned int k; // edx
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 m; // rax
  unsigned int n; // r9d
  __int64 v145; // r8
  __int64 v146; // rax
  __int64 v147; // rdx
  int v148; // ecx
  int v149; // r10d
  PDEV *v150; // rcx
  unsigned int i; // ebx
  unsigned int v152; // r8d
  unsigned int j; // edx
  __int64 v154; // rcx
  int v155; // [rsp+50h] [rbp-B0h]
  int v156; // [rsp+54h] [rbp-ACh]
  int v157; // [rsp+54h] [rbp-ACh]
  unsigned int v158; // [rsp+58h] [rbp-A8h]
  int v159; // [rsp+5Ch] [rbp-A4h]
  int v160; // [rsp+5Ch] [rbp-A4h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-A0h]
  HDEV v162; // [rsp+60h] [rbp-A0h]
  __int64 v163; // [rsp+68h] [rbp-98h]
  MULTIDEVLOCKOBJ *v164; // [rsp+70h] [rbp-90h]
  HDEV v165; // [rsp+78h] [rbp-88h]
  MULTIDEVLOCKOBJ *v166; // [rsp+80h] [rbp-80h]
  struct D3DKMT_GETPATHSMODALITY *v168; // [rsp+88h] [rbp-78h]
  unsigned int v169; // [rsp+98h] [rbp-68h]
  PVOID Buffer; // [rsp+A0h] [rbp-60h] BYREF
  int v171; // [rsp+A8h] [rbp-58h] BYREF
  void *v172; // [rsp+B0h] [rbp-50h]
  struct _ERESOURCE *v173; // [rsp+B8h] [rbp-48h] BYREF
  HDEV v174; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v175; // [rsp+C8h] [rbp-38h]
  __int64 v176; // [rsp+D0h] [rbp-30h] BYREF
  HDEV v177; // [rsp+E0h] [rbp-20h] BYREF
  HDEV v178; // [rsp+E8h] [rbp-18h] BYREF
  HDEV v179; // [rsp+F0h] [rbp-10h] BYREF
  struct _BASEOBJECT *v180; // [rsp+F8h] [rbp-8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v182[3]; // [rsp+110h] [rbp+10h] BYREF
  HDEV v183[2]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v184; // [rsp+138h] [rbp+38h]
  __int128 v185; // [rsp+148h] [rbp+48h]
  __int64 v186; // [rsp+158h] [rbp+58h]

  Src = (struct _devicemodeW *)a2;
  v173 = a2;
  v172 = a4;
  PruneFlag = a7 != 0;
  DestinationString = 0LL;
  p_DestinationString = 0LL;
  Buffer = 0LL;
  v171 = 0;
  v155 = 0;
  v164 = 0LL;
  v166 = 0LL;
  v163 = *(_QWORD *)(W32GetSessionState(a9) + 88);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v12, &DrvChangeDisplaySettingsStart, 0LL);
  v13 = a8;
  v14 = -__CFSHR__(a8, 3);
  v159 = v14;
  v15 = -__CFSHR__(a8, 2);
  WdLogSingleEntry5(4LL, a1, v15, -(a8 & 1), a7, v14);
  WdLogGlobalForLineNumber = 24872;
  if ( Src )
  {
    if ( !a1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 24880;
    }
    if ( a3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 24886;
    }
  }
  *a6 = 0LL;
  *(_DWORD *)(v163 + 1064) = 0;
  *(_QWORD *)(v163 + 1072) = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
  v18 = 0LL;
  if ( IsEnabledDeviceUsageNoInline && a9 )
    *a9 = 0;
  if ( a1 )
  {
    if ( a7 == -1 )
      PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)a1);
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 64));
    v18 = 0LL;
    p_DestinationString = &DestinationString;
    if ( Src )
    {
      v20 = DrvProbeAndCaptureDevmode(
              (struct tagGRAPHICS_DEVICE *)a1,
              (struct _devicemodeW **)&Buffer,
              &v171,
              0LL,
              Src,
              0,
              PruneFlag,
              v14,
              -__CFSHR__(a8, 8),
              0LL);
      if ( v20 < 0 )
      {
        if ( Buffer )
          GreDeleteFastMutex((char *)Buffer);
        WdLogSingleEntry0(5LL);
        WdLogGlobalForLineNumber = 24944;
        DrvLogDrvChangeDisplaySettingsFailures(0LL, v20);
        if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          McTemplateK0_EtwWriteTransfer(v21, &DrvChangeDisplaySettingsEnd, 0LL);
        return 4294967294LL;
      }
      if ( !Src->dmFields )
        v14 = 1;
      v159 = v14;
      dmDisplayOrientation = Src->dmDisplayOrientation;
      dmBitsPerPel = Src->dmBitsPerPel;
      dmPelsHeight = Src->dmPelsHeight;
      dmPelsWidth = Src->dmPelsWidth;
      CurrentProcess = PsGetCurrentProcess(v19, 1LL);
      WdLogSingleEntry5(4LL, CurrentProcess, dmPelsWidth, dmPelsHeight, dmBitsPerPel, dmDisplayOrientation);
      v14 = v159;
      v18 = 0LL;
      Src = (struct _devicemodeW *)v173;
      v15 = -__CFSHR__(a8, 2);
      WdLogGlobalForLineNumber = 24958;
    }
    else
    {
      v14 = 1;
      v159 = 1;
    }
  }
  if ( (a8 & 1) != 0 && a1 && Src && !UserIsDisconnectConnection(v17, 0LL) )
  {
    updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, (struct _devicemodeW *)Buffer, v171, 1);
    v29 = 0;
    if ( updated < 0 )
    {
      v30 = -2;
      if ( updated == -1073741582 )
        v30 = -5;
      v155 = v30;
    }
    DrvLogDrvChangeDisplaySettingsFailures(1LL, updated);
  }
  else
  {
    v29 = 0;
  }
  if ( !v15 || v155 )
    goto LABEL_270;
  DrvAcquireChangeDisplaySettingLocks(v17, v18);
  v155 = -1;
  MDEV = 0LL;
  if ( !a5 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    MDEV = DrvCreateMDEV(
             p_DestinationString,
             (struct _devicemodeW *)Buffer,
             v172,
             (unsigned __int8)(a8 & 8) >> 1,
             0LL,
             a7,
             v14,
             -__CFSHR__(a8, 8),
             a3);
    if ( !MDEV )
    {
      DrvLogDrvChangeDisplaySettingsFailures(3LL, -1073741823);
      goto LABEL_80;
    }
    goto LABEL_78;
  }
  v32 = CheckAndNotifyDualView(p_DestinationString, (__int64)a5);
  if ( !v32 )
  {
    v37 = v159;
    goto LABEL_49;
  }
  v33 = v32 - 1;
  if ( !v33 )
  {
    v37 = 1;
LABEL_49:
    v36 = v163;
    goto LABEL_50;
  }
  if ( v33 != 1 )
  {
    if ( Buffer )
      GreDeleteFastMutex((char *)Buffer);
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 25055;
    DrvLogDrvChangeDisplaySettingsFailures(2LL, -1073741823);
    DrvReleaseChangeDisplaySettingLocks(v34);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      McTemplateK0_EtwWriteTransfer(v35, &DrvChangeDisplaySettingsEnd, 0LL);
    return 4294967290LL;
  }
  v36 = v163;
  v37 = 1;
  *(_DWORD *)(v163 + 1064) = 1;
  *(_QWORD *)(v163 + 1072) = a5;
LABEL_50:
  if ( (a8 & 0x40) == 0 )
  {
LABEL_54:
    if ( !(unsigned int)DrvDisableMDEV(a5, 0, 0) )
    {
      DrvLogDrvChangeDisplaySettingsFailures(4LL, -1073741823);
      v29 = 0;
      goto LABEL_80;
    }
    v41 = *(_WORD *)(v36 + 1080);
    v42 = DrvCreateMDEV(
            p_DestinationString,
            (struct _devicemodeW *)Buffer,
            v172,
            (unsigned __int8)(v13 & 8) >> 1,
            (struct _MDEV *)a5,
            a7,
            v37,
            -__CFSHR__(v13, 8),
            a3);
    v29 = 0;
    MDEV = v42;
    if ( !v42 )
    {
      DrvLogDrvChangeDisplaySettingsFailures(3LL, -1073741823);
      DrvEnableMDEV((__int64)a5, 0, 0);
LABEL_80:
      v48 = v155;
LABEL_81:
      v49 = 0;
      v156 = 0;
      v50 = 0LL;
      v162 = 0LL;
      v158 = 0;
      *a6 = (char *)MDEV;
      v51 = 0LL;
      v160 = 0;
      if ( v48 )
      {
        v39 = v155;
        if ( v155 == 2 )
        {
          *(_QWORD *)MDEV = *a5;
          *((_QWORD *)MDEV + 1) = a5[1];
          if ( *((_DWORD *)MDEV + 5) > 1u )
          {
            SEMOBJ<19>::SEMOBJ<19>(&v173, (struct _ERESOURCE **)v163);
            v150 = *(PDEV **)MDEV;
            ++*((_DWORD *)v150 + 3);
            PDEV::IncrementClientReferenceCount(v150);
            if ( v173 )
            {
              GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
                (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                (__int64)v173);
              v173 = 0LL;
            }
          }
        }
LABEL_254:
        if ( a5 && (v39 & 0xFFFFFFFD) == 0 )
        {
          DrvEnableMDEV((__int64)MDEV, 0, 0);
          if ( !v39 )
          {
            for ( i = 0; i < *((_DWORD *)a5 + 5); ++i )
            {
              v152 = *((_DWORD *)MDEV + 5);
              for ( j = 0; j < v152; ++j )
              {
                if ( *((_QWORD *)a5[7 * i + 5] + 321) == *(_QWORD *)(*((_QWORD *)MDEV + 7 * j + 5) + 2568LL) )
                  break;
              }
              if ( j == v152 )
                DrvDisableDisplay(a5[7 * i + 5], 1);
            }
            v39 = v155;
          }
          DrvDestroyMDEV((__int64 *)a5);
        }
        DrvReleaseChangeDisplaySettingLocks(v51);
        if ( v166 )
          MULTIDEVLOCKOBJ::`scalar deleting destructor'(v166);
        v53 = v164;
        if ( !v164 )
          goto LABEL_271;
        goto LABEL_269;
      }
      v175 = 0LL;
      v165 = 0LL;
      v168 = 0LL;
      v186 = 0LL;
      *(_OWORD *)v183 = 0LL;
      v184 = 0LL;
      v185 = 0LL;
      v53 = (MULTIDEVLOCKOBJ *)Win32AllocPoolImpl(256LL, 0x60uLL, 0x6C6D6847u);
      v164 = v53;
      if ( !v53 )
      {
        DrvReleaseChangeDisplaySettingLocks(v52);
LABEL_270:
        v39 = v155;
LABEL_271:
        v38 = a6;
        goto LABEL_272;
      }
      *(_QWORD *)v53 = 1LL;
      *((_QWORD *)v53 + 1) = 0LL;
      v54 = (MULTIDEVLOCKOBJ *)Win32AllocPoolImpl(256LL, 0x60uLL, 0x6C6D6847u);
      v55 = 0LL;
      v166 = v54;
      if ( !v54 )
      {
        DrvReleaseChangeDisplaySettingLocks(0LL);
LABEL_269:
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v53);
        goto LABEL_270;
      }
      *(_QWORD *)v54 = 1LL;
      v56 = 1LL;
      *((_QWORD *)v54 + 1) = 0LL;
      v57 = 0;
      if ( *((_DWORD *)MDEV + 5) )
      {
        v166 = v54;
        do
          DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 7 * v57++ + 5));
        while ( v57 < *((_DWORD *)MDEV + 5) );
        v55 = 0LL;
        v49 = 0;
        v56 = 1LL;
      }
      if ( !a5 )
        goto LABEL_157;
      v175 = DrvDisableDirectDrawForModeChange((struct _MDEV *)a5, MDEV, v183);
      if ( !v175 )
      {
        DrvLogDrvChangeDisplaySettingsFailures(5LL, -1073741823);
        v58 = 1LL;
        v49 = 1;
LABEL_206:
        v59 = v166;
        v60 = v164;
        goto LABEL_207;
      }
      v59 = v166;
      MULTIDEVLOCKOBJ::vInit(v166, (struct _MDEV *)a5);
      v60 = v164;
      MULTIDEVLOCKOBJ::vInit(v164, MDEV);
      if ( (*(_DWORD *)v164 & 1) == 0 || (*(_DWORD *)v166 & 1) == 0 )
      {
        DrvLogDrvChangeDisplaySettingsFailures(8LL, -1073741823);
        v58 = 1LL;
        v49 = 1;
LABEL_207:
        v179 = *a5;
        if ( ((_DWORD)v179[10] & 0x20000) != 0 )
          PDEVOBJ::bDisabled((PDEVOBJ *)&v179, 1);
        if ( (int)IsGreHideSpritesSupported(v58, v56) >= 0 )
        {
          v131 = (__int64 *)a5;
          if ( !v49 )
            v131 = (__int64 *)MDEV;
          GreHideSprites(*v131, 0);
        }
        if ( v165 )
          GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            *((_QWORD *)v165 + 6));
        MULTIDEVLOCKOBJ::vUnlock(v60);
        MULTIDEVLOCKOBJ::vUnlock(v59);
LABEL_216:
        if ( v49 )
        {
LABEL_226:
          if ( v168 )
          {
            GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              *((_QWORD *)v168 + 6));
            v137 = v163;
            GreReleaseSemaphoreExclusive<7,>((struct _ERESOURCE **)v163);
            GreReleaseSemaphoreExclusive<10,>((struct _ERESOURCE **)v163);
            GreReleaseSemaphoreExclusive<6,>((struct _ERESOURCE **)v163);
            GreReleaseSemaphoreExclusive<4,PDEVOBJ>((__int64)v168);
          }
          else
          {
            v137 = v163;
          }
          v138 = (char *)v175;
          if ( v175 )
          {
            W32GetSessionState(v55);
            GreIncrementDisplaySettingsUniqueness(v139);
            if ( v138 != (char *)v183 )
              GreDeleteFastMutex(v138);
          }
          if ( v49 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 26417;
            DrvBackoutMDEV(MDEV);
            GreDeleteFastMutex((char *)MDEV);
            *a6 = 0LL;
            if ( a5 )
              DrvEnableMDEV((__int64)a5, 0, 0);
            ++*(_DWORD *)(v137 + 1164);
            v39 = -1;
            v155 = -1;
          }
          else
          {
            if ( a5 )
            {
              for ( k = 0; k < *((_DWORD *)a5 + 5); *(_DWORD *)(v142 + 160) &= ~1u )
              {
                v141 = k++;
                v142 = *((_QWORD *)a5[7 * v141 + 5] + 321);
              }
            }
            for ( m = *(_QWORD *)(v137 + 1096); m; m = *(_QWORD *)(m + 128) )
              *(_DWORD *)(m + 160) &= ~4u;
            for ( n = 0; n < *((_DWORD *)MDEV + 5); ++n )
            {
              v145 = 56LL * n;
              v146 = *(_QWORD *)((char *)MDEV + v145 + 40);
              v147 = *(_QWORD *)(v146 + 2584);
              *(_DWORD *)(*(_QWORD *)(v146 + 2568) + 160LL) |= 1u;
              v148 = *(_DWORD *)((char *)MDEV + v145 + 56);
              *(_DWORD *)(v147 + 76) = v148;
              v149 = *(_DWORD *)((char *)MDEV + v145 + 60);
              *(_DWORD *)(v147 + 80) = v149;
              if ( !v148 && !v149 )
                *(_DWORD *)(*(_QWORD *)(v146 + 2568) + 160LL) |= 4u;
            }
            GreUpdateSharedDevCaps(*(_QWORD *)MDEV);
            v39 = v155;
          }
          goto LABEL_254;
        }
LABEL_217:
        v132 = *(_QWORD *)MDEV;
        if ( *((_DWORD *)MDEV + 5) == 1 )
        {
          v180 = *(struct _BASEOBJECT **)(v132 + 1792);
          if ( *(_QWORD *)(v132 + 24) != v132 )
            *(_QWORD *)(v132 + 24) = v132;
          *(_QWORD *)(v132 + 1752) = *(_QWORD *)(v132 + 2856);
          XEPALOBJ::apalResetColorTable(&v180);
        }
        else
        {
          DrvSetSharedDevLock(MDEV);
          v133 = DrvSetSharedPalette(MDEV);
          v134 = v133;
          if ( (*(_DWORD *)(v132 + 2156) & 0x100) == 0 )
          {
            if ( v133 )
            {
              if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
              {
                v55 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v55, v135) + 24);
                v136 = *(void (__fastcall **)(__int64, __int64))(v55 + 888);
                if ( v136 )
                  v136(v134, 1LL);
              }
            }
          }
        }
        goto LABEL_226;
      }
      v172 = *a5;
      v61 = v172;
      GreAcquireSemaphore<4,PDEVOBJ>((__int64)v172);
      GreAcquireSemaphore<6,>((struct _ERESOURCE **)v163);
      GreAcquireSemaphore<7,>((struct _ERESOURCE **)v163);
      GreAcquireSemaphore<8,PDEVOBJ>((__int64)v61);
      MULTIDEVLOCKOBJ::vLock(v166);
      MULTIDEVLOCKOBJ::vLock(v164);
      if ( (int)IsGreHideSpritesSupported(v63, v62) >= 0 )
        GreHideSprites((__int64)*a5, 1u);
      v64 = *((_DWORD *)MDEV + 5);
      v65 = *((_DWORD *)a5 + 5);
      if ( v64 == 1 )
      {
        if ( v65 != 1 )
        {
          v66 = 0;
          if ( v65 )
          {
            while ( 1 )
            {
              v67 = 7LL * v66;
              if ( a5[v67 + 5] == *((HDEV *)MDEV + 5) )
                break;
              if ( ++v66 >= v65 )
                goto LABEL_100;
            }
            CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 5));
            v50 = (HDEV)CloneHDEV;
            if ( !CloneHDEV )
            {
              DrvLogDrvChangeDisplaySettingsFailures(6LL, -1073741823);
              v68 = 0LL;
              v49 = 1;
              v156 = 1;
              goto LABEL_124;
            }
            a5[v67 + 5] = (HDEV)CloneHDEV;
            a5[v67 + 6] = (HDEV)*((_QWORD *)MDEV + 5);
            v68 = *((_QWORD *)MDEV + 5);
            goto LABEL_123;
          }
        }
      }
      else if ( v65 == 1 )
      {
        v83 = 0;
        if ( v64 )
        {
          while ( 1 )
          {
            v84 = 56LL * v83;
            if ( *(HDEV *)((char *)MDEV + v84 + 40) == a5[5] )
              break;
            if ( ++v83 >= v64 )
              goto LABEL_121;
          }
          v85 = DrvCreateCloneHDEV(a5[5]);
          v50 = (HDEV)v85;
          if ( !v85 )
          {
            DrvLogDrvChangeDisplaySettingsFailures(6LL, -1073741823);
            v68 = 0LL;
            v78 = 1;
            goto LABEL_109;
          }
          *(_QWORD *)((char *)MDEV + v84 + 40) = v85;
          *(_QWORD *)((char *)MDEV + v84 + 48) = a5[5];
          v68 = (__int64)a5[5];
          v160 = 1;
        }
        else
        {
LABEL_121:
          v68 = 0LL;
        }
        v158 = 1;
        if ( !v50 )
        {
LABEL_124:
          if ( v49 )
          {
LABEL_108:
            v78 = v156;
LABEL_109:
            v56 = v158;
            v168 = (struct D3DKMT_GETPATHSMODALITY *)v172;
            v169 = v158;
            v157 = v78;
            v162 = (HDEV)v68;
            if ( !v68 )
              goto LABEL_129;
            v176 = v68;
            v157 = v78;
            v162 = (HDEV)v68;
            v168 = (struct D3DKMT_GETPATHSMODALITY *)v172;
            if ( !(unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v176) )
              goto LABEL_129;
            v157 = v79;
            v162 = (HDEV)v68;
            v158 = v56;
            v168 = v80;
            if ( (*(_DWORD *)(v68 + 2112) & 0x10000) != 0
              || (v158 = v56,
                  v157 = v79,
                  v162 = (HDEV)v68,
                  v168 = v80,
                  (unsigned int)bDynamicProcessAllDriverRealizations(v68, 0LL, v81)) )
            {
LABEL_129:
              v49 = v157;
              if ( v157 )
              {
LABEL_205:
                v58 = 1LL;
                goto LABEL_206;
              }
            }
            else
            {
              v162 = (HDEV)v68;
              v49 = 0;
              v168 = (struct D3DKMT_GETPATHSMODALITY *)v172;
              v157 = 0;
              v158 = v169;
            }
            v86 = (HDEV)*((unsigned int *)MDEV + 5);
            v87 = *((_DWORD *)a5 + 5);
            if ( (_DWORD)v86 != 1 )
            {
              if ( v87 != 1 )
              {
                v90 = 0;
                if ( (_DWORD)v86 )
                {
                  do
                  {
                    v91 = *((_DWORD *)a5 + 5);
                    v92 = 0;
                    v93 = 56LL * v90;
                    v94 = *(HDEV *)((char *)MDEV + v93 + 40);
                    if ( v91 )
                    {
                      while ( 1 )
                      {
                        v95 = 7LL * v92;
                        v86 = a5[v95 + 5];
                        if ( *((_QWORD *)v94 + 321) == *((_QWORD *)v86 + 321) )
                          break;
                        if ( ++v92 >= v91 )
                          goto LABEL_145;
                      }
                      v104 = 1;
                      if ( _bittest((const signed __int32 *)v94 + 528, 0x10u) )
                        v104 = !_bittest((const signed __int32 *)v86 + 528, 0x10u);
                      if ( v94 == v86 )
                        goto LABEL_145;
                      if ( (unsigned int)bDynamicModeChange(v86, v94, v104) == 1 )
                      {
                        v86 = a5[v95 + 5];
                        a5[v95 + 5] = *(HDEV *)((char *)MDEV + v93 + 40);
                        *(_QWORD *)((char *)MDEV + v93 + 40) = v86;
LABEL_145:
                        v49 = v157;
                        goto LABEL_146;
                      }
                      DrvLogDrvChangeDisplaySettingsFailures(11LL, -1073741823);
                      v157 = 1;
                      v49 = 1;
                    }
LABEL_146:
                    ++v90;
                  }
                  while ( v90 < *((_DWORD *)MDEV + 5) );
                  LOBYTE(v13) = a8;
                }
              }
              goto LABEL_148;
            }
            v88 = (HDEV)*((_QWORD *)MDEV + 5);
            if ( v87 == 1 )
            {
              if ( (unsigned int)bDynamicModeChange(a5[5], v88, 1) == 1 )
              {
                v86 = a5[5];
                a5[5] = (HDEV)*((_QWORD *)MDEV + 5);
                *((_QWORD *)MDEV + 5) = v86;
                goto LABEL_148;
              }
              v89 = 9LL;
            }
            else
            {
              if ( (unsigned int)bDynamicModeChange(*a5, v88, 1) == 1 )
              {
                v86 = *a5;
                *a5 = (HDEV)*((_QWORD *)MDEV + 5);
                *((_QWORD *)MDEV + 5) = v86;
                if ( v50 )
                  v162 = v86;
                goto LABEL_148;
              }
              v89 = 10LL;
            }
            DrvLogDrvChangeDisplaySettingsFailures(v89, -1073741823);
            v49 = 1;
LABEL_148:
            GreReleaseHmgrSemaphore((__int64)v86);
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              *(_QWORD *)v163);
            if ( (int)IsGrepReleaseRFONTListSemaphoreExSupported(v97, v96) >= 0 )
            {
              v99 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v99, v98) + 24);
              v100 = *(void (**)(void))(v99 + 1952);
              if ( v100 )
                v100();
            }
            if ( (int)IsGrepReleasePublicPFTSemaphoreExSupported(v99, v98) >= 0 )
            {
              v103 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v102, v101) + 24) + 1904LL);
              if ( v103 )
                v103();
            }
            GreReleaseSemaphoreExclusive<13,>((struct _ERESOURCE **)v163);
            if ( v49 )
              goto LABEL_205;
            v29 = v158;
            v56 = 1LL;
            v55 = 0LL;
            if ( *((_DWORD *)a5 + 5) == 1 )
            {
              *a5 = a5[5];
              a5[1] = a5[6];
            }
LABEL_157:
            if ( *((_DWORD *)MDEV + 5) == 1 )
            {
              *(_QWORD *)MDEV = *((_QWORD *)MDEV + 5);
              *((_QWORD *)MDEV + 1) = *((_QWORD *)MDEV + 6);
              goto LABEL_168;
            }
            v105 = (void *)*((_QWORD *)MDEV + 3);
            v182[2] = MulEnableDriver;
            v177 = 0LL;
            v182[1] = 0LL;
            v182[0] = 1LL;
            v106 = hCreateHDEV(
                     (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                     (struct _DRV_NAMES *)v182,
                     (struct _devicemodeW *)MDEV,
                     v105,
                     0,
                     0,
                     1,
                     0,
                     2u,
                     &v177);
            *(_QWORD *)MDEV = v106;
            v107 = v106;
            if ( !v106 )
            {
              DrvLogDrvChangeDisplaySettingsFailures(7LL, -1073741823);
              v49 = 1;
LABEL_168:
              if ( !a5 )
                goto LABEL_216;
              goto LABEL_193;
            }
            if ( !a5 )
              goto LABEL_217;
            GreAcquireSemaphore<8,PDEVOBJ>((__int64)v106);
            GreAcquireSemaphore<13,>((struct _ERESOURCE **)v163);
            if ( (int)IsGrepAcquirePublicPFTSemaphoreExSupported(v109, v108) >= 0 )
            {
              v111 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v111, v110) + 24);
              v112 = *(void (**)(void))(v111 + 1888);
              if ( v112 )
                v112();
            }
            if ( (int)IsGrepAcquireRFONTListSemaphoreExSupported(v111, v110) >= 0 )
            {
              v115 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v114, v113) + 24) + 1936LL);
              if ( v115 )
                v115();
            }
            GreAcquireSemaphore<19,>((struct _ERESOURCE **)v163);
            GreAcquireHmgrSemaphore(v116);
            v117 = *(HDEV *)MDEV;
            if ( v29 )
            {
              if ( (unsigned int)bDynamicModeChange(a5[5], v117, 1) == 1 )
              {
                v118 = *(HDEV *)MDEV;
                *(_QWORD *)MDEV = a5[5];
                *a5 = v118;
                a5[5] = v118;
                if ( v50 )
                  v162 = v118;
                goto LABEL_186;
              }
              v119 = 12LL;
            }
            else
            {
              if ( (unsigned int)bDynamicModeChange(*a5, v117, 1) == 1 )
              {
                v118 = *a5;
                *a5 = *(HDEV *)MDEV;
                *(_QWORD *)MDEV = v118;
                goto LABEL_186;
              }
              v119 = 13LL;
            }
            DrvLogDrvChangeDisplaySettingsFailures(v119, -1073741823);
            v49 = 1;
LABEL_186:
            GreReleaseHmgrSemaphore((__int64)v118);
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              *(_QWORD *)v163);
            if ( (int)IsGrepReleaseRFONTListSemaphoreExSupported(v121, v120) >= 0 )
            {
              v123 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v123, v122) + 24);
              v124 = *(void (**)(void))(v123 + 1952);
              if ( v124 )
                v124();
            }
            if ( (int)IsGrepReleasePublicPFTSemaphoreExSupported(v123, v122) >= 0 )
            {
              v127 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v126, v125) + 24) + 1904LL);
              if ( v127 )
                v127();
            }
            GreReleaseSemaphoreExclusive<13,>((struct _ERESOURCE **)v163);
            GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              *((_QWORD *)v107 + 6));
LABEL_193:
            if ( !v49 && v50 && v162 )
            {
              v174 = v50;
              v178 = v162;
              if ( v160 )
              {
                v128 = *((_QWORD *)v162 + 318);
                *((_QWORD *)v50 + 318) = v128;
                if ( v128 )
                  *(_QWORD *)(v128 + 48) = v50;
                *((_QWORD *)v50 + 223) = *((_QWORD *)v162 + 223);
                DrvTransferGdiObjects((struct SURFACE **)v50, v162);
                *((_QWORD *)v162 + 318) = 0LL;
                *((_QWORD *)v162 + 223) = 0LL;
                _m_prefetchw(v162 + 10);
                do
                  v129 = *((_DWORD *)v162 + 10);
                while ( v129 != _InterlockedCompareExchange((volatile signed __int32 *)v162 + 10, v129 | 0x80000, v129) );
                _m_prefetchw(v50 + 10);
                do
                  v130 = *((_DWORD *)v50 + 10);
                while ( v130 != _InterlockedCompareExchange(
                                  (volatile signed __int32 *)v50 + 10,
                                  v130 & 0xFFF7FFFF,
                                  v130) );
                PDEVOBJ::bDisabled((PDEVOBJ *)&v178, 1);
                PDEVOBJ::CompletePDEV((PDEVOBJ *)&v174, *((struct DHPDEV__ **)v50 + 223), v50);
              }
              else
              {
                *((_QWORD *)v50 + 318) = 0LL;
                PDEVOBJ::bDisabled((PDEVOBJ *)&v174, 1);
              }
            }
            goto LABEL_205;
          }
LABEL_101:
          GreAcquireSemaphore<10,>((struct _ERESOURCE **)v163);
          GreAcquireSemaphore<13,>((struct _ERESOURCE **)v163);
          if ( (int)IsGrepAcquirePublicPFTSemaphoreExSupported(v70, v69) >= 0 )
          {
            v72 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v72, v71) + 24);
            v73 = *(void (**)(void))(v72 + 1888);
            if ( v73 )
              v73();
          }
          if ( (int)IsGrepAcquireRFONTListSemaphoreExSupported(v72, v71) >= 0 )
          {
            v76 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v75, v74) + 24) + 1936LL);
            if ( v76 )
              v76();
          }
          GreAcquireSemaphore<19,>((struct _ERESOURCE **)v163);
          GreAcquireHmgrSemaphore(v77);
          goto LABEL_108;
        }
LABEL_123:
        v165 = v50;
        GreAcquireSemaphore<8,PDEVOBJ>((__int64)v50);
        goto LABEL_124;
      }
LABEL_100:
      v68 = 0LL;
      goto LABEL_101;
    }
    v43 = *((_DWORD *)v42 + 5);
    v155 = 2;
    if ( v43 == *((_DWORD *)a5 + 5) && v41 == *(_WORD *)(v163 + 1080) )
    {
      v44 = a9;
      v45 = 0;
      v46 = a9 != 0LL;
      if ( v43 )
      {
        do
        {
          v47 = 7LL * v45;
          if ( *(HDEV *)((char *)MDEV + v47 * 8 + 40) != a5[v47 + 5]
            || *(_DWORD *)((char *)MDEV + v47 * 8 + 72) != LODWORD(a5[v47 + 9])
            || *(HDEV *)((char *)MDEV + v47 * 8 + 56) != a5[v47 + 7]
            || *(HDEV *)((char *)MDEV + v47 * 8 + 64) != a5[v47 + 8] )
          {
            v155 = 0;
          }
          if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline()
            && v46
            && (*(_DWORD *)((char *)MDEV + v47 * 8 + 72) != LODWORD(a5[v47 + 9])
             || *(HDEV *)((char *)MDEV + v47 * 8 + 56) != a5[v47 + 7]
             || *(HDEV *)((char *)MDEV + v47 * 8 + 64) != a5[v47 + 8]) )
          {
            v46 = 0;
          }
          ++v45;
        }
        while ( v45 < *((_DWORD *)MDEV + 5) );
        LOBYTE(v13) = a8;
        v44 = a9;
      }
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() && v44 )
        *v44 = v46;
      goto LABEL_80;
    }
LABEL_78:
    v48 = 0;
    v155 = 0;
    goto LABEL_81;
  }
  if ( !(unsigned int)DrvUpdateDisplayModeInMdev((struct _MDEV *)a5, a3) )
  {
    v13 = a8 & 0xFFFFFFBF;
    LOBYTE(a8) = a8 & 0xBF;
    goto LABEL_54;
  }
  v38 = a6;
  v39 = 3;
  *a6 = (char *)a5;
  WdLogSingleEntry0(4LL);
  WdLogGlobalForLineNumber = 25080;
  DrvReleaseChangeDisplaySettingLocks(v40);
LABEL_272:
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer);
  if ( (v13 & 2) == 0 || v39 )
  {
    if ( v39 == 2 && *v38 )
    {
      GreDeleteFastMutex(*v38);
      *v38 = 0LL;
    }
  }
  else if ( a5 )
  {
    GreDeleteFastMutex((char *)a5);
  }
  WdLogSingleEntry1(5LL, v39);
  WdLogGlobalForLineNumber = 26600;
  *(_DWORD *)(v163 + 1064) = 0;
  *(_QWORD *)(v163 + 1072) = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v154, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v39;
}
