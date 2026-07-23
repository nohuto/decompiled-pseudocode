/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x140994890
 * Callers:
 *     DifNtUnmapViewOfSectionExWrapper @ 0x1406942D0 (DifNtUnmapViewOfSectionExWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiReadVadFlags2 @ 0x1404739E0 (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409950D0 (MiUnmapViewOfSectionPrepare.c)
 *     DbgkUnMapViewOfSection @ 0x140995428 (DbgkUnMapViewOfSection.c)
 *     PfCheckDeprioritizeFile @ 0x1409954E4 (PfCheckDeprioritizeFile.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiLogMapFileEvent @ 0x140AD3354 (MiLogMapFileEvent.c)
 */

NTSTATUS __cdecl NtUnmapViewOfSectionEx(HANDLE ProcessHandle, PVOID BaseAddress, ULONG Flags)
{
  int v3; // r15d
  ULONG v5; // ebx
  char PreviousMode; // si
  NTSTATUS result; // eax
  PRKPROCESS v8; // r14
  int v9; // r12d
  NTSTATUS v10; // ebx
  ULONG_PTR v11; // rsi
  ULONG_PTR v12; // rcx
  __int64 v13; // rbx
  ULONG_PTR v14; // rax
  __int64 v15; // r15
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *v17; // r10
  __int64 v18; // [rsp+40h] [rbp-39h] BYREF
  PRKPROCESS PROCESS; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-29h] BYREF
  __int64 v21; // [rsp+58h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-19h] BYREF

  PROCESS = 0LL;
  v3 = (int)BaseAddress;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741583;
  v5 = (Flags & 2) << 25;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 && !MmIsUserAddress((unsigned __int64)BaseAddress) )
    return -1073741799;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x77566D4Du,
             &PROCESS,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v8 = PROCESS;
    memset(&ApcState, 0, sizeof(ApcState));
    v9 = 0;
    BugCheckParameter2 = 0LL;
    v21 = 0LL;
    v18 = 0LL;
    if ( PROCESS != KeGetCurrentThread()->ApcState.Process )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v9 = 1;
    }
    v10 = MiUnmapViewOfSectionPrepare(
            (_DWORD)v8,
            v3,
            v5,
            (unsigned int)&BugCheckParameter2,
            (__int64)&v18,
            (__int64)&v21);
    if ( v10 >= 0 )
    {
      v11 = BugCheckParameter2;
      if ( (MiReadVadFlags(BugCheckParameter2) & 0x1C) != 4 )
      {
        if ( (MiReadVadFlags2(v12) & 2) != 0 )
        {
          v13 = **(_QWORD **)(v11 + 80);
          v14 = MiReferenceControlAreaFile(v13);
          v15 = *(_QWORD *)(v14 + 24);
          MiDereferenceControlAreaFile(v13, v14);
          CurrentThread = KeGetCurrentThread();
          v17 = CurrentThread->ApcState.Process;
          if ( (v17[1].DirectoryTableBase & 0x400000000000LL) != 0 )
            PfCheckDeprioritizeFile(
              CurrentThread->ApcState.Process,
              HIDWORD(v17[1].CpuPartitionList.Blink),
              v15,
              (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32))
            - (*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32))
            + 1);
        }
        if ( (PerfGlobalGroupMask & 0x8000) != 0 && *(_QWORD *)(v11 + 80) )
          MiLogMapFileEvent(v11, 1062LL);
        v12 = v11;
      }
      MiDeleteVad(v12);
      v10 = 0;
    }
    if ( v9 )
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    if ( v10 >= 0 )
    {
      if ( v21 )
        DbgkUnMapViewOfSection(v8, v21);
    }
    ObfDereferenceObjectWithTag(v8, 0x77566D4Du);
    return v10;
  }
  return result;
}
