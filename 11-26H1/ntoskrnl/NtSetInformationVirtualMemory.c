/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1408F7E60
 * Callers:
 *     DifNtSetInformationVirtualMemoryWrapper @ 0x1406909B0 (DifNtSetInformationVirtualMemoryWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetLargestPageIndex @ 0x1404C630C (MiGetLargestPageIndex.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     VmPrefetchVirtualAddresses @ 0x14077A3E8 (VmPrefetchVirtualAddresses.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     MiProcessRemoveFromWorkingSet @ 0x140870F0C (MiProcessRemoveFromWorkingSet.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCfgMarkValidEntries @ 0x140AA27E4 (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x140B6E518 (MiProcessVaRangesInfoClass.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  char v7; // r11
  int v8; // esi
  unsigned int ULongFromUser; // edi
  ULONG v10; // ecx
  struct _KTHREAD *CurrentThread; // rdx
  _KPROCESS *Process; // r13
  int v13; // ebx
  char PreviousMode; // r15
  ULONG_PTR v15; // r12
  NTSTATUS result; // eax
  _QWORD *PoolMm; // r15
  size_t v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 *i; // rcx
  unsigned int v21; // eax
  __int64 v22; // r8
  int v23; // edx
  int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  int v27; // ebx
  int v28; // eax
  NTSTATUS valid; // edi
  _BYTE *v30; // r14
  HANDLE v31; // rbx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rdx
  int CurrentProcessorColor; // eax
  int v36; // eax
  __int64 v37; // rdx
  unsigned int LargestPageIndex; // eax
  __int64 v39; // r8
  unsigned int v40; // ebx
  _QWORD *v41; // rax
  char v42; // [rsp+50h] [rbp-338h]
  _BYTE *P; // [rsp+58h] [rbp-330h]
  NTSTATUS v45; // [rsp+6Ch] [rbp-31Ch]
  char v46; // [rsp+70h] [rbp-318h]
  int v48; // [rsp+80h] [rbp-308h] BYREF
  PVOID Object; // [rsp+88h] [rbp-300h] BYREF
  unsigned int v50; // [rsp+90h] [rbp-2F8h] BYREF
  _KPROCESS *v51; // [rsp+98h] [rbp-2F0h]
  PVOID v52; // [rsp+A0h] [rbp-2E8h]
  HANDLE v53; // [rsp+A8h] [rbp-2E0h]
  PVOID v54; // [rsp+B0h] [rbp-2D8h] BYREF
  volatile void *Address[2]; // [rsp+B8h] [rbp-2D0h] BYREF
  void *Src[2]; // [rsp+C8h] [rbp-2C0h]
  __int64 v57; // [rsp+D8h] [rbp-2B0h]
  void *v58; // [rsp+E0h] [rbp-2A8h]
  void *v59; // [rsp+E8h] [rbp-2A0h]
  struct _KTHREAD *v60; // [rsp+F0h] [rbp-298h]
  __int128 v61; // [rsp+F8h] [rbp-290h] BYREF
  _OWORD v62[3]; // [rsp+108h] [rbp-280h] BYREF
  _BYTE v63[256]; // [rsp+140h] [rbp-248h] BYREF
  _BYTE v64[256]; // [rsp+240h] [rbp-148h] BYREF

  v58 = VirtualAddresses;
  v53 = ProcessHandle;
  v59 = VmInformation;
  Object = 0LL;
  memset(v62, 0, sizeof(v62));
  v48 = 0;
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)Src = 0LL;
  v57 = 0LL;
  v61 = 0LL;
  v54 = 0LL;
  v7 = 0;
  v46 = 0;
  v8 = 0;
  P = v63;
  v45 = 0;
  ULongFromUser = 0;
  v50 = 0;
  if ( VmInformationClass != VmRemoveFromWorkingSetInformation )
  {
    switch ( VmInformationClass )
    {
      case VmPrefetchInformation:
      case VmPagePriorityInformation:
      case VmPageDirtyStateInformation:
      case VmImageHotPatchInformation:
      case VmPhysicalContiguityInformation:
      case VmVirtualMachinePrepopulateInformation:
        break;
      case VmCfgCallTargetInformation:
        v10 = VmInformationLength;
        if ( VmInformationLength != 40 )
          return -1073741580;
        goto LABEL_5;
      case MaxVmInfoClass:
        v10 = VmInformationLength;
        if ( VmInformationLength == 16 )
          goto LABEL_5;
        return -1073741580;
      default:
        return -1073741584;
    }
  }
  if ( !VmInformation )
    return -1073741581;
  v10 = VmInformationLength;
  if ( VmInformationLength != 4 )
    return -1073741580;
  if ( VmInformationClass == VmImageHotPatchInformation )
  {
    if ( !HIDWORD(stru_140E366D8.SListFaultAddress) )
      return -1073741637;
    if ( NumberOfEntries != 1 )
      return -1073741583;
  }
LABEL_5:
  if ( NumberOfEntries - 1 > 0xFFFFFFFFFFFFFFELL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v60 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v51 = Process;
  if ( VmInformationClass == VmCfgCallTargetInformation && ((__int64)Process[4].ThreadListHead.Flink & 0x100) != 0 )
  {
    v13 = 0x40000;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v7 = 1;
    v46 = v7;
  }
  else
  {
    v13 = 0x40000;
  }
  PreviousMode = CurrentThread->PreviousMode;
  v42 = PreviousMode;
  v15 = 16 * NumberOfEntries;
  if ( 16 * NumberOfEntries && ((unsigned __int8)VirtualAddresses & 3) != 0 )
LABEL_10:
    ExRaiseDatatypeMisalignment();
  if ( VmInformationClass == VmCfgCallTargetInformation )
  {
    if ( v10 && ((unsigned __int8)VmInformation & 3) != 0 )
      goto LABEL_10;
    if ( PreviousMode )
      RtlCopyFromUser(Address, VmInformation, 0x28uLL);
    else
      RtlCopyVolatileMemory(Address, VmInformation, 0x28uLL);
    if ( !LODWORD(Address[0]) || HIDWORD(Address[0]) )
      return -1073741581;
    if ( PreviousMode )
      ProbeForWrite(Address[1], 4uLL, 4u);
    if ( LODWORD(Address[0]) && ((__int64)Src[0] & 3) != 0 )
      goto LABEL_10;
  }
  else if ( VmInformationClass == MaxVmInfoClass )
  {
    if ( v10 && ((unsigned __int8)VmInformation & 3) != 0 )
      goto LABEL_10;
    if ( PreviousMode )
      RtlCopyFromUser(&v61, VmInformation, 0x10uLL);
    else
      RtlCopyVolatileMemory(&v61, VmInformation, 0x10uLL);
  }
  else
  {
    if ( ((unsigned __int8)VmInformation & 3) != 0 )
      goto LABEL_10;
    if ( PreviousMode )
    {
      ULongFromUser = RtlReadULongFromUser((unsigned int *)VmInformation);
      v50 = ULongFromUser;
    }
    else
    {
      ULongFromUser = *(_DWORD *)VmInformation;
      v50 = *(_DWORD *)VmInformation;
    }
  }
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x66506D4Du, (__int64)&Object, 0LL, 0LL);
    v45 = result;
    if ( result < 0 )
      return result;
    Process = (_KPROCESS *)Object;
  }
  PoolMm = v64;
  v52 = v64;
  if ( NumberOfEntries > 0x10 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (_QWORD *)ExAllocatePoolMm(64LL, v15, 1917676877, CurrentProcessorColor | 0x80000000);
    v52 = PoolMm;
    if ( !PoolMm )
    {
      PoolMm = v64;
      valid = -1073741670;
      v30 = v63;
      goto LABEL_62;
    }
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
    goto LABEL_39;
  if ( LODWORD(Address[0]) > 0x10 )
  {
    v36 = MmGetCurrentProcessorColor();
    P = (_BYTE *)ExAllocatePoolMm(64LL, 16 * v37, 1917676877, v36 | 0x80000000);
    if ( !P )
    {
      v30 = v63;
      valid = -1073741670;
      goto LABEL_62;
    }
  }
  if ( !Src[1]
    || (v28 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Src[1], 0x66506D4Du, (__int64)&v54, 0LL, 0LL),
        v45 = v28,
        v28 >= 0) )
  {
LABEL_39:
    if ( v42 )
      RtlCopyFromUser(PoolMm, v58, v15);
    else
      RtlCopyVolatileMemory(PoolMm, v58, v15);
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      v18 = 16LL * LODWORD(Address[0]);
      if ( v42 )
        RtlCopyFromUser(P, Src[0], v18);
      else
        RtlCopyVolatileMemory(P, Src[0], v18);
    }
    if ( v51 != Process )
    {
      if ( (unsigned int)(VmInformationClass - 3) <= 1 )
      {
        valid = -1073741585;
        goto LABEL_61;
      }
      KiStackAttachProcess(Process, 0, (__int64)v62);
      v8 = 1;
    }
    v19 = 0LL;
    for ( i = PoolMm; i < &PoolMm[v15 / 8]; i += 2 )
    {
      v32 = i[1];
      if ( !v32
        || (v33 = *i + v32, v33 <= *i)
        || v33 > 0x7FFFFFFF0000LL
        || (v34 = v19 + (((*i & 0xFFF) + v32 + 4095) >> 12), v34 < v19) )
      {
        valid = -1073741582;
        goto LABEL_61;
      }
      v19 = v34;
    }
    if ( VmInformationClass )
    {
      switch ( VmInformationClass )
      {
        case VmPagePriorityInformation:
          if ( ULongFromUser > 5 )
            goto LABEL_105;
          v28 = MiProcessVaRangesInfoClass(
                  NumberOfEntries,
                  (_DWORD)PoolMm,
                  VmInformationClass,
                  (unsigned int)&v50,
                  (__int64)v51,
                  v42);
          goto LABEL_60;
        case VmCfgCallTargetInformation:
          v30 = P;
          if ( NumberOfEntries != 1 )
          {
            valid = -1073741582;
            goto LABEL_62;
          }
          valid = MiCfgMarkValidEntries(
                    (_DWORD)Process,
                    *PoolMm,
                    PoolMm[1],
                    (_DWORD)P,
                    Address[0],
                    (__int64)&v48,
                    v46,
                    (__int64)v54,
                    v57);
          if ( v8 )
          {
            KiUnstackDetachProcess((__int64)v62, 0);
            LOBYTE(v8) = 0;
          }
          if ( v42 )
            RtlWriteULongToUser((_DWORD *)Address[1], v48);
          else
            *(_DWORD *)Address[1] = v48;
          v31 = ProcessHandle;
          goto LABEL_63;
        case VmPageDirtyStateInformation:
          if ( ULongFromUser )
          {
            valid = -1073741581;
            goto LABEL_61;
          }
          if ( (Process[1].DirectoryTableBase & 0x1000000000LL) == 0 )
          {
LABEL_121:
            valid = -1073741637;
            goto LABEL_61;
          }
          v28 = MiProcessVaRangesInfoClass(NumberOfEntries, (_DWORD)PoolMm, VmInformationClass, 0, (__int64)v51, v42);
          goto LABEL_60;
        case VmImageHotPatchInformation:
          goto LABEL_121;
        case VmPhysicalContiguityInformation:
          LargestPageIndex = MiGetLargestPageIndex();
          v40 = LargestPageIndex;
          if ( LargestPageIndex < 3 )
          {
            v41 = (_QWORD *)(v39 + 80512 + 8LL * LargestPageIndex);
            do
            {
              if ( *v41 == ULongFromUser )
                break;
              ++v40;
              ++v41;
            }
            while ( v40 < 3 );
          }
          if ( v40 - 1 > 1 )
          {
            valid = -1073741637;
            goto LABEL_61;
          }
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v42) )
          {
            valid = -1073741727;
            goto LABEL_61;
          }
          v28 = MiProcessVaContiguityInformation(PoolMm, NumberOfEntries, v40);
          goto LABEL_60;
        case VmVirtualMachinePrepopulateInformation:
          if ( ULongFromUser )
          {
            valid = -1073741811;
            goto LABEL_61;
          }
          v28 = VmPrefetchVirtualAddresses(PoolMm, NumberOfEntries, 1);
          goto LABEL_60;
        case VmRemoveFromWorkingSetInformation:
          if ( (ULongFromUser & 0xFFFFFFFE) != 0 )
          {
            valid = -1073741581;
            goto LABEL_61;
          }
          v28 = MiProcessRemoveFromWorkingSet(NumberOfEntries, (__int64)PoolMm, ULongFromUser);
          goto LABEL_60;
        case MaxVmInfoClass:
          if ( (_DWORD)v61 || *((_QWORD *)&v61 + 1) )
          {
LABEL_105:
            valid = -1073741581;
            goto LABEL_61;
          }
          valid = MiProcessVaRangesInfoClass(
                    NumberOfEntries,
                    (_DWORD)PoolMm,
                    VmInformationClass,
                    (unsigned int)&v61,
                    (__int64)v51,
                    v42);
          if ( *((_QWORD *)&v61 + 1) && valid < 0 )
            valid = 261;
          if ( v8 )
          {
            KiUnstackDetachProcess((__int64)v62, 0);
            LOBYTE(v8) = 0;
          }
          if ( v42 )
            RtlCopyToUser(v59, &v61, 0x10uLL);
          else
            RtlCopyVolatileMemory(v59, &v61, 0x10uLL);
          v31 = ProcessHandle;
          v30 = P;
          break;
        default:
          valid = v45;
          goto LABEL_61;
      }
      goto LABEL_63;
    }
    if ( (ULongFromUser & 0xFFFFFFFE) != 0 )
    {
      valid = -1073741581;
      goto LABEL_61;
    }
    v21 = MiGetEffectivePagePriorityThread((__int64)v60) & 7;
    v23 = 131136;
    if ( v21 >= 5 )
      v23 = 0x20000;
    v24 = v21 | v23;
    v25 = v24 & 7;
    v26 = v24 | (8 * v25);
    if ( v25 < 5 )
      v26 = v26 & 0xFFFFFFC7 | 0x28;
    if ( (ULongFromUser & 1) == 0 )
      v13 = 0x4000;
    v27 = v26 | v13;
    if ( (int)PsGetIoPriorityThread(v22) <= 1 )
      v27 |= 0x400u;
    v28 = MiPrefetchVirtualMemory(
            NumberOfEntries,
            (__int64)PoolMm,
            (unsigned __int64)&Process[2].ReadyListHead.Blink,
            v27);
  }
LABEL_60:
  valid = v28;
LABEL_61:
  v30 = P;
LABEL_62:
  v31 = ProcessHandle;
LABEL_63:
  if ( (v8 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v62, 0);
  if ( v54 )
    ObfDereferenceObjectWithTag(v54, 0x66506D4Du);
  if ( v31 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Process, 0x66506D4Du);
  if ( PoolMm != (_QWORD *)v64 )
    ExFreePoolWithTag(PoolMm, 0);
  if ( v30 != v63 )
    ExFreePoolWithTag(v30, 0);
  return valid;
}
