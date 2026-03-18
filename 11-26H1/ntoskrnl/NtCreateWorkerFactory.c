/*
 * XREFs of NtCreateWorkerFactory @ 0x140A912F0
 * Callers:
 *     DifNtCreateWorkerFactoryWrapper @ 0x1406754D0 (DifNtCreateWorkerFactoryWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KeRegisterObjectNotification @ 0x1403DF824 (KeRegisterObjectNotification.c)
 *     KeInitializeTimer2 @ 0x140456ED0 (KeInitializeTimer2.c)
 *     ExpInitializeThreadHistory @ 0x1404C9D94 (ExpInitializeThreadHistory.c)
 *     KeDisableQueueingPriorityIncrement @ 0x1404CEE50 (KeDisableQueueingPriorityIncrement.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     IopFreeMiniCompletionPacket @ 0x140A7A600 (IopFreeMiniCompletionPacket.c)
 *     IoAllocateMiniCompletionPacket @ 0x140A916E0 (IoAllocateMiniCompletionPacket.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateWorkerFactory(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        void *a4,
        ULONG_PTR BugCheckParameter1,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  char PreviousMode; // r14
  __int64 Pool2; // rax
  __int64 v16; // rsi
  int inserted; // ebx
  volatile signed __int32 *v18; // rcx
  PVOID v19; // r12
  __int64 MiniCompletionPacket; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  void *v24; // rcx
  __int64 ULong64FromUser; // rax
  ULONG_PTR v27; // rcx
  PVOID *Object; // [rsp+20h] [rbp-88h]
  HANDLE Handle; // [rsp+58h] [rbp-50h] BYREF
  __int64 v30; // [rsp+68h] [rbp-40h] BYREF
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
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  Pool2 = ExAllocatePool2(0x41uLL);
  v16 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_WORD *)(Pool2 + 32) = 0;
  *(_BYTE *)(Pool2 + 34) = 0;
  v31 = 0LL;
  inserted = ObReferenceObjectByHandle(a4, 2u, IoCompletionObjectType, PreviousMode, &v31, 0LL);
  v18 = (volatile signed __int32 *)v31;
  *(_QWORD *)(v16 + 8) = v31;
  if ( inserted < 0 )
  {
LABEL_23:
    ExFreePoolWithTag((PVOID)v16, 0);
    return (unsigned int)inserted;
  }
  KeDisableQueueingPriorityIncrement(v18);
  inserted = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               42LL,
               PsProcessType,
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
               a3,
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
  *(_DWORD *)(v21 + 380) = a8;
  *(_DWORD *)(v21 + 396) = 0;
  *(_QWORD *)(v21 + 384) = 0LL;
  v22 = 0x10000LL;
  if ( a9 )
    v22 = a9;
  *(_QWORD *)(v21 + 56) = v22;
  memset_0((void *)(v21 + 120), 0, 0x100uLL);
  *(_QWORD *)(v21 + 408) = 0LL;
  v23 = 4096LL;
  if ( a10 )
    v23 = a10;
  *(_QWORD *)(v21 + 64) = v23;
  *(_QWORD *)(v21 + 24) = a6;
  *(_QWORD *)(v21 + 32) = a7;
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
  KeRegisterObjectNotification(v21 + 424, (__int64)&WheapConfigTableLock.Affinity, v21 + 560);
  v33[0] = 0LL;
  v33[1] = -1LL;
  KeSetTimer2(v21 + 424, *(_QWORD *)(v21 + 112), -*(_QWORD *)(v21 + 112), (__int64)v33);
  inserted = ObInsertObjectEx((char *)v21, 0LL, a2, 0, 0, 0LL, &v30);
  LODWORD(Handle) = inserted;
  if ( inserted >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(a1, v30);
    else
      *a1 = v30;
  }
  return (unsigned int)inserted;
}
