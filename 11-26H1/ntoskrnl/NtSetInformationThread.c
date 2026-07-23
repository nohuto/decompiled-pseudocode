/*
 * XREFs of NtSetInformationThread @ 0x14094C4F0
 * Callers:
 *     DifNtSetInformationThreadWrapper @ 0x140690350 (DifNtSetInformationThreadWrapper.c)
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 * Callees:
 *     KeSetIdealProcessorThreadByNumber @ 0x140202C34 (KeSetIdealProcessorThreadByNumber.c)
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeSetIdealProcessorThread @ 0x140204860 (KeSetIdealProcessorThread.c)
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     PsGetEffectiveServerSilo @ 0x140216B30 (PsGetEffectiveServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402398D4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     PsSetIoPriorityThread @ 0x140239BF4 (PsSetIoPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KiSetLegacyAffinityThread @ 0x14025BD0C (KiSetLegacyAffinityThread.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbUserModeEntryFree @ 0x14026F9C0 (KeAbUserModeEntryFree.c)
 *     PspLockProcessShared @ 0x140275C70 (PspLockProcessShared.c)
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 *     PspLockThreadSecurityExclusive @ 0x14027E0B0 (PspLockThreadSecurityExclusive.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PspUnlockThreadSecurityExclusive @ 0x140319080 (PspUnlockThreadSecurityExclusive.c)
 *     PspUpdateContainerImpersonation @ 0x14037FEA0 (PspUpdateContainerImpersonation.c)
 *     PsSetPagePriorityThread @ 0x140384E10 (PsSetPagePriorityThread.c)
 *     KeSetUserAffinityThread @ 0x1403F0B04 (KeSetUserAffinityThread.c)
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     PsGetProcessSilo @ 0x140430030 (PsGetProcessSilo.c)
 *     KeSetSelectedCpuSetsThread @ 0x14045BD60 (KeSetSelectedCpuSetsThread.c)
 *     KeQueryPrimaryGroupProcess @ 0x14045BF08 (KeQueryPrimaryGroupProcess.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     KeVerifyGroupAffinity @ 0x14047D244 (KeVerifyGroupAffinity.c)
 *     ExReleaseFastResourceShared @ 0x14047F770 (ExReleaseFastResourceShared.c)
 *     KeSetDisableBoostThread @ 0x14049D82C (KeSetDisableBoostThread.c)
 *     MmGetMinWsPagePriority @ 0x1404AACF0 (MmGetMinWsPagePriority.c)
 *     MmGetDefaultPagePriority @ 0x1404AFDB0 (MmGetDefaultPagePriority.c)
 *     KeDisableProfiling @ 0x14050E830 (KeDisableProfiling.c)
 *     KeSetBasePriorityThread @ 0x14052B1A0 (KeSetBasePriorityThread.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     KeSetCpuSetWorkloadClassThread @ 0x1405F6878 (KeSetCpuSetWorkloadClassThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     PsAssignImpersonationToken @ 0x140904250 (PsAssignImpersonationToken.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 *     PspSchedulerSharedDataRegionSlotFree @ 0x14094C09C (PspSchedulerSharedDataRegionSlotFree.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x14094CB6C (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     PspThreadFromTicket @ 0x140A227F0 (PspThreadFromTicket.c)
 *     SeCheckPrivilegedObject @ 0x140A8287C (SeCheckPrivilegedObject.c)
 *     RtlTestProtectedAccess @ 0x140A85B14 (RtlTestProtectedAccess.c)
 *     EtwTraceThreadSetName @ 0x140A91244 (EtwTraceThreadSetName.c)
 *     PspSetThreadPpmPolicy @ 0x140AB8480 (PspSetThreadPpmPolicy.c)
 *     PspIsSiloInSilo @ 0x140AF43F4 (PspIsSiloInSilo.c)
 *     PspCheckForJobAffinityViolation @ 0x140AF6A18 (PspCheckForJobAffinityViolation.c)
 *     KeEnableProfiling @ 0x140B5D7D0 (KeEnableProfiling.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  SIZE_T v4; // rsi
  __int64 v7; // r9
  char v8; // r15
  ULONG v9; // r13d
  __int32 v10; // ebx
  __int32 v11; // ebx
  __int32 v12; // ebx
  __int32 v13; // ebx
  void *ULong64FromUser; // rsi
  NTSTATUS result; // eax
  signed int v16; // eax
  signed int v17; // ebx
  PETHREAD v18; // rcx
  int v19; // ebx
  int v20; // ebx
  __int32 v21; // ebx
  __int32 v22; // ebx
  __int32 v23; // ebx
  __int32 v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  NTSTATUS v28; // esi
  void *v29; // r8
  unsigned int v30; // r9d
  PETHREAD v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  struct _KLOCK_ENTRIES *v34; // r9
  NTSTATUS v35; // eax
  __int32 v36; // ebx
  __int32 v37; // ebx
  __int32 v38; // ebx
  __int32 v39; // ebx
  int v40; // ebx
  int v41; // ebx
  int v42; // ebx
  int v43; // esi
  __int64 v44; // r8
  PETHREAD v45; // r14
  int v46; // ebx
  unsigned int v47; // r14d
  unsigned int v48; // r14d
  NTSTATUS v49; // r12d
  PETHREAD v50; // rsi
  __int64 v51; // r8
  struct _KLOCK_ENTRIES *v52; // r9
  __int64 Process; // rsi
  struct _EX_RUNDOWN_REF *i; // rdx
  _QWORD *NextProcessThread; // rcx
  struct _EX_RUNDOWN_REF *v56; // rbx
  unsigned __int64 Count; // rdx
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int16 v60; // r8
  bool v61; // zf
  char v62; // r8
  __int16 v63; // ax
  char v64; // al
  unsigned int v65; // eax
  _DWORD *v66; // rcx
  __int64 v67; // rax
  _QWORD *v68; // rcx
  __int16 v69; // ax
  char v70; // al
  char UCharFromUser; // r14
  PETHREAD v72; // rcx
  __int64 v73; // rax
  _KPROCESS *v74; // r15
  LONG v75; // r14d
  struct _KTHREAD *v76; // r15
  _KPROCESS *v77; // rdx
  unsigned __int64 v78; // rax
  __int64 v79; // rcx
  unsigned __int64 v80; // rax
  KPRIORITY v81; // ecx
  __int64 v82; // r9
  ULONG v83; // edx
  struct _LIST_ENTRY *v84; // rax
  unsigned int ULongFromUser; // esi
  PETHREAD v86; // r13
  struct _EX_RUNDOWN_REF *p_WaitStatus; // r12
  unsigned int DefaultPagePriority; // eax
  unsigned int v89; // ecx
  unsigned int MinWsPagePriority; // eax
  unsigned int v91; // ecx
  unsigned int v92; // ebx
  char v93; // r14
  __int64 v94; // rax
  __int64 v95; // r8
  struct _SINGLE_LIST_ENTRY *v96; // r9
  unsigned int v97; // ebx
  NTSTATUS v98; // r15d
  PETHREAD v99; // r12
  _KPROCESS *v100; // rsi
  PVOID v101; // rbx
  __int64 v102; // r8
  __int64 v103; // r9
  unsigned __int64 v104; // r14
  unsigned __int16 j; // cx
  __int32 v106; // ebx
  __int32 v107; // ebx
  __int32 v108; // ebx
  __int32 v109; // ebx
  int v110; // ebx
  int v111; // ebx
  int v112; // ebx
  unsigned int v113; // r14d
  unsigned int v114; // eax
  int v115; // eax
  unsigned __int16 v116; // bx
  unsigned __int16 v117; // bx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v119; // r12
  void *v120; // rcx
  __int64 v121; // r8
  struct _KLOCK_ENTRIES *v122; // r9
  PVOID v123; // rbx
  PETHREAD v124; // r14
  PVOID v125; // r15
  ULONG_PTR v126; // rax
  PVOID v127; // rsi
  __int64 v128; // rdx
  PETHREAD v129; // rbx
  NTSTATUS v130; // eax
  unsigned int v131; // ebx
  unsigned int v132; // ebx
  ULONG_PTR v133; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v136; // rsi
  struct _LIST_ENTRY *v137; // rcx
  PEPROCESS v138; // r15
  char IsSiloInSilo; // al
  __int64 EffectiveServerSilo; // rbx
  __int64 ProcessServerSilo; // rax
  unsigned int v142; // ebx
  PETHREAD Thread; // [rsp+48h] [rbp-450h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-448h]
  char v145; // [rsp+58h] [rbp-440h]
  char v146; // [rsp+59h] [rbp-43Fh]
  int v147; // [rsp+5Ch] [rbp-43Ch]
  PVOID Object; // [rsp+60h] [rbp-438h] BYREF
  NTSTATUS v149; // [rsp+68h] [rbp-430h]
  PVOID P; // [rsp+70h] [rbp-428h]
  char v151; // [rsp+78h] [rbp-420h]
  unsigned int v152; // [rsp+7Ch] [rbp-41Ch] BYREF
  unsigned int v153; // [rsp+80h] [rbp-418h] BYREF
  unsigned int v154; // [rsp+88h] [rbp-410h]
  PVOID v155; // [rsp+90h] [rbp-408h]
  KPRIORITY Priority; // [rsp+98h] [rbp-400h] BYREF
  int v157; // [rsp+A0h] [rbp-3F8h] BYREF
  __int64 v158; // [rsp+A8h] [rbp-3F0h] BYREF
  __int64 Buf1; // [rsp+B0h] [rbp-3E8h] BYREF
  LONG v160; // [rsp+BCh] [rbp-3DCh]
  PVOID v161[2]; // [rsp+150h] [rbp-348h] BYREF
  __int128 v162; // [rsp+160h] [rbp-338h] BYREF
  volatile void *Address; // [rsp+170h] [rbp-328h]
  __int128 v164; // [rsp+178h] [rbp-320h] BYREF
  unsigned int v165; // [rsp+188h] [rbp-310h]
  unsigned int v166; // [rsp+18Ch] [rbp-30Ch]
  unsigned int v167; // [rsp+190h] [rbp-308h]
  unsigned int v168; // [rsp+194h] [rbp-304h]
  unsigned int v169; // [rsp+198h] [rbp-300h]
  unsigned int v170; // [rsp+19Ch] [rbp-2FCh]
  unsigned int v171; // [rsp+1A0h] [rbp-2F8h]
  void *v172; // [rsp+1A8h] [rbp-2F0h]
  ULONG_PTR v173; // [rsp+1B0h] [rbp-2E8h]
  ULONG_PTR v174; // [rsp+1B8h] [rbp-2E0h]
  ULONG_PTR v175[10]; // [rsp+1C0h] [rbp-2D8h] BYREF
  __int128 Src; // [rsp+210h] [rbp-288h] BYREF
  int v177[4]; // [rsp+220h] [rbp-278h] BYREF
  __int128 v178; // [rsp+230h] [rbp-268h] BYREF
  __int64 v179; // [rsp+240h] [rbp-258h] BYREF
  _QWORD v180[33]; // [rsp+248h] [rbp-250h] BYREF
  _BYTE v181[256]; // [rsp+350h] [rbp-148h] BYREF

  v4 = ThreadInformationLength;
  BugCheckParameter1 = (ULONG_PTR)ThreadHandle;
  Thread = 0LL;
  v178 = 0LL;
  memset_0(&v179, 0, 0x108uLL);
  LOWORD(v152) = 0;
  Priority = 0;
  v154 = 0;
  v147 = 0;
  *(_QWORD *)&Src = 0LL;
  v158 = 0LL;
  v157 = 0;
  v162 = 0LL;
  Address = 0LL;
  v164 = 0LL;
  v153 = 0;
  v161[0] = 0LL;
  Buf1 = 0LL;
  memset_0(v175, 0, 0x48uLL);
  Object = KeGetCurrentThread();
  v8 = *((_BYTE *)Object + 562);
  if ( !v8 )
    goto LABEL_20;
  if ( ThreadInformationClass > ThreadCounterProfiling )
  {
    if ( ThreadInformationClass != ThreadCpuAccountingInformation
      && ThreadInformationClass != ThreadNameInformation
      && ThreadInformationClass != ThreadManageWritesToExecutableMemory
      && ThreadInformationClass != ThreadUpdateLockOwnership )
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
      v9 = 1;
LABEL_16:
      v147 = v9;
      goto LABEL_17;
    }
LABEL_15:
    v9 = 8;
    goto LABEL_16;
  }
LABEL_5:
  v9 = 4;
  v147 = 4;
LABEL_17:
  ProbeForRead(ThreadInformation, v4, v9);
  if ( ThreadInformationClass == ThreadSchedulerSharedDataSlot
    || ThreadInformationClass == ThreadManageWritesToExecutableMemory )
  {
    ProbeForWrite(ThreadInformation, v4, v9);
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
            if ( v8 )
              ULongFromUser = RtlReadULongFromUser((unsigned int *)ThreadInformation);
            else
              ULongFromUser = *(_DWORD *)ThreadInformation;
            v169 = ULongFromUser;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       1024,
                       (__int64)PsThreadType,
                       v8,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            v17 = result;
            if ( result >= 0 )
            {
              KeSetDisableBoostThread(Thread);
              goto LABEL_35;
            }
            return result;
          }
          return -1073741820;
        }
        v10 = ThreadInformationClass - 2;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( !v13 )
              {
                if ( (_DWORD)v4 == 8 )
                {
                  if ( v8 )
                    ULong64FromUser = (void *)RtlReadULong64FromUser(ThreadInformation);
                  else
                    ULong64FromUser = *(void **)ThreadInformation;
                  v172 = ULong64FromUser;
                  result = ObpReferenceObjectByHandleWithTag(
                             BugCheckParameter1,
                             128,
                             (__int64)PsThreadType,
                             v8,
                             0x79517350u,
                             &Thread,
                             0LL,
                             0LL);
                  if ( result >= 0 )
                  {
                    v16 = PsAssignImpersonationToken(Thread, ULong64FromUser);
LABEL_34:
                    v17 = v16;
LABEL_35:
                    v18 = Thread;
LABEL_36:
                    ObfDereferenceObjectWithTag(v18, 0x79517350u);
                    return v17;
                  }
                  return result;
                }
                return -1073741820;
              }
              v19 = v13 - 2;
              if ( v19 )
              {
                v20 = v19 - 2;
                if ( !v20 )
                  return -1073741811;
                v46 = v20 - 1;
                if ( v46 )
                {
                  if ( v46 == 3 )
                  {
                    if ( (_DWORD)v4 != 4 )
                      return -1073741820;
                    if ( v8 )
                      v47 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
                    else
                      v47 = *(_DWORD *)ThreadInformation;
                    v152 = v47;
                    if ( v47 <= 0x40 )
                    {
                      result = ObpReferenceObjectByHandleWithTag(
                                 BugCheckParameter1,
                                 32,
                                 (__int64)PsThreadType,
                                 v8,
                                 0x79517350u,
                                 &Thread,
                                 0LL,
                                 0LL);
                      if ( result >= 0 )
                      {
                        v17 = KeSetIdealProcessorThread(Thread, v47);
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
                if ( v8 )
                  v48 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
                else
                  v48 = *(_DWORD *)ThreadInformation;
                v154 = v48;
                result = ObpReferenceObjectByHandleWithTag(
                           BugCheckParameter1,
                           32,
                           (__int64)PsThreadType,
                           v8,
                           0x79517350u,
                           &Thread,
                           0LL,
                           0LL);
                v49 = result;
                if ( result < 0 )
                  return result;
                v50 = Thread;
                ObfDereferenceObjectWithTag(Thread, 0x79517350u);
                if ( v50 != Object )
                  return -1073741811;
                Process = (__int64)v50->Process;
                *(_QWORD *)&Src = Process;
                for ( i = 0LL; ; i = v56 )
                {
                  NextProcessThread = PsGetNextProcessThread(Process, i, v51, v52);
                  Thread = (PETHREAD)NextProcessThread;
                  v56 = (struct _EX_RUNDOWN_REF *)NextProcessThread;
                  if ( !NextProcessThread )
                    return v49;
                  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)NextProcessThread + 177) )
                    break;
LABEL_160:
                  ;
                }
                Count = v56[30].Count;
                if ( Count )
                {
                  v58 = 0LL;
                  v59 = *(_QWORD *)(Process + 784);
                  if ( v59 )
                  {
                    v60 = *(_WORD *)(Process + 1772);
                    if ( v60 == 332 || (v61 = v60 == 452, v62 = 0, v61) )
                      v62 = 1;
                    if ( v62 )
                      v58 = Count + 0x2000;
                  }
                  if ( v48 < 0x40 )
                  {
                    if ( !v59 )
                      goto LABEL_157;
                    v69 = *(_WORD *)(Process + 1772);
                    if ( v69 == 332 || (v61 = v69 == 452, v70 = 0, v61) )
                      v70 = 1;
                    if ( !v70 )
                    {
LABEL_157:
                      v68 = (_QWORD *)(Count + 8 * (v48 + 656LL));
                      goto LABEL_158;
                    }
                    if ( v58 )
                    {
                      v66 = (_DWORD *)(v58 + 4LL * v48 + 3600);
LABEL_156:
                      RtlWriteULongToUser(v66, 0);
                    }
                  }
                  else if ( v48 < 0x440 )
                  {
                    if ( v59 )
                    {
                      v63 = *(_WORD *)(Process + 1772);
                      if ( v63 == 332 || (v61 = v63 == 452, v64 = 0, v61) )
                        v64 = 1;
                      if ( v64 )
                      {
                        if ( !v58 )
                          goto LABEL_159;
                        v65 = RtlReadULongFromUser((unsigned int *)(v58 + 3988));
                        if ( !v65 )
                          goto LABEL_159;
                        v66 = (_DWORD *)(v65 + 4LL * (v48 - 64));
                        goto LABEL_156;
                      }
                    }
                    v67 = RtlReadULong64FromUser((volatile void *)(Count + 6016));
                    if ( v67 )
                    {
                      v68 = (_QWORD *)(v67 + 8LL * (v48 - 64));
LABEL_158:
                      RtlWriteULong64ToUser(v68, 0LL);
                    }
                  }
                }
LABEL_159:
                ExReleaseRundownProtection_0(v56 + 177);
                goto LABEL_160;
              }
              if ( (_DWORD)v4 != 1 )
                return -1073741820;
              if ( v8 )
                UCharFromUser = RtlReadUCharFromUser(ThreadInformation);
              else
                UCharFromUser = *(_BYTE *)ThreadInformation;
              v151 = UCharFromUser;
              result = ObpReferenceObjectByHandleWithTag(
                         BugCheckParameter1,
                         32,
                         (__int64)PsThreadType,
                         v8,
                         0x79517350u,
                         &Thread,
                         0LL,
                         0LL);
              if ( result < 0 )
                return result;
              v72 = Thread;
              if ( UCharFromUser )
                _interlockedbittestandset((volatile signed __int32 *)&Thread->116 + 1, 2u);
              else
                _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 2u);
              goto LABEL_206;
            }
            if ( (_DWORD)v4 != 8 )
              return -1073741820;
            if ( v8 )
            {
              v73 = RtlReadULong64FromUser(ThreadInformation);
              *(_QWORD *)&v178 = v73;
            }
            else
            {
              RtlCopyVolatileMemory(&v178, ThreadInformation, 8uLL);
              v73 = v178;
            }
            if ( !v73 )
              return -1073741811;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       1024,
                       (__int64)PsThreadType,
                       v8,
                       0x79517350u,
                       &Thread,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v45 = Thread;
            v74 = Thread->Process;
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v74[1].ProfileListHead.Blink) )
            {
              v17 = KiSetLegacyAffinityThread((__int64)v45, v178) == 0 ? 0xC000000D : 0;
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v74[1].ProfileListHead.Blink);
            }
            else
            {
              v17 = -1073741558;
            }
LABEL_95:
            v18 = v45;
            goto LABEL_36;
          }
          if ( (_DWORD)v4 != 4 )
            return -1073741820;
          if ( v8 )
            v75 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
          else
            v75 = *(_DWORD *)ThreadInformation;
          v160 = v75;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     1024,
                     (__int64)PsThreadType,
                     v8,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v28 = result;
          if ( result < 0 )
            return result;
          v76 = Thread;
          v77 = Thread->Process;
          v78 = (unsigned int)(v75 + 16);
          if ( (unsigned int)v78 <= 0x20 && (v79 = 0x10007C001LL, _bittest64(&v79, v78))
            || *((_QWORD *)Object + 23) == *((_QWORD *)PsGetServerSiloGlobals(0LL) + 106)
            || HIBYTE(v77[1].KernelWaitTime) == 4 )
          {
            v80 = v77[1].Padding[3];
            if ( !v80 || (*(_DWORD *)(v80 + 1056) & 0x20) == 0 || HIBYTE(v77[1].KernelWaitTime) == 4 || v75 <= 0 )
              KeSetBasePriorityThread(v76, v75);
          }
          else
          {
            v28 = -1073741811;
          }
          v31 = v76;
          goto LABEL_61;
        }
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( v8 )
        {
          v81 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
          Priority = v81;
        }
        else
        {
          RtlCopyVolatileMemory(&Priority, ThreadInformation, 4uLL);
          v81 = Priority;
        }
        if ( (unsigned int)(v81 - 1) > 0x1E )
          return -1073741811;
        if ( v81 < 16
          || (LOBYTE(v82) = v8,
              (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 BugCheckParameter1,
                                 1024LL,
                                 v82)) )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     1024,
                     (__int64)PsThreadType,
                     v8,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          KeSetPriorityThread(Thread, Priority);
LABEL_204:
          v72 = Thread;
LABEL_206:
          v83 = 2035381072;
LABEL_207:
          ObfDereferenceObjectWithTag(v72, v83);
          return 0;
        }
        return -1073741727;
      }
      v36 = ThreadInformationClass - 15;
      if ( !v36 )
        return -1073741822;
      v37 = v36 - 2;
      if ( !v37 )
      {
        if ( !(_DWORD)v4 )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     v8,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v17 = result;
          if ( result >= 0 )
          {
            v18 = Thread;
            _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 4u);
            goto LABEL_36;
          }
          return result;
        }
        return -1073741820;
      }
      v38 = v37 - 1;
      if ( !v38 )
      {
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( v8 )
          v97 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
        else
          v97 = *(_DWORD *)ThreadInformation;
        v171 = v97;
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     v8,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v72 = Thread;
          if ( v97 )
            _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x20u);
          else
            _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFDF);
          goto LABEL_206;
        }
        return -1073741727;
      }
      v39 = v38 - 1;
      if ( !v39 )
      {
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   0xFFFFFFFFFFFFFFFEuLL,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v72 = Thread;
        Thread->NpxState |= MEMORY[0xFFFFF780000003D8] | 3LL;
        goto LABEL_206;
      }
      v40 = v39 - 3;
      if ( !v40 )
      {
        if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( (_DWORD)v4 == 4 )
        {
          if ( v8 )
            v92 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
          else
            v92 = *(_DWORD *)ThreadInformation;
          v170 = v92;
          v93 = 0;
        }
        else
        {
          if ( v8 )
          {
            v94 = RtlReadULong64FromUser(ThreadInformation);
            v92 = v94;
            v158 = v94;
          }
          else
          {
            RtlCopyVolatileMemory(&v158, ThreadInformation, 8uLL);
            v92 = v158;
          }
          v93 = BYTE4(v158);
        }
        if ( v92 >= 4 )
          return -1073741811;
        if ( v92 < 3
          || (LOBYTE(v7) = v8,
              (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 BugCheckParameter1,
                                 32LL,
                                 v7)) )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     32,
                     (__int64)PsThreadType,
                     v8,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          if ( v93 == 1 && ((*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7) < (int)v92 )
            IoBoostThreadIoPriority((KSPIN_LOCK *)Thread, v92, 0);
          PsSetIoPriorityThread((LegacyAutoBoost *)Thread, v92, v95, v96);
          goto LABEL_204;
        }
        return -1073741727;
      }
      v41 = v40 - 2;
      if ( !v41 )
      {
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( v8 )
          v157 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
        else
          RtlCopyVolatileMemory(&v157, ThreadInformation, 4uLL);
        DefaultPagePriority = MmGetDefaultPagePriority();
        if ( v89 > DefaultPagePriority )
          return -1073741811;
        MinWsPagePriority = MmGetMinWsPagePriority();
        if ( v91 < MinWsPagePriority )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        PsSetPagePriorityThread((__int64)Thread, v157);
        goto LABEL_204;
      }
      v42 = v41 - 1;
      if ( v42 )
      {
        if ( v42 == 4 )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     16,
                     (__int64)PsThreadType,
                     v8,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v86 = Thread;
            p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
            if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
            {
              ObfDereferenceObjectWithTag(v86, 0x79517350u);
              return -1073741749;
            }
            v17 = PspWow64SetContextThread(v86);
            ExReleaseRundownProtection_0(p_WaitStatus);
            v18 = v86;
            goto LABEL_36;
          }
          return result;
        }
        return -1073741821;
      }
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      if ( v8 )
        v43 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
      else
        v43 = *(_DWORD *)ThreadInformation;
      v160 = v43;
      if ( (unsigned int)(v43 - 1) <= 0x1E )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   v8,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v17 = result;
        if ( result < 0 )
          return result;
        v45 = Thread;
        if ( v43 < 16
          || HIBYTE(Thread->Process[1].KernelWaitTime) == 4
          || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v8) )
        {
          KeSetActualBasePriorityThread((__int64)v45, (unsigned int)v43, v44);
        }
        else
        {
          v17 = -1073741727;
        }
        goto LABEL_95;
      }
      return -1073741811;
    }
    if ( (_DWORD)v4 != 16 )
      return -1073741820;
    if ( v8 )
      RtlCopyFromUser(&v178, ThreadInformation, 0x10uLL);
    else
      RtlCopyVolatileMemory(&v178, ThreadInformation, 0x10uLL);
    if ( !KeVerifyGroupAffinity((__int64)&v178, 1) )
      return -1073741811;
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               32,
               (__int64)PsThreadType,
               v8,
               0x79517350u,
               &Thread,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v179 = 2097153LL;
    memset_0(v180, 0, 0x100uLL);
    if ( (unsigned __int16)v179 <= WORD4(v178) )
    {
      if ( WORD1(v179) <= WORD4(v178) )
      {
LABEL_270:
        v98 = 0;
        v99 = Thread;
        v100 = Thread->Process;
        v101 = Object;
        PspLockProcessShared((__int64)v100, (__int64)Object);
        v104 = v100[1].Padding[3];
        if ( v104 )
        {
          ExInitializeFastOwnerEntry((__int64)v175);
          ExAcquireFastResourceShared((__int64 *)(v104 + 56), (ULONG_PTR)v175, 1);
          v98 = PspCheckForJobAffinityViolation(v104, &v179);
        }
        if ( v98 >= 0 )
        {
          KeSetUserAffinityThread((__int64)v99, (unsigned __int16 *)&v179);
          KeQueryPrimaryGroupProcess((__int64)v100, &v152);
          for ( j = 0; j < (unsigned __int16)v179; ++j )
          {
            if ( v180[j] )
            {
              if ( (_WORD)v152 != WORD4(v178) )
                _interlockedbittestandset((volatile signed __int32 *)&v100->136, 0xCu);
              break;
            }
          }
        }
        if ( v104 )
          ExReleaseFastResourceShared(v104 + 56, (ULONG_PTR)v175, v102, v103);
        PspUnlockProcessShared((__int64)v100, (__int64)v101);
        ObfDereferenceObjectWithTag(v99, 0x79517350u);
        return v98;
      }
      LOWORD(v179) = WORD4(v178) + 1;
    }
    v180[WORD4(v178)] |= v178;
    goto LABEL_270;
  }
  if ( ThreadInformationClass > ThreadWorkOnBehalfTicket )
  {
    v21 = ThreadInformationClass - 46;
    if ( !v21 )
    {
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      if ( v8 )
        v142 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
      else
        v142 = *(_DWORD *)ThreadInformation;
      v168 = v142;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 32,
                 (__int64)PsThreadType,
                 v8,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      v28 = result;
      if ( result < 0 )
        return result;
      v31 = Thread;
      if ( v142 )
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFDFFFFF);
      goto LABEL_61;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      if ( BugCheckParameter1 != -2LL )
        return -1073741811;
      if ( (_DWORD)v4 != 8 )
        return -1073741820;
      if ( v8 )
        v133 = RtlReadULong64FromUser(ThreadInformation);
      else
        v133 = *(_QWORD *)ThreadInformation;
      v174 = v133;
      CurrentThread = KeGetCurrentThread();
      Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
      if ( v133 )
      {
        if ( Blink != (struct _LIST_ENTRY *)-3LL )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(v133, 32, (__int64)PsJobType, v8, 0x6D497350u, &Src, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v136 = (struct _LIST_ENTRY *)Src;
        if ( (*(_DWORD *)(Src + 1556) & 2) != 0 )
        {
          v138 = IoThreadToProcess(CurrentThread);
          PsGetProcessSilo((__int64)v138);
          IsSiloInSilo = PspIsSiloInSilo(v136);
          v137 = v136;
          if ( IsSiloInSilo )
          {
            EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v136);
            ProcessServerSilo = PsGetProcessServerSilo((__int64)v138);
            v137 = v136;
            if ( ProcessServerSilo == EffectiveServerSilo )
            {
              PsAttachSiloToCurrentThread(v136);
              return 0;
            }
          }
        }
        else
        {
          v137 = (struct _LIST_ENTRY *)Src;
        }
        ObfDereferenceObjectWithTag(v137, 0x6D497350u);
        return -1073741811;
      }
      if ( Blink == (struct _LIST_ENTRY *)-3LL )
        return -1073741811;
      v84 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
      v83 = 1833530192;
      v72 = (PETHREAD)v84;
      goto LABEL_207;
    }
    v23 = v22 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( !v24 )
      {
        *(_QWORD *)&Src = 0LL;
        DWORD2(Src) = 0;
        if ( (_DWORD)v4 != 12 )
          return -1073741820;
        if ( v8 )
          RtlCopyFromUser(&Src, ThreadInformation, 0xCuLL);
        else
          RtlCopyVolatileMemory(&Src, ThreadInformation, 0xCuLL);
        if ( (_DWORD)Src != 1 || (DWORD1(Src) & 0xFFFFFFFE) != 0 || (~DWORD1(Src) & DWORD2(Src)) != 0 )
          return -1073741811;
        if ( (BYTE4(Src) & 1) != 0 )
          v132 = (BYTE8(Src) & 1) != 0 ? 8 : 3;
        else
          v132 = 0;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        PspSetThreadPpmPolicy(Thread, v132);
        goto LABEL_204;
      }
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 3;
        if ( v26 )
        {
          v27 = v26 - 3;
          if ( !v27 )
          {
            if ( (_DWORD)v4 != 16 )
              return -1073741820;
            if ( v8 )
              RtlCopyFromUser(&v164, ThreadInformation, 0x10uLL);
            else
              RtlCopyVolatileMemory(&v164, ThreadInformation, 0x10uLL);
            if ( DWORD2(v164) )
            {
              v28 = -1073741811;
            }
            else
            {
              v28 = ObpReferenceObjectByHandleWithTag(
                      BugCheckParameter1,
                      32,
                      (__int64)PsThreadType,
                      v8,
                      0x79517350u,
                      &Thread,
                      0LL,
                      0LL);
              if ( v28 >= 0 )
              {
                if ( Thread == KeGetCurrentThread() )
                  KeAbUserModeEntryFree((AutoBoost *)Thread, (struct _KTHREAD *)v164, v29, v30);
                else
                  v28 = -1073741637;
              }
            }
            if ( !Thread )
              return v28;
            v31 = Thread;
LABEL_61:
            ObfDereferenceObjectWithTag(v31, 0x79517350u);
            return v28;
          }
          if ( v27 != 1 )
            return -1073741821;
          Src = 0LL;
          v177[0] = 0;
          if ( (_DWORD)v4 != 24 )
            return -1073741820;
          Object = 0LL;
          if ( v8 )
            RtlCopyFromUser(&Src, ThreadInformation, 0x18uLL);
          else
            RtlCopyVolatileMemory(&Src, ThreadInformation, 0x18uLL);
          v28 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  32,
                  (__int64)PsThreadType,
                  v8,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          if ( v28 < 0 )
          {
LABEL_76:
            if ( Object )
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v31 = Thread;
            if ( !Thread )
              return v28;
            goto LABEL_61;
          }
          if ( (_DWORD)Src )
          {
            if ( (_DWORD)Src != 1 )
            {
              v28 = -1073741637;
LABEL_73:
              if ( v8 )
                RtlCopyToUser(ThreadInformation, &Src, 0x18uLL);
              else
                RtlCopyVolatileMemory(ThreadInformation, &Src, 0x18uLL);
              goto LABEL_76;
            }
            v35 = PspSchedulerSharedDataRegionSlotFree((__int64)Thread, v32, v33, v34);
          }
          else
          {
            v28 = ObpReferenceObjectByHandleWithTag(
                    *((ULONG_PTR *)&Src + 1),
                    1,
                    (__int64)PspSchedulerSharedDataType,
                    v8,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            if ( v28 < 0 )
              goto LABEL_76;
            v35 = PspSchedulerSharedDataRegionSlotAllocate(Thread, Object, v177);
          }
          v28 = v35;
          goto LABEL_73;
        }
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( BugCheckParameter1 == -2LL )
        {
          if ( v8 )
            v131 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
          else
            v131 = *(_DWORD *)ThreadInformation;
          v167 = v131;
          if ( v131 > 1 )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     0xFFFFFFFFFFFFFFFEuLL,
                     32,
                     (__int64)PsThreadType,
                     v8,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v72 = Thread;
          *((_DWORD *)&Thread[1].SwapListEntry + 3) ^= ((unsigned __int16)*((_DWORD *)&Thread[1].SwapListEntry + 3) ^ (unsigned __int16)((_WORD)v131 << 11)) & 0x800;
          goto LABEL_206;
        }
        return -1073741790;
      }
      if ( BugCheckParameter1 != -2LL || v8 )
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
  if ( ThreadInformationClass == ThreadWorkOnBehalfTicket )
  {
    *(_QWORD *)&Src = 0LL;
    if ( BugCheckParameter1 == -2LL )
    {
      if ( (_DWORD)v4 == 8 )
      {
        if ( v8 )
          Buf1 = RtlReadULong64FromUser(ThreadInformation);
        else
          RtlCopyVolatileMemory(&Buf1, ThreadInformation, 8uLL);
        result = ObpReferenceObjectByHandleWithTag(
                   0xFFFFFFFFFFFFFFFEuLL,
                   1024,
                   (__int64)PsThreadType,
                   v8,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v17 = result;
        if ( result >= 0 )
        {
          Object = 0LL;
          if ( !memcmp(&Buf1, &Src, 8uLL) || (v17 = PspThreadFromTicket(&Buf1, &Object), v17 >= 0) )
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
  v106 = ThreadInformationClass - 32;
  if ( !v106 )
  {
    if ( (_DWORD)v4 != 24 )
      return -1073741820;
    if ( v8 )
      RtlCopyFromUser(&v162, ThreadInformation, 0x18uLL);
    else
      RtlCopyVolatileMemory(&v162, ThreadInformation, 0x18uLL);
    ProbeForWrite(Address, 0x1C0uLL, 4u);
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               32,
               (__int64)PsThreadType,
               v8,
               0x79517350u,
               &Thread,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v129 = Thread;
    if ( Thread == KeGetCurrentThread() )
    {
      if ( HIDWORD(v162) )
        v130 = KeEnableProfiling(Thread, DWORD2(v162), v162, Address);
      else
        v130 = KeDisableProfiling((__int64)Thread, (__int64)Address);
      v28 = v130;
    }
    else
    {
      v28 = -1073741637;
    }
LABEL_380:
    v31 = v129;
    goto LABEL_61;
  }
  v107 = v106 - 1;
  if ( !v107 )
  {
    if ( (_DWORD)v4 != 4 )
      return -1073741820;
    if ( v8 )
      v153 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
    else
      RtlCopyVolatileMemory(&v153, ThreadInformation, 4uLL);
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               32,
               (__int64)PsThreadType,
               v8,
               0x79517350u,
               &Thread,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v129 = Thread;
    v28 = KeSetIdealProcessorThreadByNumber(Thread, (PPROCESSOR_NUMBER)&v153, (PPROCESSOR_NUMBER)&v153);
    if ( v28 >= 0 )
    {
      if ( v8 )
        RtlWriteULongToUser(ThreadInformation, v153);
      else
        RtlCopyVolatileMemory(ThreadInformation, &v153, 4uLL);
    }
    goto LABEL_380;
  }
  v108 = v107 - 1;
  if ( !v108 )
  {
    if ( BugCheckParameter1 != -2LL )
      return -1073741811;
    if ( (_DWORD)v4 != 8 )
      return -1073741820;
    if ( v8 )
      v126 = RtlReadULong64FromUser(ThreadInformation);
    else
      v126 = *(_QWORD *)ThreadInformation;
    v173 = v126;
    if ( v126 )
    {
      result = ObpReferenceObjectByHandleWithTag(v126, 2, (__int64)MmSessionObjectType, v8, 0x79517350u, v161, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v127 = v161[0];
      v128 = *((_QWORD *)v161[0] + 4);
      if ( !v128 )
      {
        ObfDereferenceObjectWithTag(v161[0], 0x79517350u);
        return -1073740715;
      }
      if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)Object, v128) )
      {
        ObfDereferenceObjectWithTag(v127, 0x79517350u);
        return -1073740714;
      }
      *((_QWORD *)Object + 173) = v127;
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
  v109 = v108 - 2;
  if ( !v109 )
    return -1073741637;
  v110 = v109 - 2;
  if ( !v110 )
  {
    v146 = 0;
    v155 = 0LL;
    P = 0LL;
    v145 = 0;
    if ( (_DWORD)v4 == 16 )
    {
      v28 = ObpReferenceObjectByHandleWithTag(
              BugCheckParameter1,
              1024,
              (__int64)PsThreadType,
              v8,
              0x79517350u,
              &Thread,
              0LL,
              0LL);
      v149 = v28;
      if ( v28 < 0 )
      {
LABEL_337:
        v125 = P;
        v123 = Object;
LABEL_338:
        if ( v145 )
          PspUnlockThreadSecurityExclusive((__int64)Thread, (__int64)v123);
        if ( v146 )
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        if ( v125 )
          ExFreePoolWithTag(v125, 0x6D4E6854u);
        return v28;
      }
      v146 = 1;
      if ( v8 )
      {
        *(_OWORD *)v161 = 0LL;
        v115 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
        v116 = v115;
        LODWORD(v161[0]) = v115;
        v161[1] = (PVOID)RtlReadULong64FromUser((char *)ThreadInformation + 8);
        Src = *(_OWORD *)v161;
        ProbeForRead(v161[1], v116, 2u);
      }
      else
      {
        Src = *(_OWORD *)ThreadInformation;
      }
      v117 = Src;
      if ( (Src & 1) != 0 || (unsigned __int16)Src > WORD1(Src) )
      {
        v28 = -1073741811;
      }
      else
      {
        Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
        v119 = Pool2;
        v155 = Pool2;
        if ( Pool2 )
        {
          v120 = Pool2 + 8;
          *((_QWORD *)Pool2 + 1) = Pool2 + 8;
          *Pool2 = v117;
          Pool2[1] = v117;
          if ( v8 )
            RtlCopyFromUser(v120, *((void **)&Src + 1), v117);
          else
            RtlCopyVolatileMemory(v120, *((const void **)&Src + 1), v117);
          v123 = Object;
          v124 = Thread;
          PspLockThreadSecurityExclusive((__int64)Thread, (__int64)Object, v121, v122);
          v145 = 1;
          v125 = *(PVOID *)&v124[1].WaitBlockFill11[160];
          P = v125;
          *(_QWORD *)&v124[1].WaitBlockFill11[160] = v119;
          v155 = 0LL;
          EtwTraceThreadSetName(v124);
          goto LABEL_338;
        }
        v28 = -1073741670;
      }
    }
    else
    {
      v28 = -1073741820;
    }
    v149 = v28;
    goto LABEL_337;
  }
  v111 = v110 - 1;
  if ( v111 )
  {
    v112 = v111 - 3;
    if ( v112 )
    {
      if ( v112 != 1 )
        return -1073741821;
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      if ( v8 )
        v113 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
      else
        v113 = *(_DWORD *)ThreadInformation;
      v165 = v113;
      if ( !v8 )
        goto LABEL_300;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v8) )
        return -1073741727;
      if ( RtlTestProtectedAccess(*(PS_PROTECTION *)(*((_QWORD *)Object + 68) + 1530LL), (PS_PROTECTION)81) )
      {
LABEL_300:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   v8,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v17 = result;
        if ( result >= 0 )
        {
          v18 = Thread;
          if ( v113 )
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
    if ( v8 )
      v114 = RtlReadULongFromUser((unsigned int *)ThreadInformation);
    else
      v114 = *(_DWORD *)ThreadInformation;
    v166 = v114;
    if ( v114 == 1 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)Object + 68) + 1872LL) & 0x200) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)Object + 360, 0x40000u);
        return 0;
      }
      return -1073741790;
    }
    if ( v114 )
      return -1073741811;
    _InterlockedAnd((volatile signed __int32 *)Object + 360, 0xFFFBFFFF);
    return 0;
  }
  if ( (v4 & 7) != 0 || (unsigned int)v4 > 0x100 )
    return -1073741820;
  if ( v8 )
    RtlCopyFromUser(v181, ThreadInformation, v4);
  else
    RtlCopyVolatileMemory(v181, ThreadInformation, v4);
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             1024,
             (__int64)PsThreadType,
             v8,
             0x79517350u,
             &Thread,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v16 = KeSetSelectedCpuSetsThread((__int64)Thread, (unsigned int)v4 >> 3, (__int64)v181);
    goto LABEL_34;
  }
  return result;
}
