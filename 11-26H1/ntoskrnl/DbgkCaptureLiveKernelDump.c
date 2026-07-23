/*
 * XREFs of DbgkCaptureLiveKernelDump @ 0x1405B6A88
 * Callers:
 *     NtSystemDebugControl @ 0x14084A9E0 (NtSystemDebugControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     DbgkpWerAllocatePool @ 0x14077DF8C (DbgkpWerAllocatePool.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     DbgkpWerFreePool @ 0x14078EF30 (DbgkpWerFreePool.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140929E80 (ObReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointerWithTag @ 0x140AE0A60 (ObOpenObjectByPointerWithTag.c)
 *     DbgkpWerIsFullLiveDumpDisabled @ 0x140B43FCC (DbgkpWerIsFullLiveDumpDisabled.c)
 */

__int64 __fastcall DbgkCaptureLiveKernelDump(__int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // bl
  PVOID v4; // r13
  HANDLE v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *Pool; // rax
  __int64 v8; // rsi
  unsigned int Status; // ebx
  void *v10; // rcx
  NTSTATUS v11; // eax
  void *v12; // rcx
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  __int64 v16; // rax
  int ULongFromUser; // eax
  void *v18; // rdx
  int v19; // eax
  KPROCESSOR_MODE v20; // [rsp+40h] [rbp-A8h]
  int FileInformation; // [rsp+44h] [rbp-A4h] BYREF
  HANDLE FileHandle; // [rsp+48h] [rbp-A0h] BYREF
  PVOID v23; // [rsp+50h] [rbp-98h] BYREF
  int v24; // [rsp+58h] [rbp-90h]
  PVOID Object[2]; // [rsp+68h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-70h] BYREF
  _DWORD v27[12]; // [rsp+88h] [rbp-60h] BYREF

  FileInformation = 0;
  IoStatusBlock = 0LL;
  memset(v27, 0, sizeof(v27));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  if ( !a1 )
    return 3221225485LL;
  if ( (unsigned __int8)DbgkpWerIsFullLiveDumpDisabled() )
  {
    DbgPrintEx(5u, 1u, "DBGK: Full Live Kernel Dumps are disabled. Failing request.\n");
    return 3221227524LL;
  }
  Object[0] = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  v5 = 0LL;
  FileHandle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange((volatile __int32 *)&EmpParseLock.TrapFrame, 1) == 1 )
  {
    KeLeaveCriticalRegion();
    return 3221226029LL;
  }
  Pool = (_DWORD *)DbgkpWerAllocatePool(56LL);
  v8 = (__int64)Pool;
  Object[1] = Pool;
  if ( Pool )
  {
    *Pool = 2;
    Pool[1] = 56;
    v10 = *(void **)(a1 + 48);
    if ( v10 )
    {
      v11 = ObReferenceObjectByHandleWithTag(
              v10,
              0x100001u,
              (POBJECT_TYPE)ExEventObjectType,
              PreviousMode,
              0x57676244u,
              Object,
              0LL);
      Status = v11;
      if ( v11 < 0 )
      {
        DbgPrintEx(5u, 1u, "DBGK: Invalid event handle %p, status 0x%X\n", *(const void **)(a1 + 48), v11);
        goto LABEL_51;
      }
      PreviousMode = v20;
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x10) != 0 && (!*(_QWORD *)(a1 + 64) || *(_DWORD *)a1 < 2u || *(_DWORD *)(a1 + 60)) )
    {
      Status = -1073741811;
      DbgPrintEx(
        5u,
        1u,
        "DBGK: Requested selective dump with invalid parameters: Version %d, Flags: 0x%X, Control Structure: %p\n",
        *(_DWORD *)a1,
        *(_DWORD *)(a1 + 60),
        *(const void **)(a1 + 64));
      goto LABEL_51;
    }
    v12 = *(void **)(a1 + 40);
    if ( !v12 )
    {
LABEL_19:
      Status = -1073741811;
      goto LABEL_51;
    }
    v13 = ObReferenceObjectByHandleWithTag(
            v12,
            2u,
            (POBJECT_TYPE)IoFileObjectType,
            PreviousMode,
            0x57676244u,
            &v23,
            0LL);
    Status = v13;
    if ( v13 < 0 )
    {
      DbgPrintEx(
        5u,
        1u,
        "DBGK: Invalid file handle %p, ObReferenceObjectByHandleWithTag returns status 0x%X\n",
        *(const void **)(a1 + 40),
        v13);
      v4 = v23;
      goto LABEL_51;
    }
    v4 = v23;
    v14 = ObOpenObjectByPointerWithTag(
            v23,
            0x200u,
            0LL,
            2u,
            (POBJECT_TYPE)IoFileObjectType,
            0,
            0x57676244u,
            &FileHandle);
    Status = v14;
    if ( v14 < 0 )
    {
      DbgPrintEx(5u, 1u, "DBGK: ObOpenObjectByPointerWithTag failed for file %p, status 0x%X\n", v4, v14);
      v5 = FileHandle;
      goto LABEL_51;
    }
    v5 = FileHandle;
    v15 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 4u, FileModeInformation);
    Status = v15;
    if ( v15 < 0 )
    {
      DbgPrintEx(5u, 1u, "DBGK: ZwQueryInformationFile failed for dump file, status 0x%X\n", (unsigned int)v15);
      goto LABEL_51;
    }
    Status = IoStatusBlock.Status;
    if ( IoStatusBlock.Status < 0 )
    {
      DbgPrintEx(
        5u,
        1u,
        "DBGK: ZwQueryInformationFile IoStatusBlock.Status is failure, status 0x%X\n",
        (unsigned int)IoStatusBlock.Status);
      goto LABEL_51;
    }
    if ( (FileInformation & 0x30) == 0 )
    {
      Status = -1073741811;
      DbgPrintEx(5u, 1u, "DBGK: File was not opened for synchronous access.\n");
      goto LABEL_51;
    }
    *(_QWORD *)(v8 + 8) = v5;
    *(PVOID *)(v8 + 16) = Object[0];
    if ( (*(_DWORD *)(a1 + 56) & 4) != 0 )
      *(_DWORD *)(v8 + 24) |= 4u;
    if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
      *(_DWORD *)(v8 + 24) |= 0x10u;
    if ( (*(_DWORD *)(a1 + 56) & 0x10) != 0 )
    {
      *(_DWORD *)(v8 + 24) |= 0x20u;
      v24 = 0;
      v16 = *(_QWORD *)(a1 + 64);
      if ( v20 )
        ULongFromUser = RtlReadULongFromUser(v16 + 4);
      else
        ULongFromUser = *(_DWORD *)(v16 + 4);
      v24 = ULongFromUser;
      if ( ULongFromUser != 48 )
        goto LABEL_19;
      v18 = *(void **)(a1 + 64);
      if ( v20 )
        RtlCopyFromUser(v27, v18, 0x30uLL);
      else
        RtlCopyVolatileMemory(v27, v18, 0x30uLL);
      if ( v27[1] != 48 )
        goto LABEL_19;
      *(_QWORD *)(v8 + 48) = v27;
    }
    if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
      *(_DWORD *)(v8 + 28) |= 1u;
    if ( (*(_DWORD *)(a1 + 60) & 2) != 0 )
      *(_DWORD *)(v8 + 28) |= 2u;
    DbgPrintEx(5u, 3u, "DBGK: Calling IoCaptureLiveDump\n");
    v19 = IoCaptureLiveDump(
            *(_DWORD *)(a1 + 4),
            *(_QWORD *)(a1 + 8),
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 24),
            *(struct _KEVENT **)(a1 + 32),
            v8,
            0LL);
    Status = v19;
    if ( v19 < 0 )
      DbgPrintEx(5u, 0, "DBGK: IoCaptureLiveDump failed, status 0x%X\n", v19);
    goto LABEL_51;
  }
  DbgPrintEx(5u, 0, "DBGK: Could not allocate IoLivedumpControl\n");
  Status = -1073741801;
LABEL_51:
  if ( v5 )
    ZwClose(v5);
  if ( Object[0] )
    ObfDereferenceObjectWithTag(Object[0], 0x57676244u);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x57676244u);
  if ( v8 )
    DbgkpWerFreePool(v8);
  _InterlockedExchange((volatile __int32 *)&EmpParseLock.TrapFrame, 0);
  KeLeaveCriticalRegion();
  return Status;
}
