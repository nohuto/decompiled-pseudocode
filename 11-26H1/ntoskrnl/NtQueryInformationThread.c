/*
 * XREFs of NtQueryInformationThread @ 0x140A28950
 * Callers:
 *     DifNtQueryInformationThreadWrapper @ 0x140687050 (DifNtQueryInformationThreadWrapper.c)
 * Callees:
 *     KeSetIdealProcessorThreadByNumber @ 0x140202C34 (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryTotalCycleTimeThread @ 0x14021C500 (KeQueryTotalCycleTimeThread.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PsGetEffectiveContainerId @ 0x14026DEC0 (PsGetEffectiveContainerId.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     KeQueryBasePriorityThread @ 0x14029B4E0 (KeQueryBasePriorityThread.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeQueryValuesThread @ 0x140305730 (KeQueryValuesThread.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     PsQueryThreadStartAddress @ 0x14040CC40 (PsQueryThreadStartAddress.c)
 *     PspLockThreadSecurityShared @ 0x140442F10 (PspLockThreadSecurityShared.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     PsGetWorkOnBehalfThread @ 0x140458EE0 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x140470480 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     MmGetDefaultPagePriority @ 0x1404AFDB0 (MmGetDefaultPagePriority.c)
 *     KeQueryUserAffinityThread @ 0x1404C345C (KeQueryUserAffinityThread.c)
 *     KeQueryTotalSuspendCountThread @ 0x1404CF3A0 (KeQueryTotalSuspendCountThread.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404E02B0 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x1405013E8 (KeQueryCpuSetsThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x140532BC0 (xKdEnumerateDebuggingDevices.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspQueryThreadIndexInformation @ 0x14077C7D0 (PspQueryThreadIndexInformation.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlCopyToUserFromUser @ 0x140781DE8 (RtlCopyToUserFromUser.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 *     PsGetThreadExitStatus @ 0x140A2AFF0 (PsGetThreadExitStatus.c)
 *     PspQueryLastCallThread @ 0x140A2B038 (PspQueryLastCallThread.c)
 *     PspGetThreadPpmPolicy @ 0x140A2B1A8 (PspGetThreadPpmPolicy.c)
 *     PspSchedulerSharedDataRegionSlotRetrieve @ 0x140A2B1FC (PspSchedulerSharedDataRegionSlotRetrieve.c)
 *     MiCopyVirtualMemory @ 0x140A2B990 (MiCopyVirtualMemory.c)
 */

