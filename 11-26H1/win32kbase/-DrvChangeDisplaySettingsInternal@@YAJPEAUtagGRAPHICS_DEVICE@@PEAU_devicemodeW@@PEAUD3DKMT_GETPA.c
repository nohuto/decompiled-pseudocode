/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538
 * Callers:
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x14014E374 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     DrvChangeDisplaySettings @ 0x140175A14 (DrvChangeDisplaySettings.c)
 *     ApplyPathsModality @ 0x1401F498C (ApplyPathsModality.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001AFC0 (--$GreReleaseSemaphoreExclusive@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B36C (--$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028120 (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028174 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     UserIsDisconnectConnection @ 0x14002A9D0 (UserIsDisconnectConnection.c)
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140030BE0 (bDynamicProcessAllDriverRealizations.c)
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140032100 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140047270 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14007EC3C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ??$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400B30EC (--$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C521C (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1400C640C (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C66D4 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     DrvDisableMDEV @ 0x1400C6E50 (DrvDisableMDEV.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1400C7198 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1400C76CC (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1400C7720 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77A8 (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C77EC (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C78AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400C7918 (--$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C796C (--$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvDestroyMDEV @ 0x1400C96A0 (DrvDestroyMDEV.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1400C988C (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     GreHideSprites @ 0x1400CA32C (GreHideSprites.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x140102518 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140140030 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvLogDrvChangeDisplaySettingsFailures @ 0x14014F9A0 (DrvLogDrvChangeDisplaySettingsFailures.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x140150004 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x140151A54 (DrvUpdateDisplayDriverParameters.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1401580D0 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvUpdateMDevForWDDMDevices@@YAXPEAU_MDEV@@@Z @ 0x140165690 (-DrvUpdateMDevForWDDMDevices@@YAXPEAU_MDEV@@@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x14016EFEC (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x140174280 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x140187700 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140189204 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401896B8 (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     IsGrepReleasePublicPFTSemaphoreExSupported @ 0x140190620 (IsGrepReleasePublicPFTSemaphoreExSupported.c)
 *     ??$GreReleaseSemaphoreExclusive@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140190918 (--$GreReleaseSemaphoreExclusive@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     IsGrepAcquirePublicPFTSemaphoreExSupported @ 0x140192114 (IsGrepAcquirePublicPFTSemaphoreExSupported.c)
 *     IsGrepAcquireRFONTListSemaphoreExSupported @ 0x140192710 (IsGrepAcquireRFONTListSemaphoreExSupported.c)
 *     IsGrepReleaseRFONTListSemaphoreExSupported @ 0x140193C20 (IsGrepReleaseRFONTListSemaphoreExSupported.c)
 *     IsGreHideSpritesSupported @ 0x140194860 (IsGreHideSpritesSupported.c)
 *     ??$GreAcquireSemaphore@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140195968 (--$GreAcquireSemaphore@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x14019F8AC (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1401A2194 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1401B591C (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     GreUpdateSharedDevCaps @ 0x1401C06BC (GreUpdateSharedDevCaps.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1401C0AC8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1401C46FC (IsDrvRealizeHalftonePaletteSupported.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1401F4F1C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1401F5468 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsInternal(
        __int64 a1,
        struct _devicemodeW *a2,
        struct D3DKMT_GETPATHSMODALITY *a3,
        void *a4,
        char *a5,
        char **a6,
        unsigned int a7,
        unsigned int a8,
        bool *a9)
{
  struct _devicemodeW *Src; // r15
  int PruneFlag; // edi
  __int64 v12; // rcx
  unsigned int v13; // esi
  int v14; // ebx
  int v15; // r14d
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 dmDisplayOrientation; // rbx
  __int64 dmBitsPerPel; // rdi
  DWORD dmPelsHeight; // r14d
  DWORD dmPelsWidth; // r15d
  __int64 CurrentProcess; // rax
  int updated; // eax
  int v34; // ecx
  int v35; // r13d
  struct _MDEV *MDEV; // r14
  struct _UNICODE_STRING *v37; // r15
  __int64 v38; // rdx
  int v39; // ecx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // ecx
  __int64 v43; // rcx
  int v44; // ebx
  char **v45; // rbx
  __int16 v46; // di
  struct _MDEV *v47; // rax
  unsigned int v48; // r15d
  int v49; // eax
  bool *v50; // rbx
  bool v51; // di
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ecx
  HDEV v56; // r13
  void *v57; // rdi
  MULTIDEVLOCKOBJ *v58; // rax
  MULTIDEVLOCKOBJ *v59; // rbx
  MULTIDEVLOCKOBJ *v60; // r15
  __int64 v61; // rdx
  unsigned int v62; // r8d
  unsigned int v63; // r9d
  __int64 v64; // rcx
  MULTIDEVLOCKOBJ *v65; // r13
  int v66; // r15d
  int v67; // edx
  int v68; // r8d
  int v69; // edx
  int v70; // r8d
  int v71; // edx
  int v72; // r8d
  int v73; // edx
  int v74; // r8d
  int v75; // eax
  int v76; // r8d
  unsigned int v77; // ecx
  unsigned int v78; // edx
  unsigned int v79; // edx
  __int64 v80; // rbx
  HDEV CloneHDEV; // rax
  int v82; // edi
  __int64 v83; // rbx
  HDEV v84; // rax
  __int64 v85; // rcx
  void (*v86)(void); // rax
  int v87; // edx
  __int64 v88; // rcx
  int v89; // r8d
  void (*v90)(void); // rax
  int v91; // edx
  int v92; // r8d
  int v93; // r10d
  __int64 v94; // rdx
  unsigned int v95; // r8d
  int v96; // r10d
  int v97; // ecx
  int v98; // eax
  HDEV v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rcx
  HDEV v102; // rcx
  unsigned int v103; // ebx
  __int64 v104; // rax
  __int64 v105; // r15
  HDEV v106; // rcx
  int v107; // r8d
  __int64 v108; // rcx
  void (*v109)(void); // rax
  __int64 v110; // rcx
  void (*v111)(void); // rax
  __int64 v112; // rcx
  void *v113; // r9
  HDEV v114; // rax
  int v115; // edx
  int v116; // r8d
  __int64 v117; // rbx
  __int64 v118; // rcx
  void (*v119)(void); // rax
  int v120; // edx
  __int64 v121; // rcx
  int v122; // r8d
  void (*v123)(void); // rax
  int v124; // edx
  int v125; // r8d
  HDEV v126; // rdx
  __int64 v127; // rdx
  int v128; // r8d
  HDEV v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rcx
  int v132; // r8d
  __int64 v133; // rcx
  void (*v134)(void); // rax
  __int64 v135; // rcx
  void (*v136)(void); // rax
  __int64 v137; // rdx
  int v138; // r8d
  __int64 v139; // rax
  signed __int32 v140; // ett
  signed __int32 v141; // ett
  int v142; // eax
  int v143; // r8d
  __int64 v144; // rdx
  __int64 *v145; // rcx
  ULONG_PTR v146; // rbx
  HDEV v147; // rax
  HDEV v148; // r15
  void (__fastcall *v149)(HDEV, __int64); // rax
  __int64 v150; // rbx
  __int64 v151; // rdx
  int v152; // r8d
  __int64 v153; // rdx
  int v154; // r8d
  __int64 v155; // rdx
  int v156; // r8d
  char *v157; // rdi
  __int64 v158; // rcx
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  unsigned int j; // edx
  __int64 v163; // rax
  __int64 v164; // rcx
  __int64 k; // rax
  unsigned int m; // r8d
  __int64 v167; // rdx
  __int64 v168; // r9
  __int64 v169; // rcx
  int v170; // eax
  int v171; // r10d
  unsigned int i; // ebx
  unsigned int v173; // r8d
  unsigned int v174; // edx
  MULTIDEVLOCKOBJ *v175; // rax
  unsigned int v176; // edx
  __int64 v177; // rdx
  __int64 v178; // r8
  __int64 v179; // r9
  ULONG_PTR v180; // r8
  int v181; // r8d
  __int64 v182; // rcx
  int v183; // [rsp+50h] [rbp-B0h]
  int v184; // [rsp+54h] [rbp-ACh]
  int v185; // [rsp+54h] [rbp-ACh]
  unsigned int v186; // [rsp+58h] [rbp-A8h]
  int v187; // [rsp+5Ch] [rbp-A4h]
  unsigned int v188; // [rsp+5Ch] [rbp-A4h]
  __int64 v189; // [rsp+60h] [rbp-A0h]
  HDEV v190; // [rsp+68h] [rbp-98h]
  MULTIDEVLOCKOBJ *v191; // [rsp+70h] [rbp-90h]
  MULTIDEVLOCKOBJ *v192; // [rsp+78h] [rbp-88h]
  struct D3DKMT_GETPATHSMODALITY *v194; // [rsp+80h] [rbp-80h]
  HDEV v195; // [rsp+88h] [rbp-78h] BYREF
  char **v196; // [rsp+90h] [rbp-70h]
  void *v197; // [rsp+98h] [rbp-68h] BYREF
  int v198; // [rsp+A0h] [rbp-60h]
  PVOID Buffer; // [rsp+A8h] [rbp-58h] BYREF
  int v200; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+B8h] [rbp-48h]
  PVOID v202; // [rsp+C0h] [rbp-40h]
  HDEV v203; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v204[3]; // [rsp+D0h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-18h] BYREF
  HDEV v206[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v207; // [rsp+108h] [rbp+8h]
  __int128 v208; // [rsp+118h] [rbp+18h]
  __int64 v209; // [rsp+128h] [rbp+28h]

  Src = a2;
  v202 = a2;
  v196 = a6;
  v197 = a4;
  PruneFlag = a7 != 0;
  DestinationString = 0LL;
  p_DestinationString = 0LL;
  Buffer = 0LL;
  v200 = 0;
  v184 = 0;
  v192 = 0LL;
  v191 = 0LL;
  v189 = *(_QWORD *)(W32GetSessionState(a9) + 88);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v12, &DrvChangeDisplaySettingsStart, 0LL);
  v13 = a8;
  v14 = -__CFSHR__(a8, 3);
  v187 = v14;
  v198 = -(a8 & 1);
  v15 = -__CFSHR__(a8, 2);
  WdLogSingleEntry5(4LL, a1, v15, v198, a7, v14);
  WdLogGlobalForLineNumber = 23716;
  if ( Src )
  {
    if ( !a1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 23724;
    }
    if ( a3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 23730;
    }
  }
  *v196 = 0LL;
  *(_DWORD *)(v189 + 1152) = 0;
  *(_QWORD *)(v189 + 1160) = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline();
  v20 = 0LL;
  if ( IsEnabledDeviceUsageNoInline && a9 )
    *a9 = 0;
  if ( a1 )
  {
    if ( a7 == -1 )
      PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)a1);
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 64));
    v20 = 0LL;
    p_DestinationString = &DestinationString;
    if ( Src )
    {
      v23 = DrvProbeAndCaptureDevmode(
              (struct tagGRAPHICS_DEVICE *)a1,
              (struct _devicemodeW **)&Buffer,
              &v200,
              0LL,
              Src,
              0,
              PruneFlag,
              v14,
              -__CFSHR__(a8, 8),
              0LL);
      if ( v23 < 0 )
      {
        if ( Buffer )
          GreDeleteFastMutex((char *)Buffer, v21, v24, v25);
        WdLogSingleEntry0(5LL);
        WdLogGlobalForLineNumber = 23788;
        DrvLogDrvChangeDisplaySettingsFailures(0LL, (unsigned int)v23);
        if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          McTemplateK0_EtwWriteTransfer(v26, &DrvChangeDisplaySettingsEnd, 0LL);
        return 4294967294LL;
      }
      if ( !Src->dmFields )
        v14 = 1;
      v187 = v14;
      dmDisplayOrientation = Src->dmDisplayOrientation;
      dmBitsPerPel = Src->dmBitsPerPel;
      dmPelsHeight = Src->dmPelsHeight;
      dmPelsWidth = Src->dmPelsWidth;
      CurrentProcess = PsGetCurrentProcess(v22);
      WdLogSingleEntry5(4LL, CurrentProcess, dmPelsWidth, dmPelsHeight, dmBitsPerPel, dmDisplayOrientation);
      v14 = v187;
      v20 = 0LL;
      Src = (struct _devicemodeW *)v202;
      v15 = -__CFSHR__(a8, 2);
      WdLogGlobalForLineNumber = 23802;
    }
    else
    {
      v14 = 1;
      v187 = 1;
    }
  }
  if ( v198 && a1 && Src && !UserIsDisconnectConnection(v17, 0LL, v18, v19) )
  {
    updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, (struct _devicemodeW *)Buffer, v200);
    if ( updated < 0 )
    {
      v34 = -2;
      if ( updated == -1073741582 )
        v34 = -5;
      v184 = v34;
    }
    DrvLogDrvChangeDisplaySettingsFailures(1LL, (unsigned int)updated);
  }
  v35 = v184;
  if ( !v15 || v184 )
    goto LABEL_260;
  DrvAcquireChangeDisplaySettingLocks(v17);
  v185 = -1;
  MDEV = 0LL;
  if ( !a5 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    MDEV = DrvCreateMDEV(
             p_DestinationString,
             (struct _devicemodeW *)Buffer,
             v197,
             (unsigned __int8)(a8 & 8) >> 1,
             0LL,
             a7,
             v14,
             -__CFSHR__(a8, 8),
             a3);
    if ( !MDEV )
    {
      DrvLogDrvChangeDisplaySettingsFailures(3LL, 3221225473LL);
      goto LABEL_80;
    }
    goto LABEL_78;
  }
  v37 = p_DestinationString;
  v39 = CheckAndNotifyDualView(p_DestinationString, a5);
  if ( v39 )
  {
    v42 = v39 - 1;
    if ( v42 )
    {
      if ( v42 != 1 )
      {
        if ( Buffer )
          GreDeleteFastMutex((char *)Buffer, v38, v40, v41);
        WdLogSingleEntry0(5LL);
        WdLogGlobalForLineNumber = 23899;
        DrvLogDrvChangeDisplaySettingsFailures(2LL, 3221225473LL);
        DrvReleaseChangeDisplaySettingLocks();
        if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
          McTemplateK0_EtwWriteTransfer(v43, &DrvChangeDisplaySettingsEnd, 0LL);
        return 4294967290LL;
      }
      v44 = 1;
      *(_DWORD *)(v189 + 1152) = 1;
      *(_QWORD *)(v189 + 1160) = a5;
    }
    else
    {
      v44 = 1;
    }
  }
  else
  {
    v44 = v187;
  }
  if ( (a8 & 0x40) == 0 )
  {
LABEL_52:
    if ( !(unsigned int)DrvDisableMDEV((struct _MDEV *)a5, 0, 0) )
    {
      DrvLogDrvChangeDisplaySettingsFailures(4LL, 3221225473LL);
      goto LABEL_80;
    }
    v46 = *(_WORD *)(v189 + 1168);
    v47 = DrvCreateMDEV(
            v37,
            (struct _devicemodeW *)Buffer,
            v197,
            (unsigned __int8)(v13 & 8) >> 1,
            (struct _MDEV *)a5,
            a7,
            v44,
            -__CFSHR__(v13, 8),
            a3);
    v48 = 0;
    MDEV = v47;
    if ( !v47 )
    {
      DrvLogDrvChangeDisplaySettingsFailures(3LL, 3221225473LL);
      DrvEnableMDEV((__int64)a5, 0, 0);
LABEL_80:
      v55 = v185;
LABEL_81:
      v56 = 0LL;
      v183 = 0;
      v190 = 0LL;
      v186 = 0;
      *v196 = (char *)MDEV;
      v188 = 0;
      if ( v55 )
      {
        v35 = v185;
        if ( v185 == 2 )
        {
          *(_QWORD *)MDEV = *(_QWORD *)a5;
          *((_QWORD *)MDEV + 1) = *((_QWORD *)a5 + 1);
          if ( *((_DWORD *)MDEV + 5) > 1u )
          {
            SEMOBJ<19>::SEMOBJ<19>((struct _ERESOURCE **)&v195, (struct _ERESOURCE **)v189);
            v180 = *(_QWORD *)MDEV;
            ++*(_DWORD *)(v180 + 12);
            ++*(_DWORD *)(v180 + 8);
            TrackObjectReferenceIncrement(
              v189,
              1u,
              *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v180 + 3536));
            if ( v195 )
              GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
                (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                (__int64)v195,
                v181);
          }
        }
LABEL_243:
        if ( a5 && (v35 & 0xFFFFFFFD) == 0 )
        {
          DrvEnableMDEV((__int64)MDEV, 0, 0);
          if ( !v35 )
          {
            for ( i = 0; i < *((_DWORD *)a5 + 5); ++i )
            {
              v173 = *((_DWORD *)MDEV + 5);
              v174 = 0;
              if ( v173 )
              {
                while ( *(_QWORD *)(*(_QWORD *)&a5[56 * i + 40] + 2568LL) != *(_QWORD *)(*((_QWORD *)MDEV + 7 * v174 + 5)
                                                                                       + 2568LL) )
                {
                  if ( ++v174 >= v173 )
                    goto LABEL_250;
                }
              }
              else
              {
LABEL_250:
                if ( v174 == v173 )
                {
                  v195 = *(HDEV *)&a5[56 * i + 40];
                  if ( v195 )
                    DrvDisableDisplay((struct PDEVOBJ *)&v195, 1);
                }
              }
            }
          }
          DrvDestroyMDEV((__int64 *)a5);
        }
        DrvReleaseChangeDisplaySettingLocks();
        if ( v191 )
          MULTIDEVLOCKOBJ::`scalar deleting destructor'(v191);
        v175 = v192;
        if ( !v192 )
          goto LABEL_260;
        goto LABEL_258;
      }
      v202 = 0LL;
      v194 = 0LL;
      v209 = 0LL;
      *(_OWORD *)v206 = 0LL;
      v57 = 0LL;
      v207 = 0LL;
      v208 = 0LL;
      v58 = (MULTIDEVLOCKOBJ *)Win32AllocPoolImpl(256LL, 0x60uLL, 0x6C6D6847u);
      v59 = v58;
      if ( !v58 )
      {
        DrvReleaseChangeDisplaySettingLocks();
        goto LABEL_259;
      }
      *(_QWORD *)v58 = 1LL;
      *((_QWORD *)v58 + 1) = 0LL;
      v60 = (MULTIDEVLOCKOBJ *)Win32AllocPoolImpl(256LL, 0x60uLL, 0x6C6D6847u);
      if ( !v60 )
      {
        DrvReleaseChangeDisplaySettingLocks();
        v175 = v59;
LABEL_258:
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v175);
LABEL_259:
        v35 = v185;
LABEL_260:
        v45 = v196;
        goto LABEL_261;
      }
      *(_QWORD *)v60 = 1LL;
      *((_QWORD *)v60 + 1) = 0LL;
      DrvUpdateMDevForWDDMDevices(MDEV);
      v191 = v60;
      v192 = v59;
      if ( !a5 )
      {
        v66 = 0;
        v112 = 1LL;
        goto LABEL_163;
      }
      v202 = DrvDisableDirectDrawForModeChange((struct _MDEV *)a5, MDEV, v206, v63);
      if ( !v202 )
      {
        v64 = 5LL;
LABEL_87:
        DrvLogDrvChangeDisplaySettingsFailures(v64, 3221225473LL);
        v191 = v60;
        v65 = v60;
        v183 = 1;
        v66 = 1;
        v192 = v59;
LABEL_205:
        v195 = *(HDEV *)a5;
        if ( ((_DWORD)v195[10] & 0x20000) != 0 )
          PDEVOBJ::bDisabled((PDEVOBJ *)&v195, 1);
        v142 = IsGreHideSpritesSupported();
        v144 = 0LL;
        if ( v142 >= 0 )
        {
          v145 = (__int64 *)a5;
          if ( !v66 )
            v145 = (__int64 *)MDEV;
          GreHideSprites(*v145, 0);
        }
        if ( v194 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v194, v144, v143);
        MULTIDEVLOCKOBJ::vUnlock(v59);
        MULTIDEVLOCKOBJ::vUnlock(v65);
LABEL_214:
        if ( v66 )
        {
LABEL_224:
          if ( v57 )
          {
            GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v57, v61, v62);
            v150 = v189;
            GreReleaseSemaphoreExclusive<7,>((struct _ERESOURCE **)v189, v151, v152);
            GreReleaseSemaphoreExclusive<10,>(v189);
            GreReleaseSemaphoreExclusive<6,>((struct _ERESOURCE **)v189, v153, v154);
            GreReleaseSemaphoreExclusive<4,PDEVOBJ>((__int64)v57, v155, v156);
          }
          else
          {
            v150 = v189;
          }
          v157 = (char *)v202;
          if ( v202 )
          {
            W32GetSessionState(v112);
            LOBYTE(v158) = 1;
            GreIncrementDisplaySettingsUniqueness(v158);
            if ( v157 != (char *)v206 )
              GreDeleteFastMutex(v157, v159, v160, v161);
          }
          if ( v183 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 25261;
            DrvBackoutMDEV(MDEV, v176);
            GreDeleteFastMutex((char *)MDEV, v177, v178, v179);
            *v196 = 0LL;
            if ( a5 )
              DrvEnableMDEV((__int64)a5, 0, 0);
            ++*(_DWORD *)(v150 + 1252);
            v35 = -1;
            v185 = -1;
          }
          else
          {
            if ( a5 )
            {
              for ( j = 0; j < *((_DWORD *)a5 + 5); *(_DWORD *)(v164 + 160) &= ~1u )
              {
                v163 = j++;
                v164 = *(_QWORD *)(*(_QWORD *)&a5[56 * v163 + 40] + 2568LL);
              }
            }
            for ( k = *(_QWORD *)(v150 + 1184); k; k = *(_QWORD *)(k + 128) )
              *(_DWORD *)(k + 160) &= ~4u;
            for ( m = 0; m < *((_DWORD *)MDEV + 5); ++m )
            {
              v167 = 56LL * m;
              v168 = *(_QWORD *)((char *)MDEV + v167 + 40);
              v169 = *(_QWORD *)(v168 + 2584);
              *(_DWORD *)(*(_QWORD *)(v168 + 2568) + 160LL) |= 1u;
              v170 = *(_DWORD *)((char *)MDEV + v167 + 56);
              *(_DWORD *)(v169 + 76) = v170;
              v171 = *(_DWORD *)((char *)MDEV + v167 + 60);
              *(_DWORD *)(v169 + 80) = v171;
              if ( !v170 && !v171 )
                *(_DWORD *)(*(_QWORD *)(v168 + 2568) + 160LL) |= 4u;
            }
            GreUpdateSharedDevCaps(*(_QWORD *)MDEV);
            v35 = v185;
          }
          goto LABEL_243;
        }
LABEL_215:
        v146 = *(_QWORD *)MDEV;
        if ( *((_DWORD *)MDEV + 5) == 1 )
        {
          v195 = *(HDEV *)(v146 + 1792);
          if ( *(_QWORD *)(v146 + 24) != v146 )
            *(_QWORD *)(v146 + 24) = v146;
          *(_QWORD *)(v146 + 1752) = *(_QWORD *)(v146 + 2856);
          XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v195);
        }
        else
        {
          DrvSetSharedDevLock(MDEV);
          v147 = DrvSetSharedPalette(MDEV);
          v148 = v147;
          if ( (*(_DWORD *)(v146 + 2156) & 0x100) == 0 )
          {
            if ( v147 )
            {
              if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
              {
                v112 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v112) + 24);
                v149 = *(void (__fastcall **)(HDEV, __int64))(v112 + 888);
                if ( v149 )
                  v149(v148, 1LL);
              }
            }
          }
        }
        goto LABEL_224;
      }
      MULTIDEVLOCKOBJ::vInit(v60, (struct _MDEV *)a5);
      MULTIDEVLOCKOBJ::vInit(v59, MDEV);
      if ( (*(_DWORD *)v59 & 1) == 0 || (*(_DWORD *)v60 & 1) == 0 )
      {
        v64 = 8LL;
        goto LABEL_87;
      }
      v197 = *(void **)a5;
      v57 = v197;
      GreAcquireSemaphore<4,PDEVOBJ>((__int64)v197, v67, v68);
      GreAcquireSemaphore<6,>((struct _ERESOURCE **)v189, v69, v70);
      GreAcquireSemaphore<7,>((struct _ERESOURCE **)v189, v71, v72);
      GreAcquireSemaphore<8,PDEVOBJ>((__int64)v197, v73, v74);
      MULTIDEVLOCKOBJ::vLock(v60);
      MULTIDEVLOCKOBJ::vLock(v59);
      v75 = IsGreHideSpritesSupported();
      v77 = 0;
      if ( v75 >= 0 )
      {
        GreHideSprites(*(_QWORD *)a5, 1u);
        v77 = 0;
      }
      v78 = *((_DWORD *)MDEV + 5);
      v191 = v60;
      v192 = v59;
      if ( v78 == 1 )
      {
        v79 = *((_DWORD *)a5 + 5);
        if ( v79 != 1 )
        {
          v191 = v60;
          v192 = v59;
          while ( v77 < v79 )
          {
            v80 = 56LL * v77;
            if ( *(_QWORD *)&a5[v80 + 40] == *((_QWORD *)MDEV + 5) )
            {
              CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 5), v79);
              v56 = CloneHDEV;
              if ( CloneHDEV )
              {
                *(_QWORD *)&a5[v80 + 40] = CloneHDEV;
                *(_QWORD *)&a5[v80 + 48] = *((_QWORD *)MDEV + 5);
                v190 = (HDEV)*((_QWORD *)MDEV + 5);
                goto LABEL_109;
              }
              DrvLogDrvChangeDisplaySettingsFailures(6LL, 3221225473LL);
              v82 = 1;
              goto LABEL_111;
            }
            ++v77;
          }
        }
      }
      else if ( *((_DWORD *)a5 + 5) == 1 )
      {
        v191 = v60;
        v192 = v59;
        while ( v77 < v78 )
        {
          v83 = 56LL * v77;
          if ( *(_QWORD *)((char *)MDEV + v83 + 40) == *((_QWORD *)a5 + 5) )
          {
            v84 = DrvCreateCloneHDEV(*((HDEV *)a5 + 5), v78);
            v56 = v84;
            if ( !v84 )
            {
              DrvLogDrvChangeDisplaySettingsFailures(6LL, 3221225473LL);
              v66 = 1;
              v183 = 1;
              goto LABEL_204;
            }
            *(_QWORD *)((char *)MDEV + v83 + 40) = v84;
            *(_QWORD *)((char *)MDEV + v83 + 48) = *((_QWORD *)a5 + 5);
            v190 = (HDEV)*((_QWORD *)a5 + 5);
            v188 = 1;
            break;
          }
          ++v77;
        }
        v186 = 1;
        if ( v56 )
        {
LABEL_109:
          v194 = (struct D3DKMT_GETPATHSMODALITY *)v56;
          GreAcquireSemaphore<8,PDEVOBJ>((__int64)v56, v78, v76);
        }
        v82 = 0;
LABEL_111:
        if ( v82 )
        {
LABEL_122:
          v93 = v82;
          v94 = v188;
          v95 = v186;
          v183 = v82;
          v57 = v197;
          LODWORD(p_DestinationString) = v188;
          v198 = v186;
          if ( !v190 )
            goto LABEL_127;
          v203 = v190;
          v183 = v93;
          if ( !(unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v203)
            || (v183 = v96, v186 = v95, v188 = v94, ((_DWORD)v190[528] & 0x10000) != 0)
            || (v188 = v94,
                v186 = v95,
                v183 = v96,
                (unsigned int)bDynamicProcessAllDriverRealizations((__int64)v190, 0LL, 1)) )
          {
LABEL_127:
            v66 = v183;
            if ( v183 )
            {
LABEL_204:
              v65 = v191;
              v59 = v192;
              goto LABEL_205;
            }
          }
          else
          {
            v186 = v198;
            v66 = 0;
            v188 = (unsigned int)p_DestinationString;
            v183 = 0;
          }
          v97 = *((_DWORD *)MDEV + 5);
          v98 = *((_DWORD *)a5 + 5);
          if ( v97 != 1 )
          {
            if ( v98 != 1 )
            {
              v103 = 0;
              if ( v97 )
              {
                while ( 1 )
                {
                  v95 = 0;
                  v104 = *((_QWORD *)MDEV + 7 * v103 + 5);
                  while ( 1 )
                  {
                    if ( v95 >= *((_DWORD *)a5 + 5) )
                      goto LABEL_149;
                    v105 = 56LL * v95;
                    v106 = *(HDEV *)&a5[v105 + 40];
                    v94 = *((_QWORD *)v106 + 321);
                    if ( *(_QWORD *)(v104 + 2568) == v94 )
                      break;
                    ++v95;
                  }
                  v95 = 1;
                  if ( _bittest((const signed __int32 *)(v104 + 2112), 0x10u) )
                    v95 = !_bittest((const signed __int32 *)v106 + 528, 0x10u);
                  v94 = *((_QWORD *)MDEV + 7 * v103 + 5);
                  if ( (HDEV)v94 == v106 )
                    goto LABEL_149;
                  if ( (unsigned int)bDynamicModeChange(v106, (HDEV)v94, v95) == 1 )
                    break;
                  DrvLogDrvChangeDisplaySettingsFailures(11LL, 3221225473LL);
                  v66 = 1;
                  v183 = 1;
LABEL_150:
                  if ( ++v103 >= *((_DWORD *)MDEV + 5) )
                    goto LABEL_151;
                }
                v94 = *(_QWORD *)&a5[v105 + 40];
                *(_QWORD *)&a5[v105 + 40] = *((_QWORD *)MDEV + 7 * v103 + 5);
                *((_QWORD *)MDEV + 7 * v103 + 5) = v94;
LABEL_149:
                v66 = v183;
                goto LABEL_150;
              }
            }
            goto LABEL_151;
          }
          v99 = (HDEV)*((_QWORD *)MDEV + 5);
          if ( v98 == 1 )
          {
            if ( (unsigned int)bDynamicModeChange(*((HDEV *)a5 + 5), v99, 1) == 1 )
            {
              v100 = *((_QWORD *)a5 + 5);
              *((_QWORD *)a5 + 5) = *((_QWORD *)MDEV + 5);
              *((_QWORD *)MDEV + 5) = v100;
              goto LABEL_151;
            }
            v101 = 9LL;
          }
          else
          {
            if ( (unsigned int)bDynamicModeChange(*(HDEV *)a5, v99, 1) == 1 )
            {
              v102 = *(HDEV *)a5;
              *(_QWORD *)a5 = *((_QWORD *)MDEV + 5);
              *((_QWORD *)MDEV + 5) = v102;
              if ( v56 )
                v190 = v102;
              goto LABEL_151;
            }
            v101 = 10LL;
          }
          DrvLogDrvChangeDisplaySettingsFailures(v101, 3221225473LL);
          v66 = 1;
          v183 = 1;
LABEL_151:
          GreReleaseSemaphoreExclusive<20,>((__int64 *)v189, v94, v95);
          GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            *(_QWORD *)v189,
            v107);
          if ( (int)IsGrepReleaseRFONTListSemaphoreExSupported() >= 0 )
          {
            v109 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v108) + 24) + 1928LL);
            if ( v109 )
              v109();
          }
          if ( (int)IsGrepReleasePublicPFTSemaphoreExSupported() >= 0 )
          {
            v111 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v110) + 24) + 1880LL);
            if ( v111 )
              v111();
          }
          GreReleaseSemaphoreExclusive<13,>(v189);
          if ( v66 )
            goto LABEL_204;
          v112 = 1LL;
          if ( *((_DWORD *)a5 + 5) == 1 )
          {
            *(_QWORD *)a5 = *((_QWORD *)a5 + 5);
            *((_QWORD *)a5 + 1) = *((_QWORD *)a5 + 6);
          }
LABEL_163:
          if ( *((_DWORD *)MDEV + 5) == 1 )
          {
            *(_QWORD *)MDEV = *((_QWORD *)MDEV + 5);
            *((_QWORD *)MDEV + 1) = *((_QWORD *)MDEV + 6);
            goto LABEL_167;
          }
          v113 = (void *)*((_QWORD *)MDEV + 3);
          v204[2] = MulEnableDriver;
          v204[0] = 1LL;
          v195 = 0LL;
          v204[1] = 0LL;
          v114 = hCreateHDEV(
                   (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
                   (struct _DRV_NAMES *)v204,
                   (struct _devicemodeW *)MDEV,
                   v113,
                   0,
                   0,
                   1,
                   0,
                   2u,
                   &v195);
          *(_QWORD *)MDEV = v114;
          v117 = (__int64)v114;
          if ( !v114 )
          {
            DrvLogDrvChangeDisplaySettingsFailures(7LL, 3221225473LL);
            v66 = 1;
            v183 = 1;
LABEL_167:
            if ( !a5 )
              goto LABEL_214;
            goto LABEL_192;
          }
          if ( !a5 )
            goto LABEL_215;
          GreAcquireSemaphore<8,PDEVOBJ>((__int64)v114, v115, v116);
          GreAcquireSemaphore<13,>(v189);
          if ( (int)IsGrepAcquirePublicPFTSemaphoreExSupported() >= 0 )
          {
            v119 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v118) + 24) + 1864LL);
            if ( v119 )
              v119();
          }
          if ( (int)IsGrepAcquireRFONTListSemaphoreExSupported() >= 0 )
          {
            v123 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v121) + 24) + 1912LL);
            if ( v123 )
              v123();
          }
          GreAcquireSemaphore<19,>((struct _ERESOURCE **)v189, v120, v122);
          GreAcquireSemaphore<20,>((__int64 *)v189, v124, v125);
          v126 = *(HDEV *)MDEV;
          if ( v186 )
          {
            if ( (unsigned int)bDynamicModeChange(*((HDEV *)a5 + 5), v126, 1) == 1 )
            {
              v129 = *(HDEV *)MDEV;
              *(_QWORD *)MDEV = *((_QWORD *)a5 + 5);
              *(_QWORD *)a5 = v129;
              *((_QWORD *)a5 + 5) = v129;
              if ( v56 )
                v190 = v129;
              goto LABEL_185;
            }
            v130 = 12LL;
          }
          else
          {
            if ( (unsigned int)bDynamicModeChange(*(HDEV *)a5, v126, 1) == 1 )
            {
              v131 = *(_QWORD *)a5;
              *(_QWORD *)a5 = *(_QWORD *)MDEV;
              *(_QWORD *)MDEV = v131;
              goto LABEL_185;
            }
            v130 = 13LL;
          }
          DrvLogDrvChangeDisplaySettingsFailures(v130, 3221225473LL);
          v183 = 1;
          v66 = 1;
LABEL_185:
          GreReleaseSemaphoreExclusive<20,>((__int64 *)v189, v127, v128);
          GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            *(_QWORD *)v189,
            v132);
          if ( (int)IsGrepReleaseRFONTListSemaphoreExSupported() >= 0 )
          {
            v134 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v133) + 24) + 1928LL);
            if ( v134 )
              v134();
          }
          if ( (int)IsGrepReleasePublicPFTSemaphoreExSupported() >= 0 )
          {
            v136 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v135) + 24) + 1880LL);
            if ( v136 )
              v136();
          }
          GreReleaseSemaphoreExclusive<13,>(v189);
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v117, v137, v138);
LABEL_192:
          if ( !v66 && v56 && v190 )
          {
            v197 = v56;
            v195 = v190;
            if ( v188 )
            {
              v139 = *((_QWORD *)v190 + 318);
              *((_QWORD *)v56 + 318) = v139;
              if ( v139 )
                *(_QWORD *)(v139 + 48) = v56;
              *((_QWORD *)v56 + 223) = *((_QWORD *)v190 + 223);
              DrvTransferGdiObjects(v56, v190, v62);
              *((_QWORD *)v190 + 318) = 0LL;
              *((_QWORD *)v190 + 223) = 0LL;
              _m_prefetchw(v190 + 10);
              do
                v140 = *((_DWORD *)v190 + 10);
              while ( v140 != _InterlockedCompareExchange((volatile signed __int32 *)v190 + 10, v140 | 0x80000, v140) );
              _m_prefetchw(v56 + 10);
              do
                v141 = *((_DWORD *)v56 + 10);
              while ( v141 != _InterlockedCompareExchange((volatile signed __int32 *)v56 + 10, v141 & 0xFFF7FFFF, v141) );
              PDEVOBJ::bDisabled((PDEVOBJ *)&v195, 1);
              PDEVOBJ::CompletePDEV((PDEVOBJ *)&v197, *((struct DHPDEV__ **)v56 + 223), v56);
            }
            else
            {
              *((_QWORD *)v56 + 318) = 0LL;
              PDEVOBJ::bDisabled((PDEVOBJ *)&v197, 1);
            }
          }
          goto LABEL_204;
        }
LABEL_115:
        GreAcquireSemaphore<10,>(v189);
        GreAcquireSemaphore<13,>(v189);
        if ( (int)IsGrepAcquirePublicPFTSemaphoreExSupported() >= 0 )
        {
          v86 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v85) + 24) + 1864LL);
          if ( v86 )
            v86();
        }
        if ( (int)IsGrepAcquireRFONTListSemaphoreExSupported() >= 0 )
        {
          v90 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v88) + 24) + 1912LL);
          if ( v90 )
            v90();
        }
        GreAcquireSemaphore<19,>((struct _ERESOURCE **)v189, v87, v89);
        GreAcquireSemaphore<20,>((__int64 *)v189, v91, v92);
        goto LABEL_122;
      }
      v82 = 0;
      goto LABEL_115;
    }
    v49 = *((_DWORD *)v47 + 5);
    v185 = 2;
    if ( v49 == *((_DWORD *)a5 + 5) && v46 == *(_WORD *)(v189 + 1168) )
    {
      v50 = a9;
      v51 = a9 != 0LL;
      if ( v49 )
      {
        do
        {
          v52 = 56LL * v48;
          if ( *(_QWORD *)((char *)MDEV + v52 + 40) != *(_QWORD *)&a5[v52 + 40]
            || *(_DWORD *)((char *)MDEV + v52 + 72) != *(_DWORD *)&a5[v52 + 72] )
          {
            goto LABEL_63;
          }
          v53 = *(_QWORD *)((char *)MDEV + v52 + 56) - *(_QWORD *)&a5[v52 + 56];
          if ( !v53 )
            v53 = *(_QWORD *)((char *)MDEV + v52 + 64) - *(_QWORD *)&a5[v52 + 64];
          if ( v53 )
LABEL_63:
            v185 = 0;
          if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() && v51 )
          {
            if ( *(_DWORD *)((char *)MDEV + v52 + 72) != *(_DWORD *)&a5[v52 + 72] )
              goto LABEL_70;
            v54 = *(_QWORD *)((char *)MDEV + v52 + 56) - *(_QWORD *)&a5[v52 + 56];
            if ( !v54 )
              v54 = *(_QWORD *)((char *)MDEV + v52 + 64) - *(_QWORD *)&a5[v52 + 64];
            if ( v54 )
LABEL_70:
              v51 = 0;
          }
          ++v48;
        }
        while ( v48 < *((_DWORD *)MDEV + 5) );
        LOBYTE(v13) = a8;
        v50 = a9;
      }
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() && v50 )
        *v50 = v51;
      goto LABEL_80;
    }
LABEL_78:
    v55 = 0;
    v185 = 0;
    goto LABEL_81;
  }
  if ( !(unsigned int)DrvUpdateDisplayModeInMdev((struct _MDEV *)a5, a3) )
  {
    v13 = a8 & 0xFFFFFFBF;
    LOBYTE(a8) = a8 & 0xBF;
    goto LABEL_52;
  }
  v45 = v196;
  *v196 = a5;
  v35 = 3;
  WdLogSingleEntry0(4LL);
  WdLogGlobalForLineNumber = 23924;
  DrvReleaseChangeDisplaySettingLocks();
LABEL_261:
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer, v20, v18, v19);
  if ( (v13 & 2) == 0 || v35 )
  {
    if ( v35 == 2 && *v45 )
    {
      GreDeleteFastMutex(*v45, v20, v18, v19);
      *v45 = 0LL;
    }
  }
  else if ( a5 )
  {
    GreDeleteFastMutex(a5, v20, v18, v19);
  }
  WdLogSingleEntry1(5LL, v35);
  WdLogGlobalForLineNumber = 25448;
  *(_DWORD *)(v189 + 1152) = 0;
  *(_QWORD *)(v189 + 1160) = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v182, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v35;
}
