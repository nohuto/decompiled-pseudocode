/*
 * XREFs of NtQueryInformationThread @ 0x140A1F330
 * Callers:
 *     DifNtQueryInformationThreadWrapper @ 0x140683470 (DifNtQueryInformationThreadWrapper.c)
 * Callees:
 *     KeQueryTotalCycleTimeThread @ 0x14021AB70 (KeQueryTotalCycleTimeThread.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     PsGetEffectiveContainerId @ 0x14026E950 (PsGetEffectiveContainerId.c)
 *     PspUnlockThreadSecurityShared @ 0x140271DC0 (PspUnlockThreadSecurityShared.c)
 *     KeQueryBasePriorityThread @ 0x14029BF80 (KeQueryBasePriorityThread.c)
 *     KeQueryValuesThread @ 0x1402BAA70 (KeQueryValuesThread.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     PsGetPagePriorityThread @ 0x1403825F0 (PsGetPagePriorityThread.c)
 *     PsQueryThreadStartAddress @ 0x140418630 (PsQueryThreadStartAddress.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140427F74 (KeSetIdealProcessorThreadByNumber.c)
 *     PspLockThreadSecurityShared @ 0x14044ADE0 (PspLockThreadSecurityShared.c)
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     PsGetWorkOnBehalfThread @ 0x14045F7E0 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x1404703A0 (IoThreadToProcess.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x140476D00 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     MmGetDefaultPagePriority @ 0x1404B6960 (MmGetDefaultPagePriority.c)
 *     KeQueryUserAffinityThread @ 0x1404C9A3C (KeQueryUserAffinityThread.c)
 *     KeQueryTotalSuspendCountThread @ 0x1404D5BDC (KeQueryTotalSuspendCountThread.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404E6E10 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x140507A18 (KeQueryCpuSetsThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x1405306C0 (xKdEnumerateDebuggingDevices.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspQueryThreadIndexInformation @ 0x1407798A0 (PspQueryThreadIndexInformation.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlCopyToUserFromUser @ 0x14077F2E8 (RtlCopyToUserFromUser.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PspWow64GetContextThread @ 0x140A214E8 (PspWow64GetContextThread.c)
 *     PsGetThreadExitStatus @ 0x140A219D0 (PsGetThreadExitStatus.c)
 *     PspQueryLastCallThread @ 0x140A21A18 (PspQueryLastCallThread.c)
 *     PspGetThreadPpmPolicy @ 0x140A21B88 (PspGetThreadPpmPolicy.c)
 *     PspSchedulerSharedDataRegionSlotRetrieve @ 0x140A21BDC (PspSchedulerSharedDataRegionSlotRetrieve.c)
 *     MiCopyVirtualMemory @ 0x140A22370 (MiCopyVirtualMemory.c)
 */