NTSTATUS __cdecl NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  unsigned __int64 v8; // rsi
  PETHREAD CurrentThread; // r13
  unsigned __int8 PreviousMode; // r12
  int v11; // eax
  int ULongFromUser; // eax
  ULONG_PTR v13; // rdi
  ULONG64 v14; // rax
  PETHREAD v15; // rcx
  NTSTATUS result; // eax
  PVOID WorkOnBehalfThread; // rcx
  PETHREAD v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  _KAFFINITY_EX *UserAffinity; // rcx
  int BasePriority; // edi
  bool v24; // zf
  PETHREAD v25; // rdi
  int PagePriorityThread; // eax
  NTSTATUS v27; // r15d
  PETHREAD v28; // rdi
  int v29; // edx
  NTSTATUS v30; // ebx
  PETHREAD v31; // rdi
  int ThreadPpmPolicy; // eax
  int v33; // eax
  int v34; // eax
  __int64 v35; // r8
  struct _KLOCK_ENTRIES *v36; // r9
  __int64 v37; // rax
  WCHAR *v38; // rdx
  unsigned int v39; // eax
  char *v40; // rcx
  NTSTATUS v41; // edi
  struct _LIST_ENTRY *Blink; // rsi
  int v43; // esi
  int v44; // edi
  NTSTATUS v45; // eax
  NTSTATUS v46; // ebx
  void *v47; // rcx
  PETHREAD v48; // r13
  _KPROCESS *Process; // rdx
  _KPROCESS *v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  char *v54; // rdx
  int v55; // eax
  __int64 ULong64FromUser; // rax
  __int16 *v57; // rcx
  char UCharFromUser; // al
  __int16 *v59; // rcx
  __int16 UShortFromUser; // ax
  __int16 *v61; // rcx
  int v62; // eax
  __int16 *v63; // rcx
  size_t v64; // r8
  __int16 *v65; // rcx
  ULONG *v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // r8
  int TotalSuspendCountThread; // eax
  __int64 UserAffinityPrimaryGroup; // rax
  ULONG v71; // eax
  NTSTATUS v72; // edi
  PETHREAD v73; // r15
  NTSTATUS v74; // r15d
  PETHREAD v75; // r13
  unsigned __int64 ThreadStartAddress; // rdi
  PETHREAD v77; // rsi
  char v78; // al
  int DefaultPagePriority; // eax
  int v80; // r8d
  NTSTATUS v81; // r13d
  ULONG v82; // edi
  int v83; // edi
  PETHREAD v84; // rsi
  char v85; // al
  PETHREAD Thread; // [rsp+48h] [rbp-3F0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-3E8h] BYREF
  char v88; // [rsp+58h] [rbp-3E0h]
  char v89; // [rsp+59h] [rbp-3DFh]
  unsigned __int64 CycleTimeStamp; // [rsp+60h] [rbp-3D8h] BYREF
  int v91; // [rsp+68h] [rbp-3D0h]
  _PROCESSOR_NUMBER v92[3]; // [rsp+6Ch] [rbp-3CCh] BYREF
  void *v93; // [rsp+78h] [rbp-3C0h]
  volatile void *Address[2]; // [rsp+120h] [rbp-318h] BYREF
  NTSTATUS ThreadExitStatus; // [rsp+130h] [rbp-308h] BYREF
  int v96; // [rsp+134h] [rbp-304h]
  void *Teb; // [rsp+138h] [rbp-300h]
  __int128 v98; // [rsp+140h] [rbp-2F8h]
  unsigned __int64 v99; // [rsp+150h] [rbp-2E8h]
  int Priority; // [rsp+158h] [rbp-2E0h]
  int BasePriorityThread; // [rsp+15Ch] [rbp-2DCh]
  int v102[4]; // [rsp+160h] [rbp-2D8h] BYREF
  __m128i v103; // [rsp+170h] [rbp-2C8h]
  __int128 v104; // [rsp+180h] [rbp-2B8h] BYREF
  _QWORD v105[3]; // [rsp+1A0h] [rbp-298h] BYREF
  int v106; // [rsp+1B8h] [rbp-280h]
  int v107; // [rsp+1BCh] [rbp-27Ch]
  unsigned __int64 v108; // [rsp+1C0h] [rbp-278h]
  __int128 v109; // [rsp+1C8h] [rbp-270h]
  int v110; // [rsp+1D8h] [rbp-260h]
  int v111; // [rsp+1DCh] [rbp-25Ch]
  LONG SpareLong; // [rsp+1E0h] [rbp-258h]
  int v113; // [rsp+1E4h] [rbp-254h]
  int v114; // [rsp+1E8h] [rbp-250h]
  int v115; // [rsp+1ECh] [rbp-24Ch]
  __m128i v116; // [rsp+1F0h] [rbp-248h] BYREF
  _QWORD v117[2]; // [rsp+200h] [rbp-238h] BYREF
  __m128i Src; // [rsp+210h] [rbp-228h] BYREF
  __int128 v119; // [rsp+220h] [rbp-218h] BYREF
  __int128 v120; // [rsp+230h] [rbp-208h] BYREF
  int v121; // [rsp+240h] [rbp-1F8h]
  __int64 v122; // [rsp+248h] [rbp-1F0h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+250h] [rbp-1E8h]
  unsigned __int64 v124; // [rsp+258h] [rbp-1E0h]
  unsigned __int64 v125; // [rsp+260h] [rbp-1D8h]
  char v126[8]; // [rsp+270h] [rbp-1C8h] BYREF
  __int64 SecureThreadCookie; // [rsp+278h] [rbp-1C0h]
  PETHREAD v128; // [rsp+280h] [rbp-1B8h]
  struct _KAFFINITY_EX v129; // [rsp+2E0h] [rbp-158h] BYREF

  BugCheckParameter1 = (ULONG_PTR)ThreadHandle;
  Src.m128i_i64[0] = (__int64)ThreadHandle;
  v103.m128i_i64[0] = (__int64)ReturnLength;
  v96 = 0;
  v8 = 0LL;
  v116.m128i_i64[0] = 0LL;
  v120 = 0LL;
  v121 = 0;
  v119 = 0LL;
  *(_OWORD *)Address = 0LL;
  memset(v117, 0, 12);
  v92[0] = 0;
  Thread = 0LL;
  memset_0(&v129.8, 0, sizeof(v129.8));
  CycleTimeStamp = 0LL;
  v104 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v93 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( ThreadInformationClass == ThreadNameInformation )
    {
      v11 = 8;
    }
    else if ( ThreadInformationClass == ThreadPowerThrottlingState )
    {
      v11 = 4;
    }
    else
    {
      v11 = 1;
      if ( ThreadInformationLength >= 4 )
        v11 = 4;
    }
    if ( ThreadInformationLength && ((v11 - 1) & (unsigned int)ThreadInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ReturnLength )
    {
      ULongFromUser = RtlReadULongFromUser(ReturnLength);
      RtlWriteULongToUser(ReturnLength, ULongFromUser);
    }
  }
  v96 = 0;
  v98 = 0LL;
  if ( ThreadInformationClass != ThreadCycleTime )
  {
    if ( ThreadInformationClass )
    {
      switch ( ThreadInformationClass )
      {
        case ThreadTimes:
          if ( ThreadInformationLength != 32 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v124 = KeMaximumIncrement * (unsigned __int64)Thread->SchedulerApc.SpareLong0;
          v125 = KeMaximumIncrement * (unsigned __int64)Thread->UserTime;
          v122 = *(_QWORD *)&Thread[1].Header.Lock;
          if ( (unsigned __int8)Thread->Header.SignalState )
            Flink = Thread[1].Header.WaitListHead.Flink;
          else
            Flink = 0LL;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlCopyToUser(ThreadInformation, &v122, 0x20uLL);
          else
            RtlCopyVolatileMemory(ThreadInformation, &v122, 0x20uLL);
          if ( ReturnLength )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ReturnLength, 32);
            else
              *ReturnLength = 32;
          }
          return 0;
        case ThreadDescriptorTableEntry:
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v45 = xKdEnumerateDebuggingDevices();
          goto LABEL_227;
        case ThreadQuerySetWin32StartAddress:
          if ( ThreadInformationLength != 8 )
            return -1073741820;
          v41 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  64,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          if ( v41 < 0 )
            return v41;
          Blink = Thread[1].ApcState.ApcListHead[0].Blink;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULong64ToUser(ThreadInformation, (__int64)Blink);
          else
            *(_QWORD *)ThreadInformation = Blink;
          if ( !ReturnLength )
            return v41;
          if ( PreviousMode )
            goto LABEL_200;
          *ReturnLength = 8;
          return v41;
        case ThreadPerformanceCount:
          if ( ThreadInformationLength != 8 )
            return -1073741820;
          v41 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  64,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          if ( v41 < 0 )
            return v41;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULong64ToUser(ThreadInformation, 0LL);
          else
            *(_QWORD *)ThreadInformation = 0LL;
          if ( !ReturnLength )
            return v41;
          if ( PreviousMode )
LABEL_200:
            RtlWriteULongToUser(ReturnLength, 8);
          else
            *ReturnLength = 8;
          return v41;
        case ThreadAmILastThread:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          LOBYTE(v8) = LODWORD(CurrentThread->Process[1].CpuPartitionList.Blink) == 1;
          if ( PreviousMode )
            RtlWriteULongToUser(ThreadInformation, v8);
          else
            *(_DWORD *)ThreadInformation = v8;
          if ( ReturnLength )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ReturnLength, 4);
            else
              *ReturnLength = 4;
          }
          return 0;
        case ThreadPriorityBoost:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          v41 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  2048,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          if ( v41 >= 0 )
          {
            v43 = (*((_DWORD *)&Thread->0 + 1) >> 3) & 1;
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            if ( PreviousMode )
              RtlWriteULongToUser(ThreadInformation, v43);
            else
              *(_DWORD *)ThreadInformation = v43;
            if ( ReturnLength )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(ReturnLength, 4);
              else
                *ReturnLength = 4;
            }
          }
          return v41;
        case ThreadIsIoPending:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          LOBYTE(v8) = *(_QWORD *)&Thread[1].SystemCallNumber != (_QWORD)Thread + 1344;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser(ThreadInformation, v8);
          else
            *(_DWORD *)ThreadInformation = v8;
          if ( !ReturnLength )
            return 0;
          if ( PreviousMode )
            goto LABEL_467;
          *ReturnLength = 4;
          return 0;
        case ThreadHideFromDebugger:
          if ( ThreadInformationLength != 1 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v41 = result;
          if ( result < 0 )
            return result;
          v77 = Thread;
          v78 = (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 4) != 0;
          if ( PreviousMode )
            RtlWriteUCharToUser(ThreadInformation, v78);
          else
            *(_BYTE *)ThreadInformation = v78;
          if ( ReturnLength )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ReturnLength, 1);
            else
              *ReturnLength = 1;
          }
          goto LABEL_378;
        case ThreadBreakOnTermination:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v83 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 5) & 1;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser(ThreadInformation, v83);
          else
            *(_DWORD *)ThreadInformation = v83;
          if ( !ReturnLength )
            return 0;
          if ( PreviousMode )
            goto LABEL_467;
          *ReturnLength = 4;
          return 0;
        case ThreadIsTerminated:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v44 = *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser(ThreadInformation, v44);
          else
            *(_DWORD *)ThreadInformation = v44;
          if ( !ReturnLength )
            return 0;
          if ( PreviousMode )
            goto LABEL_467;
          *ReturnLength = 4;
          return 0;
        case ThreadLastSystemCall:
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     8,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v45 = PspQueryLastCallThread(
                  (_DWORD)Thread,
                  (_DWORD)ThreadInformation,
                  ThreadInformationLength,
                  (_DWORD)ReturnLength,
                  PreviousMode);
