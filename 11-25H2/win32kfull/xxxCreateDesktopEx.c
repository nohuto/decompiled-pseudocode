/*
 * XREFs of xxxCreateDesktopEx @ 0x140166938
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x140165E80 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxConnectService @ 0x14016629C (xxxConnectService.c)
 *     xxxResolveDesktop @ 0x140244080 (xxxResolveDesktop.c)
 *     EditionCreateDesktopEntryPoint @ 0x140247E50 (EditionCreateDesktopEntryPoint.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14002EA3C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140039968 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140049CB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B30B8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     zzzDecomposeDesktop @ 0x1401229EC (zzzDecomposeDesktop.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x140126CC4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ??1?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ @ 0x140162540 (--1-$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@XZ.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x140165E80 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401668DC (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 *     MapDesktop @ 0x140172F80 (MapDesktop.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     OpenDesktopCompletion @ 0x14019D648 (OpenDesktopCompletion.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401AF138 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     CloseProtectedHandle @ 0x1401B60FC (CloseProtectedHandle.c)
 *     GetPhysicalScreenRect @ 0x1401E2F60 (GetPhysicalScreenRect.c)
 *     DwmAsyncDesktopFree @ 0x1402181B8 (DwmAsyncDesktopFree.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x140242860 (-CleanupDirtyDesktops@@YAXXZ.c)
 *     zzzSetDesktop @ 0x140244CA0 (zzzSetDesktop.c)
 *     DwmAsyncDesktopCreate @ 0x14026B0C4 (DwmAsyncDesktopCreate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     _CloseDesktop @ 0x140288754 (_CloseDesktop.c)
 *     LinkWindow @ 0x1402B6200 (LinkWindow.c)
 */