__int64 __fastcall NtQueryInformationThread(
        ULONG_PTR a1,
        int a2,
        volatile void **a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned __int64 v8; // rsi
  PETHREAD CurrentThread; // r13
  unsigned __int8 PreviousMode; // r12
  int v11; // eax
  int ULongFromUser; // eax
  ULONG_PTR v13; // rdi
  ULONG64 v14; // rax
  PETHREAD v15; // rcx
  __int64 result; // rax
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
  int v27; // r15d
  PETHREAD v28; // rdi
  int v29; // edx
  unsigned int v30; // ebx
  PETHREAD v31; // rdi
  int ThreadPpmPolicy; // eax
  int v33; // eax
  int v34; // eax
  __int64 v35; // r8
  struct _KLOCK_ENTRIES *v36; // r9
  __int64 v37; // rax
  WCHAR *v38; // rdx
  unsigned int v39; // eax
  void *v40; // rcx
  unsigned int v41; // edi
  struct _LIST_ENTRY *Blink; // rsi
  int v43; // esi
  int v44; // edi
  unsigned int v45; // eax
  unsigned int v46; // ebx
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
  _QWORD *v57; // rcx
  char UCharFromUser; // al
  _BYTE *v59; // rcx
  __int16 UShortFromUser; // ax
  _WORD *v61; // rcx
  int v62; // eax
  _DWORD *v63; // rcx
  size_t v64; // r8
  void *v65; // rcx
  int *v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // r8
  int TotalSuspendCountThread; // eax
  __int64 UserAffinityPrimaryGroup; // rax
  int v71; // eax
  unsigned int v72; // edi
  PETHREAD v73; // r15
  unsigned int v74; // r15d
  PETHREAD v75; // r13
  unsigned __int64 ThreadStartAddress; // rdi
  PETHREAD v77; // rsi
  char v78; // al
  int DefaultPagePriority; // eax
  int v80; // r8d
  int v81; // r13d
  unsigned int v82; // edi
  int v83; // edi
  PETHREAD v84; // rsi
  char v85; // al
  PETHREAD Thread; // [rsp+48h] [rbp-3F0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-3E8h] BYREF
  char v88; // [rsp+58h] [rbp-3E0h]
  char v89; // [rsp+59h] [rbp-3DFh]
  unsigned __int64 CycleTimeStamp; // [rsp+60h] [rbp-3D8h] BYREF
  int v91; // [rsp+68h] [rbp-3D0h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+6Ch] [rbp-3CCh] BYREF
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

  BugCheckParameter1 = a1;
  Src.m128i_i64[0] = a1;
  v103.m128i_i64[0] = (__int64)a5;
  v96 = 0;
  v8 = 0LL;
  v116.m128i_i64[0] = 0LL;
  v120 = 0LL;
  v121 = 0;
  v119 = 0LL;
  *(_OWORD *)Address = 0LL;
  memset(v117, 0, 12);
  ProcNumber = 0;
  Thread = 0LL;
  memset_0(&v129.8, 0, sizeof(v129.8));
  CycleTimeStamp = 0LL;
  v104 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v93 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( a2 == 38 )
    {
      v11 = 8;
    }
    else if ( a2 == 49 )
    {
      v11 = 4;
    }
    else
    {
      v11 = 1;
      if ( a4 >= 4 )
        v11 = 4;
    }
    if ( a4 && ((v11 - 1) & (unsigned int)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a5 )
    {
      ULongFromUser = RtlReadULongFromUser(a5);
      RtlWriteULongToUser(a5, ULongFromUser);
    }
  }
  v96 = 0;
  v98 = 0LL;
  if ( a2 != 23 )
  {
    if ( a2 )
    {
      switch ( a2 )
      {
        case 1:
          if ( a4 != 32 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( (int)result < 0 )
            return result;
          v124 = (unsigned int)KeMaximumIncrement * (unsigned __int64)Thread->SchedulerApc.SpareLong0;
          v125 = (unsigned int)KeMaximumIncrement * (unsigned __int64)Thread->UserTime;
          v122 = *(_QWORD *)&Thread[1].Header.Lock;
          if ( (unsigned __int8)Thread->Header.SignalState )
            Flink = Thread[1].Header.WaitListHead.Flink;
          else
            Flink = 0LL;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlCopyToUser(a3, &v122, 0x20uLL);
          else
            RtlCopyVolatileMemory(a3, &v122, 0x20uLL);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 32);
            else
              *a5 = 32;
          }
          return 0LL;
        case 6:
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     64LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( (int)result < 0 )
            return result;
          v45 = xKdEnumerateDebuggingDevices();
          goto LABEL_227;
        case 9:
          if ( a4 != 8 )
            return 3221225476LL;
          v41 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  64LL,
                  PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          if ( (v41 & 0x80000000) != 0 )
            return v41;
          Blink = Thread[1].ApcState.ApcListHead[0].Blink;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULong64ToUser(a3, (__int64)Blink);
          else
            *a3 = Blink;
          if ( !a5 )
            return v41;
          if ( PreviousMode )
            goto LABEL_200;
          *a5 = 8;
          return v41;
        case 11:
          if ( a4 != 8 )
            return 3221225476LL;
          v41 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  64LL,
                  PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          if ( (v41 & 0x80000000) != 0 )
            return v41;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULong64ToUser(a3, 0LL);
          else
            *a3 = 0LL;
          if ( !a5 )
            return v41;
          if ( PreviousMode )
LABEL_200:
            RtlWriteULongToUser(a5, 8);
          else
            *a5 = 8;
          return v41;
        case 12:
          if ( a4 != 4 )
            return 3221225476LL;
          LOBYTE(v8) = LODWORD(CurrentThread->Process[1].CpuPartitionList.Blink) == 1;
          if ( PreviousMode )
            RtlWriteULongToUser(a3, v8);
          else
            *(_DWORD *)a3 = v8;
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 4);
            else
              *a5 = 4;
          }
          return 0LL;
        case 14:
          if ( a4 != 4 )
            return 3221225476LL;
          v41 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  2048LL,
                  PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          if ( (v41 & 0x80000000) == 0 )
          {
            v43 = (*((_DWORD *)&Thread->0 + 1) >> 3) & 1;
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            if ( PreviousMode )
              RtlWriteULongToUser(a3, v43);
            else
              *(_DWORD *)a3 = v43;
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, 4);
              else
                *a5 = 4;
            }
          }
          return v41;
        case 16:
          if ( a4 != 4 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     64LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( (int)result < 0 )
            return result;
          LOBYTE(v8) = *(_QWORD *)&Thread[1].SystemCallNumber != (_QWORD)Thread + 1344;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser(a3, v8);
          else
            *(_DWORD *)a3 = v8;
          if ( !a5 )
            return 0LL;
          if ( PreviousMode )
            goto LABEL_467;
          *a5 = 4;
          return 0LL;
        case 17:
          if ( a4 != 1 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     64LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v41 = result;
          if ( (int)result < 0 )
            return result;
          v77 = Thread;
          v78 = (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 4) != 0;
          if ( PreviousMode )
            RtlWriteUCharToUser(a3, v78);
          else
            *(_BYTE *)a3 = v78;
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 1);
            else
              *a5 = 1;
          }
          goto LABEL_378;
        case 18:
          if ( a4 != 4 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     64LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( (int)result < 0 )
            return result;
          v83 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 5) & 1;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser(a3, v83);
          else
            *(_DWORD *)a3 = v83;
          if ( !a5 )
            return 0LL;
          if ( PreviousMode )
            goto LABEL_467;
          *a5 = 4;
          return 0LL;
        case 20:
          if ( a4 != 4 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( (int)result < 0 )
            return result;
          v44 = *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser(a3, v44);
          else
            *(_DWORD *)a3 = v44;
          if ( !a5 )
            return 0LL;
          if ( PreviousMode )
            goto LABEL_467;
          *a5 = 4;
          return 0LL;
        case 21:
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     8LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( (int)result < 0 )
            return result;
          v45 = PspQueryLastCallThread((_DWORD)Thread, (_DWORD)a3, a4, (_DWORD)a5, PreviousMode);
LABEL_227:
          v46 = v45;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          return v46;
        case 22:
        case 54:
          if ( a4 != 4 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v27 = result;
          if ( (int)result < 0 )
            return result;
          LODWORD(CycleTimeStamp) = 0;
          v28 = Thread;
          v29 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
          LODWORD(CycleTimeStamp) = v29;
          if ( PreviousMode )
            RtlWriteULongToUser(a3, v29);
          else
            RtlCopyVolatileMemory(a3, &CycleTimeStamp, 4uLL);
          if ( !a5 )
            goto LABEL_113;
          if ( PreviousMode )
            goto LABEL_286;
          *a5 = 4;
          goto LABEL_113;
        case 24:
        case 55:
          if ( a4 != 4 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          LODWORD(v8) = result;
          if ( (int)result < 0 )
            return result;
          v24 = a2 == 24;
          v25 = Thread;
          if ( v24 )
            PagePriorityThread = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
          else
            PagePriorityThread = PsGetPagePriorityThread((__int64)Thread);
          if ( PreviousMode )
            RtlWriteULongToUser(a3, PagePriorityThread);
          else
            *(_DWORD *)a3 = PagePriorityThread;
          if ( !a5 )
            goto LABEL_103;
          if ( PreviousMode )
            goto LABEL_424;
          *a5 = 4;
          goto LABEL_103;
        case 25:
          if ( a4 != 4 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( (int)result < 0 )
            return result;
          BasePriority = Thread->BasePriority;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser(a3, BasePriority);
          else
            *(_DWORD *)a3 = BasePriority;
          if ( !a5 )
            return 0LL;
          if ( PreviousMode )
            goto LABEL_467;
          *a5 = 4;
          return 0LL;
        case 26:
        case 58:
          if ( a4 != 16 )
            return 3221225476LL;
          if ( PreviousMode )
          {
            RtlCopyFromUser(Address, a3, 0x10uLL);
            ProbeForWrite(Address[0], HIDWORD(Address[1]), 1u);
            a3 = Address;
          }
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     24LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v27 = result;
          if ( (int)result < 0 )
            return result;
          v48 = Thread;
          if ( (Thread->MiscFlags & 0x400) != 0 )
          {
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            result = 3221225480LL;
          }
          else
          {
            Process = Thread->Process;
            v93 = Process;
            v50 = KeGetCurrentThread()->ApcState.Process;
            BugCheckParameter1 = (ULONG_PTR)v50;
            if ( a2 == 58 && Process != v50 )
              goto LABEL_331;
            v51 = 6256LL;
            if ( Process[1].ReadyTime )
            {
              v51 = 12336LL;
              if ( WORD2(Process[3].PerProcessorCycleTimes) == 0x8664 )
                v51 = 14448LL;
            }
            CycleTimeStamp = (unsigned __int64)a3 + 12;
            v52 = *((unsigned int *)a3 + 3);
            if ( (_DWORD)v52 && (v53 = *((unsigned int *)a3 + 2), v53 < v51) && v52 <= v51 - v53 )
            {
              Src.m128i_i64[0] = (__int64)&Thread[1].WaitStatus;
              if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
              {
                v54 = (char *)v48->Teb + *((unsigned int *)a3 + 2);
                if ( v93 == (void *)BugCheckParameter1 )
                {
                  v55 = *(_DWORD *)CycleTimeStamp;
                  if ( a2 == 58 )
                  {
                    if ( v55 == 1 )
                    {
                      UCharFromUser = RtlReadUCharFromUser((char *)v48->Teb + *((unsigned int *)a3 + 2));
                      v59 = *a3;
                      if ( PreviousMode )
                        RtlWriteUCharToUser(v59, UCharFromUser);
                      else
                        *v59 = UCharFromUser;
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
                          ULong64FromUser = RtlReadULong64FromUser((char *)v48->Teb + *((unsigned int *)a3 + 2));
                          v57 = *a3;
                          if ( PreviousMode )
                            RtlWriteULong64ToUser(v57, ULong64FromUser);
                          else
                            *v57 = ULong64FromUser;
                        }
                      }
                      else
                      {
                        v62 = RtlReadULongFromUser((unsigned int *)((char *)v48->Teb + *((unsigned int *)a3 + 2)));
                        v63 = *a3;
                        if ( PreviousMode )
                          RtlWriteULongToUser(v63, v62);
                        else
                          *v63 = v62;
                      }
                    }
                    else
                    {
                      UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)((char *)v48->Teb
                                                                                + *((unsigned int *)a3 + 2)));
                      v61 = *a3;
                      if ( PreviousMode )
                        RtlWriteUShortToUser(v61, UShortFromUser);
                      else
                        *v61 = UShortFromUser;
                    }
                  }
                  else
                  {
                    v64 = *(unsigned int *)CycleTimeStamp;
                    v65 = (void *)*a3;
                    if ( PreviousMode )
                      RtlCopyToUserFromUser(v65, v54, v64);
                    else
                      RtlCopyFromUser(v65, v54, v64);
                  }
                  v66 = (int *)CycleTimeStamp;
                }
                else
                {
                  v66 = (int *)CycleTimeStamp;
                  v27 = MiCopyVirtualMemory(
                          (_DWORD)v93,
                          (_DWORD)v54,
                          BugCheckParameter1,
                          (unsigned int)*a3,
                          *(unsigned int *)CycleTimeStamp,
                          PreviousMode,
                          (__int64)&v116,
                          0);
                }
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Src.m128i_i64[0]);
                ObfDereferenceObjectWithTag(v48, 0x79517350u);
                if ( v27 >= 0 )
                {
                  if ( a5 )
                  {
                    v71 = *v66;
                    if ( PreviousMode )
                      RtlWriteULongToUser(a5, v71);
                    else
                      *a5 = v71;
                  }
                  v27 = 0;
                  v91 = 0;
                }
LABEL_114:
                result = (unsigned int)v27;
              }
              else
              {
                ObfDereferenceObjectWithTag(v48, 0x79517350u);
                result = 3221225547LL;
              }
            }
            else
            {
LABEL_331:
              ObfDereferenceObjectWithTag(Thread, 0x79517350u);
LABEL_332:
              result = 3221225485LL;
            }
          }
          break;
        case 29:
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     8LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( (int)result < 0 )
            return result;
          LODWORD(v8) = PspWow64GetContextThread(Thread, a3, a4, PreviousMode);
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( (v8 & 0x80000000) == 0LL && a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 716);
            else
              *a5 = 716;
          }
          return (unsigned int)v8;
        case 30:
          if ( a4 != 16 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v27 = result;
          if ( (int)result < 0 )
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
            RtlCopyToUser(a3, &v119, 0x10uLL);
          else
            RtlCopyVolatileMemory(a3, &v119, 0x10uLL);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 16);
            else
              *a5 = 16;
          }
          goto LABEL_113;
        case 32:
          if ( a4 != 1 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     64LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v41 = result;
          if ( (int)result < 0 )
            return result;
          v84 = Thread;
          v85 = Thread->WaitBlock[0].SparePtr != 0LL;
          if ( PreviousMode )
            RtlWriteUCharToUser(a3, v85);
          else
            *(_BYTE *)a3 = v85;
          ObfDereferenceObjectWithTag(v84, 0x79517350u);
          if ( (v41 & 0x80000000) == 0 && a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 1);
            else
              *a5 = 1;
          }
          return v41;
        case 33:
          if ( a4 != 4 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          if ( (int)result < 0 )
            return result;
          ProcNumber = (struct _PROCESSOR_NUMBER)0x400000;
          KeSetIdealProcessorThreadByNumber(Thread, &ProcNumber, &ProcNumber);
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( PreviousMode )
            RtlWriteULongToUser(a3, *(_DWORD *)&ProcNumber);
          else
            RtlCopyVolatileMemory(a3, &ProcNumber, 4uLL);
          if ( !a5 )
            return 0LL;
          if ( PreviousMode )
LABEL_467:
            RtlWriteULongToUser(a5, 4);
          else
            *a5 = 4;
          return 0LL;
        case 34:
          if ( !a4 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     64LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v72 = result;
          if ( (int)result < 0 )
            return result;
          v73 = Thread;
          LOBYTE(v8) = Thread->SchedulingGroup != 0LL;
          LODWORD(CycleTimeStamp) = v8;
          if ( PreviousMode )
            RtlWriteUCharToUser(a3, v8);
          else
            *(_BYTE *)a3 = v8;
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 1);
            else
              *a5 = 1;
          }
          goto LABEL_346;
        case 35:
          if ( a4 != 4 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          LODWORD(v8) = result;
          if ( (int)result < 0 )
            return result;
          v25 = Thread;
          TotalSuspendCountThread = KeQueryTotalSuspendCountThread((__int64)Thread, v67, v68);
          if ( PreviousMode )
            RtlWriteULongToUser(a3, TotalSuspendCountThread);
          else
            *(_DWORD *)a3 = TotalSuspendCountThread;
          if ( !a5 )
            goto LABEL_103;
          if ( PreviousMode )
LABEL_424:
            RtlWriteULongToUser(a5, 4);
          else
            *a5 = 4;
          goto LABEL_103;
        case 36:
          if ( a4 != 4 )
            return 3221225476LL;
          LODWORD(v8) = ObpReferenceObjectByHandleWithTag(
                          BugCheckParameter1,
                          2048LL,
                          PsThreadType,
                          PreviousMode,
                          0x79517350u,
                          &Thread,
                          0LL,
                          0LL);
          if ( (v8 & 0x80000000) != 0LL )
            return (unsigned int)v8;
          v25 = Thread;
          DefaultPagePriority = MmGetDefaultPagePriority();
          v102[0] = DefaultPagePriority;
          if ( PreviousMode )
            RtlWriteULongToUser(a3, DefaultPagePriority);
          else
            RtlCopyVolatileMemory(a3, v102, 4uLL);
          if ( !a5 )
            goto LABEL_103;
          if ( PreviousMode )
            goto LABEL_424;
          *a5 = 4;
LABEL_103:
          v15 = v25;
          goto LABEL_29;
        case 37:
          if ( a4 != 16 )
            return 3221225476LL;
          if ( BugCheckParameter1 != -2LL )
            goto LABEL_332;
          result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v120);
          v41 = result;
          if ( (int)result < 0 )
            return result;
          if ( PreviousMode )
            RtlCopyToUser(a3, &v120, 0x10uLL);
          else
            RtlCopyVolatileMemory(a3, &v120, 0x10uLL);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 16);
            else
              *a5 = 16;
          }
          return v41;
        case 38:
          v89 = 0;
          v88 = 0;
          v91 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  2048LL,
                  PsThreadType,
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
              v38 = (WCHAR *)&word_140B814F0;
            }
            v39 = (unsigned __int16)v8 + 16;
            LODWORD(CycleTimeStamp) = v39;
            if ( v39 > a4 )
            {
              LODWORD(v8) = -1073741789;
              v91 = -1073741789;
            }
            else
            {
              Src = 0LL;
              v40 = a3 + 2;
              if ( PreviousMode )
                RtlCopyToUser(v40, v38, (unsigned __int16)v8);
              else
                RtlCopyVolatileMemory(v40, v38, (unsigned __int16)v8);
              Src.m128i_i16[0] = v8;
              Src.m128i_i16[1] = v8;
              Src.m128i_i64[1] = (__int64)(a3 + 2);
              v116 = Src;
              if ( PreviousMode )
              {
                v103 = Src;
                RtlWriteULongToUser(a3, _mm_cvtsi128_si32(Src));
                RtlWriteULong64ToUser(a3 + 1, (__int64)(a3 + 2));
              }
              else
              {
                *(_DWORD *)a3 = Src.m128i_i32[0];
                a3[1] = a3 + 2;
              }
              v39 = CycleTimeStamp;
              LODWORD(v8) = v91;
            }
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, v39);
              else
                *a5 = v39;
            }
          }
          if ( v88 )
            PspUnlockThreadSecurityShared((__int64)v25, CurrentThread);
          if ( !v89 )
            return (unsigned int)v8;
          goto LABEL_103;
        case 39:
          if ( (a4 & 7) != 0 || a4 > 0x100 )
            return 3221225476LL;
          v81 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  2048LL,
                  PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          if ( v81 >= 0 )
          {
            v82 = 8 * KeQueryCpuSetsThread((__int64)Thread, (char *)&v129, v80);
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, v82);
              else
                *a5 = v82;
            }
            if ( v82 >= a4 )
              v82 = a4;
            if ( PreviousMode )
              RtlCopyToUser(a3, &v129, v82);
            else
              RtlCopyVolatileMemory(a3, &v129, v82);
          }
          return (unsigned int)v81;
        case 40:
          if ( a4 != 80 )
            return 3221225476LL;
          v107 = 0;
          v109 = 0uLL;
          v115 = 0;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v74 = result;
          if ( (int)result >= 0 )
          {
            v75 = Thread;
            KeQueryValuesThread((__int64)Thread, (__int64)&v104);
            ThreadStartAddress = PsQueryThreadStartAddress((__int64)v75, 1);
            v113 = BYTE8(v104);
            v114 = BYTE9(v104);
            v111 = SBYTE11(v104);
            v110 = SBYTE10(v104);
            v106 = v104;
            v105[0] = (unsigned int)KeMaximumIncrement * (unsigned __int64)v75->SchedulerApc.SpareLong0;
            v105[1] = (unsigned int)KeMaximumIncrement * (unsigned __int64)v75->UserTime;
            v105[2] = *(_QWORD *)&v75[1].Header.Lock;
            SpareLong = v75->WaitBlock[0].SpareLong;
            v109 = *(_OWORD *)&v75[1].CycleTime;
            if ( MmIsUserAddress(ThreadStartAddress) )
              v8 = ThreadStartAddress;
            v108 = v8;
            if ( PreviousMode )
              RtlCopyToUser(a3, v105, 0x50uLL);
            else
              RtlCopyVolatileMemory(a3, v105, 0x50uLL);
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, 80);
              else
                *a5 = 80;
            }
            ObfDereferenceObjectWithTag(v75, 0x79517350u);
            return v74;
          }
          return result;
        case 41:
          if ( a4 != 16 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v41 = result;
          if ( (int)result < 0 )
            return result;
          v77 = Thread;
          KeQueryPrimaryGroupAffinityThread((__int64)Thread, (__int64)&v119);
          if ( PreviousMode )
            RtlCopyToUser(a3, &v119, 0x10uLL);
          else
            RtlCopyVolatileMemory(a3, &v119, 0x10uLL);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 16);
            else
              *a5 = 16;
          }
