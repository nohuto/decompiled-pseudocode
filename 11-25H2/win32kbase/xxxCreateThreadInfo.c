/*
 * XREFs of xxxCreateThreadInfo @ 0x140162D44
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 *     UserThreadCallout @ 0x14016AE90 (UserThreadCallout.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140039670 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     HMValidateSharedHandle @ 0x14003F620 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     AllocQueue @ 0x140060510 (AllocQueue.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0 (-_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundP.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400A038C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagDESKTOP@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400A1A44 (-UnlockWorker@-$Win32RawLockedItemBase@UtagDESKTOP@@$1-UserDereferenceObject@@YAXPEAX@Z$00$00$00.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400A1A98 (-UnlockWorker@-$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1-Win32FreePool@@YAXP.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetUnavailableInputSource @ 0x1400C3540 (SetUnavailableInputSource.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1400DD840 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1400DDACC (ProtectHandle.c)
 *     CloseProtectedHandle @ 0x1400DE398 (CloseProtectedHandle.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1400E0DF0 (McTemplateK0dq_EtwWriteTransfer.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E2330 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     LockObjectAssignment @ 0x1400EBD60 (LockObjectAssignment.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 *     ?Test@LastWokenThread@@YA?AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z @ 0x1400FEDC0 (-Test@LastWokenThread@@YA-AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z.c)
 *     RtlGetExpWinVer @ 0x1400FFD3C (RtlGetExpWinVer.c)
 *     ApiSetEditionInitInputHangInfo @ 0x140105AA0 (ApiSetEditionInitInputHangInfo.c)
 *     zzzSetDesktop @ 0x140106740 (zzzSetDesktop.c)
 *     xxxResolveDesktop @ 0x1401069AC (xxxResolveDesktop.c)
 *     ?ManualLock@?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z @ 0x1401070D8 (-ManualLock@-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z.c)
 *     xxxSetProcessWindowStation @ 0x140107A70 (xxxSetProcessWindowStation.c)
 *     zzzCalcStartCursorHide @ 0x14011E43C (zzzCalcStartCursorHide.c)
 *     IszzzCalcStartCursorHideSupported @ 0x140122358 (IszzzCalcStartCursorHideSupported.c)
 *     IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1401363D0 (IsEditionSetProcessWindowStationAtProcessInitSupported.c)
 *     IsEditionSetThreadDesktopAtThreadInitSupported @ 0x140139B44 (IsEditionSetThreadDesktopAtThreadInitSupported.c)
 *     ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x140161B20 (-AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     ?SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x140162110 (-SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z.c)
 *     InitClientInfo @ 0x140162A98 (InitClientInfo.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x140196E80 (ApiSetEditionUpdateRawMouseMode.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?ParseReserved@@YAKREBGPEBG@Z @ 0x1401A69D4 (-ParseReserved@@YAKREBGPEBG@Z.c)
 *     Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline @ 0x1401A712C (Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1401B857C (EtwTraceScreenSaverProcessEvent.c)
 *     EditionSetProcessWindowStationAtProcessInit @ 0x14023EB3C (EditionSetProcessWindowStationAtProcessInit.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  struct _KPROCESS *ThreadProcess; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  int v10; // r12d
  __int64 v11; // r14
  __int64 *ThreadWin32Thread; // rax
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  const void *v15; // rdi
  ULONG64 v16; // r8
  ULONG_PTR v17; // rbx
  struct tagTHREADINFO *v18; // rax
  struct tagTHREADINFO *v19; // rax
  unsigned int *v20; // rdx
  __int64 v21; // rcx
  ULONG64 v22; // r8
  ULONG64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r15
  int v26; // edi
  HANDLE ThreadProcessId; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // r13d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  HANDLE ThreadId; // rax
  __int64 v61; // rcx
  __int64 ProcessSectionBaseAddress; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 (*v65)(void); // rax
  int v66; // eax
  int v67; // r12d
  void (*v68)(void); // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 (*v71)(void); // rax
  int v72; // eax
  __int64 (__fastcall *v73)(__int64); // rax
  HANDLE *v75; // rbx
  int Event; // edi
  HANDLE v77; // rcx
  int v78; // edx
  struct _KPROCESS *v79; // r13
  int v80; // eax
  __int64 v81; // rdx
  unsigned int v82; // eax
  __int64 v83; // rbx
  struct tagQ *v84; // rax
  struct tagQ *v85; // rbx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 (*v90)(void); // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  int CurrentProcessId; // eax
  __int64 v95; // r8
  __int64 (*v96)(void); // rax
  __int64 v97; // rdx
  PVOID v98; // rax
  PVOID v99; // rdi
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 (*v106)(void); // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 (__fastcall *v109)(__int128 *); // rax
  HANDLE v110; // rbx
  __int64 v111; // rdx
  __int64 v112; // rcx
  unsigned int v113; // r13d
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rcx
  void (*v118)(void); // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 (*v121)(void); // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rcx
  int *v126; // r13
  __int64 v127; // rbx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rbx
  __int64 v131; // rdx
  __int64 v132; // rcx
  char v133; // al
  int v134; // ebx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 (*v152)(void); // rax
  int v153; // eax
  void (__fastcall *v154)(_QWORD); // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 (*v157)(void); // rax
  __int64 (*v158)(void); // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 (*v161)(void); // rax
  void (__fastcall *v162)(__int64); // rax
  __int64 v163; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-1D8h]
  _DWORD *v166; // [rsp+40h] [rbp-1B8h]
  _QWORD *v167; // [rsp+48h] [rbp-1B0h]
  HANDLE Handle; // [rsp+50h] [rbp-1A8h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp-1A0h]
  HANDLE v170; // [rsp+60h] [rbp-198h] BYREF
  int *v171; // [rsp+68h] [rbp-190h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+78h] [rbp-180h] BYREF
  void (__fastcall *v173)(char *); // [rsp+88h] [rbp-170h]
  _BYTE v174[8]; // [rsp+90h] [rbp-168h] BYREF
  __int64 v175; // [rsp+98h] [rbp-160h]
  _QWORD v176[10]; // [rsp+A0h] [rbp-158h] BYREF
  PVOID Object; // [rsp+F0h] [rbp-108h] BYREF
  PVOID v178; // [rsp+F8h] [rbp-100h] BYREF
  ULONG_PTR v179; // [rsp+100h] [rbp-F8h]
  ULONG_PTR v180[3]; // [rsp+108h] [rbp-F0h] BYREF
  _QWORD v181[2]; // [rsp+120h] [rbp-D8h] BYREF
  _QWORD v182[2]; // [rsp+130h] [rbp-C8h] BYREF
  _QWORD v183[2]; // [rsp+140h] [rbp-B8h] BYREF
  _QWORD v184[2]; // [rsp+150h] [rbp-A8h] BYREF
  _BYTE v185[8]; // [rsp+160h] [rbp-98h] BYREF
  __int64 v186; // [rsp+168h] [rbp-90h]
  __int128 v187; // [rsp+170h] [rbp-88h] BYREF
  __int128 v188; // [rsp+180h] [rbp-78h]
  __int128 v189; // [rsp+190h] [rbp-68h]
  int v190; // [rsp+208h] [rbp+10h] BYREF
  __int64 ProcessPeb; // [rsp+210h] [rbp+18h]
  struct _NT_TIB *Self; // [rsp+218h] [rbp+20h]

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  memset(v176, 0, 0x48uLL);
  v166 = 0LL;
  Handle = 0LL;
  v170 = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)v180);
  v179 = 0LL;
  v187 = 0LL;
  v188 = 0LL;
  v189 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v4, (const EVENT_DESCRIPTOR *)"V", &W32kControlGuid);
  if ( !*(_DWORD *)(W32GetUserSessionState(v4, v3) + 36392) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
    {
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( (v7 & CurrentProcessWin32Process) != 0 )
      {
        UserSessionState = W32GetUserSessionState(-*(_QWORD *)CurrentProcessWin32Process, v7);
        ++*(_DWORD *)(UserSessionState + 36400);
        v10 = 33554504;
        if ( ThreadProcess != *(struct _KPROCESS **)(W32GetUserGdiSessionState(v9) + 40) )
          v10 = 0;
        v11 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
        if ( ThreadWin32Thread )
          v11 = *ThreadWin32Thread;
        ProcessPeb = PsGetProcessPeb(ThreadProcess);
        v167 = *(_QWORD **)(ProcessPeb + 32);
        v171 = (int *)v176;
        v176[0] = v167[4];
        v176[1] = v167[5];
        v176[2] = v167[17];
        v176[3] = v167[18];
        v176[4] = *(_QWORD *)((char *)v167 + 164);
        v13 = (unsigned int *)(v167 + 24);
        if ( (unsigned __int64)(v167 + 24) >= MmUserProbeAddress )
          v13 = (unsigned int *)MmUserProbeAddress;
        v14 = *v13;
        LODWORD(ProcessPeb) = v14;
        LODWORD(v176[5]) = v14;
        v15 = (const void *)*((_QWORD *)v13 + 1);
        v176[6] = v15;
        if ( !(_WORD)v14 )
        {
          v176[6] = 0LL;
          goto LABEL_29;
        }
        if ( ((unsigned __int8)v15 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (ULONG64)v15 + (unsigned __int16)v14 + 2;
        if ( v16 <= (unsigned __int64)v15 || v16 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v14 > WORD1(ProcessPeb) )
        {
          if ( (v14 & 1) == 0 )
            goto LABEL_26;
        }
        else if ( (v14 & 1) == 0 )
        {
          v17 = Win32AllocPoolWithQuotaZInitImpl(v14, (unsigned __int16)v14, 0x79747355u);
          v179 = v17;
          v176[6] = v17;
          if ( !v17 )
            ExRaiseStatus(-1073741801);
          if ( v173 != (void (__fastcall *)(char *))-1LL )
          {
            v18 = PtiCurrent();
            KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v17, (ULONG_PTR)v18);
          }
          v19 = PtiCurrent();
          BugCheckParameter2[0] = *((_QWORD *)v19 + 48);
          *((_QWORD *)v19 + 48) = BugCheckParameter2;
          BugCheckParameter2[1] = v17;
          v173 = GreDeleteFastMutex;
          memmove((void *)v176[6], v15, LOWORD(v176[5]));
LABEL_29:
          v20 = (unsigned int *)(v167 + 26);
          if ( (unsigned __int64)(v167 + 26) >= MmUserProbeAddress )
            v20 = (unsigned int *)MmUserProbeAddress;
          v21 = *v20;
          LODWORD(ProcessPeb) = v21;
          LODWORD(v176[7]) = v21;
          v22 = *((_QWORD *)v20 + 1);
          v176[8] = v22;
          if ( (v22 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v23 = v22 + (unsigned __int16)v21 + 2LL;
          if ( v23 <= v22 || v23 >= MmUserProbeAddress )
            ExRaiseAccessViolation();
          if ( (unsigned __int16)v21 > WORD1(ProcessPeb) )
          {
            if ( (v21 & 1) == 0 )
              goto LABEL_226;
          }
          else if ( (v21 & 1) == 0 )
          {
            v24 = PsGetCurrentProcessWin32Process(v21);
            v25 = v24;
            if ( v24 )
              v25 = -(__int64)(*(_QWORD *)v24 != 0LL) & v24;
            v26 = v10 | 0x100;
            if ( *(char *)(v25 + 12) >= 0 )
              v26 = v10;
            ThreadProcessId = PsGetThreadProcessId(Thread);
            v31 = v26 | 0x2000000;
            if ( *(HANDLE *)(W32GetUserSessionState(v29, v28) + 63544) != ThreadProcessId )
              v31 = v26;
            _InterlockedOr((volatile signed __int32 *)(v11 + 528), v31);
            if ( !(unsigned int)Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline(v30)
              && (unsigned int)IsCurrentProcessDwm() )
            {
              *(_QWORD *)(v11 + 1360) |= 4uLL;
            }
            v35 = *(unsigned int *)(W32GetUserSessionState(v33, v32) + 66808);
            if ( (v35 & 0x80u) != 0LL )
            {
              if ( *(_QWORD *)(W32GetUserSessionState(v35, v34) + 14272) )
              {
                v38 = W32GetUserSessionState(v37, v36);
                if ( (*(_BYTE *)(HMPheFromObject(*(int **)(v38 + 14272), v39) + 25) & 1) != 0 )
                {
                  LODWORD(ProcessPeb) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1343LL);
                }
              }
              v40 = *(_QWORD *)(W32GetUserSessionState(v37, v36) + 14272);
              v181[0] = v11 + 480;
              v181[1] = v40;
              v41 = v181;
              goto LABEL_61;
            }
            if ( !*(_QWORD *)(W32GetUserSessionState(v35, v34) + 14240) )
            {
              if ( *(_QWORD *)(W32GetUserSessionState(v43, v42) + 14272) )
              {
                v46 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 14272);
                v182[0] = W32GetUserSessionState(v48, v47) + 14240;
                v182[1] = v46;
                v49 = 1LL;
                v50 = v182;
              }
              else
              {
                if ( !*(_QWORD *)(W32GetUserSessionState(v45, v44) + 14712) )
                  goto LABEL_57;
                v51 = *(_QWORD *)(W32GetUserSessionState(v43, v42) + 14712);
                v183[0] = W32GetUserSessionState(v53, v52) + 14240;
                v183[1] = v51;
                v49 = 0LL;
                v50 = v183;
              }
              HMAssignmentLock((__int64)v50, v49);
            }
LABEL_57:
            if ( *(_QWORD *)(W32GetUserSessionState(v43, v42) + 14240) )
            {
              v56 = W32GetUserSessionState(v55, v54);
              if ( (*(_BYTE *)(HMPheFromObject(*(int **)(v56 + 14240), v57) + 25) & 1) != 0 )
              {
                LODWORD(ProcessPeb) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1361LL);
              }
            }
            v58 = *(_QWORD *)(W32GetUserSessionState(v55, v54) + 14240);
            v184[0] = v11 + 480;
            v184[1] = v58;
            v41 = v184;
LABEL_61:
            HMAssignmentLock((__int64)v41, 0LL);
            *(_QWORD *)(v11 + 488) = v11 + 1096;
            if ( (*(_DWORD *)(v25 + 12) & 0x800000) != 0 )
              _InterlockedOr((volatile signed __int32 *)(v11 + 528), 0x2000000u);
            *(_QWORD *)(v11 + 464) = v25;
            *(_QWORD *)(v11 + 704) = *(_QWORD *)(v25 + 320);
            *(_QWORD *)(v25 + 320) = v11;
            ++*(_DWORD *)(v25 + 368);
            if ( Self )
            {
              ThreadId = PsGetThreadId(*(PETHREAD *)v11);
              Self[2].StackBase = ThreadId;
            }
            *(_QWORD *)(v11 + 520) = (char *)Self + 2048;
            *(_DWORD *)(*(_QWORD *)(v11 + 520) + 232LL) = *(_DWORD *)(v11 + 400);
            *(_DWORD *)(*(_QWORD *)(v11 + 520) + 236LL) = 0;
            *(_QWORD *)(v11 + 408) = *(_QWORD *)(v11 + 520) + 232LL;
            v61 = *(unsigned int *)(v11 + 404);
            *(_QWORD *)(*(_QWORD *)(v11 + 520) + 240LL) = (unsigned int)v61;
            *(_QWORD *)(v11 + 416) = *(_QWORD *)(v11 + 520) + 240LL;
            if ( (*(_DWORD *)(v25 + 12) & 0x2000000) != 0 )
              _InterlockedOr((volatile signed __int32 *)(v11 + 528), 0x20000000u);
            if ( !*(_DWORD *)(v11 + 672) )
            {
              if ( PsGetProcessPeb(Process) )
              {
                ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(Process);
                *(_DWORD *)(v11 + 672) = RtlGetExpWinVer(ProcessSectionBaseAddress);
              }
              else
              {
                *(_DWORD *)(v11 + 672) = 1536;
              }
            }
            v64 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v61, v59) + 48);
            v65 = *(__int64 (**)(void))(v64 + 1104);
            if ( v65 )
            {
              v66 = v65();
              v67 = -1073741637;
            }
            else
            {
              v67 = -1073741637;
              v66 = -1073741637;
            }
            if ( v66 >= 0 )
            {
              v64 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v64, v63) + 48);
              v68 = *(void (**)(void))(v64 + 1112);
              if ( v68 )
                v68();
            }
            LODWORD(Self) = v31 & 0xC;
            if ( (v31 & 0xC) == 0 )
            {
              v70 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v64, v63) + 48);
              v71 = *(__int64 (**)(void))(v70 + 1120);
              v72 = v71 ? v71() : -1073741637;
              if ( v72 >= 0 )
              {
                v73 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v70, v69) + 48)
                                                        + 1128LL);
                if ( v73 ? v73(v11) : 0 )
                  *(_DWORD *)(v25 + 12) |= 0x1000000u;
              }
            }
            v75 = (HANDLE *)(v11 + 760);
            Event = ZwCreateEvent((PHANDLE)(v11 + 760), 0x1F0003u, 0LL, SynchronizationEvent, 0);
            if ( Event >= 0 )
            {
              v77 = *v75;
              Object = 0LL;
              Event = ObReferenceObjectByHandle(v77, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
              *(_QWORD *)(v11 + 768) = Object;
              if ( Event < 0 )
              {
                if ( Event != -1073741816 )
                  ObCloseHandle(*v75, 1);
              }
              else
              {
                Event = ProtectHandle(*v75, v78, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
              }
            }
            if ( Event < 0 )
            {
              *v75 = 0LL;
LABEL_228:
              v98 = 0LL;
              goto LABEL_229;
            }
            Event = ObDuplicateObject(Process, *v75, Process, v11 + 1632, 0, 512, 2, 0);
            if ( Event < 0 )
            {
              *(_QWORD *)(v11 + 1632) = 0LL;
              goto LABEL_228;
            }
            v79 = Process;
            Event = InitializeThreadInfoIocp(Process, (void **)v11);
            if ( Event < 0 )
              goto LABEL_228;
            v80 = *(_DWORD *)(v25 + 12);
            v81 = 0x4000LL;
            LODWORD(ProcessPeb) = v80 & 0x4000;
            *(_DWORD *)(v25 + 12) = v80 | 0x4000;
            if ( !*(_DWORD *)(v25 + 772) && LODWORD(v176[4]) )
            {
              *(_DWORD *)(v25 + 772) = 28;
              *(_QWORD *)(v25 + 776) = v176[2];
              *(_QWORD *)(v25 + 784) = v176[3];
              *(_DWORD *)(v25 + 792) = v176[4];
              *(_WORD *)(v25 + 796) = WORD2(v176[4]);
            }
            if ( (v80 & 0x4000) == 0 )
            {
              if ( (v176[4] & 0x200) != 0 )
                v82 = v176[0];
              else
                v82 = LOWORD(v176[7])
                    ? ParseReserved((const unsigned __int16 *volatile)v176[8], (const unsigned __int16 *)0x4000)
                    : 0;
              *(_DWORD *)(v25 + 676) = v82;
              if ( (v171[8] & 0x400) != 0 )
              {
                v83 = *((_QWORD *)v171 + 1);
                if ( HMValidateSharedHandle(v83, v81) )
                  *(_QWORD *)(v25 + 680) = v83;
              }
            }
            v84 = (struct tagQ *)AllocQueue(0LL, 0LL);
            v85 = v84;
            if ( !v84 )
            {
              Event = -1073741801;
              goto LABEL_228;
            }
            tagTHREADINFO::AssignQueue((tagTHREADINFO *)v11, v84);
            *((_QWORD *)v85 + 13) = v11;
            *((_QWORD *)v85 + 12) = v11;
            ApiSetEditionUpdateRawMouseMode(v85);
            if ( v79 == *(struct _KPROCESS **)(W32GetUserGdiSessionState(v86) + 40) )
            {
              *((_QWORD *)v85 + 56) = 0x2000LL;
            }
            else
            {
              *((_DWORD *)v85 + 112) = *(_DWORD *)(*(_QWORD *)(v11 + 464) + 864LL);
              *((_DWORD *)v85 + 113) = *(_DWORD *)(*(_QWORD *)(v11 + 464) + 868LL);
              v88 = *(unsigned int *)(*(_QWORD *)(v11 + 464) + 872LL);
              *((_DWORD *)v85 + 114) = v88;
            }
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 528), 0, 0) & 0xC) != 0
              || !*(_QWORD *)(W32GetUserSessionState(v88, v87) + 63520) )
            {
              *(_QWORD *)(v11 + 1360) |= 0x10uLL;
              if ( (int)IsEditionSetProcessWindowStationAtProcessInitSupported(v88, v87) >= 0 )
              {
                v113 = v171[8] & 0x40000000;
                Event = 0;
                if ( (int)IsEditionSetProcessWindowStationAtProcessInitSupported(v112, v111) >= 0 )
                  Event = EditionSetProcessWindowStationAtProcessInit(v171 + 10, v113);
                if ( Event < 0 )
                  goto LABEL_228;
                *(_DWORD *)(v25 + 12) |= 0x40010u;
              }
              if ( (int)IsEditionSetThreadDesktopAtThreadInitSupported(v112, v111) >= 0
                && (int)IsEditionSetThreadDesktopAtThreadInitSupported(v115, v114) >= 0 )
              {
                v118 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v117, v116) + 48) + 1032LL);
                if ( v118 )
                  v118();
              }
            }
            else
            {
              v89 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v88, v87) + 48);
              v90 = *(__int64 (**)(void))(v89 + 1152);
              if ( v90 )
                Event = v90();
              else
                Event = -1073741637;
              if ( Event < 0
                || (Event = xxxResolveDesktop(
                              v89,
                              (__int64)(v171 + 10),
                              (__int64)&v170,
                              v171[8] & 0x40000000,
                              (__int64)&Handle),
                    Event < 0) )
              {
                if ( Event == -1073741205 )
                {
                  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v190, 1);
                  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
                  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v190, v93);
                }
                else
                {
                  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
                  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                  {
                    LODWORD(BugCheckParameter4) = Event;
                    McTemplateK0dq_EtwWriteTransfer(
                      Microsoft_Windows_Win32kEnableBits,
                      &DesktopResolutionFailure,
                      v95,
                      CurrentProcessId,
                      BugCheckParameter4);
                  }
                  Event = -1073741502;
                }
                goto LABEL_228;
              }
              v96 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v92, v91) + 48) + 1168LL);
              if ( v96 )
                Event = v96();
              else
                Event = -1073741637;
              if ( Event < 0 )
                goto LABEL_133;
              AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v185);
              Event = xxxSetProcessWindowStation((__int64)v170, v97);
              if ( v185[0] )
                --*(_DWORD *)(v186 + 28);
              if ( Event < 0 )
              {
LABEL_133:
                CloseProtectedHandle(Handle);
                CloseProtectedHandle(v170);
                Handle = 0LL;
                v170 = 0LL;
                goto LABEL_228;
              }
              v178 = 0LL;
              Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v178, 0LL);
              v98 = v178;
              v166 = v178;
              if ( Event < 0 )
              {
LABEL_229:
                if ( v98 )
                  Win32RawLockedItemBase<tagDESKTOP,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
                    (ULONG_PTR)v180,
                    0);
                if ( v179 )
                  Win32RawLockedItemBase<DISPLAYCONFIG_DEVICE_INFO_HEADER,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
                    (ULONG_PTR)BugCheckParameter2,
                    0);
                xxxDestroyThreadInfo();
LABEL_223:
                Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v180);
                Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
                return (unsigned int)Event;
              }
              v99 = v178;
              Win32RawLockedNtObject<tagDESKTOP>::ManualLock(v180, (ULONG_PTR)v178);
              ObfDereferenceObject(v99);
              LODWORD(v188) = 1;
              *((_QWORD *)&v188 + 1) = PsGetCurrentProcess(v101, v100);
              *(_QWORD *)&v189 = v99;
              *((_QWORD *)&v189 + 1) = 0x100000000LL;
              v105 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v103, v102) + 48);
              v106 = *(__int64 (**)(void))(v105 + 1184);
              if ( v106 )
                Event = v106();
              else
                Event = -1073741637;
              if ( Event < 0 )
                goto LABEL_163;
              v108 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v105, v104) + 48);
              v109 = *(__int64 (__fastcall **)(__int128 *))(v108 + 1192);
              Event = v109 ? v109(&v187) : -1073741637;
              if ( Event < 0 )
                goto LABEL_163;
              if ( !*(_QWORD *)(v25 + 376) )
              {
                v110 = *(HANDLE *)(W32GetUserSessionState(v108, v107) + 63544);
                if ( PsGetProcessId(v79) != v110 )
                {
                  LockObjectAssignment((void **)(v25 + 336), v166);
                  *(_QWORD *)(v25 + 376) = Handle;
                }
              }
            }
            if ( (unsigned int)InitClientInfo(v11) )
            {
              AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v174);
              v121 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v120, v119) + 48) + 1200LL);
              if ( v121 )
                Event = v121();
              else
                Event = -1073741637;
              if ( Event < 0 || (Event = zzzSetDesktop(v11, (__int64)v166, (__int64)Handle), Event < 0) )
              {
                if ( v174[0] )
                {
                  --*(_DWORD *)(v175 + 28);
                  v175 = 0LL;
                }
                goto LABEL_163;
              }
              if ( v174[0] )
                --*(_DWORD *)(v175 + 28);
              W32GetUserSessionState(v123, v122);
              v126 = v171;
              if ( v171[8] < 0 )
              {
                if ( (_DWORD)ProcessPeb )
                {
LABEL_171:
                  _InterlockedOr((volatile signed __int32 *)(v11 + 528), 0x2000000u);
                  goto LABEL_172;
                }
                if ( *(_QWORD *)(W32GetUserSessionState(v125, v124) + 63544) )
                {
                  v127 = *(_QWORD *)(W32GetUserSessionState(v125, v124) + 63544);
                  if ( PsGetProcessInheritedFromUniqueProcessId(Process) == v127 )
                  {
                    *(_QWORD *)(W32GetUserSessionState(v125, v124) + 62824) = v25;
                    v130 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v129, v128) + 19872) + 4960LL);
                    *(_QWORD *)(W32GetUserSessionState(v132, v131) + 36224) = v130;
                    *(_DWORD *)(v25 + 12) |= 0x200000u;
                    EtwTraceScreenSaverProcessEvent(1LL);
                    ForegroundBoost::_SetForegroundPriority(*(_QWORD *)(v11 + 464), v11, 1, 8u);
                    *(_DWORD *)(v25 + 12) |= 0x400000u;
                    goto LABEL_171;
                  }
                }
                v126[8] &= ~0x80000000;
              }
LABEL_172:
              v133 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 528), 0, 0);
              v134 = ProcessPeb;
              if ( (v133 & 0xC) == 0 && !(_DWORD)ProcessPeb )
              {
                v135 = W32GetUserSessionState(v125, v124);
                ++*(_DWORD *)(v135 + 70600);
                if ( (int)IszzzCalcStartCursorHideSupported(v137, v136) >= 0 )
                {
                  ProcessWin32Process = PsGetProcessWin32Process(Process);
                  if ( ProcessWin32Process )
                    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
                  zzzCalcStartCursorHide(ProcessWin32Process, 5000LL);
                }
                if ( !*(_DWORD *)(W32GetUserSessionState(v139, v138) + 70600) )
                {
                  LODWORD(ProcessPeb) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1803LL);
                }
                v143 = W32GetUserSessionState(v142, v141);
                --*(_DWORD *)(v143 + 70600);
                if ( *(_QWORD *)(W32GetUserSessionState(v145, v144) + 63520) )
                {
                  if ( !*(_QWORD *)(v25 + 648) )
                  {
                    UserSetLastError(1003);
LABEL_183:
                    Event = -1073741823;
                    goto LABEL_163;
                  }
                }
              }
              ApiSetEditionInitInputHangInfo(v125, v124);
              v147 = *(_QWORD *)(v11 + 472);
              if ( v147 )
                SetUnavailableInputSource((_DWORD *)(v147 + 436));
              if ( (*(_DWORD *)(v25 + 12) & 0x20000) != 0 )
                _InterlockedOr((volatile signed __int32 *)(v11 + 528), 0x4000u);
              _InterlockedOr((volatile signed __int32 *)(v11 + 528), 0x1000000u);
              if ( (*(_DWORD *)(v25 + 12) & 0x140) == 0
                && (*(_BYTE *)(v25 + 808) & 0x30) != 0x10
                && ((v148 = *(_QWORD *)(W32GetUserSessionState(v147, v146) + 18904)) != 0
                 && *(_QWORD *)(v148 + 464) == v25
                 || (unsigned int)LastWokenThread::Test(v25, 0, v149) == 3) )
              {
                tagTHREADINFO::SetForegroundActivate(v11, 1);
              }
              v151 = *(_QWORD *)(W32GetUserSessionState(v147, v146) + 19872);
              if ( (*(_DWORD *)v151 & 4) != 0 )
              {
                v151 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v151, v150) + 48);
                v152 = *(__int64 (**)(void))(v151 + 1256);
                v153 = v152 ? v152() : -1073741637;
                if ( v153 >= 0 )
                {
                  v151 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v151, v150) + 48);
                  v154 = *(void (__fastcall **)(_QWORD))(v151 + 1264);
                  if ( v154 )
                    v154(0LL);
                }
              }
              if ( !(_DWORD)Self )
              {
                v156 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v151, v150) + 48);
                v157 = *(__int64 (**)(void))(v156 + 1272);
                Event = v157 ? v157() : -1073741637;
                if ( Event < 0 )
                  goto LABEL_163;
                v151 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v156, v155) + 48);
                v158 = *(__int64 (**)(void))(v151 + 1280);
                Event = v158 ? v158() : -1073741637;
                if ( Event < 0 )
                  goto LABEL_163;
              }
              if ( !v134 && (*(_DWORD *)(v25 + 12) & 1) == 0 )
              {
                v160 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v151, v150) + 48);
                v161 = *(__int64 (**)(void))(v160 + 1288);
                if ( v161 )
                  v67 = v161();
                if ( v67 >= 0 )
                {
                  v162 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v160, v159) + 48)
                                                        + 1296LL);
                  if ( v162 )
                    v162(7LL);
                }
              }
              if ( v166 )
              {
                if ( (v166[12] & 8) != 0 )
                  goto LABEL_183;
                Win32RawLockedItemBase<tagDESKTOP,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
                  (ULONG_PTR)v180,
                  0);
              }
              v163 = *(_QWORD *)(v11 + 1360);
              if ( (v163 & 1) != 0 )
                *(_QWORD *)(v11 + 1360) = v163 & 0xFFFFFFFFFFFFFFFEuLL;
              goto LABEL_223;
            }
LABEL_163:
            v98 = v166;
            goto LABEL_229;
          }
          LODWORD(ProcessPeb) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1295LL);
LABEL_226:
          ExRaiseAccessViolation();
        }
        v190 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1272LL);
LABEL_26:
        ExRaiseAccessViolation();
      }
    }
  }
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v180);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return 3221225738LL;
}
