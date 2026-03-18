/*
 * XREFs of xxxMenuWindowProc @ 0x140183030
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140182E00 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     _SetTimer @ 0x140019BA8 (_SetTimer.c)
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x140023AEC (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x140023FA0 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     xxxValidateRect @ 0x14002D168 (xxxValidateRect.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     xxxMNButtonUp @ 0x14003CC8C (xxxMNButtonUp.c)
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14003D91C (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     xxxDWP_DoNCActivate @ 0x14003EE4C (xxxDWP_DoNCActivate.c)
 *     xxxSendUAHMenuMessage @ 0x14003FB0C (xxxSendUAHMenuMessage.c)
 *     MNIsFlatMenu @ 0x14004083C (MNIsFlatMenu.c)
 *     xxxMNCompute @ 0x140041D3C (xxxMNCompute.c)
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
 *     xxxMNMouseMove @ 0x140044310 (xxxMNMouseMove.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x140044744 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x14004476C (xxxMNFindWindowFromPoint.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNAnimate @ 0x140045C18 (MNAnimate.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x140048F9C (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     GreGetLayout @ 0x140054CD8 (GreGetLayout.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     xxxPlayEventSound @ 0x1400D7F00 (xxxPlayEventSound.c)
 *     IsPointerParentNotify @ 0x140137050 (IsPointerParentNotify.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x140138D58 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     IsPointerInputMessageWithState @ 0x140144520 (IsPointerInputMessageWithState.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1401597F0 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x140159FA4 (FindBestPos.c)
 *     LockPopupMenu @ 0x14015AD40 (LockPopupMenu.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x14015BD30 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14015BD74 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxMNEndMenuState @ 0x14015BDC0 (xxxMNEndMenuState.c)
 *     xxxMNButtonDown @ 0x14016D560 (xxxMNButtonDown.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140187B78 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1401A73E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1401A8180 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401BB244 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     GreSetWindowOrg @ 0x1401CFDBC (GreSetWindowOrg.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1401D9BFC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     zzzStartFade @ 0x1401E99CC (zzzStartFade.c)
 *     zzzShowFade @ 0x1401E9AD4 (zzzShowFade.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1402019C0 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1402054B8 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNAllocPopup @ 0x140208610 (MNAllocPopup.c)
 *     MNDrawEdge @ 0x14021227C (MNDrawEdge.c)
 *     xxxCallHandleMenuMessages @ 0x14022EC60 (xxxCallHandleMenuMessages.c)
 *     xxxValidateClassAndSize @ 0x140242488 (xxxValidateClassAndSize.c)
 *     xxxEndMenuLoop @ 0x140258BF0 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x140266DC0 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     xxxMNSetCapture @ 0x1402677EC (xxxMNSetCapture.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 *     MNCreateAnimationBitmap @ 0x1402B593C (MNCreateAnimationBitmap.c)
 *     xxxUserModeCallback @ 0x1402BE608 (xxxUserModeCallback.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402BEEBC (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402BEF74 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402BF250 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNCheckButtonDownState @ 0x1402BF3A8 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1402BF404 (MNGetpItem.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1402BFA0C (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     MNEraseBackground @ 0x1402EAB2C (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1402EAC74 (xxxMNDrawFullNC.c)
 *     MNFindNextValidItem @ 0x1402EC5F0 (MNFindNextValidItem.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall xxxMenuWindowProc(
        const struct tagWND **a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct tagMONITOR *a4)
{
  unsigned int v4; // ebx
  int v6; // edi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  BOOL v15; // r8d
  unsigned __int64 v16; // rdi
  struct tagTHREADINFO *v17; // rax
  const struct tagWND *v18; // r12
  __int64 v19; // rdx
  struct tagMENUSTATE *i; // rdi
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // r12
  struct tagTHREADINFO *v26; // rax
  __int64 v27; // r8
  int v28; // eax
  struct tagDRAWITEMSTRUCT *v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rdx
  struct tagMENUWND *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  struct tagWND *v38; // rcx
  __int64 DCEx; // rbx
  __int64 v40; // rdx
  __int64 v41; // rdi
  int v42; // ebx
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rbx
  const struct tagWND *v46; // rcx
  struct tagMONITOR *v47; // rdi
  int v48; // ecx
  __int64 v49; // rdx
  int v50; // eax
  __int64 *v51; // rcx
  __int64 ValidItem; // rbx
  __int64 v53; // rdx
  __int64 v54; // rdx
  _QWORD *v55; // rax
  __int64 v56; // rbx
  int v57; // edi
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 *v60; // rax
  struct tagWND *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rdx
  struct tagMONITOR *v64; // rax
  int v65; // ebx
  struct tagMONITOR *v66; // rdi
  int v67; // edi
  __int64 v68; // rdx
  __int64 v69; // r9
  int v70; // r14d
  struct tagMONITOR *v71; // r12
  const struct tagWND *v72; // rax
  int v73; // edx
  int BestPos; // eax
  __int64 v75; // rdx
  __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  struct tagTHREADINFO *v82; // rax
  __int64 v83; // rbx
  struct tagTHREADINFO *v84; // rax
  __int64 v85; // rax
  unsigned int v86; // ecx
  __int64 v87; // rdx
  char *v88; // r13
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rdx
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  int v103; // ecx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 UserSessionState; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rcx
  struct tagTHREADINFO *v113; // rbx
  const struct tagWND *v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  int v117; // edi
  unsigned int v118; // ebx
  const struct tagWND **TopWindow; // rax
  unsigned int v120; // eax
  __int64 v121; // r14
  __int64 *v122; // rax
  struct tagWND **v123; // rbx
  __int64 v124; // rdi
  __int64 v125; // rdx
  __int64 v126; // rdi
  __int64 v127; // rdx
  ULONG_PTR *v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rdx
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rcx
  int v140; // eax
  int v141; // edx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rbx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // rdx
  char v151; // [rsp+28h] [rbp-99h]
  struct tagMONITOR *v152; // [rsp+58h] [rbp-69h] BYREF
  __int64 v153[2]; // [rsp+60h] [rbp-61h] BYREF
  __int64 v154; // [rsp+70h] [rbp-51h] BYREF
  struct tagMENUWND *v155; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v156; // [rsp+80h] [rbp-41h] BYREF
  struct _POINTL v157; // [rsp+88h] [rbp-39h] BYREF
  ULONG_PTR v158; // [rsp+90h] [rbp-31h] BYREF
  __int64 v159; // [rsp+98h] [rbp-29h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A8h] [rbp-19h] BYREF
  unsigned int v161; // [rsp+B8h] [rbp-9h]
  ULONG_PTR v162[2]; // [rsp+C0h] [rbp-1h] BYREF
  struct tagMENU **v163[3]; // [rsp+D0h] [rbp+Fh] BYREF

  v4 = a2;
  v161 = a2;
  v152 = a4;
  v6 = (int)a4;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v153, 0LL);
  v158 = -1LL;
  v8 = 0LL;
  v159 = 0LL;
  v157 = 0LL;
  v154 = 0LL;
  v11 = PtiCurrent(v10, v9);
  v156 = 2;
  if ( a1[2] != v11 )
  {
    LODWORD(v155) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4336LL);
  }
  if ( !(unsigned int)xxxValidateClassAndSize((_DWORD)a1, v4, a3, v6, 668, 129, (__int64)&v154) )
  {
    v8 = v154;
LABEL_265:
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&v158, v12);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v153, v129);
    return v8;
  }
  if ( a1[2] != PtiCurrent(v13, v12) )
  {
    v15 = IsPointerInputMessageWithState(v4);
    if ( !v15 && !IsPointerParentNotify(v14, a3) )
      goto LABEL_14;
    LOWORD(v16) = 0;
    if ( v15 )
    {
      LOWORD(v16) = a3;
    }
    else
    {
      if ( !IsPointerParentNotify(v4, a3) )
      {
LABEL_13:
        v17 = PtiCurrent(v14, v12);
        if ( !GetThreadPointerData((struct _LIST_ENTRY *)((char *)v17 + 1208), v16, 0LL, 0LL) )
          goto LABEL_265;
LABEL_14:
        v8 = xxxSendMessage((struct tagWND *)a1, v4);
        goto LABEL_265;
      }
      v16 = a3 >> 16;
    }
    if ( (_WORD)v16 == 1 )
      goto LABEL_265;
    goto LABEL_13;
  }
  v18 = a1[35];
  v155 = v18;
  v19 = *((_QWORD *)v18 + 1);
  *(_QWORD *)v18 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v153, v19);
  if ( *(_QWORD *)v153[0] )
  {
    for ( i = *(struct tagMENUSTATE **)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 648LL);
          i;
          i = (struct tagMENUSTATE *)*((_QWORD *)i + 6) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*((_QWORD *)v18 + 1) + 64LL) )
        break;
    }
  }
  else
  {
    i = 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v154, i);
  if ( *(_QWORD *)v153[0] )
  {
    v21 = *(_QWORD *)v153[0];
    v23 = *(_QWORD *)(*(_QWORD *)v153[0] + 40LL);
  }
  else
  {
    v23 = 0LL;
  }
  v24 = 256LL;
  v25 = 1LL;
  if ( !i || !v23 )
  {
    switch ( v4 )
    {
      case 0x1E0u:
        if ( !*(_QWORD *)v153[0] || *(char *)(*(_QWORD *)(*(_QWORD *)v155 + 40LL) + 19LL) < 0 )
          goto LABEL_76;
LABEL_193:
        if ( !a3 )
          goto LABEL_301;
        v92 = ValidateHmenu(a3, 1LL);
        if ( !v92 )
          goto LABEL_301;
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v163, v92);
        LockPopupMenu((__int64)v153, (__int64 *)(*(_QWORD *)v153[0] + 40LL), (__int64)v163);
        goto LABEL_210;
      case 0x81u:
        v33 = v155;
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)v155 + 40LL) + 19LL) < 0 )
          goto LABEL_76;
        goto LABEL_45;
      case 0x70u:
LABEL_200:
        if ( v4 <= 0x18 )
        {
          if ( v4 == 24 )
          {
            if ( !a3 )
              xxxMNCancel((__int64)i, 0, 0LL, 0LL);
            goto LABEL_35;
          }
          if ( v4 == 3 || v4 == 5 )
          {
            if ( !*(_QWORD *)(*(_QWORD *)v153[0] + 24LL) )
              goto LABEL_301;
            v121 = MNGetpItem(v153, *(unsigned int *)(*(_QWORD *)v153[0] + 84LL));
            v122 = (__int64 *)safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v153[0] + 24LL));
            v123 = (struct tagWND **)v122;
            if ( !v121 )
              goto LABEL_301;
            if ( !v122 )
              goto LABEL_301;
            v124 = v122[1];
            if ( !v124 )
              goto LABEL_301;
            v125 = *v122;
            if ( !*v122 )
              goto LABEL_301;
            v126 = *(_QWORD *)(v124 + 40);
            v156 = 0;
            LODWORD(v155) = 0;
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v125);
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v162, v126);
            if ( !*(_DWORD *)(v126 + 64) )
              xxxSendMessage(*v123, 0x1E2u);
            if ( *(_QWORD *)(*(_QWORD *)v153[0] + 40LL) && MNIspItemValid(*(_QWORD *)(*(_QWORD *)v153[0] + 40LL), v121) )
              xxxMNPositionHierarchy(
                (unsigned int)v153,
                v121,
                *(_DWORD *)(v126 + 64) + 6,
                *(_DWORD *)(v126 + 68) + 6,
                (__int64)&v156,
                (__int64)&v155,
                0LL);
            xxxSetWindowPos(*v123, 0LL, v156, (unsigned int)v155, 0, 0, 1029);
            Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(v162, v127);
            v128 = BugCheckParameter3;
            goto LABEL_300;
          }
          if ( v4 != 6 )
          {
            if ( v4 != 15 )
            {
              if ( v4 == 20 && *(_QWORD *)(*(_QWORD *)(v23 + 40) + 24LL) )
              {
                MNEraseBackground(
                  (HDC)a3,
                  *((_DWORD *)a1[5] + 28) - *((_DWORD *)a1[5] + 26),
                  *((_DWORD *)a1[5] + 29) - *((_DWORD *)a1[5] + 27));
                goto LABEL_49;
              }
              goto LABEL_35;
            }
            SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v163, v23);
            xxxHandleMenuPainting(a1, v163);
LABEL_210:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v163, v93);
            goto LABEL_301;
          }
          v94 = *((_DWORD *)i + 2);
          if ( (v94 & 0x100) != 0 )
          {
            if ( (_WORD)a3 || (v94 & 0x200) != 0 || (**(_DWORD **)i & 0x80000) != 0 )
              goto LABEL_35;
            LOBYTE(v24) = 1;
            v152 = (struct tagMONITOR *)HMValidateHandleNoSecure((__int64)v152, v24);
            v95 = safe_cast_fnid_to_PMENUWND(v152);
            v29 = v152;
            if ( !v152 )
              goto LABEL_36;
            if ( v95 )
            {
              v98 = *(_QWORD *)(v95 + 8);
              if ( v98 )
              {
                if ( *(_QWORD *)i == *(_QWORD *)(v98 + 64) )
                  goto LABEL_36;
              }
            }
            if ( (*((_DWORD *)i + 2) & 0x10000) != 0 )
            {
              v99 = *(_QWORD *)(W32GetUserSessionState(v97, v96) + 18888);
              if ( v99 == *((_QWORD *)PtiCurrent(v101, v100) + 59) )
              {
                *((_DWORD *)i + 2) &= ~0x10000u;
                PostMessage((int)a1, 498, 0, 0);
                v4 = v161;
                goto LABEL_36;
              }
            }
LABEL_224:
            v103 = (int)a1;
LABEL_225:
            PostMessage(v103, 499, 0, 0);
            goto LABEL_301;
          }
          if ( !(_WORD)a3 )
            goto LABEL_301;
          if ( *((_WORD *)PtiCurrent(v21, 256LL) + 336) >= 0x500u )
            goto LABEL_224;
          if ( !*(_QWORD *)(W32GetUserSessionState(1280LL, v102) + 18896)
            || (UserSessionState = W32GetUserSessionState(v105, v104),
                !IsWindowActivateable(*(const struct tagWND **)(*(_QWORD *)(UserSessionState + 18896) + 136LL)))
            || (v110 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v108, v107) + 18896) + 136LL) + 40LL),
                (*(_WORD *)(v110 + 42) & 0x2FFF) == 0x29C) )
          {
            v117 = (int)a1;
            v118 = 0;
            do
            {
              TopWindow = (const struct tagWND **)FindNextTopWindow::NextTopWindow((__int64)a1, 0LL, 0);
              a1 = TopWindow;
              if ( !TopWindow )
                break;
              if ( IsWindowActivateable(TopWindow[25]) )
              {
                v111 = (__int64)a1[25];
                v112 = *(_WORD *)(*(_QWORD *)(v111 + 40) + 42LL) & 0x2FFF;
                if ( (_DWORD)v112 != 668 )
                {
                  a1 = (const struct tagWND **)a1[25];
                  goto LABEL_230;
                }
              }
              v120 = v118++;
            }
            while ( v120 < 0xFF );
            if ( !v118 )
              goto LABEL_230;
            v103 = v117;
            goto LABEL_225;
          }
          v112 = *(_QWORD *)(W32GetUserSessionState(v110, v109) + 18896);
          a1 = *(const struct tagWND ***)(v112 + 136);
LABEL_230:
          if ( !a1 )
            goto LABEL_301;
          v113 = PtiCurrent(v112, v111);
          Win32HM_LockIntoThread<0>((__int64)v113, (__int64)a1, v162);
          v114 = a1[2];
          v115 = *((_QWORD *)v113 + 59);
          if ( *((_QWORD *)v114 + 59) == v115 )
          {
            xxxActivateWindowWithOptions(a1, 0LL, 0LL, 1LL, 0);
          }
          else if ( *(_QWORD *)(W32GetUserSessionState(v115, v114) + 18888) == *((_QWORD *)v113 + 59) )
          {
            xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL);
          }
LABEL_299:
          v128 = v162;
LABEL_300:
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v128, v116);
          goto LABEL_301;
        }
        if ( v4 == 28 )
        {
          if ( (*((_DWORD *)i + 2) & 0x100) == 0 || a1 != *(const struct tagWND ***)(*(_QWORD *)i + 56LL) )
            goto LABEL_301;
          if ( a3 )
          {
            PostMessage((int)a1, 498, 0, 0);
            v146 = *(_QWORD *)(W32GetUserSessionState(v145, v144) + 18888);
            *((_DWORD *)i + 2) = *((_DWORD *)i + 2) & 0xFFFEFFFF | (*((_QWORD *)PtiCurrent(v148, v147) + 59) != v146
                                                                  ? 0x10000
                                                                  : 0);
          }
          if ( !*(_QWORD *)(*(_QWORD *)v153[0] + 8LL) )
            goto LABEL_301;
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
            v162,
            *(_QWORD *)(*(_QWORD *)v153[0] + 8LL));
          if ( a3 && (*((_DWORD *)i + 2) & 0x10000) == 0 )
            v156 = 1;
          xxxDWP_DoNCActivate(*(struct tagWND **)(*(_QWORD *)v153[0] + 8LL), v156, 1LL);
          goto LABEL_299;
        }
        if ( v4 != 70 )
        {
          if ( v4 != 71 )
          {
            if ( v4 != 112 )
              goto LABEL_35;
            if ( i && (*((_DWORD *)i + 2) & 0x400) != 0 )
            {
              v152 = *a1;
              xxxUserModeCallback(101, (unsigned int)&v152, 8, v22, v151);
            }
            xxxMNDestroyHandler(v155);
LABEL_264:
            MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v154);
            goto LABEL_265;
          }
          if ( (*((_DWORD *)v152 + 8) & 0x40) == 0 || (**(_DWORD **)v153[0] & 0x8000000) == 0 )
            goto LABEL_35;
          if ( (*(_DWORD *)(W32GetUserSessionState(*(_QWORD *)v153[0], 256LL) + 43032) & 0x10) != 0 )
          {
            zzzStartFade();
          }
          else
          {
            *((_DWORD *)i + 26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            SetTimer((__int64)a1, 65531, 10, 0, 0);
          }
LABEL_271:
          **(_DWORD **)v153[0] &= ~0x8000000u;
          goto LABEL_35;
        }
        if ( (*((_DWORD *)v152 + 8) & 0x40) == 0 )
          goto LABEL_35;
        if ( (*(_DWORD *)(W32GetUserSessionState(v21, 256LL) + 66804) & 0x80000002) != 0x80000002 )
          goto LABEL_271;
        if ( (**(_DWORD **)v153[0] & 0x8000000) == 0 )
          goto LABEL_271;
        v131 = W32GetUserSessionState(*(_QWORD *)v153[0], v130);
        if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(v131 + 3056)) == 1 )
          goto LABEL_271;
        v134 = W32GetUserSessionState(v133, v132);
        if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(v134 + 3056)) == 4
          || (GetAppCompatFlags2(1024LL, v135) & 1) != 0 )
        {
          goto LABEL_271;
        }
        *((_DWORD *)i + 29) = *((_DWORD *)a1[5] + 24) - *((_DWORD *)a1[5] + 22);
        v137 = (unsigned int)(*((_DWORD *)a1[5] + 25) - *((_DWORD *)a1[5] + 23));
        *((_DWORD *)i + 30) = v137;
        if ( *(_DWORD *)(W32GetUserSessionState(v137, v136) + 43264)
          || (*(_DWORD *)(W32GetUserSessionState(v139, v138) + 66804) & 0x80000200) != 0x80000200 )
        {
          if ( !(unsigned int)MNCreateAnimationBitmap(i, *((unsigned int *)i + 29), *((unsigned int *)i + 30)) )
            goto LABEL_271;
          *((_QWORD *)i + 12) = _GetDCEx(a1, 1LL, 65665LL);
          v140 = 0;
          v141 = *((_DWORD *)i + 2) ^ ((**(_DWORD **)v153[0] >> 4) ^ *((_DWORD *)i + 2)) & 0xF80000;
          *((_DWORD *)i + 2) = v141;
          if ( (v141 & 0x180000) == 0 )
            v140 = *((_DWORD *)i + 29);
          *((_DWORD *)i + 27) = v140;
          if ( (v141 & 0x600000) == 0 )
            LODWORD(v8) = *((_DWORD *)i + 30);
          *((_DWORD *)i + 28) = v8;
        }
        else if ( !CreateFadeInternal((struct tagWND *)a1, 0LL, 0xAFu, 0x11u, 0) )
        {
          goto LABEL_271;
        }
        *(_DWORD *)(*(_QWORD *)(v23 + 40) + 40LL) |= 8u;
        xxxSendMessage((struct tagWND *)a1, 0x317u);
        *(_DWORD *)(*(_QWORD *)(v23 + 40) + 40LL) &= ~8u;
        if ( (*(_DWORD *)(W32GetUserSessionState(v143, v142) + 43032) & 0x10) != 0 )
          zzzShowFade();
        goto LABEL_35;
    }
    goto LABEL_35;
  }
  v26 = PtiCurrent(v21, 256LL);
  Win32HM_LockIntoThread<0>((__int64)v26, v23, &v158);
  if ( !*(_QWORD *)(*(_QWORD *)v153[0] + 64LL)
    || (v27 = *(_QWORD *)v153[0],
        v28 = 1,
        **(_QWORD **)(*(_QWORD *)(*(_QWORD *)v155 + 16LL) + 648LL) == *(_QWORD *)(*(_QWORD *)v153[0] + 64LL)) )
  {
    v28 = 0;
  }
  v21 = *((unsigned int *)i + 2);
  v24 = 256LL;
  if ( (v21 & 0x100) != 0 && (v21 & 0x200) == 0 )
  {
    if ( v28 )
    {
      if ( v4 - 512 <= 0xE || v4 - 256 <= 9 || v4 - 160 <= 0xD )
        goto LABEL_35;
    }
    else
    {
      if ( (unsigned int)xxxCallHandleMenuMessages((_DWORD)i, (_DWORD)a1, v4, a3, (__int64)v152) )
        goto LABEL_76;
      v24 = 256LL;
    }
  }
  if ( v4 <= 0x1E1 )
  {
    if ( v4 == 481 )
    {
      if ( !v159 || (v23 = Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)&v158)) != 0 )
        v8 = *(_QWORD *)v23;
      goto LABEL_264;
    }
    if ( v4 <= 0x81 )
    {
      if ( v4 == 129 )
      {
        v33 = v155;
LABEL_45:
        if ( !*((_QWORD *)v33 + 1) && !*((_QWORD *)v33 + 2) )
        {
          v34 = MNAllocPopup(1LL);
          SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v153, v34);
          if ( *(_QWORD *)v153[0] )
          {
            *((_QWORD *)v33 + 1) = *(_QWORD *)v153[0];
            **(_DWORD **)v153[0] |= 0x40000000u;
            *(_DWORD *)(*(_QWORD *)v153[0] + 80LL) = -1;
            BugCheckParameter3[1] = (ULONG_PTR)a1;
            BugCheckParameter3[0] = *(_QWORD *)v153[0] + 16LL;
            HMAssignmentLock(BugCheckParameter3, 0LL);
LABEL_49:
            MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v154);
            v8 = 1LL;
            goto LABEL_265;
          }
        }
LABEL_76:
        v25 = 0LL;
        goto LABEL_37;
      }
      goto LABEL_200;
    }
    if ( v4 == 131 )
    {
      v47 = v152;
      xxxDefWindowProc(a1, 131LL, (HWND)a3, v152);
      if ( (*(_DWORD *)(v23 + 124) & 3) != 0 )
      {
        v48 = *(_DWORD *)(GetDPIMetrics() + 28);
        *((_DWORD *)v152 + 1) += v48;
        *((_DWORD *)v47 + 3) -= v48;
      }
      goto LABEL_301;
    }
    if ( v4 != 132 )
    {
      if ( v4 == 133 )
      {
        if ( (**(_DWORD **)v153[0] & 0x8000000) != 0 )
        {
          xxxValidateRect((__int64)a1, 0LL);
        }
        else
        {
          if ( (*(_DWORD *)(v23 + 124) & 3) != 0 )
          {
            if ( (unsigned int)MNIsUAHMenu((struct tagMENU *)v23, 256LL) )
            {
              v36 = 0LL;
              v37 = 65537LL;
              v38 = *(struct tagWND **)(*(_QWORD *)v153[0] + 16LL);
            }
            else
            {
              v37 = 328833LL;
              v36 = a3;
              v38 = (struct tagWND *)a1;
            }
            DCEx = _GetDCEx(v38, v36, v37);
            xxxMNDrawFullNC((struct tagWND *)a1);
          }
          else
          {
            if ( !MNIsFlatMenu(*(_QWORD *)v153[0], 256LL) )
            {
              v43 = xxxDefWindowProc(a1, v4, (HWND)a3, v152);
              if ( (unsigned int)MNIsUAHMenu((struct tagMENU *)v23, v44) && *(_QWORD *)(*(_QWORD *)v153[0] + 16LL) )
              {
                v45 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v153[0] + 16LL), 0LL, 65537LL);
                xxxSendUAHMenuMessage(*(struct tagWND **)(*(_QWORD *)v153[0] + 16LL), 0x95u);
                _ReleaseDC(v45);
              }
              MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v154);
              v8 = v43;
              goto LABEL_265;
            }
            if ( (unsigned int)MNIsUAHMenu((struct tagMENU *)v23, v40) )
            {
              v41 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v153[0] + 16LL), 0LL, 65537LL);
              v42 = xxxSendUAHMenuMessage(*(struct tagWND **)(*(_QWORD *)v153[0] + 16LL), 0x95u);
              _ReleaseDC(v41);
              if ( v42 )
                goto LABEL_301;
            }
            DCEx = _GetDCEx(a1, a3, 328833LL);
            MNDrawEdge(v23, DCEx, (char *)a1[5] + 88, 0LL);
          }
          _ReleaseDC(DCEx);
        }
LABEL_301:
        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v154);
        Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&v158, v149);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v153, v150);
        return 0LL;
      }
      if ( v4 != 256 )
      {
        if ( v4 == 258 )
          goto LABEL_77;
        if ( v4 != 260 )
        {
          if ( v4 != 262 )
          {
            if ( v4 != 275 )
            {
              if ( v4 != 480 )
                goto LABEL_35;
              goto LABEL_193;
            }
            if ( a3 != 65529 )
            {
              if ( a3 == 65531 )
              {
                if ( *((_QWORD *)i + 12) )
                  MNAnimate((__int64 *)i, 1LL);
                goto LABEL_301;
              }
              if ( a3 == 65534 )
              {
                **(_DWORD **)v153[0] &= ~0x80u;
                xxxMNOpenHierarchy((__int64 **)v153, (__int64)i);
                goto LABEL_301;
              }
              if ( a3 != 0xFFFF )
              {
                if ( a3 - 4294967292u <= 1 )
                {
                  if ( (*((_DWORD *)i + 2) & 8) != 0 )
                    xxxMNDoScroll(v153, (unsigned int)a3, 0LL);
                  else
                    FindTimer((__int64)a1, (unsigned int)a3, 0, 1, 0LL);
                }
                goto LABEL_301;
              }
              **(_DWORD **)v153[0] &= ~0x80u;
              goto LABEL_69;
            }
            FindTimer((__int64)a1, 65529LL, 0, 1, 0LL);
            if ( (*((_DWORD *)i + 2) & 0x1000) == 0 )
              goto LABEL_301;
            goto LABEL_74;
          }
LABEL_77:
          xxxMNChar(v153, i, (unsigned int)a3);
          goto LABEL_301;
        }
      }
      xxxMNKeyDown(v153, i, (unsigned int)a3);
      goto LABEL_301;
    }
    if ( (*((_DWORD *)i + 2) & 0x100) != 0 )
    {
      v157.x = (__int16)v152;
      v46 = a1[5];
      v157.y = SWORD1(v152);
      if ( PtInRect((_DWORD *)v46 + 22, *(_QWORD *)&v157) )
        goto LABEL_37;
      goto LABEL_76;
    }
LABEL_35:
    v29 = v152;
LABEL_36:
    v25 = xxxDefWindowProc(a1, v4, (HWND)a3, v29);
LABEL_37:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v154);
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&v158, v30);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v153, v31);
    return v25;
  }
  if ( v4 > 0x2A3 )
  {
    if ( v4 != 791 )
    {
      if ( v4 != 792 )
        goto LABEL_35;
      xxxMenuDraw((HDC)a3, (struct tagMENU *)v23, (const struct tagWND *)a1);
      goto LABEL_301;
    }
    if ( ((unsigned __int8)v152 & 2) != 0 && (*(_DWORD *)(v23 + 124) & 3) != 0 )
    {
      if ( a3 && (v88 = (char *)(a1 + 5), (*((_BYTE *)a1[5] + 26) & 0x40) != 0) && (GreGetLayout((HDC)a3) & 1) == 0 )
      {
        LODWORD(v155) = GreSetLayout(
                          a3,
                          (unsigned int)(*(_DWORD *)(*(_QWORD *)v88 + 96LL) - *(_DWORD *)(*(_QWORD *)v88 + 88LL)),
                          1LL);
      }
      else
      {
        LODWORD(v25) = 0;
        LODWORD(v155) = 0;
        v88 = (char *)(a1 + 5);
      }
      xxxMNDrawFullNC((struct tagWND *)a1);
      if ( (_DWORD)v25 )
        GreSetLayout(
          a3,
          (unsigned int)(*(_DWORD *)(*(_QWORD *)v88 + 96LL) - *(_DWORD *)(*(_QWORD *)v88 + 88LL)),
          (unsigned int)v155);
      GreGetDCPoint((HDC)a3, 8u, &v157);
      GetDPIMetrics();
      GreSetWindowOrg((HDC)a3);
      xxxDefWindowProc(
        a1,
        791LL,
        (HWND)a3,
        (struct tagDRAWITEMSTRUCT *)((unsigned __int64)v152 & 0xFFFFFFFFFFFFFFFDuLL));
      GreSetWindowOrg((HDC)a3);
      goto LABEL_301;
    }
    ValidItem = xxxDefWindowProc(a1, 791LL, (HWND)a3, v152);
    if ( !(unsigned int)MNIsUAHMenu((struct tagMENU *)v23, v89)
      || (v91 = v153[0], v90 = *(_QWORD *)v153[0], !*(_QWORD *)(*(_QWORD *)v153[0] + 16LL))
      || !(unsigned int)xxxSendUAHMenuMessage(*(struct tagWND **)(*(_QWORD *)v153[0] + 16LL), 0x95u) )
    {
      if ( MNIsFlatMenu(v91, v90) )
        MNDrawEdge(v23, a3, (char *)a1[5] + 88, 0LL);
    }
    goto LABEL_120;
  }
  if ( v4 == 675 )
  {
    *((_DWORD *)i + 2) ^= ((unsigned __int16)*((_DWORD *)i + 2) ^ (unsigned __int16)~(unsigned __int16)(*((_DWORD *)i + 2) >> 1)) & 0x4000;
    **(_DWORD **)v153[0] &= ~0x100000u;
    MNSetTimerToAutoDismiss(i, (struct tagWND *)a1);
    if ( *(_QWORD *)(*(_QWORD *)v153[0] + 16LL) == *(_QWORD *)(*(_QWORD *)i + 56LL) )
      xxxMNSelectItem((__int64 **)v153, (__int64)i, -1);
    goto LABEL_301;
  }
  if ( v4 > 0x1ED )
  {
    switch ( v4 )
    {
      case 0x1EEu:
        xxxMNMouseMove(v153, (__int64)i, (unsigned int)v152, v22);
        goto LABEL_301;
      case 0x1EFu:
        if ( a3 < *(unsigned int *)(*(_QWORD *)(v23 + 40) + 44LL) || a3 >= 0xFFFFFFFC )
          xxxMNButtonUp(v153, (__int64)i, a3, (__int64)v152);
        goto LABEL_301;
      case 0x1F0u:
        v25 = (unsigned __int16)MNSetTimerToOpenHierarchy(v153);
        goto LABEL_37;
      case 0x1F1u:
        xxxMNDoubleClick(i, v153, (unsigned int)a3);
        goto LABEL_301;
      case 0x1F2u:
        xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v153[0] + 16LL), 0LL, 0LL, 1LL, 0);
        goto LABEL_301;
    }
    if ( v4 != 499 )
    {
      if ( v4 != 500 )
        goto LABEL_35;
      if ( v159 )
        Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)&v158);
      if ( (*((_DWORD *)i + 2) & 0x80u) == 0 )
        goto LABEL_76;
      if ( !*(_QWORD *)(*(_QWORD *)v153[0] + 8LL) )
        goto LABEL_76;
      LOBYTE(v77) = IsMFMWFPWindow(*((_QWORD *)i + 8));
      if ( !v77 )
        goto LABEL_76;
      v79 = safe_cast_fnid_to_PMENUWND(v78);
      if ( !v79 || !*(_QWORD *)(v79 + 8) )
        goto LABEL_76;
      if ( (*((_DWORD *)i + 2) & 0x100) == 0 )
      {
        v82 = PtiCurrent(v81, v80);
        *(_DWORD *)(*((_QWORD *)v82 + 59) + 412LL) &= ~0x100000u;
      }
      ++*((_DWORD *)i + 10);
      v83 = *(_QWORD *)(*(_QWORD *)v153[0] + 8LL);
      v84 = PtiCurrent(*(_QWORD *)v153[0], v80);
      Win32HM_LockIntoThread<0>((__int64)v84, v83, BugCheckParameter3);
      *((_DWORD *)i + 2) |= 0x8000u;
      v85 = xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v153[0] + 8LL), 0x123u);
      v86 = *((_DWORD *)i + 2) & 0xFFFF7FFF;
      *((_DWORD *)i + 2) = v86;
      if ( v85 == 1 )
      {
        if ( !(unsigned int)xxxUnlockMenuStateInternal(i, 1) )
        {
          Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v87);
          goto LABEL_74;
        }
      }
      else
      {
        *((_DWORD *)i + 2) = v86 | 0x2000;
        MNCheckButtonDownState(i);
        if ( (*((_DWORD *)i + 2) & 0x100) == 0 )
          xxxMNSetCapture(v153, i);
        Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)BugCheckParameter3);
        xxxUnlockMenuStateInternal(i, 1);
      }
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v87);
      goto LABEL_76;
    }
LABEL_74:
    xxxEndMenuLoop(i, *(_QWORD *)i);
    if ( (*((_DWORD *)i + 2) & 0x100) != 0 )
      xxxMNEndMenuState(i, v35);
    goto LABEL_76;
  }
  if ( v4 == 493 )
  {
    if ( a3 < *(unsigned int *)(*(_QWORD *)(v23 + 40) + 44LL) || a3 >= 0xFFFFFFFC )
      xxxMNButtonDown((__int64 **)v153, (__int64)i, a3, 1);
    goto LABEL_301;
  }
  if ( v4 != 482 )
  {
    switch ( v4 )
    {
      case 0x1E3u:
        v60 = (__int64 *)xxxMNOpenHierarchy((__int64 **)v153, (__int64)i);
        if ( v60 == (__int64 *)-1LL )
          goto LABEL_76;
        if ( v60 )
          v8 = *v60;
        goto LABEL_264;
      case 0x1E4u:
LABEL_69:
        xxxMNCloseHierarchy(*(_QWORD *)v153[0], (__int64)i, v27, v22);
        goto LABEL_301;
      case 0x1E5u:
        if ( a3 < *(unsigned int *)(*(_QWORD *)(v23 + 40) + 44LL) || a3 >= 0xFFFFFFFC )
        {
          v55 = (_QWORD *)xxxMNSelectItem((__int64 **)v153, (__int64)i, a3);
          if ( v55 )
          {
            v56 = v55[2];
            v57 = *(_DWORD *)(*v55 + 4LL);
            MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v154);
            Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&v158, v58);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v153, v59);
            return (unsigned __int16)v57 | (unsigned __int64)(v56 != 0 ? 0x10 : 0);
          }
        }
        goto LABEL_301;
      case 0x1E6u:
        xxxMNCancel((__int64)i, a3, (unsigned __int16)v152, 0LL);
        goto LABEL_301;
    }
    if ( v4 != 487 )
    {
      if ( v4 == 491 )
      {
        v25 = xxxMNFindWindowFromPoint((__int64 **)v153, (unsigned int *)a3, (int)v152);
        LOBYTE(v50) = IsMFMWFPWindow(v25);
        if ( !v50 )
          goto LABEL_37;
        if ( v51 )
        {
          v25 = *v51;
          goto LABEL_37;
        }
        goto LABEL_76;
      }
      if ( v4 == 492 )
      {
        xxxPlayEventSound(5LL, 256LL);
        v49 = *((_DWORD *)i + 2) >> 8;
        LOBYTE(v49) = BYTE1(*((_DWORD *)i + 2)) & 1 | 4;
        xxxShowWindowEx((const struct tagWND *)a1, v49, 0);
        goto LABEL_301;
      }
      goto LABEL_35;
    }
    ValidItem = (int)MNFindNextValidItem(v23, 0xFFFFFFFFLL, 1LL, 1LL);
    xxxSendMessage((struct tagWND *)a1, 0x1E5u);
LABEL_120:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v154);
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&v158, v53);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v153, v54);
    return ValidItem;
  }
  if ( *(_QWORD *)(*(_QWORD *)v153[0] + 8LL) )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
      BugCheckParameter3,
      *(_QWORD *)(*(_QWORD *)v153[0] + 8LL));
    v61 = *(struct tagWND **)(*(_QWORD *)v153[0] + 8LL);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v163, v23);
    xxxMNCompute(v163, v61, (__int64)a1, 0, 0, 0, 0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v163, v62);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v63);
  }
  v64 = _MonitorFromWindowInternal((struct tagWND *)a1, 1u, 0);
  v65 = *(_DWORD *)(v23 + 64);
  v152 = v64;
  v66 = v64;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v163, v23);
  v67 = MNCheckScroll(v153, v163, v66);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v163, v68);
  if ( a3 )
  {
    v69 = 0LL;
    v70 = (8 * (_BYTE)a3) & 0x20 | 0x214;
    if ( (*((_BYTE *)a1[5] + 31) & 0x10) != 0 )
    {
      *(_OWORD *)BugCheckParameter3 = 0LL;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v162, *(_QWORD *)v153[0]);
      v71 = v152;
      MNGetPopupBoundsRect((__int64)v162, (__int64)v152, (struct tagRECT *)BugCheckParameter3, 1);
      v72 = a1[5];
      v73 = *((_DWORD *)v72 + 23);
      LODWORD(v152) = *((_DWORD *)v72 + 22);
      HIDWORD(v152) = v73;
      BestPos = FindBestPos(
                  (unsigned int)v152,
                  v73,
                  v65,
                  v67,
                  (struct tagRECT *)BugCheckParameter3,
                  0,
                  (__int64 **)v153,
                  v71,
                  (__int64)v152);
      LODWORD(v8) = (__int16)BestPos;
      v69 = (unsigned int)SHIWORD(BestPos);
    }
    else
    {
      v70 |= 2u;
    }
    xxxSetWindowPos((struct tagWND *)a1, 0LL, (unsigned int)v8, v69, v65 + 6, v67 + 6, v70);
  }
  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v154);
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&v158, v75);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v153, v76);
  return ((unsigned __int16)v67 << 16) | (unsigned __int16)v65;
}