LABEL_227:
          v46 = v45;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          return v46;
        case ThreadIoPriority:
        case ThreadEffectiveIoPriority:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v27 = result;
          if ( result < 0 )
            return result;
          LODWORD(CycleTimeStamp) = 0;
          v28 = Thread;
          v29 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
          LODWORD(CycleTimeStamp) = v29;
          if ( PreviousMode )
            RtlWriteULongToUser(ThreadInformation, v29);
          else
            RtlCopyVolatileMemory(ThreadInformation, &CycleTimeStamp, 4uLL);
          if ( !ReturnLength )
            goto LABEL_113;
          if ( PreviousMode )
            goto LABEL_286;
          *ReturnLength = 4;
          goto LABEL_113;
        case ThreadPagePriority:
        case ThreadEffectivePagePriority:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          LODWORD(v8) = result;
          if ( result < 0 )
            return result;
          v24 = ThreadInformationClass == ThreadPagePriority;
          v25 = Thread;
          if ( v24 )
            PagePriorityThread = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
          else
            PagePriorityThread = PsGetPagePriorityThread((__int64)Thread);
          if ( PreviousMode )
            RtlWriteULongToUser(ThreadInformation, PagePriorityThread);
          else
            *(_DWORD *)ThreadInformation = PagePriorityThread;
          if ( !ReturnLength )
            goto LABEL_103;
          if ( PreviousMode )
            goto LABEL_424;
          *ReturnLength = 4;
          goto LABEL_103;
        case ThreadActualBasePriority:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          BasePriority = Thread->BasePriority;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser(ThreadInformation, BasePriority);
          else
            *(_DWORD *)ThreadInformation = BasePriority;
          if ( !ReturnLength )
            return 0;
          if ( PreviousMode )
            goto LABEL_467;
          *ReturnLength = 4;
          return 0;
        case ThreadTebInformation:
        case ThreadTebInformationAtomic:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          if ( PreviousMode )
          {
            RtlCopyFromUser(Address, ThreadInformation, 0x10uLL);
            ProbeForWrite(Address[0], HIDWORD(Address[1]), 1u);
            ThreadInformation = Address;
          }
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     24,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v27 = result;
          if ( result < 0 )
            return result;
          v48 = Thread;
          if ( (Thread->MiscFlags & 0x400) != 0 )
          {
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            result = -1073741816;
          }
          else
          {
            Process = Thread->Process;
            v93 = Process;
            v50 = KeGetCurrentThread()->ApcState.Process;
            BugCheckParameter1 = (ULONG_PTR)v50;
            if ( ThreadInformationClass == ThreadTebInformationAtomic && Process != v50 )
              goto LABEL_331;
            v51 = 6256LL;
            if ( Process[1].ReadyTime )
            {
              v51 = 12336LL;
              if ( WORD2(Process[3].PerProcessorCycleTimes) == 0x8664 )
                v51 = 14448LL;
            }
            CycleTimeStamp = (unsigned __int64)ThreadInformation + 12;
            v52 = *((unsigned int *)ThreadInformation + 3);
            if ( (_DWORD)v52 && (v53 = *((unsigned int *)ThreadInformation + 2), v53 < v51) && v52 <= v51 - v53 )
            {
              Src.m128i_i64[0] = (__int64)&Thread[1].WaitStatus;
              if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
              {
                v54 = (char *)v48->Teb + *((unsigned int *)ThreadInformation + 2);
                if ( v93 == (void *)BugCheckParameter1 )
                {
                  v55 = *(_DWORD *)CycleTimeStamp;
                  if ( ThreadInformationClass == ThreadTebInformationAtomic )
                  {
                    if ( v55 == 1 )
                    {
                      UCharFromUser = RtlReadUCharFromUser((char *)v48->Teb + *((unsigned int *)ThreadInformation + 2));
                      v59 = *(__int16 **)ThreadInformation;
                      if ( PreviousMode )
                        RtlWriteUCharToUser(v59, UCharFromUser);
                      else
                        *(_BYTE *)v59 = UCharFromUser;
                    }
                    else if ( v55 != 2 || ((unsigned __int8)v54 & 1) != 0 )
                    {
                      if ( v55 != 4 || ((unsigned __int8)v54 & 3) != 0 )
                      {
                        if ( v55 != 8 || ((unsigned __int8)v54 & 7) != 0 )
                        {
                          v27 = -1073741811;
                          v91 = -1073741811;
                        }
                        else
                        {
                          ULong64FromUser = RtlReadULong64FromUser((char *)v48->Teb + *((unsigned int *)ThreadInformation
                                                                                      + 2));
                          v57 = *(__int16 **)ThreadInformation;
                          if ( PreviousMode )
                            RtlWriteULong64ToUser(v57, ULong64FromUser);
                          else
                            *(_QWORD *)v57 = ULong64FromUser;
                        }
                      }
                      else
                      {
                        v62 = RtlReadULongFromUser((unsigned int *)((char *)v48->Teb
                                                                  + *((unsigned int *)ThreadInformation + 2)));
                        v63 = *(__int16 **)ThreadInformation;
                        if ( PreviousMode )
                          RtlWriteULongToUser(v63, v62);
                        else
                          *(_DWORD *)v63 = v62;
                      }
                    }
                    else
                    {
                      UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)((char *)v48->Teb
                                                                                + *((unsigned int *)ThreadInformation + 2)));
                      v61 = *(__int16 **)ThreadInformation;
                      if ( PreviousMode )
                        RtlWriteUShortToUser(v61, UShortFromUser);
                      else
                        *v61 = UShortFromUser;
                    }
                  }
                  else
                  {
                    v64 = *(unsigned int *)CycleTimeStamp;
                    v65 = *(__int16 **)ThreadInformation;
                    if ( PreviousMode )
                      RtlCopyToUserFromUser(v65, v54, v64);
                    else
                      RtlCopyFromUser(v65, v54, v64);
                  }
                  v66 = (ULONG *)CycleTimeStamp;
                }
                else
                {
                  v66 = (ULONG *)CycleTimeStamp;
                  v27 = MiCopyVirtualMemory(
                          (_DWORD)v93,
                          (_DWORD)v54,
                          BugCheckParameter1,
                          *(_QWORD *)ThreadInformation,
                          *(unsigned int *)CycleTimeStamp,
                          PreviousMode,
                          (__int64)&v116,
                          0);
                }
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Src.m128i_i64[0]);
                ObfDereferenceObjectWithTag(v48, 0x79517350u);
                if ( v27 >= 0 )
                {
                  if ( ReturnLength )
                  {
                    v71 = *v66;
                    if ( PreviousMode )
                      RtlWriteULongToUser(ReturnLength, v71);
                    else
                      *ReturnLength = v71;
                  }
                  v27 = 0;
                  v91 = 0;
                }