LABEL_378:
          ObfDereferenceObjectWithTag(v77, 0x79517350u);
          return v41;
        case 42:
          if ( a4 != 4 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v27 = result;
          if ( (int)result < 0 )
            return result;
          v28 = Thread;
          if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x40000) != 0 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a3, 1);
            else
              *(_DWORD *)a3 = 1;
          }
          else if ( PreviousMode )
          {
            RtlWriteULongToUser(a3, 0);
          }
          else
          {
            *(_DWORD *)a3 = 0;
          }
          if ( !a5 )
            goto LABEL_113;
          if ( PreviousMode )
            goto LABEL_286;
          *a5 = 4;
          goto LABEL_113;
        case 43:
          if ( a4 != 4 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v27 = result;
          if ( (int)result < 0 )
            return result;
          v28 = Thread;
          if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x80000) != 0 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a3, 1);
            else
              *(_DWORD *)a3 = 1;
          }
          else if ( PreviousMode )
          {
            RtlWriteULongToUser(a3, 0);
          }
          else
          {
            *(_DWORD *)a3 = 0;
          }
          if ( !a5 )
            goto LABEL_113;
          if ( PreviousMode )
LABEL_286:
            RtlWriteULongToUser(a5, 4);
          else
            *a5 = 4;
          goto LABEL_113;
        case 44:
          LODWORD(CycleTimeStamp) = 0;
          if ( a4 != 16 )
            return 3221225476LL;
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
            RtlCopyToUser(a3, &Src, 0x10uLL);
          else
            RtlCopyVolatileMemory(a3, &Src, 0x10uLL);
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 16);
            else
              *a5 = 16;
          }
          return 0LL;
        case 45:
          if ( a4 != 4 )
            return 3221225476LL;
          result = ObpReferenceObjectByHandleWithTag(
                     BugCheckParameter1,
                     2048LL,
                     PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Thread,
                     0LL,
                     0LL);
          v72 = result;
          if ( (int)result < 0 )
            return result;
          v73 = Thread;
          if ( *(_QWORD *)&Thread[1].WaitBlockFill11[112] )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a3, qword_140F0A070);
            else
              *(_DWORD *)a3 = qword_140F0A070;
          }
          else if ( PreviousMode )
          {
            RtlWriteULongToUser(a3, 0);
          }
          else
          {
            *(_DWORD *)a3 = 0;
          }
          if ( a5 )
          {
            if ( PreviousMode )
              RtlWriteULongToUser(a5, 4);
            else
              *a5 = 4;
          }
