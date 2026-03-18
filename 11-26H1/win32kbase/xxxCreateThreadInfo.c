/*
 * XREFs of xxxCreateThreadInfo @ 0x1401A6A18
 * Callers:
 *     UserThreadCallout @ 0x140139A60 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 *     SetUnavailableInputSource @ 0x14006CD60 (SetUnavailableInputSource.c)
 *     HMValidateSharedHandle @ 0x140087920 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     LockObjectAssignment @ 0x1400BC070 (LockObjectAssignment.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1400CCB40 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagDESKTOP@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400D0604 (-UnlockWorker@-$Win32RawLockedItemBase@UtagDESKTOP@@$1-UserDereferenceObject@@YAXPEAX@Z$00$00$00.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400D0658 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1400D0B3C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     AllocQueue @ 0x1400D2A10 (AllocQueue.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400FA870 (-UnlockWorker@-$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1-Win32FreePool@@YAXP.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400FB7B4 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x14011A324 (W32GetThreadWin32Thread.c)
 *     CloseProtectedHandle @ 0x14012A7A4 (CloseProtectedHandle.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x14012B4B0 (McTemplateK0dq_EtwWriteTransfer.c)
 *     ProtectHandle @ 0x140133808 (ProtectHandle.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x14013420C (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x140140960 (-AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     ?Test@LastWokenThread@@YA?AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z @ 0x140141540 (-Test@LastWokenThread@@YA-AW4LastWokenThreadTestResult@@PEBUtagPROCESSINFO@@_N@Z.c)
 *     RtlGetExpWinVer @ 0x140141754 (RtlGetExpWinVer.c)
 *     ?ManualLock@?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z @ 0x140143D60 (-ManualLock@-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAAXPEAUtagDESKTOP@@@Z.c)
 *     zzzSetDesktop @ 0x140145414 (zzzSetDesktop.c)
 *     ApiSetEditionInitInputHangInfo @ 0x140145474 (ApiSetEditionInitInputHangInfo.c)
 *     xxxResolveDesktop @ 0x1401454CC (xxxResolveDesktop.c)
 *     xxxSetProcessWindowStation @ 0x140148140 (xxxSetProcessWindowStation.c)
 *     zzzCalcStartCursorHide @ 0x14015746C (zzzCalcStartCursorHide.c)
 *     IszzzCalcStartCursorHideSupported @ 0x14015CCE4 (IszzzCalcStartCursorHideSupported.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x140173C54 (ApiSetEditionUpdateRawMouseMode.c)
 *     ??$DuplicateUnicodeStringFromUser@$0A@@@YAJPEAU_UNICODE_STRING@@K0@Z @ 0x1401874BC (--$DuplicateUnicodeStringFromUser@$0A@@@YAJPEAU_UNICODE_STRING@@K0@Z.c)
 *     InitClientInfo @ 0x1401A686C (InitClientInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1401C5EB0 (EtwTraceScreenSaverProcessEvent.c)
 *     ?ParseReserved@@YAKREBGPEBG@Z @ 0x1401C9D68 (-ParseReserved@@YAKREBGPEBG@Z.c)
 *     ?SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x1401C9E20 (-SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  struct _KPROCESS *ThreadProcess; // rbx
  int v3; // edx
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v8; // r8d
  __int64 v9; // rdx
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  int v12; // r12d
  __int64 ThreadWin32Thread; // r14
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  ULONG_PTR v17; // rbx
  struct tagTHREADINFO *v18; // rax
  struct tagTHREADINFO *v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  ULONG_PTR *v22; // rcx
  ULONG_PTR v23; // rbx
  struct tagTHREADINFO *v24; // rax
  struct tagTHREADINFO *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r15
  int v28; // edi
  HANDLE ThreadProcessId; // rbx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  unsigned int v36; // r12d
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  __int64 v43; // rax
  int v44; // edx
  int v45; // r8d
  __int64 v46; // rcx
  int v47; // r8d
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  __int64 v54; // rbx
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  __int64 v67; // rax
  int v68; // edx
  int v69; // r8d
  struct _NT_TIB *v70; // rbx
  __int64 v71; // rcx
  PEPROCESS v72; // rbx
  __int64 ProcessSectionBaseAddress; // rax
  __int64 v74; // rcx
  __int64 (*v75)(void); // rax
  int v76; // eax
  int v77; // r13d
  void (*v78)(void); // rax
  __int64 v79; // rcx
  __int64 (*v80)(void); // rax
  int v81; // eax
  __int64 (__fastcall *v82)(__int64); // rax
  HANDLE *v84; // rbx
  int Event; // edi
  int v86; // edx
  PEPROCESS v87; // r12
  int v88; // r8d
  int v89; // eax
  int v90; // edx
  unsigned int v91; // eax
  __int64 v92; // rbx
  char *v93; // rax
  __int64 v94; // rbx
  __int64 v95; // rcx
  int v96; // edx
  int v97; // ecx
  int v98; // r8d
  __int64 v99; // rcx
  _QWORD *v100; // rbx
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  int v106; // edx
  int v107; // r8d
  int CurrentProcessId; // eax
  __int64 v109; // r8
  __int64 (*v110)(void); // rax
  _DWORD *v111; // rax
  PVOID v112; // rdi
  __int64 v113; // rcx
  __int64 v114; // rcx
  int v115; // edx
  __int64 v116; // rcx
  int v117; // r8d
  __int64 (__fastcall *v118)(__int128 *); // rax
  HANDLE v119; // rbx
  __int64 v120; // rcx
  __int64 (*v121)(void); // rax
  int v122; // edx
  int v123; // ecx
  int v124; // r8d
  int v125; // edx
  __int64 v126; // rcx
  int v127; // r8d
  __int64 v128; // rbx
  int v129; // edx
  int v130; // ecx
  int v131; // r8d
  __int64 v132; // rcx
  __int64 v133; // rbx
  int v134; // edx
  int v135; // r8d
  char v136; // al
  int v137; // ebx
  __int64 v138; // rax
  __int64 v139; // rcx
  int v140; // edx
  int v141; // ecx
  int v142; // r8d
  __int64 ProcessWin32Process; // rax
  __int64 v144; // rcx
  int v145; // edx
  int v146; // ecx
  int v147; // r8d
  __int64 v148; // rax
  int v149; // edx
  int v150; // ecx
  int v151; // r8d
  int v152; // edx
  int v153; // r8d
  __int64 v154; // rcx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // rcx
  __int64 (*v158)(void); // rax
  int v159; // eax
  void (__fastcall *v160)(_QWORD); // rax
  __int64 v161; // rcx
  __int64 (*v162)(void); // rax
  __int64 (*v163)(void); // rax
  __int64 v164; // rcx
  __int64 (*v165)(void); // rax
  void (__fastcall *v166)(__int64); // rax
  __int64 v167; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-1A8h]
  __int64 *v170; // [rsp+40h] [rbp-188h] BYREF
  __int64 v171; // [rsp+48h] [rbp-180h]
  HANDLE Handle; // [rsp+50h] [rbp-178h] BYREF
  _QWORD *v173; // [rsp+58h] [rbp-170h]
  PEPROCESS Process; // [rsp+60h] [rbp-168h]
  PVOID Object; // [rsp+68h] [rbp-160h] BYREF
  HANDLE v176; // [rsp+70h] [rbp-158h] BYREF
  ULONG_PTR v177[2]; // [rsp+78h] [rbp-150h] BYREF
  void (__fastcall *v178)(char *, __int64, __int64, __int64); // [rsp+88h] [rbp-140h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+90h] [rbp-138h] BYREF
  void (__fastcall *v180)(char *, __int64, __int64, __int64); // [rsp+A0h] [rbp-128h]
  __int64 v181; // [rsp+A8h] [rbp-120h]
  __int64 v182; // [rsp+B0h] [rbp-118h]
  _QWORD v183[10]; // [rsp+C0h] [rbp-108h] BYREF
  ULONG_PTR v184[5]; // [rsp+110h] [rbp-B8h] BYREF
  __int128 v185; // [rsp+138h] [rbp-90h] BYREF
  __int128 v186; // [rsp+148h] [rbp-80h]
  __int128 v187; // [rsp+158h] [rbp-70h]
  _QWORD *v188; // [rsp+168h] [rbp-60h]
  volatile void *Address; // [rsp+1D8h] [rbp+10h] BYREF
  struct _NT_TIB *Self; // [rsp+1E0h] [rbp+18h]
  _DWORD *v191; // [rsp+1E8h] [rbp+20h]

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  memset(v183, 0, 0x48uLL);
  v191 = 0LL;
  Handle = 0LL;
  v176 = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)v177);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)v184);
  v182 = 0LL;
  v181 = 0LL;
  v185 = 0LL;
  v186 = 0LL;
  v187 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v4, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( !*(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 36432) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( (v9 & CurrentProcessWin32Process) != 0 )
      {
        UserSessionState = W32GetUserSessionState(-*(_DWORD *)CurrentProcessWin32Process, v9, v8);
        ++*(_DWORD *)(UserSessionState + 36440);
        v12 = 33554504;
        if ( ThreadProcess != *(struct _KPROCESS **)(W32GetUserGdiSessionState(v11) + 40) )
          v12 = 0;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
        Address = (volatile void *)PsGetProcessPeb(ThreadProcess);
        v184[3] = 1LL;
        ProbeForRead(Address, 1uLL, 1u);
        Address = (volatile void *)*((_QWORD *)Address + 4);
        v173 = v183;
        v188 = v183;
        v184[4] = 1LL;
        ProbeForRead(Address, 1uLL, 1u);
        v183[0] = *((_QWORD *)Address + 4);
        v183[1] = *((_QWORD *)Address + 5);
        v183[2] = *((_QWORD *)Address + 17);
        v183[3] = *((_QWORD *)Address + 18);
        v183[4] = *(_QWORD *)((char *)Address + 164);
        v14 = DuplicateUnicodeStringFromUser<0>();
        if ( v14 < 0 )
          ExRaiseStatus(v14);
        v17 = v183[6];
        if ( v183[6] )
        {
          v182 = v183[6];
          if ( v180 != (void (__fastcall *)(char *, __int64, __int64, __int64))-1LL )
          {
            v18 = PtiCurrent(v16, v15);
            KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v17, (ULONG_PTR)v18);
          }
          v19 = PtiCurrent(v16, v15);
          BugCheckParameter2[0] = *((_QWORD *)v19 + 47);
          *((_QWORD *)v19 + 47) = BugCheckParameter2;
          BugCheckParameter2[1] = v17;
          v180 = GreDeleteFastMutex;
        }
        v20 = DuplicateUnicodeStringFromUser<0>();
        if ( v20 < 0 )
          ExRaiseStatus(v20);
        v23 = v183[8];
        if ( v183[8] )
        {
          v181 = v183[8];
          if ( v178 != (void (__fastcall *)(char *, __int64, __int64, __int64))-1LL )
          {
            v24 = PtiCurrent((__int64)v22, v21);
            KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)v177, v23, (ULONG_PTR)v24);
          }
          v25 = PtiCurrent((__int64)v22, v21);
          v177[0] = *((_QWORD *)v25 + 47);
          v22 = v177;
          *((_QWORD *)v25 + 47) = v177;
          v177[1] = v23;
          v178 = GreDeleteFastMutex;
        }
        v26 = PsGetCurrentProcessWin32Process(v22);
        v27 = v26;
        if ( v26 )
          v27 = -(__int64)(*(_QWORD *)v26 != 0LL) & v26;
        v28 = v12 | 0x100;
        if ( *(char *)(v27 + 12) >= 0 )
          v28 = v12;
        ThreadProcessId = PsGetThreadProcessId(Thread);
        v36 = v28 | 0x2000000;
        if ( *(HANDLE *)(W32GetUserSessionState(v31, v30, v32) + 63536) != ThreadProcessId )
          v36 = v28;
        _InterlockedOr((volatile signed __int32 *)(ThreadWin32Thread + 520), v36);
        v38 = *(_DWORD *)(W32GetUserSessionState(v34, v33, v35) + 66800);
        if ( (v38 & 0x80u) != 0 )
        {
          if ( *(_QWORD *)(W32GetUserSessionState(v38, v37, v39) + 14264) )
          {
            v43 = W32GetUserSessionState(v41, v40, v42);
            if ( (*(_BYTE *)(HMPheFromObject(*(_DWORD **)(v43 + 14264), v44, v45) + 25) & 1) != 0 )
            {
              LODWORD(Address) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1341LL);
            }
          }
          v170 = (__int64 *)(ThreadWin32Thread + 472);
          v46 = *(_QWORD *)(W32GetUserSessionState(v41, v40, v42) + 14264);
          goto LABEL_41;
        }
        if ( !*(_QWORD *)(W32GetUserSessionState(v38, v37, v39) + 14232) )
        {
          if ( *(_QWORD *)(W32GetUserSessionState(v49, v48, v50) + 14264) )
          {
            v54 = *(_QWORD *)(W32GetUserSessionState(v52, v51, v53) + 14264);
            v58 = W32GetUserSessionState(v56, v55, v57);
            v60 = 1;
          }
          else
          {
            if ( !*(_QWORD *)(W32GetUserSessionState(v52, v51, v53) + 14704) )
              goto LABEL_37;
            v54 = *(_QWORD *)(W32GetUserSessionState(v49, v48, v50) + 14704);
            v58 = W32GetUserSessionState(v62, v61, v63);
            v60 = 0;
          }
          v170 = (__int64 *)(v58 + 14232);
          v171 = v54;
          HMAssignmentLock(&v170, v60, v59);
        }
LABEL_37:
        if ( *(_QWORD *)(W32GetUserSessionState(v49, v48, v50) + 14232) )
        {
          v67 = W32GetUserSessionState(v65, v64, v66);
          if ( (*(_BYTE *)(HMPheFromObject(*(_DWORD **)(v67 + 14232), v68, v69) + 25) & 1) != 0 )
          {
            LODWORD(Address) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1359LL);
          }
        }
        v170 = (__int64 *)(ThreadWin32Thread + 472);
        v46 = *(_QWORD *)(W32GetUserSessionState(v65, v64, v66) + 14232);
LABEL_41:
        v171 = v46;
        HMAssignmentLock(&v170, 0, v47);
        *(_QWORD *)(ThreadWin32Thread + 480) = ThreadWin32Thread + 1088;
        if ( (*(_DWORD *)(v27 + 12) & 0x800000) != 0 )
          _InterlockedOr((volatile signed __int32 *)(ThreadWin32Thread + 520), 0x2000000u);
        *(_QWORD *)(ThreadWin32Thread + 456) = v27;
        *(_QWORD *)(ThreadWin32Thread + 696) = *(_QWORD *)(v27 + 328);
        *(_QWORD *)(v27 + 328) = ThreadWin32Thread;
        ++*(_DWORD *)(v27 + 376);
        if ( Self )
        {
          v70 = Self;
          v70[2].StackBase = PsGetThreadId(*(PETHREAD *)ThreadWin32Thread);
        }
        *(_QWORD *)(ThreadWin32Thread + 512) = (char *)Self + 2048;
        *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 512) + 232LL) = *(_DWORD *)(ThreadWin32Thread + 392);
        *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 512) + 236LL) = 0;
        *(_QWORD *)(ThreadWin32Thread + 400) = *(_QWORD *)(ThreadWin32Thread + 512) + 232LL;
        v71 = *(_QWORD *)(ThreadWin32Thread + 512);
        *(_DWORD *)(v71 + 240) = *(_DWORD *)(ThreadWin32Thread + 396);
        *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 512) + 244LL) = 0;
        *(_QWORD *)(ThreadWin32Thread + 408) = *(_QWORD *)(ThreadWin32Thread + 512) + 240LL;
        if ( (*(_DWORD *)(v27 + 12) & 0x2000000) != 0 )
          _InterlockedOr((volatile signed __int32 *)(ThreadWin32Thread + 520), 0x20000000u);
        if ( !*(_DWORD *)(ThreadWin32Thread + 664) )
        {
          v72 = Process;
          if ( PsGetProcessPeb(Process) )
          {
            ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v72);
            *(_DWORD *)(ThreadWin32Thread + 664) = RtlGetExpWinVer(ProcessSectionBaseAddress);
          }
          else
          {
            *(_DWORD *)(ThreadWin32Thread + 664) = 1536;
          }
        }
        v74 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v71) + 48);
        v75 = *(__int64 (**)(void))(v74 + 896);
        if ( v75 )
        {
          v76 = v75();
          v77 = -1073741637;
        }
        else
        {
          v77 = -1073741637;
          v76 = -1073741637;
        }
        if ( v76 >= 0 )
        {
          v74 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v74) + 48);
          v78 = *(void (**)(void))(v74 + 904);
          if ( v78 )
            v78();
        }
        LODWORD(Self) = v36 & 0xC;
        if ( (v36 & 0xC) == 0 )
        {
          v79 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v74) + 48);
          v80 = *(__int64 (**)(void))(v79 + 912);
          v81 = v80 ? v80() : -1073741637;
          if ( v81 >= 0 )
          {
            v82 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v79) + 48) + 920LL);
            if ( v82 ? v82(ThreadWin32Thread) : 0 )
              *(_DWORD *)(v27 + 12) |= 0x1000000u;
          }
        }
        v84 = (HANDLE *)(ThreadWin32Thread + 752);
        Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 752), 0x1F0003u, 0LL, SynchronizationEvent, 0);
        if ( Event >= 0 )
        {
          Address = 0LL;
          Event = ObReferenceObjectByHandle(*v84, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, (PVOID *)&Address, 0LL);
          *(_QWORD *)(ThreadWin32Thread + 760) = Address;
          if ( Event < 0 )
          {
            if ( Event != -1073741816 )
              ObCloseHandle(*v84, 1);
          }
          else
          {
            Event = ProtectHandle(*v84, v86, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
          }
        }
        if ( Event < 0 )
        {
          *v84 = 0LL;
LABEL_189:
          v111 = 0LL;
          goto LABEL_190;
        }
        Event = ObDuplicateObject(Process, *v84, Process, ThreadWin32Thread + 1632, 0, 512, 2, 0);
        if ( Event < 0 )
        {
          *(_QWORD *)(ThreadWin32Thread + 1632) = 0LL;
          goto LABEL_189;
        }
        v87 = Process;
        Event = InitializeThreadInfoIocp(Process, (void **)ThreadWin32Thread);
        if ( Event < 0 )
          goto LABEL_189;
        v89 = *(_DWORD *)(v27 + 12);
        v90 = 0x4000;
        LODWORD(Address) = v89 & 0x4000;
        *(_DWORD *)(v27 + 12) = v89 | 0x4000;
        if ( !*(_DWORD *)(v27 + 772) && LODWORD(v183[4]) )
        {
          *(_DWORD *)(v27 + 772) = 28;
          *(_QWORD *)(v27 + 776) = v183[2];
          *(_QWORD *)(v27 + 784) = v183[3];
          *(_DWORD *)(v27 + 792) = v183[4];
          *(_WORD *)(v27 + 796) = WORD2(v183[4]);
        }
        if ( (v89 & 0x4000) == 0 )
        {
          if ( (v183[4] & 0x200) != 0 )
            v91 = v183[0];
          else
            v91 = LOWORD(v183[7])
                ? ParseReserved((const unsigned __int16 *volatile)v183[8], (const unsigned __int16 *)0x4000)
                : 0;
          *(_DWORD *)(v27 + 676) = v91;
          if ( (v173[4] & 0x400) != 0 )
          {
            v92 = v173[1];
            if ( HMValidateSharedHandle(v92, v90, v88) )
              *(_QWORD *)(v27 + 680) = v92;
          }
        }
        v93 = AllocQueue(0LL, 0LL, v88);
        v94 = (__int64)v93;
        if ( !v93 )
        {
          Event = -1073741801;
          goto LABEL_189;
        }
        tagTHREADINFO::AssignQueue((tagTHREADINFO *)ThreadWin32Thread, (struct tagQ *)v93);
        *(_QWORD *)(v94 + 104) = ThreadWin32Thread;
        *(_QWORD *)(v94 + 96) = ThreadWin32Thread;
        ApiSetEditionUpdateRawMouseMode(v94);
        if ( v87 == *(PEPROCESS *)(W32GetUserGdiSessionState(v95) + 40) )
        {
          *(_QWORD *)(v94 + 472) = 0x2000LL;
        }
        else
        {
          *(_DWORD *)(v94 + 472) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 456) + 864LL);
          *(_DWORD *)(v94 + 476) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 456) + 868LL);
          v97 = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 456) + 872LL);
          *(_DWORD *)(v94 + 480) = v97;
        }
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(ThreadWin32Thread + 520), 0, 0) & 0xC) == 0
          && *(_QWORD *)(W32GetUserSessionState(v97, v96, v98) + 63512) )
        {
          v100 = v173;
          v101 = xxxResolveDesktop(v99, (__int64)(v173 + 5), (__int64)&v176, v173[4] & 0x40000000, (__int64)&Handle);
          Event = v101;
          if ( v101 < 0 )
          {
            if ( v101 == -1073741205 )
            {
              LOBYTE(v102) = 1;
              LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&Address, v102, v104, v105);
              ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
              LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&Address, v106, v107);
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
                  v109,
                  CurrentProcessId,
                  BugCheckParameter4);
              }
              Event = -1073741502;
            }
            goto LABEL_189;
          }
          v110 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v103) + 48) + 952LL);
          if ( v110 )
            Event = v110();
          else
            Event = -1073741637;
          if ( Event >= 0 )
          {
            AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v170);
            Event = xxxSetProcessWindowStation((__int64)v176);
            if ( (_BYTE)v170 )
              --*(_DWORD *)(v171 + 28);
          }
          if ( Event < 0 )
          {
            CloseProtectedHandle(Handle);
            CloseProtectedHandle(v176);
            Handle = 0LL;
            v176 = 0LL;
            goto LABEL_189;
          }
          Object = 0LL;
          Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
          v111 = Object;
          v191 = Object;
          if ( Event < 0 )
          {
LABEL_190:
            if ( v111 )
              Win32RawLockedItemBase<tagDESKTOP,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
                (ULONG_PTR)v184,
                0LL);
            if ( v181 )
              Win32RawLockedItemBase<DISPLAYCONFIG_DEVICE_INFO_HEADER,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
                (ULONG_PTR)v177,
                0LL);
            if ( v182 )
              Win32RawLockedItemBase<DISPLAYCONFIG_DEVICE_INFO_HEADER,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
                (ULONG_PTR)BugCheckParameter2,
                0LL);
            xxxDestroyThreadInfo();
LABEL_188:
            Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v184);
            Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v177);
            Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
            return (unsigned int)Event;
          }
          v112 = Object;
          Win32RawLockedNtObject<tagDESKTOP>::ManualLock(v184, (ULONG_PTR)Object);
          ObfDereferenceObject(v112);
          LODWORD(v186) = 1;
          *((_QWORD *)&v186 + 1) = PsGetCurrentProcess(v113);
          *(_QWORD *)&v187 = v112;
          *((_QWORD *)&v187 + 1) = 0x100000000LL;
          v116 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v114) + 48);
          v118 = *(__int64 (__fastcall **)(__int128 *))(v116 + 968);
          if ( v118 )
            Event = v118(&v185);
          else
            Event = -1073741637;
          if ( Event < 0 )
            goto LABEL_127;
          if ( *(_QWORD *)(v27 + 384) )
          {
LABEL_119:
            if ( (unsigned int)InitClientInfo(ThreadWin32Thread) )
            {
              AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v170);
              v121 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v120) + 48) + 976LL);
              if ( v121 )
                Event = v121();
              else
                Event = -1073741637;
              if ( Event < 0 || (Event = zzzSetDesktop(ThreadWin32Thread, (__int64)v191, (__int64)Handle), Event < 0) )
              {
                if ( (_BYTE)v170 )
                {
                  --*(_DWORD *)(v171 + 28);
                  v171 = 0LL;
                }
                goto LABEL_127;
              }
              if ( (_BYTE)v170 )
                --*(_DWORD *)(v171 + 28);
              W32GetUserSessionState(v123, v122, v124);
              if ( *((int *)v100 + 8) < 0 )
              {
                if ( (_DWORD)Address )
                {
LABEL_135:
                  _InterlockedOr((volatile signed __int32 *)(ThreadWin32Thread + 520), 0x2000000u);
                  goto LABEL_136;
                }
                if ( *(_QWORD *)(W32GetUserSessionState(v126, v125, v127) + 63536) )
                {
                  v128 = *(_QWORD *)(W32GetUserSessionState(v126, v125, v127) + 63536);
                  if ( PsGetProcessInheritedFromUniqueProcessId(Process) == v128 )
                  {
                    *(_QWORD *)(W32GetUserSessionState(v126, v125, v127) + 62816) = v27;
                    v132 = *(_QWORD *)(W32GetUserSessionState(v130, v129, v131) + 19904);
                    v133 = *(_QWORD *)(v132 + 4960);
                    *(_QWORD *)(W32GetUserSessionState(v132, v134, v135) + 36256) = v133;
                    *(_DWORD *)(v27 + 12) |= 0x200000u;
                    EtwTraceScreenSaverProcessEvent(1LL);
                    ForegroundBoost::SetForegroundPriority(ThreadWin32Thread, 1u, 8u);
                    *(_DWORD *)(v27 + 12) |= 0x400000u;
                    goto LABEL_135;
                  }
                  v100 = v173;
                }
                *((_DWORD *)v100 + 8) &= ~0x80000000;
              }
LABEL_136:
              v136 = _InterlockedCompareExchange((volatile signed __int32 *)(ThreadWin32Thread + 520), 0, 0);
              v137 = (int)Address;
              if ( (v136 & 0xC) == 0 && !(_DWORD)Address )
              {
                v138 = W32GetUserSessionState(v126, v125, v127);
                ++*(_DWORD *)(v138 + 70592);
                if ( (int)IszzzCalcStartCursorHideSupported(v139) >= 0 )
                {
                  ProcessWin32Process = PsGetProcessWin32Process(Process);
                  v144 = ProcessWin32Process;
                  if ( ProcessWin32Process )
                    v144 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)ProcessWin32Process >> 64) & ProcessWin32Process;
                  zzzCalcStartCursorHide(v144, 0x1388u);
                }
                if ( !*(_DWORD *)(W32GetUserSessionState(v141, v140, v142) + 70592) )
                {
                  LODWORD(Address) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1783LL);
                }
                v148 = W32GetUserSessionState(v146, v145, v147);
                --*(_DWORD *)(v148 + 70592);
                if ( *(_QWORD *)(W32GetUserSessionState(v150, v149, v151) + 63512) )
                {
                  if ( !*(_QWORD *)(v27 + 656) )
                  {
                    UserSetLastError(1003);
LABEL_147:
                    Event = -1073741823;
                    goto LABEL_127;
                  }
                }
              }
              ApiSetEditionInitInputHangInfo(v126);
              v154 = *(_QWORD *)(ThreadWin32Thread + 464);
              if ( v154 )
                SetUnavailableInputSource((_QWORD *)(v154 + 460));
              if ( (*(_DWORD *)(v27 + 12) & 0x20000) != 0 )
                _InterlockedOr((volatile signed __int32 *)(ThreadWin32Thread + 520), 0x4000u);
              _InterlockedOr((volatile signed __int32 *)(ThreadWin32Thread + 520), 0x1000000u);
              if ( (*(_DWORD *)(v27 + 12) & 0x140) == 0
                && (*(_BYTE *)(v27 + 808) & 0x30) != 0x10
                && ((v155 = *(_QWORD *)(W32GetUserSessionState(v154, v152, v153) + 18944)) != 0
                 && *(_QWORD *)(v155 + 456) == v27
                 || (unsigned int)LastWokenThread::Test(v27, 0, v156) == 3) )
              {
                tagTHREADINFO::SetForegroundActivate(ThreadWin32Thread, 1LL);
              }
              v157 = *(_QWORD *)(W32GetUserSessionState(v154, v152, v153) + 19904);
              if ( (*(_DWORD *)v157 & 4) != 0 )
              {
                v157 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v157) + 48);
                v158 = *(__int64 (**)(void))(v157 + 1032);
                v159 = v158 ? v158() : -1073741637;
                if ( v159 >= 0 )
                {
                  v157 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v157) + 48);
                  v160 = *(void (__fastcall **)(_QWORD))(v157 + 1040);
                  if ( v160 )
                    v160(0LL);
                }
              }
              if ( !(_DWORD)Self )
              {
                v161 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v157) + 48);
                v162 = *(__int64 (**)(void))(v161 + 1048);
                Event = v162 ? v162() : -1073741637;
                if ( Event < 0 )
                  goto LABEL_127;
                v157 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v161) + 48);
                v163 = *(__int64 (**)(void))(v157 + 1056);
                Event = v163 ? v163() : -1073741637;
                if ( Event < 0 )
                  goto LABEL_127;
              }
              if ( !v137 && (*(_DWORD *)(v27 + 12) & 1) == 0 )
              {
                v164 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v157) + 48);
                v165 = *(__int64 (**)(void))(v164 + 1064);
                if ( v165 )
                  v77 = v165();
                if ( v77 >= 0 )
                {
                  v166 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v164) + 48) + 1072LL);
                  if ( v166 )
                    v166(7LL);
                }
              }
              if ( v191 )
              {
                if ( (v191[12] & 8) != 0 )
                  goto LABEL_147;
                Win32RawLockedItemBase<tagDESKTOP,&void UserDereferenceObject(void *),1,1,1>::UnlockWorker(
                  (ULONG_PTR)v184,
                  0LL);
              }
              v167 = *(_QWORD *)(ThreadWin32Thread + 1360);
              if ( (v167 & 1) != 0 )
                *(_QWORD *)(ThreadWin32Thread + 1360) = v167 & 0xFFFFFFFFFFFFFFFEuLL;
              goto LABEL_188;
            }
LABEL_127:
            v111 = v191;
            goto LABEL_190;
          }
          v119 = *(HANDLE *)(W32GetUserSessionState(v116, v115, v117) + 63536);
          if ( PsGetProcessId(Process) != v119 )
          {
            LockObjectAssignment((void **)(v27 + 344), v191);
            *(_QWORD *)(v27 + 384) = Handle;
          }
        }
        v100 = v173;
        goto LABEL_119;
      }
    }
  }
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v184);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v177);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return 3221225738LL;
}