__int64 __fastcall xxxCreateDesktopEx(__int64 a1, __int64 a2, int a3, int a4, HANDLE *a5, int a6)
{
  unsigned int v8; // edi
  struct tagWND *Window; // r13
  struct tagTHREADINFO *v10; // rsi
  int v11; // r12d
  __int64 v12; // r8
  NTSTATUS v13; // eax
  int v14; // ebx
  __int64 v15; // rdx
  int v16; // eax
  char *v17; // r15
  __int64 v18; // rdx
  struct tagWINDOWSTATION *v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  void *v27; // rax
  __int64 v28; // rax
  __int64 UserSessionState; // rax
  int v30; // edi
  __int64 v31; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  char v37; // di
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // edi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  struct tagWND *v48; // rbx
  __int64 v49; // rdx
  int v50; // ecx
  _QWORD *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  volatile signed __int32 *v57; // rcx
  __int64 v58; // rax
  struct tagWINDOWSTATION *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 i; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  void *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdx
  struct tagWND *v83; // rbx
  char v84; // bl
  bool v85; // r12
  __int64 v86; // rax
  int v87; // r8d
  int v88; // edx
  _QWORD *v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r12
  void *v93; // rax
  __int64 v94; // rdx
  char v96; // [rsp+90h] [rbp-248h]
  bool v97; // [rsp+91h] [rbp-247h]
  char v98; // [rsp+94h] [rbp-244h]
  HANDLE Handle; // [rsp+98h] [rbp-240h] BYREF
  _BYTE v100[4]; // [rsp+A0h] [rbp-238h] BYREF
  unsigned int v101; // [rsp+A4h] [rbp-234h]
  struct tagWND *v102; // [rsp+A8h] [rbp-230h]
  signed __int32 v103; // [rsp+B0h] [rbp-228h]
  int v104; // [rsp+B4h] [rbp-224h]
  BOOL v105; // [rsp+B8h] [rbp-220h]
  struct tagWINDOWSTATION *v106; // [rsp+C8h] [rbp-210h]
  _BYTE v107[16]; // [rsp+D0h] [rbp-208h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+E0h] [rbp-1F8h] BYREF
  _DWORD v109[2]; // [rsp+F0h] [rbp-1E8h] BYREF
  PVOID Object; // [rsp+F8h] [rbp-1E0h] BYREF
  _QWORD *v111; // [rsp+100h] [rbp-1D8h]
  __int64 v112; // [rsp+108h] [rbp-1D0h]
  __int64 v113; // [rsp+110h] [rbp-1C8h]
  __int64 v114; // [rsp+118h] [rbp-1C0h]
  __int64 v115; // [rsp+120h] [rbp-1B8h]
  ULONG_PTR v116[2]; // [rsp+128h] [rbp-1B0h] BYREF
  int v117[4]; // [rsp+138h] [rbp-1A0h]
  union _LARGE_INTEGER Timeout; // [rsp+148h] [rbp-190h] BYREF
  HWINSTA v119; // [rsp+158h] [rbp-180h]
  _QWORD v120[4]; // [rsp+160h] [rbp-178h] BYREF
  _QWORD v121[2]; // [rsp+180h] [rbp-158h] BYREF
  _QWORD v122[2]; // [rsp+190h] [rbp-148h] BYREF
  _BYTE v123[16]; // [rsp+1A0h] [rbp-138h] BYREF
  _QWORD v124[5]; // [rsp+1B0h] [rbp-128h] BYREF
  int v125; // [rsp+1D8h] [rbp-100h]
  int v126; // [rsp+1DCh] [rbp-FCh]
  __int128 v127; // [rsp+1F0h] [rbp-E8h] BYREF
  _BYTE v128[16]; // [rsp+200h] [rbp-D8h] BYREF
  _BYTE v129[16]; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE v130[16]; // [rsp+220h] [rbp-B8h] BYREF
  _BYTE v131[16]; // [rsp+230h] [rbp-A8h] BYREF
  __int128 v132; // [rsp+240h] [rbp-98h] BYREF
  __int64 v133[3]; // [rsp+250h] [rbp-88h] BYREF
  __int64 v134[3]; // [rsp+268h] [rbp-70h] BYREF
  char v135[16]; // [rsp+280h] [rbp-58h] BYREF
  char v136[16]; // [rsp+290h] [rbp-48h] BYREF
  char v137[16]; // [rsp+2A0h] [rbp-38h] BYREF

  v8 = a2;
  Handle = 0LL;
  Window = 0LL;
  v102 = 0LL;
  v10 = PtiCurrent(a1, a2);
  v11 = 0;
  v104 = 0;
  v101 = 0;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(v116);
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  v119 = *(HWINSTA *)(a1 + 8);
  v109[0] = W32GetCurrentWin32kSessionId();
  v109[1] = a4;
  LOBYTE(v12) = a6 == 0;
  v13 = ObOpenObjectByName(a1, ExDesktopObjectType, v12, 0LL, a3, v109, &Handle);
  v14 = v13;
  if ( v13 < 0 )
  {
    SetLastNtError(v13);
    CleanupDirtyDesktops();
LABEL_9:
    *a5 = 0LL;
    goto LABEL_123;
  }
  if ( v13 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      SetLastNtError(-1073741801);
      CloseProtectedHandle(Handle);
      v14 = -1073741801;
      goto LABEL_9;
    }
    *a5 = Handle;
    v11 = 1;
  }
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v14 = v16;
  v17 = (char *)Object;
  if ( v16 < 0 )
  {
    SetLastNtError(v16);
    CloseProtectedHandle(Handle);
    goto LABEL_9;
  }
  Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
    v120,
    (__int64)Object,
    UserDereferenceObject);
  if ( v11 )
  {
    v14 = OpenDesktopCompletion(v17, Handle, v8);
    if ( v14 < 0 )
    {
      CloseProtectedHandle(Handle);
      *a5 = 0LL;
    }
    goto LABEL_13;
  }
  v19 = (struct tagWINDOWSTATION *)*((_QWORD *)v17 + 5);
  v106 = v19;
  v20 = *((_QWORD *)v19 + 7);
  v111 = (_QWORD *)*((_QWORD *)v17 + 1);
  v111[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, v8 & 1) )
  {
    CloseProtectedHandle(Handle);
    *a5 = 0LL;
    Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v120, v22);
    v14 = -1073741801;
    goto LABEL_123;
  }
  if ( *(_QWORD *)(W32GetUserGdiSessionState(v21) + 40) )
  {
    v124[0] = 0LL;
    v124[1] = 0LL;
    v124[2] = 1LL;
    v124[3] = *(_QWORD *)(W32GetUserGdiSessionState(v24) + 40);
    v124[4] = v17;
    v125 = 0;
    v126 = 1;
    v14 = MapDesktop(v124);
    if ( v14 < 0 )
    {
      CloseProtectedHandle(Handle);
      SetLastNtError(-1073741790);
      *a5 = 0LL;
LABEL_13:
      Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v120, v18);
      goto LABEL_123;
    }
    v19 = v106;
  }
  v26 = ReferenceDwmApiPort(v24, v23);
  if ( v26 )
  {
    if ( (*((_DWORD *)v19 + 16) & 0x200) != 0 )
    {
      v27 = (void *)ReferenceDwmApiPort(**((_QWORD **)v17 + 1), v25);
      DwmAsyncDesktopCreate(v27);
      zzzComposeDesktop((struct tagDESKTOP *)v17);
      v104 = 1;
    }
    DereferenceDwmApiPort(v26);
  }
  v112 = *((_QWORD *)v10 + 58);
  v115 = *(_QWORD *)(v112 + 336);
  v103 = _InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 0x20000000;
  v97 = v103 != 0;
  v28 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 464LL);
  *((_QWORD *)v10 + 58) = v28;
  if ( (*(_DWORD *)(v28 + 12) & 0x2000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)v10 + 132, 0x20000000u);
  else
    _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xDFFFFFFF);
  v105 = (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 0x20000000) != 0;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 0x10000000) != 0 )
  {
    v96 = 0;
  }
  else
  {
    v96 = 1;
    _InterlockedOr((volatile signed __int32 *)v10 + 132, 0x10000000u);
  }
  v114 = *((_QWORD *)v10 + 62);
  v113 = *((_QWORD *)v10 + 79);
  UserSessionState = W32GetUserSessionState(0x10000000LL, v25);
  ++*(_DWORD *)(UserSessionState + 70600);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v107);
  v30 = zzzSetDesktop(v10, v17, Handle);
  if ( v30 < 0 )
    goto LABEL_31;
  v101 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  *(_OWORD *)v117 = *(_OWORD *)GetPhysicalScreenRect(v135);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
  v34 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v33 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v34 = v33 & CurrentProcessWin32Process;
  }
  if ( !v34 )
    goto LABEL_38;
  v35 = PsGetCurrentProcessWin32Process(v33);
  v36 = v35;
  if ( v35 )
    v36 = -(__int64)(*(_QWORD *)v35 != 0LL) & v35;
  v37 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v36) )
