/*
 * XREFs of NtCreateWorkerFactory @ 0x140A95E40
 * Callers:
 *     DifNtCreateWorkerFactoryWrapper @ 0x1406790B0 (DifNtCreateWorkerFactoryWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KeRegisterObjectNotification @ 0x1403E2A14 (KeRegisterObjectNotification.c)
 *     KeInitializeTimer2 @ 0x14044E740 (KeInitializeTimer2.c)
 *     ExpInitializeThreadHistory @ 0x1404C37C4 (ExpInitializeThreadHistory.c)
 *     KeDisableQueueingPriorityIncrement @ 0x1404C8880 (KeDisableQueueingPriorityIncrement.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     IopFreeMiniCompletionPacket @ 0x140A82540 (IopFreeMiniCompletionPacket.c)
 *     IoAllocateMiniCompletionPacket @ 0x140A96230 (IoAllocateMiniCompletionPacket.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateWorkerFactory(
        PHANDLE WorkerFactoryHandleReturn,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE CompletionPortHandle,
        HANDLE WorkerProcessHandle,
        PVOID StartRoutine,
        PVOID StartParameter,
        ULONG MaxThreadCount,
        SIZE_T StackReserve,
        SIZE_T StackCommit)
{
  char PreviousMode; // r14
  __int64 Pool2; // rax
  __int64 v16; // rsi
  NTSTATUS inserted; // ebx
  volatile signed __int32 *v18; // rcx
  PVOID v19; // r12
  __int64 MiniCompletionPacket; // rax
  __int64 v21; // rdi
  SIZE_T v22; // rcx
  SIZE_T v23; // rcx
  void *v24; // rcx
  __int64 ULong64FromUser; // rax
  ULONG_PTR v27; // rcx
  PVOID *Object; // [rsp+20h] [rbp-88h]
  HANDLE Handle; // [rsp+58h] [rbp-50h] BYREF
  void *v30; // [rsp+68h] [rbp-40h] BYREF
  PVOID v31; // [rsp+70h] [rbp-38h] BYREF
  PVOID v32; // [rsp+78h] [rbp-30h] BYREF
  _QWORD v33[2]; // [rsp+80h] [rbp-28h] BYREF

  Handle = 0LL;
  v33[0] = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(WorkerFactoryHandleReturn);
    RtlWriteULong64ToUser(WorkerFactoryHandleReturn, ULong64FromUser);
  }
  Pool2 = ExAllocatePool2(0x41uLL);
  v16 = Pool2;
  if ( !Pool2 )
    return -1073741801;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_WORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 34) = 0;
  v31 = 0LL;
  inserted = ObReferenceObjectByHandle(CompletionPortHandle, 2u, IoCompletionObjectType, PreviousMode, &v31, 0LL);
  v18 = (volatile signed __int32 *)v31;
  *(_QWORD *)(v16 + 8) = v31;
  if ( inserted < 0 )
  {
LABEL_23:
    ExFreePoolWithTag((PVOID)v16, 0);
    return inserted;
  }
  KeDisableQueueingPriorityIncrement(v18);
  inserted = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)WorkerProcessHandle,
               42,
               (__int64)PsProcessType,
               PreviousMode,
               0x66577845u,
               &v32,
               0LL,
               0LL);
  if ( inserted < 0 )
  {
LABEL_22:
    ObfDereferenceObject(*(PVOID *)(v16 + 8));
    goto LABEL_23;
  }
  v19 = v32;
  if ( KeGetCurrentThread()->ApcState.Process != v32 )
  {
    inserted = -1073741811;
    goto LABEL_21;
  }
  inserted = ObOpenObjectByPointer(v32, 0x200u, 0LL, 0x2Au, (POBJECT_TYPE)PsProcessType, 0, &Handle);
  if ( inserted < 0 )
  {
LABEL_21:
    ObfDereferenceObjectWithTag(v19, 0x66577845u);
    goto LABEL_22;
  }
  MiniCompletionPacket = IoAllocateMiniCompletionPacket(ExpWorkerFactoryCompletionPacketRoutine, v16);
  *(_QWORD *)(v16 + 16) = MiniCompletionPacket;
  if ( !MiniCompletionPacket )
  {
    inserted = -1073741801;
LABEL_26:
    ObCloseHandle(Handle, 0);
    goto LABEL_21;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExpWorkerFactoryObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               (__int64)Object,
               672,
               0,
               0,
               v33,
               0LL);
  if ( inserted < 0 )
  {
    v27 = *(_QWORD *)(v16 + 16);
    *(_QWORD *)(v27 + 56) = 0LL;
    IopFreeMiniCompletionPacket(v27);
    goto LABEL_26;
  }
  v21 = v33[0];
  *(_QWORD *)(v33[0] + 16LL) = v16;
  *(_QWORD *)(v21 + 112) = -10000000LL * ExpWorkerFactoryThreadIdleTimeoutInSeconds;
  *(_DWORD *)(v21 + 376) = 0;
  *(_DWORD *)(v21 + 380) = MaxThreadCount;
  *(_DWORD *)(v21 + 396) = 0;
  *(_QWORD *)(v21 + 384) = 0LL;
  v22 = 0x10000LL;
  if ( StackReserve )
    v22 = StackReserve;
  *(_QWORD *)(v21 + 56) = v22;
  memset_0((void *)(v21 + 120), 0, 0x100uLL);
  *(_QWORD *)(v21 + 408) = 0LL;
  v23 = 4096LL;
  if ( StackCommit )
    v23 = StackCommit;
  *(_QWORD *)(v21 + 64) = v23;
  *(_QWORD *)(v21 + 24) = StartRoutine;
  *(_QWORD *)(v21 + 32) = StartParameter;
  *(_QWORD *)(v21 + 400) = 0LL;
  *(_DWORD *)(v21 + 416) = 0;
  *(_QWORD *)(v21 + 40) = Handle;
  *(_QWORD *)(v21 + 48) = v19;
  *(_DWORD *)(v21 + 392) = 0;
  *(_DWORD *)(v21 + 664) = 0;
  *(_DWORD *)(v21 + 608) = 1;
  KeInitializeTimer2(v21 + 424, 0LL, 0LL, 8LL);
  ExpInitializeThreadHistory(v21);
  *(_QWORD *)(v21 + 104) = 0LL;
  PsReferenceSiloContext(v24);
  KeRegisterObjectNotification(v21 + 424, (__int64)&WheapConfigTableLock.SavedApcStateFill[40], v21 + 560);
  v33[0] = 0LL;
  v33[1] = -1LL;
  KeSetTimer2(v21 + 424, *(_QWORD *)(v21 + 112), -*(_QWORD *)(v21 + 112), (__int64)v33);
  inserted = ObInsertObjectEx((char *)v21, 0LL, DesiredAccess, 0, 0, 0LL, &v30);
  LODWORD(Handle) = inserted;
  if ( inserted >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(WorkerFactoryHandleReturn, (__int64)v30);
    else
      *WorkerFactoryHandleReturn = v30;
  }
  return inserted;
}
