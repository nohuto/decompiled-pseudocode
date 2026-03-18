/*
 * XREFs of NtInitializeEnclave @ 0x140877100
 * Callers:
 *     DifNtInitializeEnclaveWrapper @ 0x140679E40 (DifNtInitializeEnclaveWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     MiInitializeEnclave @ 0x140AB757C (MiInitializeEnclave.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtInitializeEnclave(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        unsigned int *a5)
{
  ULONG_PTR v5; // r13
  ULONG_PTR v7; // rbx
  int v8; // r12d
  void *v9; // rdi
  char PreviousMode; // r15
  int ULongFromUser; // eax
  int v12; // ebx
  int CurrentProcessorColor; // eax
  void *PoolMm; // rax
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  PVOID v17; // r14
  int v19; // [rsp+48h] [rbp-B0h] BYREF
  ULONG_PTR v20; // [rsp+50h] [rbp-A8h]
  PVOID Object; // [rsp+58h] [rbp-A0h] BYREF
  PVOID P; // [rsp+60h] [rbp-98h]
  ULONG_PTR v23; // [rsp+68h] [rbp-90h]
  unsigned int *v24; // [rsp+70h] [rbp-88h]
  __int64 v25; // [rsp+78h] [rbp-80h]
  _BYTE v26[48]; // [rsp+80h] [rbp-78h] BYREF

  v5 = a4;
  v25 = a2;
  v7 = BugCheckParameter1;
  v20 = BugCheckParameter1;
  v23 = BugCheckParameter1;
  v24 = a5;
  memset(v26, 0, sizeof(v26));
  Object = 0LL;
  v8 = 0;
  v19 = 0;
  v9 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 && PreviousMode == 1 )
  {
    ULongFromUser = RtlReadULongFromUser(a5);
    RtlWriteULongToUser(a5, ULongFromUser);
  }
  if ( !(_DWORD)v5 )
    goto LABEL_13;
  if ( (unsigned int)v5 <= 0x1000 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (void *)ExAllocatePoolMm(256LL, v5, 1145400653, CurrentProcessorColor | 0x80000000);
    v9 = PoolMm;
    P = PoolMm;
    if ( !PoolMm )
    {
      v12 = -1073741670;
      goto LABEL_18;
    }
    if ( PreviousMode )
      RtlCopyFromUser(PoolMm, a3, v5);
    else
      RtlCopyVolatileMemory(PoolMm, a3, v5);
    v7 = v20;
LABEL_13:
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( v7 == -1LL )
    {
      Object = CurrentThread->ApcState.Process;
    }
    else
    {
      v12 = ObpReferenceObjectByHandleWithTag(v7, 0x6D566D4Du, (__int64)&Object, 0LL, 0LL);
      if ( v12 < 0 )
        goto LABEL_18;
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v26);
    }
    v12 = MiInitializeEnclave((_DWORD)Process, v25, (_DWORD)v9, v5, (__int64)&v19);
    v8 = v19;
    goto LABEL_18;
  }
  v12 = -1073741820;
LABEL_18:
  v17 = Object;
  if ( Object && v20 != -1LL )
  {
    KiUnstackDetachProcess((__int64)v26, 0);
    ObfDereferenceObjectWithTag(v17, 0x6D566D4Du);
  }
  if ( a5 )
  {
    if ( PreviousMode )
      RtlWriteULongToUser(a5, v8);
    else
      *a5 = v8;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v12;
}