LABEL_38:
    v37 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v133, 0LL);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              (wchar_t *)0x8001,
                              32769LL,
                              0LL,
                              0x82000000,
                              v117[0],
                              v117[1],
                              v117[2] - v117[0],
                              v117[3] - v117[1],
                              0LL,
                              (__int64)v133,
                              hModuleWin,
                              0LL,
                              1u,
                              0x30Au,
                              v37,
                              0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v133, v38);
  if ( !Window )
    goto LABEL_40;
  Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v116, (__int64)Window);
  v40 = PsGetCurrentProcessWin32Process(v39);
  if ( !v40 || (-(__int64)(*(_QWORD *)v40 != 0LL) & v40) == 0 )
    goto LABEL_46;
  v41 = PsGetCurrentProcessWin32Process(-*(_QWORD *)v40);
  if ( v41 )
    v41 &= -(__int64)(*(_QWORD *)v41 != 0LL);
  v98 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v41) )
LABEL_46:
    v98 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v134, 0LL);
  v44 = *(unsigned __int16 *)(W32GetUserSessionState(v43, v42) + 41328);
  v47 = W32GetUserSessionState(v46, v45);
  v48 = (struct tagWND *)xxxCreateWindowEx(
                           0,
                           (wchar_t *)*(unsigned __int16 *)(v47 + 41328),
                           v44,
                           0LL,
                           0x82000000,
                           0,
                           0,
                           100,
                           100,
                           0LL,
                           (__int64)v134,
                           hModuleWin,
                           0LL,
                           1u,
                           0x30Au,
                           v98,
                           0LL);
  v102 = v48;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v134, v49);
  if ( !v48 )
  {
LABEL_40:
    v30 = -1073741801;
LABEL_31:
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v107);
    goto LABEL_103;
  }
  v50 = *(unsigned __int16 *)(*((_QWORD *)v48 + 5) + 42LL);
  if ( (v50 & 0xFFFF3FFF) != 0 )
  {
    if ( (v50 & 0x1000) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2327LL);
    v30 = -1073741790;
    goto LABEL_31;
  }
  Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, (__int64)v48);
  *(_WORD *)(*((_QWORD *)v48 + 5) + 42LL) = *(_WORD *)(*((_QWORD *)v48 + 5) + 42LL) & 0xC000 | 0x29F;
  v51 = v111 + 3;
  *(_QWORD *)(*v111 + 8LL) = *((_QWORD *)Window + 6);
  v121[0] = v51;
  v121[1] = Window;
  HMAssignmentLock(v121, 0LL);
  v127 = *(_OWORD *)LockPointer(v137, (char *)v48 + 104, *(_QWORD *)(v20 + 8));
  HMAssignmentLock(&v127, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v128);
  xxxInheritWindowMonitor(v48, 0LL, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v128);
  LinkWindow(v48);
  v122[0] = v17 + 112;
  v122[1] = v48;
  HMAssignmentLock(v122, 0LL);
  *(_QWORD *)(*((_QWORD *)v48 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)v48 + 120);
  v132 = *(_OWORD *)LockPointer(v136, (char *)Window + 104, *(_QWORD *)(v20 + 8));
  HMAssignmentLock(&v132, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v129);
  xxxInheritWindowMonitor(Window, 0LL, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v129);
  LinkWindow(Window);
  *(_QWORD *)(*((_QWORD *)Window + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)Window + 120);
  v54 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 56968);
  if ( (*(_DWORD *)(v54 + 140) & 1) == 0 )
    *(_QWORD *)(*((_QWORD *)Window + 5) + 168LL) = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v55, v54) + 56968)
                                                             + 128LL);
  HMChangeOwnerThread(*v51, *(_QWORD *)(v20 + 16));
  HMChangeOwnerThread(v48, *(_QWORD *)(v20 + 16));
  W32SetCurrentThreadDpiAwarenessContext(v101);
  v101 = 0;
  *((_QWORD *)v10 + 58) = v112;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v10 + 132, 0, 0) & 0x10000000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2399LL);
  if ( v96 )
    _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xEFFFFFFF);
  if ( v105 != v97 )
  {
    if ( v103 )
      _InterlockedOr((volatile signed __int32 *)v10 + 132, 0x20000000u);
    else
      _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xDFFFFFFF);
  }
  v30 = zzzSetDesktop(v10, v114, v113);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v107);
  if ( v30 >= 0 )
  {
    zzzEndDeferWinEventNotify();
    if ( !*(_QWORD *)(v20 + 56) )
      goto LABEL_79;
    if ( (*(_DWORD *)v20 & 2) == 0 )
    {
      v58 = W32GetUserSessionState(v57, v56);
      v59 = v106;
      *(_QWORD *)(*(_QWORD *)(v58 + 18648) + 656LL) = v106;
      *(_QWORD *)(*(_QWORD *)(v20 + 16) + 656LL) = v59;
LABEL_68:
      KeSetEvent(*(PRKEVENT *)(v20 + 56), 1, 0);
      if ( (*(_DWORD *)v20 & 2) == 0 )
      {
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v100, 1);
        for ( i = W32GetUserSessionState(v63, v62); !*(_QWORD *)(i + 19144); i = W32GetUserSessionState(v71, v70) )
        {
          if ( *(_QWORD *)(W32GetUserSessionState(v66, v65) + 62968) )
          {
            Timeout.QuadPart = -200000LL;
            v69 = W32GetUserSessionState(v68, v67);
            KeWaitForSingleObject(*(PVOID *)(v69 + 62968), Executive, 0, 0, &Timeout);
          }
          else
          {
            UserSleep(20LL);
          }
        }
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v100);
      }
      v72 = *(void **)(v20 + 56);
      if ( v72 )
      {
        ObfDereferenceObject(v72);
        *(_QWORD *)(v20 + 56) = 0LL;
      }
      v57 = *(volatile signed __int32 **)(W32GetUserSessionState(v72, v61) + 19872);
      _InterlockedOr(v57, 0x800u);