LABEL_346:
          ObfDereferenceObjectWithTag(v73, 0x79517350u);
          return v72;
        case 49:
          if ( a4 < 4 )
          {
            if ( a5 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(a5, 12);
              else
                *a5 = 12;
            }
            return 3221225476LL;
          }
          else
          {
            if ( PreviousMode )
              RtlCopyFromUser(v117, a3, 0xCuLL);
            else
              RtlCopyVolatileMemory(v117, a3, 0xCuLL);
            if ( LODWORD(v117[0]) == 1 )
            {
              if ( a5 )
              {
                if ( PreviousMode )
                  RtlWriteULongToUser(a5, 12);
                else
                  *a5 = 12;
              }
              if ( a4 == 12 )
              {
                result = ObpReferenceObjectByHandleWithTag(
                           BugCheckParameter1,
                           64LL,
                           PsThreadType,
                           PreviousMode,
                           0x79517350u,
                           &Thread,
                           0LL,
                           0LL);
                v30 = result;
                if ( (int)result >= 0 )
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
                      RtlCopyToUser(a3, v117, 0xCuLL);
                    else
                      RtlCopyVolatileMemory(a3, v117, 0xCuLL);
                    v30 = 0;
                    v91 = 0;
                  }
                  ObfDereferenceObjectWithTag(v31, 0x79517350u);
                  return v30;
                }
              }
              else
              {
                return 3221225476LL;
              }
            }
            else
            {
              return 3221225485LL;
            }
          }
          return result;
        case 57:
          if ( a4 != 8 )
            return 3221225476LL;
          v27 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  64LL,
                  PsThreadType,
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
            RtlWriteULong64ToUser(a3, CycleTimeStamp);
          else
            *a3 = (volatile void *)CycleTimeStamp;
          if ( !a5 )
            goto LABEL_391;
          if ( PreviousMode )
            goto LABEL_388;
          *a5 = 8;
          goto LABEL_391;
        case 59:
          if ( a4 != 8 )
            return 3221225476LL;
          v27 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  2048LL,
                  PsThreadType,
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
            RtlWriteULongToUser(a3, BugCheckParameter1);
          else
            *(_DWORD *)a3 = BugCheckParameter1;
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)a3 + 1, CycleTimeStamp);
          else
            *((_DWORD *)a3 + 1) = CycleTimeStamp;
          if ( !a5 )
            goto LABEL_391;
          if ( PreviousMode )