LABEL_114:
                result = v27;
              }
              else
              {
                ObfDereferenceObjectWithTag(v48, 0x79517350u);
                result = -1073741749;
              }
            }
            else
            {
LABEL_331:
              ObfDereferenceObjectWithTag(Thread, 0x79517350u);
LABEL_332:
              result = -1073741811;
            }
          }
          break;
        case ThreadWow64Context:
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     8,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          LODWORD(v8) = PspWow64GetContextThread(Thread, ThreadInformation, ThreadInformationLength, PreviousMode);
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( (v8 & 0x80000000) == 0LL && ReturnLength )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ReturnLength, 716);
            else
              *ReturnLength = 716;
          }
          return v8;
        case ThreadGroupInformation:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v27 = result;
          if ( result < 0 )
            return result;
          *(_QWORD *)&v129.Count = 2097153LL;
          memset_0(&v129.8, 0, sizeof(v129.8));
          v28 = Thread;
          KeQueryUserAffinityThread((__int64)Thread, &v129);
          UserAffinityPrimaryGroup = v28->UserAffinityPrimaryGroup;
          WORD4(v119) = UserAffinityPrimaryGroup;
          if ( (unsigned __int16)UserAffinityPrimaryGroup < v129.Count )
            v8 = v129.Bitmap[UserAffinityPrimaryGroup];
          *(_QWORD *)&v119 = v8;
          if ( PreviousMode )
            RtlCopyToUser(ThreadInformation, &v119, 0x10uLL);
          else
            RtlCopyVolatileMemory(ThreadInformation, &v119, 0x10uLL);
          if ( ReturnLength )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ReturnLength, 16);
            else
              *ReturnLength = 16;
          }
          goto LABEL_113;
        case ThreadCounterProfiling:
          if ( ThreadInformationLength != 1 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v41 = result;
          if ( result < 0 )
            return result;
          v84 = Thread;
          v85 = Thread->WaitBlock[0].SparePtr != 0LL;
          if ( PreviousMode )
            RtlWriteUCharToUser(ThreadInformation, v85);
          else
            *(_BYTE *)ThreadInformation = v85;
          ObfDereferenceObjectWithTag(v84, 0x79517350u);
          if ( v41 >= 0 && ReturnLength )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ReturnLength, 1);
            else
              *ReturnLength = 1;
          }
          return v41;
        case ThreadIdealProcessorEx:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v92[0] = (_PROCESSOR_NUMBER)0x400000;
          KeSetIdealProcessorThreadByNumber(Thread, v92, v92);
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser(ThreadInformation, *(_DWORD *)v92);
          else
            RtlCopyVolatileMemory(ThreadInformation, v92, 4uLL);
          if ( !ReturnLength )
            return 0;
          if ( PreviousMode )
