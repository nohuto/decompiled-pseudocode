/*
 * XREFs of NtUnmapViewOfSection @ 0x140994E40
 * Callers:
 *     DifNtUnmapViewOfSectionWrapper @ 0x140694450 (DifNtUnmapViewOfSectionWrapper.c)
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

NTSTATUS __cdecl NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  int v2; // esi
  char PreviousMode; // bl
  NTSTATUS result; // eax
  PRKPROCESS v6; // rdi
  int v7; // ebp
  NTSTATUS v8; // ebx
  ULONG_PTR v9; // rsi
  ULONG_PTR v10; // rcx
  __int64 v11; // rbx
  ULONG_PTR v12; // rax
  __int64 v13; // r15
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *v15; // r10
  __int64 v16; // [rsp+40h] [rbp-88h] BYREF
  PRKPROCESS PROCESS; // [rsp+48h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-78h] BYREF
  __int64 v19; // [rsp+58h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  v2 = (int)BaseAddress;
  PROCESS = 0LL;
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
    v6 = PROCESS;
    memset(&ApcState, 0, sizeof(ApcState));
    v7 = 0;
    BugCheckParameter2 = 0LL;
    v19 = 0LL;
    v16 = 0LL;
    if ( PROCESS != KeGetCurrentThread()->ApcState.Process )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v7 = 1;
    }
    v8 = MiUnmapViewOfSectionPrepare((_DWORD)v6, v2, 0, (unsigned int)&BugCheckParameter2, (__int64)&v16, (__int64)&v19);
    if ( v8 >= 0 )
    {
      v9 = BugCheckParameter2;
      if ( (MiReadVadFlags(BugCheckParameter2) & 0x1C) != 4 )
      {
        if ( (MiReadVadFlags2(v10) & 2) != 0 )
        {
          v11 = **(_QWORD **)(v9 + 80);
          v12 = MiReferenceControlAreaFile(v11);
          v13 = *(_QWORD *)(v12 + 24);
          MiDereferenceControlAreaFile(v11, v12);
          CurrentThread = KeGetCurrentThread();
          v15 = CurrentThread->ApcState.Process;
          if ( (v15[1].DirectoryTableBase & 0x400000000000LL) != 0 )
            PfCheckDeprioritizeFile(
              CurrentThread->ApcState.Process,
              HIDWORD(v15[1].CpuPartitionList.Blink),
              v13,
              (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
            - (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
            + 1);
        }
        if ( (PerfGlobalGroupMask & 0x8000) != 0 && *(_QWORD *)(v9 + 80) )
          MiLogMapFileEvent(v9, 1062LL);
        v10 = v9;
      }
      MiDeleteVad(v10);
      v8 = 0;
    }
    if ( v7 )
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    if ( v8 >= 0 )
    {
      if ( v19 )
        DbgkUnMapViewOfSection(v6, v19);
    }
    ObfDereferenceObjectWithTag(v6, 0x77566D4Du);
    return v8;
  }
  return result;
}