LABEL_79:
      if ( v20 == W32GetUserSessionState(v57, v56) + 68464 )
        xxxSetWindowPos(Window, 1LL, 0LL, 0LL, 0, 0, 1115);
      if ( !v115 )
        DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)(*((_QWORD *)v10 + 58) + 336LL));
      if ( !*(_QWORD *)(W32GetUserSessionState(v74, v73) + 62984)
        && v17 == *(char **)(W32GetUserSessionState(v76, v75) + 62976) )
      {
        if ( !(unsigned int)xxxCreateDisconnectDesktop(v119, v106) )
        {
          Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v77);
          Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v116, v79);
          CloseDesktop(Handle);
          *a5 = 0LL;
          Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>(
            (__int64)v120,
            v80);
          v14 = -1073741823;
          goto LABEL_123;
        }
        v81 = W32GetUserSessionState(v78, v77);
        KeSetEvent(*(PRKEVENT *)(v81 + 62808), 1, 0);
        HYDRA_HINT(0x40000LL, v82);
      }
      v83 = v102;
      goto LABEL_89;
    }
    v60 = W32GetUserSessionState(v57, v56);
    ++*(_DWORD *)(v60 + 70600);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v123);
    v30 = zzzSetDesktop(*(_QWORD *)(v20 + 16), v17, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v123);
    if ( v30 >= 0 )
    {
      zzzEndDeferWinEventNotify();
      goto LABEL_68;
    }
  }
  while ( 1 )
  {
LABEL_103:
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v130);
    if ( v101 )
      W32SetCurrentThreadDpiAwarenessContext(v101);
    v83 = v102;
    if ( v102 )
    {
      xxxDestroyWindow(v102);
      HMAssignmentUnlock(v17 + 112);
    }
    if ( Window )
    {
      xxxDestroyWindow(Window);
      v89 = v111 + 3;
      *(_QWORD *)(*v111 + 8LL) = 0LL;
      HMAssignmentUnlock(v89);
    }
    *((_QWORD *)v10 + 58) = v112;
    if ( v96 )
      _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xEFFFFFFF);
    if ( v105 != v97 )
    {
      if ( v103 )
        _InterlockedOr((volatile signed __int32 *)v10 + 132, 0x20000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)v10 + 132, 0xDFFFFFFF);
    }
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v130);
    zzzEndDeferWinEventNotify();
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v131);
    zzzSetDesktop(v10, v114, v113);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v131);
    if ( v104 )
    {
      v92 = ReferenceDwmApiPort(v91, v90);
      if ( v92 )
      {
        zzzDecomposeDesktop((struct tagDESKTOP *)v17, 0);
        v93 = (void *)ReferenceDwmApiPort(*((_QWORD *)v17 + 1), **((_QWORD **)v17 + 1));
        DwmAsyncDesktopFree(v93);
        DereferenceDwmApiPort(v92);
        v83 = v102;
      }
    }
    CloseProtectedHandle(Handle);
    Handle = 0LL;
    if ( !v115 )
      DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)(*((_QWORD *)v10 + 58) + 336LL));
LABEL_89:
    if ( v83 )
      v102 = (struct tagWND *)Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v75);
    if ( Window )
      Window = (struct tagWND *)Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v116, v75);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || (v84 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v84 = 0;
    }
    v85 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v84 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v86 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v75);
      LOBYTE(v87) = v85;
      LOBYTE(v88) = v84;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v88,
        v87,
        *(_QWORD *)(v86 + 69160),
        4,
        3,
        23,
        (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids);
    }
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v30 = -1073741801;
  }
  if ( v30 >= 0 )
    *((_DWORD *)v17 + 12) |= 0x10u;
  *a5 = Handle;
  Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::~Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>((__int64)v120, v75);
  v14 = v30;
LABEL_123:
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v15);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v116, v94);
  return (unsigned int)v14;
}