LABEL_467:
            RtlWriteULongToUser(ReturnLength, 4);
          else
            *ReturnLength = 4;
          return 0;
        case ThreadCpuAccountingInformation:
          if ( !ThreadInformationLength )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     64,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v72 = result;
          if ( result < 0 )
            return result;
          v73 = Thread;
          LOBYTE(v8) = Thread->SchedulingGroup != 0LL;
          LODWORD(CycleTimeStamp) = v8;
          if ( PreviousMode )
            RtlWriteUCharToUser(ThreadInformation, v8);
          else
            *(_BYTE *)ThreadInformation = v8;
          if ( ReturnLength )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ReturnLength, 1);
            else
              *ReturnLength = 1;
          }
          goto LABEL_346;
        case ThreadSuspendCount:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          LODWORD(v8) = result;
          if ( result < 0 )
            return result;
          v25 = Thread;
          TotalSuspendCountThread = KeQueryTotalSuspendCountThread((__int64)Thread, v67, v68);
          if ( PreviousMode )
            RtlWriteULongToUser(ThreadInformation, TotalSuspendCountThread);
          else
            *(_DWORD *)ThreadInformation = TotalSuspendCountThread;
          if ( !ReturnLength )
            goto LABEL_103;
          if ( PreviousMode )
LABEL_424:
            RtlWriteULongToUser(ReturnLength, 4);
          else
            *ReturnLength = 4;
          goto LABEL_103;
        case ThreadHeterogeneousCpuPolicy:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          LODWORD(v8) = ObpReferenceObjectByHandleWithTag(
                          BugCheckParameter1,
                          2048,
                          (__int64)PsThreadType,
                          PreviousMode,
                          0x79517350u,
                          &Thread,
                          0LL,
                          0LL);
          if ( (v8 & 0x80000000) != 0LL )
            return v8;
          v25 = Thread;
          DefaultPagePriority = MmGetDefaultPagePriority();
          v102[0] = DefaultPagePriority;
          if ( PreviousMode )
            RtlWriteULongToUser(ThreadInformation, DefaultPagePriority);
          else
            RtlCopyVolatileMemory(ThreadInformation, v102, 4uLL);
          if ( !ReturnLength )
            goto LABEL_103;
          if ( PreviousMode )
            goto LABEL_424;
          *ReturnLength = 4;