LABEL_388:
            RtlWriteULongToUser(a5, 8);
          else
            *a5 = 8;
LABEL_391:
          if ( v28 )
LABEL_113:
            ObfDereferenceObjectWithTag(v28, 0x79517350u);
          goto LABEL_114;
        default:
          return 3221225475LL;
      }
      return result;
    }
    if ( a4 == 48 )
    {
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 2048LL,
                 PsThreadType,
                 PreviousMode,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( (int)result >= 0 )
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
          RtlCopyToUser(a3, &ThreadExitStatus, 0x30uLL);
        else
          RtlCopyVolatileMemory(a3, &ThreadExitStatus, 0x30uLL);
        if ( a5 )
        {
          if ( PreviousMode )
            RtlWriteULongToUser(a5, 48);
          else
            *a5 = 48;
        }
        return 0LL;
      }
      return result;
    }
    return 3221225476LL;
  }
  if ( a4 != 16 )
    return 3221225476LL;
  v13 = BugCheckParameter1;
  if ( BugCheckParameter1 == -2LL )
  {
    Thread = CurrentThread;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               2048LL,
               PsThreadType,
               PreviousMode,
               0x79517350u,
               &Thread,
               0LL,
               0LL);
    LODWORD(v8) = result;
    if ( (int)result < 0 )
      return result;
    CurrentThread = Thread;
  }
  v14 = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
  if ( PreviousMode )
    RtlWriteULong64ToUser(a3, v14);
  else
    *a3 = (volatile void *)v14;
  if ( PreviousMode )
    RtlWriteULong64ToUser(a3 + 1, CycleTimeStamp);
  else
    a3[1] = (volatile void *)CycleTimeStamp;
  if ( a5 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a5, 16);
    else
      *a5 = 16;
  }
  if ( v13 != -2LL )
  {
    v15 = CurrentThread;
LABEL_29:
    ObfDereferenceObjectWithTag(v15, 0x79517350u);
  }
  return (unsigned int)v8;
}
