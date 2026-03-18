/*
 * XREFs of xxxProcessHidInput @ 0x1400388A0
 * Callers:
 *     ProcessHidRawInput @ 0x1400386C0 (ProcessHidRawInput.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400C8028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400D882C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     PtiKbdFromQ @ 0x14014543C (PtiKbdFromQ.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x140175674 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     IsDeviceInputAllowed @ 0x1401BCA78 (IsDeviceInputAllowed.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x1402746D8 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     ?PostHidInput_old@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x140274A2C (-PostHidInput_old@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline @ 0x1402750BC (Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x140275310 (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall xxxProcessHidInput(struct DEVICEINFO *a1, void *a2, unsigned int a3)
{
  char v3; // r15
  BOOL v5; // r13d
  char v8; // si
  char v9; // di
  char v10; // bl
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // di
  __int16 v17; // bx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  bool v24; // di
  char v25; // bl
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rcx
  struct tagPROCESS_HID_REQUEST *v32; // rbx
  __int64 v33; // rax
  struct tagWND *v34; // rbx
  __int64 v35; // rdi
  _BOOL8 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  const struct tagUIPI_INFO *v39; // r8
  UIPrivilegeIsolation *v40; // rcx
  int v41; // eax
  char v42; // r14
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  __int16 v46; // bx
  __int16 v47; // di
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  __int64 *v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct tagPROCESS_HID_REQUEST *v58; // rax
  char v59; // r14
  struct tagWND *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  bool v65; // zf
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  const struct tagUIPI_INFO *v69; // r8
  __int64 v70; // rcx
  int v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rbx
  __int64 v77; // rcx
  __int64 v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rcx
  const struct tagUIPI_INFO *v81; // r8
  UIPrivilegeIsolation *v82; // rcx
  bool v83; // si
  __int64 v84; // rbx
  __int64 v85; // rax
  int v86; // r8d
  int v87; // edx
  int v88; // eax
  __int64 v89; // rax
  int v90; // [rsp+20h] [rbp-98h]
  __int64 v91; // [rsp+60h] [rbp-58h]
  __int64 v92; // [rsp+68h] [rbp-50h]
  __int64 v93; // [rsp+70h] [rbp-48h] BYREF
  int v94; // [rsp+78h] [rbp-40h]
  char v97; // [rsp+D8h] [rbp+20h] BYREF

  v3 = 0;
  v91 = 0LL;
  v5 = 0;
  v8 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v9 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v10 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v10 = 0;
  }
  if ( v9 || v10 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      20,
      20,
      (__int64)&WPP_7d973857189131ac5c90dd1780fc8b06_Traceguids,
      (char)a1);
  }
  if ( !(unsigned int)IsDeviceInputAllowed(a1) )
    return;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v97);
  v15 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
  {
    v8 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v16 = 0;
  }
  if ( v8 || v16 )
  {
    v17 = *(_WORD *)(*((_QWORD *)a1 + 55) + 44LL);
    v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
    LOBYTE(v19) = v16;
    LOBYTE(v20) = v8;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v20,
      v19,
      *(_QWORD *)(v18 + 69160),
      5,
      20,
      21,
      (__int64)&WPP_7d973857189131ac5c90dd1780fc8b06_Traceguids,
      v17,
      a3);
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v15, v14) + 18888) )
  {
    v23 = *(_QWORD *)&WPP_GLOBAL_Control;
    v24 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v25 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v25 = 0;
    }
    if ( v24 || v25 )
    {
      v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v28,
        v27,
        *(_QWORD *)(v26 + 69160),
        5,
        20,
        22,
        (__int64)&WPP_7d973857189131ac5c90dd1780fc8b06_Traceguids);
    }
LABEL_57:
    v36 = 1LL;
    goto LABEL_58;
  }
  v29 = W32GetUserSessionState(v22, v21);
  v30 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(v29 + 18888)) + 464);
  v91 = v30;
  v32 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v30 + 824));
  if ( !v32 )
  {
    v23 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
    {
      v3 = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v42 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v42 = 0;
    }
    if ( v3 || v42 )
    {
      v43 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
      v44 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(v43 + 18888)) + 464);
      v45 = *((_QWORD *)a1 + 55);
      v46 = *(_WORD *)(v45 + 40);
      v47 = *(_WORD *)(v45 + 42);
      v50 = W32GetUserSessionState(v49, v48);
      LOBYTE(v51) = v42;
      LOBYTE(v52) = v3;
      WPP_RECORDER_AND_TRACE_SF_DDq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v52,
        v51,
        *(_QWORD *)(v50 + 69160),
        v90,
        20,
        23,
        (__int64)&WPP_7d973857189131ac5c90dd1780fc8b06_Traceguids,
        v47,
        v46,
        v44);
    }
    goto LABEL_57;
  }
  v33 = W32GetUserSessionState(v31, v21);
  v34 = (struct tagWND *)*((_QWORD *)v32 + 4);
  v35 = *(_QWORD *)(v33 + 18888);
  if ( v34 )
  {
    v36 = 1LL;
    v35 = *(_QWORD *)(*((_QWORD *)v34 + 2) + 472LL);
    if ( *(char *)(*((_QWORD *)v34 + 5) + 20LL) < 0 )
      goto LABEL_59;
  }
  if ( (*((_DWORD *)a1 + 42) & 0x20) == 0
    || (*(_DWORD *)(*((_QWORD *)a1 + 57) + 368LL) & 0x10) != 0
    || (!(unsigned __int8)IsInputThread()
      ? (v40 = (UIPrivilegeIsolation *)(*((_QWORD *)PtiCurrent(v38, v37) + 58) + 864LL))
      : (v40 = (UIPrivilegeIsolation *)(*((_QWORD *)a1 + 57) + 952LL)),
        v36 = 1LL,
        UIPrivilegeIsolation::CheckAccess(v40, (const struct tagUIPI_INFO *)(v35 + 448), v39)) )
  {
    if ( (unsigned int)Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline() )
    {
      v41 = PostHidInput(a1, a2, a3, v34, 0LL);
      v5 = v41 != 0;
      v36 = v41 == 0;
    }
    else
    {
      v36 = 1LL;
      if ( (unsigned int)PostHidInput_old(a1, a2, a3, (struct tagQ *)v35, v34, 0LL) )
      {
        v5 = 1;
        v36 = 0LL;
      }
    }
  }
LABEL_58:
  v30 = v91;
LABEL_59:
  v53 = *(__int64 **)(W32GetUserSessionState(v23, v21) + 224);
  if ( v53 != (__int64 *)(W32GetUserSessionState(v55, v54) + 224) )
  {
    while ( 1 )
    {
      if ( *((int *)v53 + 20) <= 0 )
        goto LABEL_109;
      v58 = HidIsRequestedByThisProcess(a1, (struct tagPROCESS_HID_TABLE *)v53);
      if ( !v58 )
        goto LABEL_109;
      v57 = *((unsigned int *)v58 + 5);
      v59 = 1;
      if ( (v57 & 1) == 0 || (v57 & 2) != 0 && !v36 )
        goto LABEL_109;
      v56 = *((_QWORD *)v58 + 5);
      if ( v56 )
      {
        (*((void (__fastcall **)(struct DEVICEINFO *))v58 + 5))(a1);
        goto LABEL_109;
      }
      v60 = (struct tagWND *)*((_QWORD *)v58 + 4);
      if ( *(_QWORD *)(*((_QWORD *)v60 + 2) + 464LL) == v30 )
        goto LABEL_109;
      v57 = *(_QWORD *)(W32GetUserSessionState(v57, 0LL) + 19144);
      if ( *((_QWORD *)v60 + 3) != v57 )
        goto LABEL_109;
      v61 = *((_QWORD *)v60 + 5);
      if ( *(char *)(v61 + 20) < 0 || *(char *)(v61 + 19) < 0 )
        goto LABEL_109;
      v62 = *((_QWORD *)a1 + 56);
      v63 = *(unsigned __int16 *)(v62 + 16);
      v64 = *(unsigned __int16 *)(v62 + 18);
      if ( (_WORD)v63 == 12 )
        break;
      if ( (_WORD)v63 == 1 )
      {
        v65 = (_WORD)v64 == 9;
LABEL_73:
        if ( !v65 )
          goto LABEL_78;
        goto LABEL_93;
      }
      if ( (unsigned __int16)v63 < 0xFF00u )
      {
LABEL_78:
        if ( *(_QWORD *)(W32GetUserSessionState(v63, v64) + 18888) )
        {
          v68 = W32GetUserSessionState(v67, v66);
          if ( !UIPrivilegeIsolation::CheckAccess(
                  (UIPrivilegeIsolation *)(*(_QWORD *)(*((_QWORD *)v60 + 2) + 472LL) + 448LL),
                  (const struct tagUIPI_INFO *)(*(_QWORD *)(v68 + 18888) + 448LL),
                  v69) )
          {
            v67 = *(_QWORD *)(*((_QWORD *)v60 + 2) + 464LL);
            if ( *(int *)(v67 + 12) >= 0 )
            {
              v70 = *(_QWORD *)(W32GetUserSessionState(v67, v66) + 18888);
              v71 = *(_DWORD *)(v70 + 456);
              v92 = *(_QWORD *)(v70 + 448);
              v73 = W32GetUserSessionState(v70, v72);
              v74 = *((_QWORD *)v60 + 2);
              v93 = v92;
              v75 = *(_QWORD *)(v73 + 18888);
              v94 = v71;
              EtwTraceUIPIInputError(v74, 0LL, v75, &v93, 5);
              goto LABEL_109;
            }
          }
        }
        v76 = W32GetUserSessionState(v67, v66) + 56;
        RIMLockShared(v76);
        if ( (*((_DWORD *)a1 + 42) & 0x2000) != 0 )
        {
          v77 = *(_QWORD *)(*((_QWORD *)a1 + 46) + 88LL);
          if ( !v77
            || *(int *)(v77 + 12) >= 0
            && ((v78 = *(_QWORD *)(*((_QWORD *)v60 + 2) + 472LL), !(unsigned __int8)IsInputThread())
             || (*((_DWORD *)a1 + 46) & 0x80u) == 0
              ? (v82 = (UIPrivilegeIsolation *)(*((_QWORD *)PtiCurrent(v80, v79) + 58) + 864LL))
              : (v82 = (UIPrivilegeIsolation *)(*((_QWORD *)a1 + 57) + 952LL)),
                !UIPrivilegeIsolation::CheckAccess(v82, (const struct tagUIPI_INFO *)(v78 + 448), v81)) )
          {
            RIMUnlockShared(v76);
            goto LABEL_109;
          }
          v59 = 1;
        }
        RIMUnlockShared(v76);
      }
LABEL_93:
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
      {
        v59 = 0;
      }
      v83 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
         && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
      if ( v59 || v83 )
      {
        v84 = *(_QWORD *)(*((_QWORD *)v60 + 2) + 472LL);
        v85 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v64);
        LOBYTE(v86) = v83;
        LOBYTE(v87) = v59;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v87,
          v86,
          *(_QWORD *)(v85 + 69160),
          5,
          20,
          24,
          (__int64)&WPP_7d973857189131ac5c90dd1780fc8b06_Traceguids,
          (char)v60,
          v84);
      }
      if ( (unsigned int)Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline() )
        v88 = PostHidInput(a1, a2, a3, v60, 1uLL);
      else
        v88 = PostHidInput_old(a1, a2, a3, *(struct tagQ **)(*((_QWORD *)v60 + 2) + 472LL), v60, 1uLL);
      if ( !v88 )
        goto LABEL_110;
      v5 = 1;
LABEL_109:
      v53 = (__int64 *)*v53;
      v30 = v91;
      if ( v53 == (__int64 *)(W32GetUserSessionState(v57, v56) + 224) )
        goto LABEL_110;
    }
    v65 = (_WORD)v64 == 1;
    goto LABEL_73;
  }
LABEL_110:
  if ( v5 )
  {
    if ( (*((_DWORD *)a1 + 46) & 0x40) == 0 )
    {
      v89 = W32GetUserSessionState(v57, v56);
      CInputGlobals::UpdateInputGlobals(
        *(_QWORD *)(v89 + 3056),
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        4LL,
        0LL,
        0,
        0);
    }
  }
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v97);
}