LABEL_103:
          v15 = v25;
          goto LABEL_29;
        case ThreadContainerId:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          if ( BugCheckParameter1 != -2LL )
            goto LABEL_332;
          result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v120);
          v41 = result;
          if ( result < 0 )
            return result;
          if ( PreviousMode )
            RtlCopyToUser(ThreadInformation, &v120, 0x10uLL);
          else
            RtlCopyVolatileMemory(ThreadInformation, &v120, 0x10uLL);
          if ( ReturnLength )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ReturnLength, 16);
            else
              *ReturnLength = 16;
          }
          return v41;
        case ThreadNameInformation:
          v89 = 0;
          v88 = 0;
          v91 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  2048,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          v25 = Thread;
          if ( v91 < 0 )
          {
            LODWORD(v8) = v91;
          }
          else
          {
            v89 = 1;
            PspLockThreadSecurityShared((__int64)Thread, (__int64)CurrentThread, v35, v36);
            v88 = 1;
            v37 = *(_QWORD *)&v25[1].WaitBlockFill11[160];
            if ( v37 )
            {
              v38 = *(WCHAR **)(v37 + 8);
              LOWORD(v8) = *(_WORD *)v37;
            }
            else
            {
              v38 = (WCHAR *)&word_140B8A320;
            }
            v39 = (unsigned __int16)v8 + 16;
            LODWORD(CycleTimeStamp) = v39;
            if ( v39 > ThreadInformationLength )
            {
              LODWORD(v8) = -1073741789;
              v91 = -1073741789;
            }
            else
            {
              Src = 0LL;
              v40 = (char *)ThreadInformation + 16;
              if ( PreviousMode )
                RtlCopyToUser(v40, v38, (unsigned __int16)v8);
              else
                RtlCopyVolatileMemory(v40, v38, (unsigned __int16)v8);
              Src.m128i_i16[0] = v8;
              Src.m128i_i16[1] = v8;
              Src.m128i_i64[1] = (__int64)ThreadInformation + 16;
              v116 = Src;
              if ( PreviousMode )
              {
                v103 = Src;
                RtlWriteULongToUser(ThreadInformation, _mm_cvtsi128_si32(Src));
                RtlWriteULong64ToUser((_QWORD *)ThreadInformation + 1, (__int64)ThreadInformation + 16);
              }
              else
              {
                *(_DWORD *)ThreadInformation = Src.m128i_i32[0];
                *((_QWORD *)ThreadInformation + 1) = (char *)ThreadInformation + 16;
              }
              v39 = CycleTimeStamp;
              LODWORD(v8) = v91;
            }
            if ( ReturnLength )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(ReturnLength, v39);
              else
                *ReturnLength = v39;
            }
          }
          if ( v88 )
            PspUnlockThreadSecurityShared((__int64)v25, CurrentThread);
          if ( !v89 )
            return v8;
          goto LABEL_103;
        case ThreadSelectedCpuSets:
          if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0x100 )
            return -1073741820;
          v81 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  2048,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          if ( v81 >= 0 )
          {
            v82 = 8 * KeQueryCpuSetsThread((__int64)Thread, (char *)&v129, v80);
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            if ( ReturnLength )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(ReturnLength, v82);
              else
                *ReturnLength = v82;
            }
            if ( v82 >= ThreadInformationLength )
              v82 = ThreadInformationLength;
            if ( PreviousMode )
              RtlCopyToUser(ThreadInformation, &v129, v82);
            else
              RtlCopyVolatileMemory(ThreadInformation, &v129, v82);
          }
          return v81;
        case ThreadSystemThreadInformation:
          if ( ThreadInformationLength != 80 )
            return -1073741820;
          v107 = 0;
          v109 = 0uLL;
          v115 = 0;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v74 = result;
          if ( result >= 0 )
          {
            v75 = Thread;
            KeQueryValuesThread((__int64)Thread, (__int64)&v104);
            ThreadStartAddress = PsQueryThreadStartAddress((__int64)v75, 1);
            v113 = BYTE8(v104);
            v114 = BYTE9(v104);
            v111 = SBYTE11(v104);
            v110 = SBYTE10(v104);
            v106 = v104;
            v105[0] = KeMaximumIncrement * (unsigned __int64)v75->SchedulerApc.SpareLong0;
            v105[1] = KeMaximumIncrement * (unsigned __int64)v75->UserTime;
            v105[2] = *(_QWORD *)&v75[1].Header.Lock;
            SpareLong = v75->WaitBlock[0].SpareLong;
            v109 = *(_OWORD *)&v75[1].CycleTime;
            if ( MmIsUserAddress(ThreadStartAddress) )
              v8 = ThreadStartAddress;
            v108 = v8;
            if ( PreviousMode )
              RtlCopyToUser(ThreadInformation, v105, 0x50uLL);
            else
              RtlCopyVolatileMemory(ThreadInformation, v105, 0x50uLL);
            if ( ReturnLength )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(ReturnLength, 80);
              else
                *ReturnLength = 80;
            }
            ObfDereferenceObjectWithTag(v75, 0x79517350u);
            return v74;
          }
          return result;
        case ThreadActualGroupAffinity:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v41 = result;
          if ( result < 0 )
            return result;
          v77 = Thread;
          KeQueryPrimaryGroupAffinityThread((__int64)Thread, (__int64)&v119);
          if ( PreviousMode )
            RtlCopyToUser(ThreadInformation, &v119, 0x10uLL);
          else
            RtlCopyVolatileMemory(ThreadInformation, &v119, 0x10uLL);
          if ( ReturnLength )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ReturnLength, 16);
            else
              *ReturnLength = 16;
          }
