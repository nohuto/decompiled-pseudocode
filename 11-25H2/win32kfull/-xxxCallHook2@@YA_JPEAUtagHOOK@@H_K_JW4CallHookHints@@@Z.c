/*
 * XREFs of ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220
 * Callers:
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1400C40C8 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     xxxCallMouseHook @ 0x1400C4174 (xxxCallMouseHook.c)
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x1400C4B00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxPointerCallHook @ 0x140138DC4 (xxxPointerCallHook.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x140177CAC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     EditionLLMouseButtonHook @ 0x1401B3BF0 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1401B3E50 (EditionLLMouseWheelHook.c)
 *     EditionKeyEventLLHook @ 0x14024FFF0 (EditionKeyEventLLHook.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x14001D808 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x14001D8A4 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14002D4E4 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1400C5530 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     xxxHkCallHook @ 0x1400C5590 (xxxHkCallHook.c)
 *     PhkNextValid @ 0x1400C5F24 (PhkNextValid.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxLoadHmodIndex @ 0x1400C7330 (xxxLoadHmodIndex.c)
 *     FreeHook @ 0x1400C8710 (FreeHook.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400C9B3C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     IsPointerInputHookCall @ 0x140143E80 (IsPointerInputHookCall.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14014BCD0 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x14017109C (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDd @ 0x140182058 (WPP_RECORDER_AND_TRACE_SF_DDd.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140271CD8 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     ?BoostHook@@YA_NPEAUtagTHREADINFO@@PEAUtagHOOK@@W4CallHookHints@@@Z @ 0x140286198 (-BoostHook@@YA_NPEAUtagTHREADINFO@@PEAUtagHOOK@@W4CallHookHints@@@Z.c)
 *     ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x1402865C0 (-DeBoostHook@@YAXPEAUtagHOOK@@@Z.c)
 *     Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsageNoInline @ 0x140286D68 (Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallHook2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // r13d
  __int64 Valid; // rdi
  int v8; // r14d
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned int v13; // ebx
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r15
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // esi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v25; // rdx
  const struct tagUIPI_INFO *v26; // r8
  UIPrivilegeIsolation *v27; // rcx
  __int16 ProcessMachine; // bx
  __int16 v29; // bx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 UserSessionState; // rax
  const struct tagUIPI_INFO *v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // xmm6_8
  int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 *v44; // r9
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 CurrentProcess; // rax
  unsigned int v49; // ebx
  __int64 HmodIndex; // rbx
  _BYTE *v51; // rcx
  ULONG_PTR *v52; // rax
  ULONG_PTR v53; // rcx
  unsigned __int64 v54; // rsi
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rdx
  ULONG_PTR *v63; // rax
  ULONG_PTR v64; // rcx
  ULONG_PTR *v65; // rdx
  struct _HEAD *v66; // rax
  __int64 v67; // rdx
  __int64 v69; // r14
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 *v72; // rax
  char v73; // bl
  bool v74; // r12
  bool v75; // r13
  int v76; // r14d
  char ThreadId; // si
  __int64 v78; // rcx
  int v79; // ebx
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rbx
  __int64 v84; // rdx
  ULONG_PTR *v85; // rdx
  __int64 v86; // rax
  int ReturnLength; // [rsp+20h] [rbp-308h]
  int v88; // [rsp+28h] [rbp-300h]
  int v89; // [rsp+38h] [rbp-2F0h]
  char v90; // [rsp+60h] [rbp-2C8h]
  char v91; // [rsp+64h] [rbp-2C4h]
  __int64 v92; // [rsp+68h] [rbp-2C0h] BYREF
  unsigned int v93; // [rsp+70h] [rbp-2B8h]
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-2B0h] BYREF
  __int64 v95; // [rsp+80h] [rbp-2A8h]
  __int64 v96; // [rsp+88h] [rbp-2A0h]
  _QWORD v97[2]; // [rsp+90h] [rbp-298h] BYREF
  __int64 v98; // [rsp+A0h] [rbp-288h]
  __int64 ProcessInformation; // [rsp+C8h] [rbp-260h] BYREF
  __int64 v100; // [rsp+E0h] [rbp-248h] BYREF
  int v101; // [rsp+E8h] [rbp-240h]
  __int64 v102; // [rsp+F0h] [rbp-238h] BYREF
  int v103; // [rsp+F8h] [rbp-230h]
  ULONG_PTR v104[2]; // [rsp+100h] [rbp-228h] BYREF
  _QWORD v105[2]; // [rsp+110h] [rbp-218h] BYREF
  _QWORD v106[2]; // [rsp+120h] [rbp-208h] BYREF
  _QWORD v107[2]; // [rsp+130h] [rbp-1F8h] BYREF
  ULONG_PTR v108[2]; // [rsp+140h] [rbp-1E8h] BYREF
  int v109; // [rsp+150h] [rbp-1D8h] BYREF
  __int128 v110; // [rsp+154h] [rbp-1D4h]
  __int64 v111; // [rsp+164h] [rbp-1C4h]
  int v112; // [rsp+16Ch] [rbp-1BCh]
  int v113; // [rsp+170h] [rbp-1B8h]
  int v114; // [rsp+174h] [rbp-1B4h]
  __int64 *v115; // [rsp+178h] [rbp-1B0h]
  __int64 v116; // [rsp+1A0h] [rbp-188h] BYREF
  unsigned int v117; // [rsp+1A8h] [rbp-180h]
  int v118; // [rsp+1ACh] [rbp-17Ch]
  __int64 v119; // [rsp+1B0h] [rbp-178h]
  int v120; // [rsp+1B8h] [rbp-170h]
  __int64 v121; // [rsp+1BCh] [rbp-16Ch]
  int v122; // [rsp+1C4h] [rbp-164h]
  __int64 v123; // [rsp+1C8h] [rbp-160h]
  __int64 v124; // [rsp+1D0h] [rbp-158h]
  __int64 v125[2]; // [rsp+1D8h] [rbp-150h] BYREF
  __int128 v126; // [rsp+1E8h] [rbp-140h]
  _BYTE v127[56]; // [rsp+1F8h] [rbp-130h] BYREF
  _BYTE v128[56]; // [rsp+230h] [rbp-F8h] BYREF
  _BYTE v129[56]; // [rsp+268h] [rbp-C0h] BYREF
  _BYTE v130[56]; // [rsp+2A0h] [rbp-88h] BYREF

  v96 = a4;
  v97[0] = a3;
  v6 = a2;
  Valid = a1;
  v98 = 0LL;
  v92 = 0LL;
  v8 = 0;
  v9 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42312);
  if ( !*(_DWORD *)(W32GetUserSessionState(v11, v10) + 19760) && (unsigned int)GET_USERCRIT_DISPOSITION() != 2 )
  {
    if ( !(unsigned int)GET_USERCRIT_DISPOSITION() )
      goto LABEL_8;
    if ( ExIsResourceAcquiredExclusiveLite(v9) == 1
      || (IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(v9)) != 0 )
    {
      LOBYTE(IsResourceAcquiredSharedLite) = 1;
    }
    if ( !(_BYTE)IsResourceAcquiredSharedLite )
LABEL_8:
      __int2c();
  }
  if ( !Valid )
    return 0LL;
  v13 = *(_DWORD *)(Valid + 48);
  v93 = v13;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
  v17 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
  if ( v17 == *(_QWORD *)(W32GetUserSessionState(v16, v15) + 18648) && v13 != 13 && v13 != 14
    || (_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 528), 0, 0) & 0x10000001) != 0
    || !*(_QWORD *)(v17 + 496) && *(_DWORD *)(Valid + 48) != 14
    || (unsigned int)IsPointerInputHookCall(v13, a4) && v13 != 3 && v13 != 4 && v13 != 12 )
  {
    return 0LL;
  }
  v18 = 200;
  while ( 1 )
  {
    SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v129);
    if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) != 0 || (*(_DWORD *)(Valid + 64) & 0x1000) != 0 )
    {
      Valid = PhkNextValid(Valid, v19);
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v129);
      goto LABEL_189;
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v129);
    if ( (v13 != 14 || (v20 = *(_QWORD *)(Valid + 16)) == 0
                    || !(unsigned __int8)IsSpatialDelegationEnabledForThread(v20))
      && (v13 != 13 || !*(_QWORD *)(Valid + 16) || !(unsigned __int8)IsKeyboardDelegationEnabledForThread()) )
    {
      break;
    }
    Valid = PhkNextValid(Valid, v21);
LABEL_189:
    if ( !Valid )
      return 0LL;
  }
  v22 = *(int *)(Valid + 48);
  v23 = dword_140355994[v22];
  v91 = v23;
  if ( (_DWORD)v22 == 10
    && (_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 528), 0, 0) & 8) != 0
    && ((v6 - 4) & 0xFFFFFFF3) == 0
    && v6 != 16 )
  {
    LOBYTE(v23) = v23 | 0x10;
    v91 = v23;
  }
  if ( *(_DWORD *)(Valid + 48) == 10
    && (_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 528), 0, 0) & 4) != 0
    && v6 == 11 )
  {
    LOBYTE(v23) = v23 | 0x10;
    v91 = v23;
  }
  IsEnabledDeviceUsageNoInline = Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline();
  v27 = *(UIPrivilegeIsolation **)(Valid + 16);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( v27 == (UIPrivilegeIsolation *)v17 )
      goto LABEL_70;
    if ( (v23 & 0x20) != 0 )
    {
      v8 = 1;
      goto LABEL_70;
    }
    ProcessMachine = PsGetProcessMachine(**((_QWORD **)v27 + 58));
    if ( (unsigned __int16)PsGetProcessMachine(**(_QWORD **)(v17 + 464)) != ProcessMachine )
    {
      v8 = 1;
      goto LABEL_70;
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 528), 0, 0) & 0xC) != 0 )
    {
      v27 = *(UIPrivilegeIsolation **)(Valid + 16);
      if ( *((_QWORD *)v27 + 58) != *(_QWORD *)(v17 + 464) )
      {
        v8 = 1;
        goto LABEL_70;
      }
    }
    if ( (unsigned int)IsProcessDwm(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 464LL)) )
    {
      v8 = 1;
      goto LABEL_70;
    }
  }
  else
  {
    if ( v27 == (UIPrivilegeIsolation *)v17 )
      goto LABEL_69;
    if ( (v23 & 0x20) != 0 )
      goto LABEL_68;
    v29 = PsGetProcessMachine(**((_QWORD **)v27 + 58));
    if ( (unsigned __int16)PsGetProcessMachine(**(_QWORD **)(v17 + 464)) != v29 )
      goto LABEL_68;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 528), 0, 0) & 0xC) != 0 )
    {
      v27 = *(UIPrivilegeIsolation **)(Valid + 16);
      if ( *((_QWORD *)v27 + 58) != *(_QWORD *)(v17 + 464) )
        goto LABEL_68;
    }
    if ( (unsigned int)IsProcessDwm(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 464LL)) )
      goto LABEL_68;
    if ( !UIPrivilegeIsolation::Enforced(v27) && (*(_DWORD *)(Valid + 64) & 1) != 0 )
    {
      v30 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL);
      v25 = *(_QWORD *)(v17 + 464);
      if ( (*(_DWORD *)(v30 + 764) != *(_DWORD *)(v25 + 764) || *(_DWORD *)(v30 + 768) != *(_DWORD *)(v25 + 768))
        && (_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 528), 0, 0) & 0x400000) == 0 )
      {
        v25 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL);
        v27 = (UIPrivilegeIsolation *)luidSystem[0];
        if ( *(_DWORD *)(v25 + 764) != luidSystem[0] )
          goto LABEL_68;
        v27 = (UIPrivilegeIsolation *)luidSystem[1];
        if ( *(_DWORD *)(v25 + 768) != (_DWORD)v27 )
          goto LABEL_68;
      }
    }
  }
  v27 = *(UIPrivilegeIsolation **)(Valid + 16);
  if ( *((_QWORD *)v27 + 58) != *(_QWORD *)(v17 + 464) && (unsigned __int8)IsRestricted(*(_QWORD *)v27) )
  {
LABEL_68:
    v8 = 1;
    goto LABEL_70;
  }
LABEL_69:
  v8 = 0;
LABEL_70:
  if ( (unsigned int)(*(_DWORD *)(Valid + 48) - 13) <= 1 )
  {
    if ( (a5 & 2) != 0
      || !*(_QWORD *)(W32GetUserSessionState(v27, v25) + 18888)
      || (UserSessionState = W32GetUserSessionState(v33, v32),
          UIPrivilegeIsolation::CheckAccess(
            (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL) + 864LL),
            (const struct tagUIPI_INFO *)(*(_QWORD *)(UserSessionState + 18888) + 448LL),
            v35))
      || (unsigned int)IsForegroundShellFrameQueueAccessible(*(const struct tagTHREADINFO **)(Valid + 16))
      || (v37 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL), *(int *)(v37 + 12) < 0) )
    {
      if ( *(_DWORD *)(Valid + 48) != 14 )
        goto LABEL_87;
      if ( *(_DWORD *)(v17 + 1556) == -1 )
        goto LABEL_87;
      if ( UIPrivilegeIsolation::CheckAccess(
             (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL) + 864LL),
             (const struct tagUIPI_INFO *)(v17 + 1556),
             v26) )
      {
        goto LABEL_87;
      }
      v43 = *(_QWORD *)(Valid + 16);
      if ( *(int *)(*(_QWORD *)(v43 + 464) + 12LL) < 0 )
        goto LABEL_87;
      v102 = *(_QWORD *)(v17 + 1556);
      v103 = *(_DWORD *)(v17 + 1564);
      v44 = &v102;
      v42 = 0LL;
    }
    else
    {
      v38 = *(_QWORD *)(W32GetUserSessionState(v37, v36) + 18888);
      v39 = *(_QWORD *)(v38 + 448);
      v40 = *(_DWORD *)(v38 + 456);
      v42 = *(_QWORD *)(W32GetUserSessionState(v38, v41) + 18888);
      v43 = *(_QWORD *)(Valid + 16);
      v100 = v39;
      v101 = v40;
      v44 = &v100;
    }
    EtwTraceUIPIInputError(v43, 0LL, v42, v44, 6);
    LOBYTE(v23) = v23 & 0xEF;
    v91 = v23;
    goto LABEL_87;
  }
  if ( !UIPrivilegeIsolation::CheckAccess(
          (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL) + 864LL),
          (const struct tagUIPI_INFO *)(*(_QWORD *)(v17 + 464) + 864LL),
          v26) )
  {
    v31 = *(_QWORD *)(Valid + 16);
    if ( *(int *)(*(_QWORD *)(v31 + 464) + 12LL) >= 0 )
    {
      LOBYTE(v23) = v23 & 0xEF;
      v91 = v23;
      EtwTraceUIPIHookError(Valid, (unsigned __int8)v23, v31, v17, v93, v6, v97[0], v96);
    }
    v8 = 1;
  }
LABEL_87:
  if ( !v8
    && (*(_DWORD *)(Valid + 64) & 1) != 0
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL)) )
  {
    v45 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL);
    if ( *(int *)(v45 + 12) >= 0 )
    {
      v46 = *(_QWORD *)(v17 + 464);
      if ( v45 != v46 && (*(_DWORD *)(v45 + 808) & 0x100LL) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v46) )
        {
          v8 = 1;
        }
        else
        {
          ProcessInformation = 6LL;
          if ( ZwQueryInformationProcess(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 ProcessCookie|ProcessUserModeIOPL,
                 &ProcessInformation,
                 8u,
                 0LL) < 0
            || (ProcessInformation & 0x100000000LL) != 0 )
          {
            v8 = 1;
          }
        }
      }
    }
  }
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(&BugCheckParameter3, v17, Valid);
  if ( !v8 )
  {
    if ( *(_DWORD *)(Valid + 68) != -1 )
    {
      CurrentProcess = PsGetCurrentProcess();
      if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || (unsigned int)PsGetWin32KFilterSet() == 5 )
        goto LABEL_109;
      v49 = *(_DWORD *)(Valid + 68);
      SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>((__int64)v130);
      HmodIndex = xxxLoadHmodIndex(v49);
      SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>((__int64)v130);
      if ( (unsigned int)Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !HmodIndex )
          goto LABEL_109;
        SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v127);
        if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) != 0 || (*(_DWORD *)(Valid + 64) & 0x1000) != 0 )
        {
          v51 = v127;
LABEL_108:
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v51);
          goto LABEL_109;
        }
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v127);
      }
      else if ( !HmodIndex )
      {
        goto LABEL_109;
      }
    }
    if ( ((*(_DWORD *)(v17 + 720) | *(_DWORD *)(**(_QWORD **)(v17 + 504) + 16LL)) & 0x400) == 0
      || *(_DWORD *)(Valid + 48) == 9 )
    {
      v54 = v97[0];
      goto LABEL_123;
    }
    *(_OWORD *)v125 = 0LL;
    v126 = 0LL;
    v125[0] = (unsigned int)PsGetThreadId(*(PETHREAD *)v17);
    DWORD2(v126) = v6;
    v54 = v97[0];
    *(_QWORD *)&v126 = v97[0];
    v125[1] = v96;
    v55 = Feature_HandleHookDestroyedDuringCallout__private_IsEnabledDeviceUsageNoInline();
    v56 = *(int *)(Valid + 48);
    if ( v55 )
    {
      if ( (unsigned int)xxxCallHook(0LL, v56, (__int64)v125, 9) )
        goto LABEL_109;
      SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v128);
      if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) == 0 && (*(_DWORD *)(Valid + 64) & 0x1000) == 0 )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v128);
LABEL_123:
        v57 = *(_QWORD *)(v17 + 728);
        Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v104, v17, v57);
        if ( *(_QWORD *)(v17 + 520) )
        {
          v59 = (__int64 *)PhkNextValid(Valid, v58);
          v98 = *(_QWORD *)(*(_QWORD *)(v17 + 520) + 48LL);
          if ( v59 )
            v60 = *v59;
          else
            v60 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v17 + 520) + 48LL) = v60;
        }
        v105[0] = v17 + 728;
        v105[1] = Valid;
        HMAssignmentLock(v105, 1LL);
        v92 = xxxHkCallHook(Valid, v6, v54, v96);
        v106[0] = v17 + 728;
        v106[1] = v57;
        HMAssignmentLock(v106, 1LL);
        if ( *(_QWORD *)(v17 + 520) )
          *(_QWORD *)(*(_QWORD *)(v17 + 520) + 48LL) = v98;
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v104, v61);
        if ( (*(_DWORD *)(Valid + 64) & 0x10) == 0 )
        {
          Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3, v62);
          return v92;
        }
        Valid = PhkNextValid(Valid, v62);
        v63 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread();
        if ( v63 )
          v64 = *v63;
        else
          v64 = 0LL;
        v65 = *(ULONG_PTR **)(v64 + 456);
        if ( v65 != &BugCheckParameter3 )
          KeBugCheckEx(0x164u, 0x3BuLL, v64, (ULONG_PTR)&BugCheckParameter3, 0LL);
        *(_QWORD *)(v64 + 456) = *v65;
        v66 = (struct _HEAD *)HMUnlockObject(v65[1]);
        v95 = 0LL;
        BugCheckParameter3 = -1LL;
        if ( v66 )
          FreeHook(v66);
        goto LABEL_138;
      }
      v51 = v128;
      goto LABEL_108;
    }
    if ( !(unsigned int)xxxCallHook(0LL, v56, (__int64)v125, 9) )
      goto LABEL_123;
LABEL_109:
    Valid = PhkNextValid(Valid, v47);
    v52 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread();
    if ( v52 )
      v53 = *v52;
    else
      v53 = 0LL;
    v85 = *(ULONG_PTR **)(v53 + 456);
    if ( v85 != &BugCheckParameter3 )
      KeBugCheckEx(0x164u, 0x3BuLL, v53, (ULONG_PTR)&BugCheckParameter3, 0LL);
    *(_QWORD *)(v53 + 456) = *v85;
    v86 = HMUnlockObject(v85[1]);
    v95 = 0LL;
    BugCheckParameter3 = -1LL;
    if ( v86 && (*(_DWORD *)(v86 + 64) & 0x10) != 0 )
      FreeHook((struct _HEAD *)v86);
LABEL_138:
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3, v67);
    v13 = v93;
    goto LABEL_189;
  }
  if ( (v23 & 0x10) == 0 )
    goto LABEL_109;
  v118 = 0;
  v122 = 0;
  v124 = 0LL;
  v119 = v96;
  v116 = Valid;
  v117 = v6;
  v121 = -1LL;
  v123 = -1LL;
  v120 = 0;
  if ( tagPROCESSINFO::SyncAndTestFreeze(*(tagPROCESSINFO **)(*(_QWORD *)(Valid + 16) + 464LL)) )
    goto LABEL_109;
  v69 = *(_QWORD *)(v17 + 728);
  v96 = v69;
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v108, v17, v69);
  v107[0] = v17 + 728;
  v107[1] = Valid;
  HMAssignmentLock(v107, 0LL);
  if ( *(_QWORD *)(v17 + 520) )
  {
    v72 = (__int64 *)PhkNextValid(Valid, v70);
    v70 = *(_QWORD *)(*(_QWORD *)(v17 + 520) + 48LL);
    v98 = v70;
    if ( v72 )
      v71 = *v72;
    else
      v71 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v17 + 520) + 48LL) = v71;
  }
  if ( (v23 & 0x20) != 0 )
  {
    v18 = (*(_DWORD *)(Valid + 64) & 0x40) != 0 ? 30000 : *(_DWORD *)(W32GetUserSessionState(v71, v70) + 64200);
    if ( (*(_DWORD *)(Valid + 64) & 0x4000) != 0 )
      v18 = 20;
  }
  if ( (v23 & 0x20) != 0 || (_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 528), 0, 0) & 0xC) != 0 )
  {
    v110 = 0LL;
    v111 = 0LL;
    v112 = 0;
    v109 = 2;
    v113 = 2;
    v114 = v18;
    v115 = &v92;
    if ( (v23 & 0x20) != 0 )
    {
      v121 = *(_QWORD *)(v17 + 1544);
      v122 = *(_DWORD *)(v17 + 1552);
      v123 = *(_QWORD *)(v17 + 1556);
      LODWORD(v124) = *(_DWORD *)(v17 + 1564);
      v119 = *(_QWORD *)(v17 + 1568);
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 528), 0, 0) & 0x20000) != 0
      || IsThreadHung(*(const struct tagTHREADINFO **)(Valid + 16)) )
    {
      v92 = 0LL;
    }
    else
    {
      v73 = BoostHook(v17, Valid, a5);
      v90 = v73;
      if ( v73 )
        v120 |= 1u;
      if ( !xxxInterSendMsgEx(0LL, 788LL, v97[0], &v116, 1, *(_QWORD *)(Valid + 16), &v109, 1, 0) )
      {
        v92 = 0LL;
        if ( (*(_DWORD *)(Valid + 64) & 0x80u) == 0 )
        {
          v74 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v75 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v74 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v76 = *(_DWORD *)(Valid + 48);
            ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(Valid + 16));
            v78 = *(_QWORD *)(Valid + 16);
            v79 = *(_DWORD *)(*(_QWORD *)(v78 + 464) + 56LL);
            v81 = W32GetUserSessionState(v78, v80);
            WPP_RECORDER_AND_TRACE_SF_DDd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v74,
              v75,
              *(_QWORD *)(v81 + 69160),
              ReturnLength,
              v88,
              35,
              v89,
              v79,
              ThreadId,
              v76);
            v73 = v90;
            LOBYTE(v23) = v91;
            v69 = v96;
          }
        }
      }
      if ( v73 )
        DeBoostHook((struct tagHOOK *)Valid);
    }
    if ( (v23 & 0x20) != 0 && v92 )
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 488LL) + 20LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  }
  else
  {
    v92 = xxxInterSendMsgEx(0LL, 788LL, v97[0], &v116, 1, *(_QWORD *)(Valid + 16), 0LL, 1, 0);
  }
  v97[0] = v17 + 728;
  v97[1] = v69;
  HMAssignmentLock(v97, 1LL);
  if ( *(_QWORD *)(v17 + 520) )
    *(_QWORD *)(*(_QWORD *)(v17 + 520) + 48LL) = v98;
  v83 = v92;
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v108, v82);
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3, v84);
  return v83;
}
