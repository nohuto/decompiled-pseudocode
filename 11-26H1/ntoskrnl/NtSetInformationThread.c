/*
 * XREFs of NtSetInformationThread @ 0x140A833F0
 * Callers:
 *     DifNtSetInformationThreadWrapper @ 0x14068C770 (DifNtSetInformationThreadWrapper.c)
 *     EtwpLogger @ 0x140A13B90 (EtwpLogger.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140204540 (KeSetPriorityThread.c)
 *     KeSetIdealProcessorThread @ 0x140204780 (KeSetIdealProcessorThread.c)
 *     IoBoostThreadIoPriority @ 0x140205ACC (IoBoostThreadIoPriority.c)
 *     PsGetEffectiveServerSilo @ 0x140216800 (PsGetEffectiveServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140237F74 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PsSetIoPriorityThread @ 0x140238294 (PsSetIoPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     KiSetLegacyAffinityThread @ 0x14025A52C (KiSetLegacyAffinityThread.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeAbUserModeEntryFree @ 0x140270450 (KeAbUserModeEntryFree.c)
 *     PspLockProcessShared @ 0x140276700 (PspLockProcessShared.c)
 *     ExAcquireFastResourceShared @ 0x140276AE0 (ExAcquireFastResourceShared.c)
 *     PspUnlockProcessShared @ 0x14027CFB0 (PspUnlockProcessShared.c)
 *     PspLockThreadSecurityExclusive @ 0x14027EB40 (PspLockThreadSecurityExclusive.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     PspUnlockThreadSecurityExclusive @ 0x140317050 (PspUnlockThreadSecurityExclusive.c)
 *     PspUpdateContainerImpersonation @ 0x14037E0F0 (PspUpdateContainerImpersonation.c)
 *     PsSetPagePriorityThread @ 0x140383060 (PsSetPagePriorityThread.c)
 *     KeSetUserAffinityThread @ 0x1403F7154 (KeSetUserAffinityThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140427F74 (KeSetIdealProcessorThreadByNumber.c)
 *     ExInitializeFastOwnerEntry @ 0x14043D670 (ExInitializeFastOwnerEntry.c)
 *     PsGetProcessSilo @ 0x14043D780 (PsGetProcessSilo.c)
 *     KeSetSelectedCpuSetsThread @ 0x140462DA0 (KeSetSelectedCpuSetsThread.c)
 *     KeQueryPrimaryGroupProcess @ 0x140462F48 (KeQueryPrimaryGroupProcess.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     IoThreadToProcess @ 0x1404703A0 (IoThreadToProcess.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     KeVerifyGroupAffinity @ 0x140483914 (KeVerifyGroupAffinity.c)
 *     ExReleaseFastResourceShared @ 0x140485E00 (ExReleaseFastResourceShared.c)
 *     KeSetDisableBoostThread @ 0x1404A3D1C (KeSetDisableBoostThread.c)
 *     MmGetMinWsPagePriority @ 0x1404B1660 (MmGetMinWsPagePriority.c)
 *     MmGetDefaultPagePriority @ 0x1404B6960 (MmGetDefaultPagePriority.c)
 *     KeDisableProfiling @ 0x140514DC0 (KeDisableProfiling.c)
 *     KeSetBasePriorityThread @ 0x140528B30 (KeSetBasePriorityThread.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     KeSetCpuSetWorkloadClassThread @ 0x1405F3EB8 (KeSetCpuSetWorkloadClassThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PsAssignImpersonationToken @ 0x140928740 (PsAssignImpersonationToken.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcessThread @ 0x1409573A0 (PsGetNextProcessThread.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 *     SeCheckPrivilegedObject @ 0x140A7A93C (SeCheckPrivilegedObject.c)
 *     RtlTestProtectedAccess @ 0x140A7FCA4 (RtlTestProtectedAccess.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x140A83A6C (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     PspSchedulerSharedDataRegionSlotFree @ 0x140A83D78 (PspSchedulerSharedDataRegionSlotFree.c)
 *     EtwTraceThreadSetName @ 0x140A8BFCC (EtwTraceThreadSetName.c)
 *     PspSetThreadPpmPolicy @ 0x140AB6E40 (PspSetThreadPpmPolicy.c)
 *     PspIsSiloInSilo @ 0x140AF1B24 (PspIsSiloInSilo.c)
 *     PspCheckForJobAffinityViolation @ 0x140AF43A4 (PspCheckForJobAffinityViolation.c)
 *     KeEnableProfiling @ 0x140B5A4B4 (KeEnableProfiling.c)
 *     PspWow64SetContextThread @ 0x140B796B0 (PspWow64SetContextThread.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  SIZE_T v4; // rsi
  char v7; // r15
  ULONG v8; // r13d
  __int32 v9; // ebx
  __int32 v10; // ebx
  __int32 v11; // ebx
  __int32 v12; // ebx
  void *ULong64FromUser; // rsi
  NTSTATUS result; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // ebx
  PETHREAD v17; // rcx
  int v18; // ebx
  int v19; // ebx
  __int32 v20; // ebx
  __int32 v21; // ebx
  __int32 v22; // ebx
  __int32 v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  NTSTATUS v27; // esi
  void *v28; // r8
  unsigned int v29; // r9d
  PETHREAD v30; // rcx
  NTSTATUS v31; // eax
  __int32 v32; // ebx
  __int32 v33; // ebx
  __int32 v34; // ebx
  __int32 v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // esi
  __int64 v40; // r8
  PETHREAD v41; // r14
  int v42; // ebx
  unsigned int v43; // r14d
  unsigned int v44; // r14d
  NTSTATUS v45; // r12d
  PETHREAD v46; // rsi
  __int64 v47; // r8
  struct _KLOCK_ENTRIES *v48; // r9
  __int64 Process; // rsi
  struct _EX_RUNDOWN_REF *i; // rdx
  _QWORD *NextProcessThread; // rcx
  struct _EX_RUNDOWN_REF *v52; // rbx
  unsigned __int64 Count; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  __int16 v56; // r8
  bool v57; // zf
  char v58; // r8
  __int16 v59; // ax
  char v60; // al
  unsigned int v61; // eax
  _DWORD *v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // rcx
  __int16 v65; // ax
  char v66; // al
  char UCharFromUser; // r14
  PETHREAD v68; // rcx
  __int64 v69; // rax
  _KPROCESS *v70; // r15
  LONG v71; // r14d
  struct _KTHREAD *v72; // r15
  _KPROCESS *v73; // rdx
  unsigned __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int64 v76; // rax
  KPRIORITY v77; // ecx
  ULONG v78; // edx
  struct _LIST_ENTRY *v79; // rax
  unsigned int ULongFromUser; // esi
  PETHREAD v81; // r13
  struct _EX_RUNDOWN_REF *p_WaitStatus; // r12
  unsigned int DefaultPagePriority; // eax
  unsigned int v84; // ecx
  unsigned int MinWsPagePriority; // eax
  unsigned int v86; // ecx
  unsigned int v87; // ebx
  char v88; // r14
  __int64 v89; // rax
  __int64 v90; // r8
  struct _SINGLE_LIST_ENTRY *v91; // r9
  unsigned int v92; // ebx
  NTSTATUS v93; // r15d
  PETHREAD v94; // r12
  _KPROCESS *v95; // rsi
  PVOID v96; // rbx
  __int64 v97; // r8
  __int64 v98; // r9
  unsigned __int64 v99; // r14
  unsigned __int16 j; // cx
  __int32 v101; // ebx
  __int32 v102; // ebx
  __int32 v103; // ebx
  __int32 v104; // ebx
  int v105; // ebx
  int v106; // ebx
  int v107; // ebx
  unsigned int v108; // r14d
  unsigned int v109; // eax
  int v110; // eax
  unsigned __int16 v111; // bx
  unsigned __int16 v112; // bx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v114; // r12
  void *v115; // rcx
  __int64 v116; // r8
  struct _KLOCK_ENTRIES *v117; // r9
  PVOID v118; // rbx
  PETHREAD v119; // r14
  PVOID v120; // r15
  ULONG_PTR v121; // rax
  PVOID v122; // rsi
  __int64 v123; // rdx
  PETHREAD v124; // rbx
  NTSTATUS v125; // eax
  unsigned int v126; // ebx
  unsigned int v127; // ebx
  ULONG_PTR v128; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v131; // rsi
  struct _LIST_ENTRY *v132; // rcx
  PEPROCESS v133; // r15
  char IsSiloInSilo; // al
  __int64 EffectiveServerSilo; // rbx
  __int64 ProcessServerSilo; // rax
  unsigned int v137; // ebx
  PETHREAD Thread; // [rsp+48h] [rbp-450h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-448h]
  char v140; // [rsp+58h] [rbp-440h]
  char v141; // [rsp+59h] [rbp-43Fh]
  int v142; // [rsp+5Ch] [rbp-43Ch]
  PVOID Object; // [rsp+60h] [rbp-438h] BYREF
  NTSTATUS v144; // [rsp+68h] [rbp-430h]
  PVOID P; // [rsp+70h] [rbp-428h]
  char v146; // [rsp+78h] [rbp-420h]
  unsigned int v147; // [rsp+7Ch] [rbp-41Ch] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp-418h] BYREF
  unsigned int v149; // [rsp+88h] [rbp-410h]
  PVOID v150; // [rsp+90h] [rbp-408h]
  KPRIORITY Priority; // [rsp+98h] [rbp-400h] BYREF
  int v152; // [rsp+A0h] [rbp-3F8h] BYREF
  __int64 v153; // [rsp+A8h] [rbp-3F0h] BYREF
  __int64 Buf1; // [rsp+B0h] [rbp-3E8h] BYREF
  LONG v155; // [rsp+BCh] [rbp-3DCh]
  PVOID v156[2]; // [rsp+150h] [rbp-348h] BYREF
  __int128 v157; // [rsp+160h] [rbp-338h] BYREF
  volatile void *Address; // [rsp+170h] [rbp-328h]
  __int128 v159; // [rsp+178h] [rbp-320h] BYREF
  unsigned int v160; // [rsp+188h] [rbp-310h]
  unsigned int v161; // [rsp+18Ch] [rbp-30Ch]
  unsigned int v162; // [rsp+190h] [rbp-308h]
  unsigned int v163; // [rsp+194h] [rbp-304h]
  unsigned int v164; // [rsp+198h] [rbp-300h]
  unsigned int v165; // [rsp+19Ch] [rbp-2FCh]
  unsigned int v166; // [rsp+1A0h] [rbp-2F8h]
  void *v167; // [rsp+1A8h] [rbp-2F0h]
  ULONG_PTR v168; // [rsp+1B0h] [rbp-2E8h]
  ULONG_PTR v169; // [rsp+1B8h] [rbp-2E0h]
  ULONG_PTR v170[10]; // [rsp+1C0h] [rbp-2D8h] BYREF
  __int128 Src; // [rsp+210h] [rbp-288h] BYREF
  int v172[4]; // [rsp+220h] [rbp-278h] BYREF
  __int128 v173; // [rsp+230h] [rbp-268h] BYREF
  __int64 v174; // [rsp+240h] [rbp-258h] BYREF
  _QWORD v175[33]; // [rsp+248h] [rbp-250h] BYREF
  _BYTE v176[256]; // [rsp+350h] [rbp-148h] BYREF

  v4 = ThreadInformationLength;
  BugCheckParameter1 = (ULONG_PTR)ThreadHandle;
  Thread = 0LL;
  v173 = 0LL;
  memset_0(&v174, 0, 0x108uLL);
  LOWORD(v147) = 0;
  Priority = 0;
  v149 = 0;
  v142 = 0;
  *(_QWORD *)&Src = 0LL;
  v153 = 0LL;
  v152 = 0;
  v157 = 0LL;
  Address = 0LL;
  v159 = 0LL;
  ProcNumber = 0;
  v156[0] = 0LL;
  Buf1 = 0LL;
  memset_0(v170, 0, 0x48uLL);
  Object = KeGetCurrentThread();
  v7 = *((_BYTE *)Object + 562);
  if ( !v7 )
    goto LABEL_20;
  if ( ThreadInformationClass > ThreadCounterProfiling )
  {
    if ( ThreadInformationClass != ThreadCpuAccountingInformation
      && ThreadInformationClass != (ThreadCpuAccountingInformation|ThreadAffinityMask)
      && ThreadInformationClass != (ThreadCounterProfiling|ThreadIsIoPending)
      && ThreadInformationClass != (ThreadCounterProfiling|ThreadPagePriority) )
    {
      goto LABEL_5;
    }
    goto LABEL_15;
  }
  if ( ThreadInformationClass == ThreadCounterProfiling )
    goto LABEL_10;
  if ( ThreadInformationClass != ThreadPriority )
  {
    if ( ThreadInformationClass != ThreadAffinityMask )
    {
      if ( ThreadInformationClass != ThreadEnableAlignmentFaultFixup )
      {
        if ( ThreadInformationClass != ThreadGroupInformation )
          goto LABEL_5;
        goto LABEL_15;
      }
LABEL_10:
      v8 = 1;
LABEL_16:
      v142 = v8;
      goto LABEL_17;
    }
LABEL_15:
    v8 = 8;
    goto LABEL_16;
  }
LABEL_5:
  v8 = 4;
  v142 = 4;
LABEL_17:
  ProbeForRead(ThreadInformation, v4, v8);
  if ( ThreadInformationClass == (ThreadActualGroupAffinity|ThreadIsIoPending)
    || ThreadInformationClass == (ThreadCounterProfiling|ThreadIsIoPending) )
  {
    ProbeForWrite(ThreadInformation, v4, v8);
  }
LABEL_20:
  if ( ThreadInformationClass <= ThreadGroupInformation )
  {
    if ( ThreadInformationClass != ThreadGroupInformation )
    {
      if ( ThreadInformationClass <= ThreadPriorityBoost )
      {
        if ( ThreadInformationClass == ThreadPriorityBoost )
        {
          if ( (_DWORD)v4 == 4 )
          {
            if ( v7 )
              ULongFromUser = RtlReadULongFromUser((unsigned int *)ThreadInformation);
            else
              ULongFromUser = *(_DWORD *)ThreadInformation;
            v164 = ULongFromUser;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       1024LL,
                       PsThreadType,
                       v7,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            v16 = result;
            if ( result >= 0 )
            {
              KeSetDisableBoostThread(Thread);
              goto LABEL_35;
            }
            return result;
          }
          return -1073741820;
        }
        v9 = ThreadInformationClass - 2;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( !v12 )
              {
                if ( (_DWORD)v4 == 8 )
                {
                  if ( v7 )
                    ULong64FromUser = (void *)RtlReadULong64FromUser(ThreadInformation);
                  else
                    ULong64FromUser = *(void **)ThreadInformation;
                  v167 = ULong64FromUser;
                  result = ObpReferenceObjectByHandleWithTag(
                             BugCheckParameter1,
                             128LL,
                             PsThreadType,
                             v7,
                             0x79517350u,
                             &Thread,
                             0LL,
                             0LL);
                  if ( result >= 0 )
                  {
                    v15 = PsAssignImpersonationToken(Thread, ULong64FromUser);
LABEL_34:
                    v16 = v15;
LABEL_35:
                    v17 = Thread;
LABEL_36:
                    ObfDereferenceObjectWithTag(v17, 0x79517350u);
                    return v16;
                  }
                  return result;
                }
                return -1073741820;
              }
              v18 = v12 - 2;
              if ( v18 )
              {
                v19 = v18 - 2;
                if ( !v19 )
                  return -1073741811;
                v42 = v19 - 1;
                if ( v42 )
                {
                  if ( v42 == 3 )
                  {
                    if ( (_DWORD)v4 != 4 )
                      return -1073741820;
                    if ( v7 )
                      v43 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
                    else
                      v43 = *(_DWORD *)ThreadInformation;
                    v147 = v43;
                    if ( v43 <= 0x40 )
                    {
                      result = ObpReferenceObjectByHandleWithTag(
                                 BugCheckParameter1,
                                 32LL,
                                 PsThreadType,
                                 v7,
                                 0x79517350u,
                                 &Thread,
                                 0LL,
                                 0LL);
                      if ( result >= 0 )
                      {
                        v16 = KeSetIdealProcessorThread(Thread, v43);
                        goto LABEL_35;
                      }
                      return result;
                    }
                    return -1073741811;
                  }
                  return -1073741821;
                }
                if ( (_DWORD)v4 != 4 )
                  return -1073741820;
                if ( v7 )
                  v44 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
                else
                  v44 = *(_DWORD *)ThreadInformation;
                v149 = v44;
                result = ObpReferenceObjectByHandleWithTag(
                           BugCheckParameter1,
                           32LL,
                           PsThreadType,
                           v7,
                           0x79517350u,
                           &Thread,
                           0LL,
                           0LL);
                v45 = result;
                if ( result < 0 )
                  return result;
                v46 = Thread;
                ObfDereferenceObjectWithTag(Thread, 0x79517350u);
                if ( v46 != Object )
                  return -1073741811;
                Process = (__int64)v46->Process;
                *(_QWORD *)&Src = Process;
                for ( i = 0LL; ; i = v52 )
                {
                  NextProcessThread = PsGetNextProcessThread(Process, i, v47, v48);
                  Thread = (PETHREAD)NextProcessThread;
                  v52 = (struct _EX_RUNDOWN_REF *)NextProcessThread;
                  if ( !NextProcessThread )
                    return v45;
                  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)NextProcessThread + 177) )
                    break;
LABEL_160:
                  ;
                }
                Count = v52[30].Count;
                if ( Count )
                {
                  v54 = 0LL;
                  v55 = *(_QWORD *)(Process + 784);
                  if ( v55 )
                  {
                    v56 = *(_WORD *)(Process + 1772);
                    if ( v56 == 332 || (v57 = v56 == 452, v58 = 0, v57) )
                      v58 = 1;
                    if ( v58 )
                      v54 = Count + 0x2000;
                  }
                  if ( v44 < 0x40 )
                  {
                    if ( !v55 )
                      goto LABEL_157;
                    v65 = *(_WORD *)(Process + 1772);
                    if ( v65 == 332 || (v57 = v65 == 452, v66 = 0, v57) )
                      v66 = 1;
                    if ( !v66 )
                    {
LABEL_157:
                      v64 = (_QWORD *)(Count + 8 * (v44 + 656LL));
                      goto LABEL_158;
                    }
                    if ( v54 )
                    {
                      v62 = (_DWORD *)(v54 + 4LL * v44 + 3600);
LABEL_156:
                      RtlWriteULongToUser(v62, 0);
                    }
                  }
                  else if ( v44 < 0x440 )
                  {
                    if ( v55 )
                    {
                      v59 = *(_WORD *)(Process + 1772);
                      if ( v59 == 332 || (v57 = v59 == 452, v60 = 0, v57) )
                        v60 = 1;
                      if ( v60 )
                      {
                        if ( !v54 )
                          goto LABEL_159;
                        v61 = RtlReadULongFromUser((unsigned int *)(v54 + 3988));
                        if ( !v61 )
                          goto LABEL_159;
                        v62 = (_DWORD *)(v61 + 4LL * (v44 - 64));
                        goto LABEL_156;
                      }
                    }
                    v63 = RtlReadULong64FromUser((volatile void *)(Count + 6016));
                    if ( v63 )
                    {
                      v64 = (_QWORD *)(v63 + 8LL * (v44 - 64));
LABEL_158:
                      RtlWriteULong64ToUser(v64, 0LL);
                    }
                  }
                }
LABEL_159:
                ExReleaseRundownProtection_0(v52 + 177);
                goto LABEL_160;
              }
              if ( (_DWORD)v4 != 1 )
                return -1073741820;
              if ( v7 )
                UCharFromUser = RtlReadUCharFromUser(ThreadInformation);
              else
                UCharFromUser = *(_BYTE *)ThreadInformation;
              v146 = UCharFromUser;
              result = ObpReferenceObjectByHandleWithTag(
                         BugCheckParameter1,
                         32LL,
                         PsThreadType,
                         v7,
                         0x79517350u,
                         &Thread,
                         0LL,
                         0LL);
              if ( result < 0 )
                return result;
              v68 = Thread;
              if ( UCharFromUser )
                _interlockedbittestandset((volatile signed __int32 *)&Thread->116 + 1, 2u);
              else
                _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 2u);
              goto LABEL_206;
            }
            if ( (_DWORD)v4 != 8 )
              return -1073741820;
            if ( v7 )
            {
              v69 = RtlReadULong64FromUser(ThreadInformation);
              *(_QWORD *)&v173 = v69;
            }
            else
            {
              RtlCopyVolatileMemory(&v173, ThreadInformation, 8uLL);
              v69 = v173;
            }
            if ( !v69 )
              return -1073741811;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       1024LL,
                       PsThreadType,
                       v7,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v41 = Thread;
            v70 = Thread->Process;
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v70[1].ProfileListHead.Blink) )
            {
              v16 = KiSetLegacyAffinityThread((__int64)v41, v173) == 0 ? 0xC000000D : 0;
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v70[1].ProfileListHead.Blink);
            }
            else
            {
              v16 = -1073741558;
            }
LABEL_95:
            v17 = v41;
            goto LABEL_36;
          }
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          if ( v7 )
            v71 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
          else
            v71 = *(_DWORD *)ThreadInformation;
          v155 = v71;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     1024LL,
                     PsThreadType,
                     v7,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v27 = result;
          if ( result < 0 )
            return result;
          v72 = Thread;
          v73 = Thread->Process;
          v74 = (unsigned int)(v71 + 16);
          if ( (unsigned int)v74 <= 0x20 && (v75 = 0x10007C001LL, _bittest64(&v75, v74))
            || *((_QWORD *)Object + 23) == *((_QWORD *)PsGetServerSiloGlobals(0LL) + 106)
            || HIBYTE(v73[1].KernelWaitTime) == 4 )
          {
            v76 = v73[1].Padding[3];
            if ( !v76 || (*(_DWORD *)(v76 + 1056) & 0x20) == 0 || HIBYTE(v73[1].KernelWaitTime) == 4 || v71 <= 0 )
              KeSetBasePriorityThread(v72, v71);
          }
          else
          {
            v27 = -1073741811;
          }
          v30 = v72;
          goto LABEL_61;
        }
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( v7 )
        {
          v77 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
          Priority = v77;
        }
        else
        {
          RtlCopyVolatileMemory(&Priority, ThreadInformation, 4uLL);
          v77 = Priority;
        }
        if ( (unsigned int)(v77 - 1) > 0x1E )
          return -1073741811;
        if ( v77 < 16
          || SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, BugCheckParameter1, 1024, v7) )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     1024LL,
                     PsThreadType,
                     v7,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          KeSetPriorityThread(Thread, Priority);
LABEL_204:
          v68 = Thread;
LABEL_206:
          v78 = 2035381072;
LABEL_207:
          ObfDereferenceObjectWithTag(v68, v78);
          return 0;
        }
        return -1073741727;
      }
      v32 = ThreadInformationClass - 15;
      if ( !v32 )
        return -1073741822;
      v33 = v32 - 2;
      if ( !v33 )
      {
        if ( !(_DWORD)v4 )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32LL,
                     PsThreadType,
                     v7,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v16 = result;
          if ( result >= 0 )
          {
            v17 = Thread;
            _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 4u);
            goto LABEL_36;
          }
          return result;
        }
        return -1073741820;
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( v7 )
          v92 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
        else
          v92 = *(_DWORD *)ThreadInformation;
        v166 = v92;
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v7) )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32LL,
                     PsThreadType,
                     v7,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v68 = Thread;
          if ( v92 )
            _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x20u);
          else
            _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFDF);
          goto LABEL_206;
        }
        return -1073741727;
      }
      v35 = v34 - 1;
      if ( !v35 )
      {
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   0xFFFFFFFFFFFFFFFEuLL,
                   32LL,
                   PsThreadType,
                   v7,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v68 = Thread;
        Thread->NpxState |= MEMORY[0xFFFFF780000003D8] | 3LL;
        goto LABEL_206;
      }
      v36 = v35 - 3;
      if ( !v36 )
      {
        if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( (_DWORD)v4 == 4 )
        {
          if ( v7 )
            v87 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
          else
            v87 = *(_DWORD *)ThreadInformation;
          v165 = v87;
          v88 = 0;
        }
        else
        {
          if ( v7 )
          {
            v89 = RtlReadULong64FromUser(ThreadInformation);
            v87 = v89;
            v153 = v89;
          }
          else
          {
            RtlCopyVolatileMemory(&v153, ThreadInformation, 8uLL);
            v87 = v153;
          }
          v88 = BYTE4(v153);
        }
        if ( v87 >= 4 )
          return -1073741811;
        if ( v87 < 3 || SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, BugCheckParameter1, 32, v7) )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32LL,
                     PsThreadType,
                     v7,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          if ( v88 == 1 && ((*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7) < (int)v87 )
            IoBoostThreadIoPriority((KSPIN_LOCK *)Thread, v87, 0);
          PsSetIoPriorityThread((LegacyAutoBoost *)Thread, v87, v90, v91);
          goto LABEL_204;
        }
        return -1073741727;
      }
      v37 = v36 - 2;
      if ( !v37 )
      {
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( v7 )
          v152 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
        else
          RtlCopyVolatileMemory(&v152, ThreadInformation, 4uLL);
        DefaultPagePriority = MmGetDefaultPagePriority();
        if ( v84 > DefaultPagePriority )
          return -1073741811;
        MinWsPagePriority = MmGetMinWsPagePriority();
        if ( v86 < MinWsPagePriority )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32LL,
                   PsThreadType,
                   v7,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        PsSetPagePriorityThread((__int64)Thread, v152);
        goto LABEL_204;
      }
      v38 = v37 - 1;
      if ( v38 )
      {
        if ( v38 == 4 )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     16LL,
                     PsThreadType,
                     v7,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v81 = Thread;
            p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
            if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
            {
              ObfDereferenceObjectWithTag(v81, 0x79517350u);
              return -1073741749;
            }
            v16 = PspWow64SetContextThread(v81);
            ExReleaseRundownProtection_0(p_WaitStatus);
            v17 = v81;
            goto LABEL_36;
          }
          return result;
        }
        return -1073741821;
      }
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      if ( v7 )
        v39 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
      else
        v39 = *(_DWORD *)ThreadInformation;
      v155 = v39;
      if ( (unsigned int)(v39 - 1) <= 0x1E )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024LL,
                   PsThreadType,
                   v7,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v16 = result;
        if ( result < 0 )
          return result;
        v41 = Thread;
        if ( v39 < 16
          || HIBYTE(Thread->Process[1].KernelWaitTime) == 4
          || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v7) )
        {
          KeSetActualBasePriorityThread((__int64)v41, (unsigned int)v39, v40);
        }
        else
        {
          v16 = -1073741727;
        }
        goto LABEL_95;
      }
      return -1073741811;
    }
    if ( (_DWORD)v4 != 16 )
      return -1073741820;
    if ( v7 )
      RtlCopyFromUser(&v173, ThreadInformation, 0x10uLL);
    else
      RtlCopyVolatileMemory(&v173, ThreadInformation, 0x10uLL);
    if ( !KeVerifyGroupAffinity((__int64)&v173, 1) )
      return -1073741811;
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               32LL,
               PsThreadType,
               v7,
               0x79517350u,
               &Thread,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v174 = 2097153LL;
    memset_0(v175, 0, 0x100uLL);
    if ( (unsigned __int16)v174 <= WORD4(v173) )
    {
      if ( WORD1(v174) <= WORD4(v173) )
      {
LABEL_270:
        v93 = 0;
        v94 = Thread;
        v95 = Thread->Process;
        v96 = Object;
        PspLockProcessShared((__int64)v95, (__int64)Object);
        v99 = v95[1].Padding[3];
        if ( v99 )
        {
          ExInitializeFastOwnerEntry((__int64)v170);
          ExAcquireFastResourceShared((__int64 *)(v99 + 56), (ULONG_PTR)v170, 1);
          v93 = PspCheckForJobAffinityViolation(v99, &v174);
        }
        if ( v93 >= 0 )
        {
          KeSetUserAffinityThread((__int64)v94, (unsigned __int16 *)&v174);
          KeQueryPrimaryGroupProcess((__int64)v95, &v147);
          for ( j = 0; j < (unsigned __int16)v174; ++j )
          {
            if ( v175[j] )
            {
              if ( (_WORD)v147 != WORD4(v173) )
                _interlockedbittestandset((volatile signed __int32 *)&v95->136, 0xCu);
              break;
            }
          }
        }
        if ( v99 )
          ExReleaseFastResourceShared(v99 + 56, (ULONG_PTR)v170, v97, v98);
        PspUnlockProcessShared((__int64)v95, (__int64)v96);
        ObfDereferenceObjectWithTag(v94, 0x79517350u);
        return v93;
      }
      LOWORD(v174) = WORD4(v173) + 1;
    }
    v175[WORD4(v173)] |= v173;
    goto LABEL_270;
  }
  if ( ThreadInformationClass > (ThreadCounterProfiling|ThreadAmILastThread) )
  {
    v20 = ThreadInformationClass - 46;
    if ( !v20 )
    {
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      if ( v7 )
        v137 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
      else
        v137 = *(_DWORD *)ThreadInformation;
      v163 = v137;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 32LL,
                 PsThreadType,
                 v7,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      v27 = result;
      if ( result < 0 )
        return result;
      v30 = Thread;
      if ( v137 )
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFDFFFFF);
      goto LABEL_61;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      if ( BugCheckParameter1 != -2LL )
        return -1073741811;
      if ( (_DWORD)v4 != 8 )
        return -1073741820;
      if ( v7 )
        v128 = RtlReadULong64FromUser(ThreadInformation);
      else
        v128 = *(_QWORD *)ThreadInformation;
      v169 = v128;
      CurrentThread = KeGetCurrentThread();
      Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
      if ( v128 )
      {
        if ( Blink != (struct _LIST_ENTRY *)-3LL )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(v128, 32LL, PsJobType, v7, 0x6D497350u, &Src, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v131 = (struct _LIST_ENTRY *)Src;
        if ( (*(_DWORD *)(Src + 1556) & 2) != 0 )
        {
          v133 = IoThreadToProcess(CurrentThread);
          PsGetProcessSilo((__int64)v133);
          IsSiloInSilo = PspIsSiloInSilo(v131);
          v132 = v131;
          if ( IsSiloInSilo )
          {
            EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v131);
            ProcessServerSilo = PsGetProcessServerSilo((__int64)v133);
            v132 = v131;
            if ( ProcessServerSilo == EffectiveServerSilo )
            {
              PsAttachSiloToCurrentThread(v131);
              return 0;
            }
          }
        }
        else
        {
          v132 = (struct _LIST_ENTRY *)Src;
        }
        ObfDereferenceObjectWithTag(v132, 0x6D497350u);
        return -1073741811;
      }
      if ( Blink == (struct _LIST_ENTRY *)-3LL )
        return -1073741811;
      v79 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
      v78 = 1833530192;
      v68 = (PETHREAD)v79;
      goto LABEL_207;
    }
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( !v23 )
      {
        *(_QWORD *)&Src = 0LL;
        DWORD2(Src) = 0;
        if ( (_DWORD)v4 != 12 )
          return -1073741820;
        if ( v7 )
          RtlCopyFromUser(&Src, ThreadInformation, 0xCuLL);
        else
          RtlCopyVolatileMemory(&Src, ThreadInformation, 0xCuLL);
        if ( (_DWORD)Src != 1 || (DWORD1(Src) & 0xFFFFFFFE) != 0 || (~DWORD1(Src) & DWORD2(Src)) != 0 )
          return -1073741811;
        if ( (BYTE4(Src) & 1) != 0 )
          v127 = (BYTE8(Src) & 1) != 0 ? 8 : 3;
        else
          v127 = 0;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32LL,
                   PsThreadType,
                   v7,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        PspSetThreadPpmPolicy(Thread, v127);
        goto LABEL_204;
      }
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 3;
        if ( v25 )
        {
          v26 = v25 - 3;
          if ( !v26 )
          {
            if ( (_DWORD)v4 != 16 )
              return -1073741820;
            if ( v7 )
              RtlCopyFromUser(&v159, ThreadInformation, 0x10uLL);
            else
              RtlCopyVolatileMemory(&v159, ThreadInformation, 0x10uLL);
            if ( DWORD2(v159) )
            {
              v27 = -1073741811;
            }
            else
            {
              v27 = ObpReferenceObjectByHandleWithTag(
                      BugCheckParameter1,
                      32LL,
                      PsThreadType,
                      v7,
                      0x79517350u,
                      &Thread,
                      0LL,
                      0LL);
              if ( v27 >= 0 )
              {
                if ( Thread == KeGetCurrentThread() )
                  KeAbUserModeEntryFree((AutoBoost *)Thread, (struct _KTHREAD *)v159, v28, v29);
                else
                  v27 = -1073741637;
              }
            }
            if ( !Thread )
              return v27;
            v30 = Thread;
LABEL_61:
            ObfDereferenceObjectWithTag(v30, 0x79517350u);
            return v27;
          }
          if ( v26 != 1 )
            return -1073741821;
          Src = 0LL;
          v172[0] = 0;
          if ( (_DWORD)v4 != 24 )
            return -1073741820;
          Object = 0LL;
          if ( v7 )
            RtlCopyFromUser(&Src, ThreadInformation, 0x18uLL);
          else
            RtlCopyVolatileMemory(&Src, ThreadInformation, 0x18uLL);
          v27 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  32LL,
                  PsThreadType,
                  v7,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          if ( v27 < 0 )
          {
LABEL_76:
            if ( Object )
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v30 = Thread;
            if ( !Thread )
              return v27;
            goto LABEL_61;
          }
          if ( (_DWORD)Src )
          {
            if ( (_DWORD)Src != 1 )
            {
              v27 = -1073741637;
LABEL_73:
              if ( v7 )
                RtlCopyToUser(ThreadInformation, &Src, 0x18uLL);
              else
                RtlCopyVolatileMemory(ThreadInformation, &Src, 0x18uLL);
              goto LABEL_76;
            }
            v31 = PspSchedulerSharedDataRegionSlotFree(Thread);
          }
          else
          {
            v27 = ObpReferenceObjectByHandleWithTag(
                    *((ULONG_PTR *)&Src + 1),
                    1LL,
                    (POBJECT_TYPE *)PspSchedulerSharedDataType,
                    v7,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            if ( v27 < 0 )
              goto LABEL_76;
            v31 = PspSchedulerSharedDataRegionSlotAllocate(Thread, Object, v172);
          }
          v27 = v31;
          goto LABEL_73;
        }
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( BugCheckParameter1 == -2LL )
        {
          if ( v7 )
            v126 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
          else
            v126 = *(_DWORD *)ThreadInformation;
          v162 = v126;
          if ( v126 > 1 )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     0xFFFFFFFFFFFFFFFEuLL,
                     32LL,
                     PsThreadType,
                     v7,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v68 = Thread;
          *((_DWORD *)&Thread[1].SwapListEntry + 3) ^= ((unsigned __int16)*((_DWORD *)&Thread[1].SwapListEntry + 3) ^ (unsigned __int16)((_WORD)v126 << 11)) & 0x800;
          goto LABEL_206;
        }
        return -1073741790;
      }
      if ( BugCheckParameter1 != -2LL || v7 )
        return -1073741790;
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      if ( *(_DWORD *)ThreadInformation >= 2u )
        return -1073741811;
      KeSetCpuSetWorkloadClassThread((__int64)KeGetCurrentThread(), *(_DWORD *)ThreadInformation);
      return 0;
    }
    return -1073741637;
  }
  if ( ThreadInformationClass == (ThreadCounterProfiling|ThreadAmILastThread) )
  {
    *(_QWORD *)&Src = 0LL;
    if ( BugCheckParameter1 == -2LL )
    {
      if ( (_DWORD)v4 == 8 )
      {
        if ( v7 )
          Buf1 = RtlReadULong64FromUser(ThreadInformation);
        else
          RtlCopyVolatileMemory(&Buf1, ThreadInformation, 8uLL);
        result = ObpReferenceObjectByHandleWithTag(
                   0xFFFFFFFFFFFFFFFEuLL,
                   1024LL,
                   PsThreadType,
                   v7,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v16 = result;
        if ( result >= 0 )
        {
          Object = 0LL;
          if ( !memcmp(&Buf1, &Src, 8uLL) || (v16 = PspThreadFromTicket(&Buf1, &Object), v16 >= 0) )
            PspUpdateContainerImpersonation((ULONG_PTR)Thread, Object);
          if ( Object )
            ObfDereferenceObject(Object);
          goto LABEL_35;
        }
        return result;
      }
      return -1073741820;
    }
    return -1073741811;
  }
  v101 = ThreadInformationClass - 32;
  if ( !v101 )
  {
    if ( (_DWORD)v4 != 24 )
      return -1073741820;
    if ( v7 )
      RtlCopyFromUser(&v157, ThreadInformation, 0x18uLL);
    else
      RtlCopyVolatileMemory(&v157, ThreadInformation, 0x18uLL);
    ProbeForWrite(Address, 0x1C0uLL, 4u);
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               32LL,
               PsThreadType,
               v7,
               0x79517350u,
               &Thread,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v124 = Thread;
    if ( Thread == KeGetCurrentThread() )
    {
      if ( HIDWORD(v157) )
        v125 = KeEnableProfiling(Thread, DWORD2(v157), v157, Address);
      else
        v125 = KeDisableProfiling((__int64)Thread, (__int64)Address);
      v27 = v125;
    }
    else
    {
      v27 = -1073741637;
    }
LABEL_380:
    v30 = v124;
    goto LABEL_61;
  }
  v102 = v101 - 1;
  if ( !v102 )
  {
    if ( (_DWORD)v4 != 4 )
      return -1073741820;
    if ( v7 )
      ProcNumber = (struct _PROCESSOR_NUMBER)RtlReadULongFromUser((unsigned int *)ThreadInformation);
    else
      RtlCopyVolatileMemory(&ProcNumber, ThreadInformation, 4uLL);
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               32LL,
               PsThreadType,
               v7,
               0x79517350u,
               &Thread,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v124 = Thread;
    v27 = KeSetIdealProcessorThreadByNumber(Thread, &ProcNumber, &ProcNumber);
    if ( v27 >= 0 )
    {
      if ( v7 )
        RtlWriteULongToUser(ThreadInformation, *(_DWORD *)&ProcNumber);
      else
        RtlCopyVolatileMemory(ThreadInformation, &ProcNumber, 4uLL);
    }
    goto LABEL_380;
  }
  v103 = v102 - 1;
  if ( !v103 )
  {
    if ( BugCheckParameter1 != -2LL )
      return -1073741811;
    if ( (_DWORD)v4 != 8 )
      return -1073741820;
    if ( v7 )
      v121 = RtlReadULong64FromUser(ThreadInformation);
    else
      v121 = *(_QWORD *)ThreadInformation;
    v168 = v121;
    if ( v121 )
    {
      result = ObpReferenceObjectByHandleWithTag(
                 v121,
                 2LL,
                 (POBJECT_TYPE *)MmSessionObjectType,
                 v7,
                 0x79517350u,
                 v156,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v122 = v156[0];
      v123 = *((_QWORD *)v156[0] + 4);
      if ( !v123 )
      {
        ObfDereferenceObjectWithTag(v156[0], 0x79517350u);
        return -1073740715;
      }
      if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)Object, v123) )
      {
        ObfDereferenceObjectWithTag(v122, 0x79517350u);
        return -1073740714;
      }
      *((_QWORD *)Object + 173) = v122;
    }
    else
    {
      if ( !*((_QWORD *)Object + 173) )
        return -1073740713;
      KeSetThreadChargeOnlySchedulingGroup((__int64)Object, 0LL);
      ObfDereferenceObject(*((PVOID *)Object + 173));
      *((_QWORD *)Object + 173) = 0LL;
    }
    return 0;
  }
  v104 = v103 - 2;
  if ( !v104 )
    return -1073741637;
  v105 = v104 - 2;
  if ( !v105 )
  {
    v141 = 0;
    v150 = 0LL;
    P = 0LL;
    v140 = 0;
    if ( (_DWORD)v4 == 16 )
    {
      v27 = ObpReferenceObjectByHandleWithTag(
              BugCheckParameter1,
              1024LL,
              PsThreadType,
              v7,
              0x79517350u,
              &Thread,
              0LL,
              0LL);
      v144 = v27;
      if ( v27 < 0 )
      {
LABEL_337:
        v120 = P;
        v118 = Object;
LABEL_338:
        if ( v140 )
          PspUnlockThreadSecurityExclusive((__int64)Thread, (__int64)v118);
        if ( v141 )
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        if ( v120 )
          ExFreePoolWithTag(v120, 0x6D4E6854u);
        return v27;
      }
      v141 = 1;
      if ( v7 )
      {
        *(_OWORD *)v156 = 0LL;
        v110 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
        v111 = v110;
        LODWORD(v156[0]) = v110;
        v156[1] = (PVOID)RtlReadULong64FromUser((char *)ThreadInformation + 8);
        Src = *(_OWORD *)v156;
        ProbeForRead(v156[1], v111, 2u);
      }
      else
      {
        Src = *(_OWORD *)ThreadInformation;
      }
      v112 = Src;
      if ( (Src & 1) != 0 || (unsigned __int16)Src > WORD1(Src) )
      {
        v27 = -1073741811;
      }
      else
      {
        Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
        v114 = Pool2;
        v150 = Pool2;
        if ( Pool2 )
        {
          v115 = Pool2 + 8;
          *((_QWORD *)Pool2 + 1) = Pool2 + 8;
          *Pool2 = v112;
          Pool2[1] = v112;
          if ( v7 )
            RtlCopyFromUser(v115, *((void **)&Src + 1), v112);
          else
            RtlCopyVolatileMemory(v115, *((const void **)&Src + 1), v112);
          v118 = Object;
          v119 = Thread;
          PspLockThreadSecurityExclusive((__int64)Thread, (__int64)Object, v116, v117);
          v140 = 1;
          v120 = *(PVOID *)&v119[1].WaitBlockFill11[160];
          P = v120;
          *(_QWORD *)&v119[1].WaitBlockFill11[160] = v114;
          v150 = 0LL;
          EtwTraceThreadSetName(v119);
          goto LABEL_338;
        }
        v27 = -1073741670;
      }
    }
    else
    {
      v27 = -1073741820;
    }
    v144 = v27;
    goto LABEL_337;
  }
  v106 = v105 - 1;
  if ( v106 )
  {
    v107 = v106 - 3;
    if ( v107 )
    {
      if ( v107 != 1 )
        return -1073741821;
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      if ( v7 )
        v108 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
      else
        v108 = *(_DWORD *)ThreadInformation;
      v160 = v108;
      if ( !v7 )
        goto LABEL_300;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v7) )
        return -1073741727;
      if ( RtlTestProtectedAccess(*(_BYTE *)(*((_QWORD *)Object + 68) + 1530LL), 0x51u) )
      {
LABEL_300:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32LL,
                   PsThreadType,
                   v7,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v16 = result;
        if ( result >= 0 )
        {
          v17 = Thread;
          if ( v108 )
            _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x80000u);
          else
            _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFF7FFFF);
          goto LABEL_36;
        }
        return result;
      }
      return -1073741790;
    }
    if ( BugCheckParameter1 != -2LL )
      return -1073741811;
    if ( (_DWORD)v4 != 4 )
      return -1073741820;
    if ( v7 )
      v109 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
    else
      v109 = *(_DWORD *)ThreadInformation;
    v161 = v109;
    if ( v109 == 1 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)Object + 68) + 1872LL) & 0x200) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)Object + 360, 0x40000u);
        return 0;
      }
      return -1073741790;
    }
    if ( v109 )
      return -1073741811;
    _InterlockedAnd((volatile signed __int32 *)Object + 360, 0xFFFBFFFF);
    return 0;
  }
  if ( (v4 & 7) != 0 || (unsigned int)v4 > 0x100 )
    return -1073741820;
  if ( v7 )
    RtlCopyFromUser(v176, ThreadInformation, v4);
  else
    RtlCopyVolatileMemory(v176, ThreadInformation, v4);
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             1024LL,
             PsThreadType,
             v7,
             0x79517350u,
             &Thread,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v15 = KeSetSelectedCpuSetsThread((__int64)Thread, (unsigned int)v4 >> 3, (__int64)v176);
    goto LABEL_34;
  }
  return result;
}