LABEL_378:
          ObfDereferenceObjectWithTag(v77, 0x79517350u);
          return v41;
        case ThreadDynamicCodePolicyInfo:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v27 = result;
          if ( result < 0 )
            return result;
          v28 = Thread;
          if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x40000) != 0 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ThreadInformation, 1);
            else
              *(_DWORD *)ThreadInformation = 1;
          }
          else if ( PreviousMode )
          {
            RtlWriteULongToUser(ThreadInformation, 0);
          }
          else
          {
            *(_DWORD *)ThreadInformation = 0;
          }
          if ( !ReturnLength )
            goto LABEL_113;
          if ( PreviousMode )
            goto LABEL_286;
          *ReturnLength = 4;
          goto LABEL_113;
        case ThreadExplicitCaseSensitivity:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v27 = result;
          if ( result < 0 )
            return result;
          v28 = Thread;
          if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x80000) != 0 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ThreadInformation, 1);
            else
              *(_DWORD *)ThreadInformation = 1;
          }
          else if ( PreviousMode )
          {
            RtlWriteULongToUser(ThreadInformation, 0);
          }
          else
          {
            *(_DWORD *)ThreadInformation = 0;
          }
          if ( !ReturnLength )
            goto LABEL_113;
          if ( PreviousMode )
LABEL_286:
            RtlWriteULongToUser(ReturnLength, 4);
          else
            *ReturnLength = 4;
          goto LABEL_113;
        case ThreadWorkOnBehalfTicket:
          LODWORD(CycleTimeStamp) = 0;
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          if ( BugCheckParameter1 != -2LL )
            goto LABEL_332;
          Src = 0LL;
          WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &CycleTimeStamp);
          if ( WorkOnBehalfThread )
          {
            PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &Src);
            if ( (_DWORD)CycleTimeStamp )
              ObfDereferenceObject(v47);
          }
          else
          {
            PsEncodeThreadWorkOnBehalfTicket((__int64)CurrentThread, &Src);
            Src.m128i_i32[2] |= 1u;
          }
          if ( PreviousMode )
            RtlCopyToUser(ThreadInformation, &Src, 0x10uLL);
          else
            RtlCopyVolatileMemory(ThreadInformation, &Src, 0x10uLL);
          if ( ReturnLength )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ReturnLength, 16);
            else
              *ReturnLength = 16;
          }
          return 0;
        case ThreadSubsystemInformation:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048,
                     (__int64)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v72 = result;
          if ( result < 0 )
            return result;
          v73 = Thread;
          if ( *(_QWORD *)&Thread[1].WaitBlockFill11[112] )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ThreadInformation, PsAltSystemCallRegistrationLock.SystemCallNumber);
            else
              *(_DWORD *)ThreadInformation = PsAltSystemCallRegistrationLock.SystemCallNumber;
          }
          else if ( PreviousMode )
          {
            RtlWriteULongToUser(ThreadInformation, 0);
          }
          else
          {
            *(_DWORD *)ThreadInformation = 0;
          }
          if ( ReturnLength )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(ReturnLength, 4);
            else
              *ReturnLength = 4;
          }
LABEL_346:
          ObfDereferenceObjectWithTag(v73, 0x79517350u);
          return v72;
        case ThreadPowerThrottlingState:
          if ( ThreadInformationLength < 4 )
          {
            if ( ReturnLength )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(ReturnLength, 12);
              else
                *ReturnLength = 12;
            }
            return -1073741820;
          }
          else
          {
            if ( PreviousMode )
              RtlCopyFromUser(v117, ThreadInformation, 0xCuLL);
            else
              RtlCopyVolatileMemory(v117, ThreadInformation, 0xCuLL);
            if ( LODWORD(v117[0]) == 1 )
            {
              if ( ReturnLength )
              {
                if ( PreviousMode )
                  RtlWriteULongToUser(ReturnLength, 12);
                else
                  *ReturnLength = 12;
              }
              if ( ThreadInformationLength == 12 )
              {
                result = ObpReferenceObjectByHandleWithTag(
                           BugCheckParameter1,
                           64,
                           (__int64)PsThreadType,
                           PreviousMode,
                           0x79517350u,
                           &Thread,
                           0LL,
                           0LL);
                v30 = result;
                if ( result >= 0 )
                {
                  v31 = Thread;
                  ThreadPpmPolicy = PspGetThreadPpmPolicy(Thread);
                  if ( LODWORD(v117[0]) == 1 )
                  {
                    if ( ThreadPpmPolicy != 2 && ThreadPpmPolicy && (v33 = ThreadPpmPolicy - 1) != 0 )
                    {
                      v34 = v33 - 2;
                      if ( v34 )
                      {
                        if ( v34 == 5 )
                        {
                          HIDWORD(v117[0]) = 1;
                          LODWORD(v117[1]) = 1;
                        }
                      }
                      else
                      {
                        *(_QWORD *)((char *)v117 + 4) = 1LL;
                      }
                    }
                    else
                    {
                      *(_QWORD *)((char *)v117 + 4) = 0LL;
                    }
                    if ( PreviousMode )
                      RtlCopyToUser(ThreadInformation, v117, 0xCuLL);
                    else
                      RtlCopyVolatileMemory(ThreadInformation, v117, 0xCuLL);
                    v30 = 0;
                    v91 = 0;
                  }
                  ObfDereferenceObjectWithTag(v31, 0x79517350u);
                  return v30;
                }
              }
              else
              {
                return -1073741820;
              }
            }
            else
            {
              return -1073741811;
            }
          }
          return result;
        case ThreadSchedulerSharedDataSlot:
          if ( ThreadInformationLength != 8 )
            return -1073741820;
          v27 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  64,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          v28 = Thread;
          if ( v27 < 0 )
            goto LABEL_391;
          CycleTimeStamp = 0LL;
          v27 = PspSchedulerSharedDataRegionSlotRetrieve(Thread, &CycleTimeStamp);
          if ( v27 < 0 )
            goto LABEL_391;
          if ( PreviousMode )
            RtlWriteULong64ToUser(ThreadInformation, CycleTimeStamp);
          else
            *(_QWORD *)ThreadInformation = CycleTimeStamp;
          if ( !ReturnLength )
            goto LABEL_391;
          if ( PreviousMode )
            goto LABEL_388;
          *ReturnLength = 8;
          goto LABEL_391;
        case ThreadIndexInformation:
          if ( ThreadInformationLength != 8 )
            return -1073741820;
          v27 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  2048,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          v28 = Thread;
          if ( v27 < 0 )
            goto LABEL_391;
          LODWORD(BugCheckParameter1) = 0;
          LODWORD(CycleTimeStamp) = 0;
          v27 = PspQueryThreadIndexInformation(Thread, &BugCheckParameter1, &CycleTimeStamp);
          if ( v27 < 0 )
            goto LABEL_391;
          if ( PreviousMode )
            RtlWriteULongToUser(ThreadInformation, BugCheckParameter1);
          else
            *(_DWORD *)ThreadInformation = BugCheckParameter1;
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)ThreadInformation + 1, CycleTimeStamp);
          else
            *((_DWORD *)ThreadInformation + 1) = CycleTimeStamp;
          if ( !ReturnLength )
            goto LABEL_391;
          if ( PreviousMode )
