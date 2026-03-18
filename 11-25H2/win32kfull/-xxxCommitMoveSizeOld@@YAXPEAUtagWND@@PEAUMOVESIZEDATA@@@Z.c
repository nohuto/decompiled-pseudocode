/*
 * XREFs of ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A9840
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401DCD80 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x14021E738 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1402273BC (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x14026B5C0 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x14026E9D0 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline @ 0x140272100 (Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1DwmNotifyMoveReason@@QEAA@XZ @ 0x1402A68D8 (--1DwmNotifyMoveReason@@QEAA@XZ.c)
 *     ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402A78B0 (-KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddD @ 0x1402AC56C (WPP_RECORDER_AND_TRACE_SF_ddddddD.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402CFAB0 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D4CF4 (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DCC18 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxCommitMoveSizeOld(struct tagWND *a1, struct MOVESIZEDATA *a2)
{
  struct MOVESIZEDATA *v4; // rdx
  char v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  int v10; // ebx
  __int64 DesktopWindow; // rax
  const struct tagWND *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 Prop; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rdx
  char v23; // bl
  __int64 v24; // rax
  int v25; // edx
  int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // rcx
  CHECKPOINT *v29; // rbx
  __int64 v30; // rdx
  char v31; // al
  _DWORD *v32; // rax
  int v33; // ebx
  int v34; // edi
  int v35; // esi
  int v36; // r14d
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  struct tagTHREADINFO *v40; // rax
  struct tagMONITOR *v41; // r8
  __int64 v42; // rdx
  unsigned int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rcx
  char v46; // bl
  bool v47; // di
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  int v51; // r8d
  bool v52; // zf
  char v53; // al
  bool v54; // r14
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  struct tagWND *v58; // rdx
  __int64 v59; // rax
  char v60; // r14
  __int64 v61; // rax
  int v62; // edx
  int v63; // r8d
  __int64 v64; // rcx
  const struct tagWND *v65; // rdx
  int v66; // ecx
  int v67; // eax
  char v68; // al
  int v69; // edi
  int v70; // r14d
  int v71; // ebx
  int v72; // esi
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  __int64 v76; // rdx
  char v77; // al
  _DWORD *v78; // rcx
  int v79; // edi
  int v80; // r14d
  int v81; // ebx
  int v82; // esi
  __int64 v83; // rax
  int v84; // r8d
  int v85; // edx
  int v86; // [rsp+20h] [rbp-A9h]
  int v87; // [rsp+28h] [rbp-A1h]
  int v88; // [rsp+30h] [rbp-99h]
  int v89; // [rsp+38h] [rbp-91h]
  char v90; // [rsp+80h] [rbp-49h]
  char v91; // [rsp+80h] [rbp-49h]
  char v92; // [rsp+80h] [rbp-49h]
  char v93; // [rsp+80h] [rbp-49h]
  bool v94; // [rsp+80h] [rbp-49h]
  bool v95; // [rsp+81h] [rbp-48h]
  bool v96; // [rsp+81h] [rbp-48h]
  bool v97; // [rsp+81h] [rbp-48h]
  bool v98; // [rsp+81h] [rbp-48h]
  char v99; // [rsp+81h] [rbp-48h]
  char v100; // [rsp+81h] [rbp-48h]
  int v101; // [rsp+84h] [rbp-45h]
  int v102; // [rsp+84h] [rbp-45h]
  int v103; // [rsp+88h] [rbp-41h]
  CHECKPOINT *v104; // [rsp+88h] [rbp-41h]
  CHECKPOINT *v105; // [rsp+88h] [rbp-41h]
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp-39h] BYREF
  __int16 v107; // [rsp+98h] [rbp-31h]
  struct tagRECT v108; // [rsp+A0h] [rbp-29h] BYREF
  __int64 *v109; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v110; // [rsp+B8h] [rbp-11h]
  int v111; // [rsp+C8h] [rbp-1h]
  char v112; // [rsp+CCh] [rbp+3h]
  __int128 v113; // [rsp+D0h] [rbp+7h]

  v4 = (struct MOVESIZEDATA *)*((unsigned int *)a2 + 50);
  *((_DWORD *)a2 + 50) = (unsigned int)v4 | 0x1000000;
  if ( (char)v4 < 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v5 = 0;
    }
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        1,
        59,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
    }
    return;
  }
  if ( (*((_DWORD *)a1 + 96) & 0x10) != 0 )
  {
    WindowActions::xxxInterceptCommitMoveSize(a2, v4);
    return;
  }
  v101 = 0;
  v10 = 0;
  v103 = 0;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( *(_QWORD *)(v13 + 104) == DesktopWindow )
  {
    if ( *((_DWORD *)a2 + 44) != 9
      || *((_DWORD *)a2 + 62)
      || ((unsigned int)v12 & 0x10000000) != 0
      || (v101 = 1, v13 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL), (*(_BYTE *)(v13 + 30) & 1) == 0) )
    {
      v101 = 0;
    }
    v14 = W32GetUserSessionState(v13, v12);
    Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v14 + 41334), 1u);
    v104 = (CHECKPOINT *)Prop;
    if ( Prop )
    {
      v108 = *(struct tagRECT *)(Prop + 20);
      if ( *(_QWORD *)&v108.left != *((_QWORD *)a2 + 19) || *(_QWORD *)&v108.right != *((_QWORD *)a2 + 20) )
      {
        v108 = *(struct tagRECT *)((char *)a2 + 152);
        v17 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v18 = 0;
        }
        v90 = v18;
        v95 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v19 = W32GetUserSessionState(v17, v16);
          LOBYTE(v20) = v95;
          LOBYTE(v21) = v90;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v21,
            v20,
            *(_QWORD *)(v19 + 69160),
            4,
            1,
            60,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
            v108.left,
            v108.top,
            v108.right,
            v108.bottom,
            LOBYTE(v108.right) - LOBYTE(v108.left),
            LOBYTE(v108.bottom) - LOBYTE(v108.top));
        }
      }
      if ( KeepCheckpointLeftRightAligned(a2) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v23 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v23 = 0;
        }
        v96 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
          LOBYTE(v25) = v23;
          LOBYTE(v26) = v96;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v25,
            v26,
            *(_QWORD *)(v24 + 69160),
            4,
            1,
            61,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
        }
        v108.left = *((_DWORD *)a2 + 6);
        v108.right = *((_DWORD *)a2 + 8);
      }
      CHECKPOINT::SetNormalRect(v104, a1, &v108, 0);
      v27 = MonitorFromRect(&v108.left, 2u, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
      *(_QWORD *)&v108.left = v27;
      if ( v101 )
      {
        v29 = (CHECKPOINT *)*((_QWORD *)a2 + 30);
        v105 = v29;
      }
      else
      {
        v29 = (CHECKPOINT *)MonitorFromRect((INT *)a2 + 6, 2u, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
        v105 = v29;
        v27 = *(_QWORD *)&v108.left;
      }
      if ( (CHECKPOINT *)v27 != v29 )
      {
        v30 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (v28 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v28 & 1) == 0)
          || (v31 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v31 = 0;
        }
        v91 = v31;
        LOBYTE(v28) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v97 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v32 = (_DWORD *)*((_QWORD *)v29 + 5);
          v33 = v32[10];
          v34 = v32[9];
          v35 = v32[8];
          v36 = v32[7];
          v37 = W32GetUserSessionState(v28, *(_QWORD *)&WPP_GLOBAL_Control);
          LOBYTE(v38) = v97;
          LOBYTE(v39) = v91;
          WPP_RECORDER_AND_TRACE_SF_dddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v39,
            v38,
            *(_QWORD *)(v37 + 69160),
            4,
            1,
            62,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
            v36,
            v35,
            v34,
            v33);
          v29 = v105;
        }
        v40 = PtiCurrent(v28, v30);
        Win32HM_LockIntoThread<1>((__int64)v40, (__int64)v29, (__int64 *)&BugCheckParameter3);
        AdvancedWindowPos::xxxMigrateCheckpoint((struct tagRECT *)a1, v29, v41);
        Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(&BugCheckParameter3, v42);
      }
    }
    v43 = *((_DWORD *)a2 + 50);
    if ( (((v43 >> 28) ^ (v43 >> 29)) & 1) != 0 || (v43 & 0x4000) != 0 )
    {
      v10 = 1;
    }
    else
    {
      v44 = *((_QWORD *)a1 + 5);
      v10 = 0;
      if ( *((_QWORD *)a2 + 3) != *(_QWORD *)(v44 + 88) || *((_QWORD *)a2 + 4) != *(_QWORD *)(v44 + 96) )
      {
        v103 = 1;
        goto LABEL_56;
      }
    }
    v103 = 0;
LABEL_56:
    if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
      MakeArrangedStateObservable(a2, v12);
  }
  if ( v101 )
  {
    v45 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v46 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v46 = 0;
    }
    v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v46 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
      LOBYTE(v49) = v47;
      LOBYTE(v50) = v46;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v50,
        v49,
        *(_QWORD *)(v48 + 69160),
        4,
        1,
        63,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
    }
    v51 = *(_DWORD *)(W32GetUserSessionState(v45, v12) + 66800) & 0x10000 | 6;
    v109 = (__int64 *)*((_QWORD *)a2 + 30);
    v110 = 0LL;
    v111 = 0;
    v112 = 0;
    v113 = 0LL;
    xxxMinMaximizeEx((__int64)a1, 3u, v51, &v109);
    *((_DWORD *)a2 + 50) |= 0x800000u;
  }
  else
  {
    v52 = (*((_DWORD *)a2 + 50) & 0x10000000) == 0;
    *(_QWORD *)&v108.left = *((_QWORD *)a2 + 2);
    BugCheckParameter3 = *(_QWORD *)&v108.left;
    v107 = 0;
    if ( !v52 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v53 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v53 = 0;
      }
      v92 = v53;
      v54 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v53 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v55 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
        LOBYTE(v56) = v54;
        LOBYTE(v57) = v92;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v57,
          v56,
          *(_QWORD *)(v55 + 69160),
          4,
          1,
          64,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
      }
      if ( (unsigned int)Feature_FixArrangeAnimateFlickering2__private_IsEnabledDeviceUsageNoInline() )
      {
        LOBYTE(v107) = 1;
        *(_DWORD *)(*(_QWORD *)&v108.left + 380LL) |= 0x200000u;
        AdvancedWindowPos::MarkWindowAsArranged(a1, v58);
      }
      else
      {
        UpdateDwmSnapArrangedInitiated(*((struct tagWND **)a2 + 2), (__int64)v58);
      }
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
    {
      v59 = W32GetUserSessionState(v13, v12);
      if ( GetProp((__int64)a1, *(unsigned __int16 *)(v59 + 41334), 1u) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v60 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v60 = 0;
        }
        v98 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v60 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v61 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
          LOBYTE(v62) = v60;
          LOBYTE(v63) = v98;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v62,
            v63,
            *(_QWORD *)(v61 + 69160),
            4,
            1,
            65,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
        }
        *(_DWORD *)(*((_QWORD *)a2 + 2) + 380LL) &= ~0x4000000u;
        v64 = *((_QWORD *)a2 + 2);
        v110 = (unsigned __int64)a2 + 24;
        v109 = 0LL;
        v111 = 0;
        v112 = 0;
        v113 = 0LL;
        xxxMinMaximizeEx(v64, 9u, 12, &v109);
        MakeArrangedStateObservable(a2, v65);
      }
    }
    v66 = *((_DWORD *)a2 + 44);
    v67 = 516;
    v102 = 516;
    if ( v66 == 9 && !v103 || v66 == 10 )
    {
      if ( !v10 )
        v67 = 517;
      v102 = v67;
    }
    *((_DWORD *)a2 + 50) |= 0x800000u;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (LOBYTE(v12) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    v99 = (char)v12;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v68 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v68 = 0;
    }
    v93 = v68;
    if ( (_BYTE)v12 || v68 )
    {
      v69 = *((_DWORD *)a2 + 9);
      v70 = *((_DWORD *)a2 + 7);
      v71 = *((_DWORD *)a2 + 8);
      v72 = *((_DWORD *)a2 + 6);
      v73 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
      LOBYTE(v74) = v93;
      LOBYTE(v75) = v99;
      WPP_RECORDER_AND_TRACE_SF_ddddddD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v75,
        v74,
        *(_QWORD *)(v73 + 69160),
        v86,
        v87,
        v88,
        v89,
        v72,
        v70,
        v71,
        v69,
        v71 - v72,
        v69 - v70,
        v102);
    }
    xxxSetWindowPos(
      a1,
      0LL,
      *((unsigned int *)a2 + 6),
      *((unsigned int *)a2 + 7),
      *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 9) - *((_DWORD *)a2 + 7),
      v102);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v77 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v77 = 0;
    }
    v100 = v77;
    v94 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v77 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v78 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 40LL);
      v79 = v78[25];
      v80 = v78[23];
      v81 = v78[24];
      v82 = v78[22];
      v83 = W32GetUserSessionState(v78, v76);
      LOBYTE(v84) = v94;
      LOBYTE(v85) = v100;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v85,
        v84,
        *(_QWORD *)(v83 + 69160),
        4,
        1,
        67,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v82,
        v80,
        v81,
        v79,
        v81 - v82,
        v79 - v80);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      CHECKPOINT::Restore(a1, (const struct tagRECT *)((char *)a2 + 24));
    DwmNotifyMoveReason::~DwmNotifyMoveReason((DwmNotifyMoveReason *)&BugCheckParameter3);
  }
}