LABEL_388:
            RtlWriteULongToUser(ReturnLength, 8);
          else
            *ReturnLength = 8;
LABEL_391:
          if ( v28 )
LABEL_113:
            ObfDereferenceObjectWithTag(v28, 0x79517350u);
          goto LABEL_114;
        default:
          return -1073741821;
      }
      return result;
    }
    if ( ThreadInformationLength == 48 )
    {
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 2048,
                 (__int64)PsThreadType,
                 PreviousMode,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v18 = Thread;
        if ( (unsigned __int8)Thread->Header.SignalState )
          ThreadExitStatus = PsGetThreadExitStatus(Thread);
        else
          ThreadExitStatus = 259;
        Teb = v18->Teb;
        if ( (IoThreadToProcess(v18)->SecureState.EntireField & 1) != 0 )
        {
          memset_0(v126, 0, 0x68uLL);
          SecureThreadCookie = v18->SecureThreadCookie;
          v128 = v18;
          if ( (int)VslpEnterIumSecureMode(2u, 0xDu, 0, (__int64)v126) >= 0 )
            Teb = v128;
        }
        v98 = *(_OWORD *)&v18[1].CycleTime;
        v21 = v18->UserAffinityPrimaryGroup;
        UserAffinity = v18->UserAffinity;
        if ( (unsigned __int16)v21 < UserAffinity->Count )
          v8 = UserAffinity->Bitmap[v21];
        v99 = v8;
        Priority = v18->Priority;
        BasePriorityThread = KeQueryBasePriorityThread((__int64)v18, v19, v20);
        ObfDereferenceObjectWithTag(v18, 0x79517350u);
        if ( PreviousMode )
          RtlCopyToUser(ThreadInformation, &ThreadExitStatus, 0x30uLL);
        else
          RtlCopyVolatileMemory(ThreadInformation, &ThreadExitStatus, 0x30uLL);
        if ( ReturnLength )
        {
          if ( PreviousMode )
            RtlWriteULongToUser(ReturnLength, 48);
          else
            *ReturnLength = 48;
        }
        return 0;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ThreadInformationLength != 16 )
    return -1073741820;
  v13 = BugCheckParameter1;
  if ( BugCheckParameter1 == -2LL )
  {
    Thread = CurrentThread;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               2048,
               (__int64)PsThreadType,
               PreviousMode,
               0x79517350u,
               &Thread,
               0LL,
               0LL);
    LODWORD(v8) = result;
    if ( result < 0 )
      return result;
    CurrentThread = Thread;
  }
  v14 = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
  if ( PreviousMode )
    RtlWriteULong64ToUser(ThreadInformation, v14);
  else
    *(_QWORD *)ThreadInformation = v14;
  if ( PreviousMode )
    RtlWriteULong64ToUser((_QWORD *)ThreadInformation + 1, CycleTimeStamp);
  else
    *((_QWORD *)ThreadInformation + 1) = CycleTimeStamp;
  if ( ReturnLength )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(ReturnLength, 16);
    else
      *ReturnLength = 16;
  }
  if ( v13 != -2LL )
  {
    v15 = CurrentThread;
LABEL_29:
    ObfDereferenceObjectWithTag(v15, 0x79517350u);
  }
  return v8;
}
